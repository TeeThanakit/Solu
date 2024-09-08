#!/bin/bash
# Script to find all 'docs' folders in subdirectories and rename .c files to .md

# Find all 'docs' directories in subdirectories, then find and rename .c files to .md
find . -type d -name 'docs' -exec sh -c '
for docs_dir; do
    find "$docs_dir" -type f -name "*.c" -exec sh -c '"'"'
    for file do
        mv "$file" "${file%.c}.md"
    done
    '"'"' sh {} +
done
' sh {} +
