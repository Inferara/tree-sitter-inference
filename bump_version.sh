#!/bin/bash

# Function to increment version
increment_version() {
  local version=$1
  IFS='.' read -r major minor patch <<< "$version"
  patch=$((patch + 1))
  if [ $patch -ge 100 ]; then
    patch=0
    minor=$((minor + 1))
    if [ $minor -ge 50 ]; then
      minor=0
      major=$((major + 1))
    fi
  fi
  echo "$major.$minor.$patch"
}

# Function to update version in a file
update_version_in_file() {
  local file=$1
  local regex=$2
  local temp_file="${file}.tmp"

  while IFS= read -r line; do
    if echo "$line" | grep -qE "$regex"; then
      current_version=$(echo "$line" | grep -oE "$regex" | grep -oE "[0-9]+\.[0-9]+\.[0-9]+")
      new_version=$(increment_version "$current_version")
      line=$(echo "$line" | sed -E "s/$current_version/$new_version/")
      echo "Updated version in $file from $current_version to $new_version"
    fi
    echo "$line" >> "$temp_file"
  done < "$file"

  mv "$temp_file" "$file"
}

# Define the files and their respective regex patterns to find the version number
files_to_update=(
  "Cargo.toml:version\\s*=\\s*\"([0-9]+\\.[0-9]+\\.[0-9]+)\""
  "Makefile:^VERSION\\s*:=\\s*([0-9]+\\.[0-9]+\\.[0-9]+)"
  "pyproject.toml:version\\s*=\\s*\"([0-9]+\\.[0-9]+\\.[0-9]+)\""
  "package.json:\"version\":\\s*\"([0-9]+\\.[0-9]+\\.[0-9]+)\""
)

# Update the version in each file
for entry in "${files_to_update[@]}"; do
  file=$(echo "$entry" | cut -d':' -f1)
  regex=$(echo "$entry" | cut -d':' -f2-)
  update_version_in_file "$file" "$regex"
done
