#!/bin/bash

if [ -z "$1" ]; then
    echo "❌ Usage: ./scripts/run.sh <problem-folder-name>"
    echo "Example: ./scripts/run.sh 0001-two-sum"
    exit 1
fi

# Search in easy/, medium/, and hard/
for difficulty in easy medium hard; do
    PROBLEM_DIR="$difficulty/$1"
    if [ -d "$PROBLEM_DIR" ]; then
        cd "$PROBLEM_DIR" || exit
        make run
        exit 0
    fi
done

echo "❌ Problem folder '$1' not found in easy/, medium/, or hard/"
exit 1
