# LeetCode Solutions in C

This repository contains C solutions for LeetCode problems organized by difficulty.

---

## 📁 Folder Structure

```
📦 leetcode
 ┣━━ 📂 easy     ── Easy problems
 ┣━━ 📂 medium   ── Medium problems
 ┣━━ 📂 hard     ── Hard problems
 ┣━━ 📂 utils    ── Common utilities
 ┗━━ 📂 scripts  ── Helper scripts
```

Each problem directory contains:
- `solution.c` - Implementation of the solution
- `test.c` - Test cases and validation
- `Makefile` - Build configuration
- `README.md` - Problem description and approach

---

## 🆕 How to Add a New Problem

Use the script:

```bash
./scripts/new.sh <difficulty> <problem-folder-name> "Problem Title"
```
Example: `./scripts/new.sh easy 0001-two-sum "Two Sum"`

## 🧪 How to Run Tests

Run tests for a problem like this:

```bash
./scripts/run.sh <problem-folder-name>
```
Example: `./scripts/run.sh 0001-two-sum`

It works for problems in easy/, medium/, or hard/

## 📝 Notes

Each problem folder contains:
- `solution.c` — your solution code
- `test.c` — test code
- `Makefile` — to build and run tests
- `README.md` — problem details

Utility code like timers is in `utils/`

---

## 🤝 Contributing
Contributions are welcome! Here's how you can help:

Feel free to contribute by adding new solutions or improving existing ones! Just follow the code style and include test cases.

---

*Happy Coding! 🚀*

