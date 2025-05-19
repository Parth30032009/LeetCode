#!/bin/bash

if [ $# -lt 3 ]; then
    echo "❌ Usage: ./scripts/new.sh <difficulty> <id-name> \"Title of Problem\""
    echo "Example: ./scripts/new.sh easy 0002-add-two-numbers \"Add Two Numbers\""
    exit 1
fi

DIFFICULTY=$1
FOLDER=$2
TITLE=$3

TARGET_DIR="$DIFFICULTY/$FOLDER"

# Check if folder exists
if [ -d "$TARGET_DIR" ]; then
    echo "❌ Folder '$TARGET_DIR' already exists."
    exit 1
fi

mkdir -p "$TARGET_DIR"

# Create solution.c
cat <<EOF > "$TARGET_DIR/solution.c"
// $TITLE
// Source: https://leetcode.com/problems/${FOLDER#*-}/

#include <stdio.h>

// Your solution here
EOF

# Create test.c
cat <<EOF > "$TARGET_DIR/test.c"
#include <stdio.h>
#include "solution.c"

int main() {
    // Write your test cases here
    printf("Running tests for: $TITLE\\n");
    return 0;
}
EOF

# Create Makefile
cat <<EOF > "$TARGET_DIR/Makefile"
CC = gcc
CFLAGS = -Wall

all: test

test: test.c solution.c
	\$(CC) \$(CFLAGS) test.c ../../utils/timer.c -o test

run: test
	./test

clean:
	rm -f test
EOF

# Create README.md
cat <<EOF > "$TARGET_DIR/README.md"
# $TITLE

- Difficulty: \`$DIFFICULTY\`
- Folder: \`$FOLDER\`
- Source: [LeetCode](https://leetcode.com/problems/${FOLDER#*-}/)

## Files

- \`solution.c\`: Your solution
- \`test.c\`: Your test code
- \`Makefile\`: To compile and run
EOF

echo "✅ Created folder: $TARGET_DIR"
