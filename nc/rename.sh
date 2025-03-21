#!/bin/bash

for file in *.py; do
    # Extract the second line (problem name)
    problem_name=$(sed -n '2p' "$file" | tr -d '[:cntrl:]')

    # Remove any problematic characters from the filename
    safe_name=$(echo "$problem_name" | tr -d '[:punct:]' | tr ' ' '_')

    # Rename the file if the problem name was found
    if [[ -n "$safe_name" ]]; then
        mv "$file" "${safe_name}.py"
        echo "Renamed '$file' to '${safe_name}.py'"
    else
        echo "Skipping '$file' (No problem name found)"
    fi
done
