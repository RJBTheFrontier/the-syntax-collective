
# Contributing to Student CodeKit

Thank you for your interest in contributing to Student CodeKit!

Student CodeKit is a collaborative, student-led project focused on competitive programming, algorithmic problem-solving, and reusable programming resources.

Whether you're submitting your first accepted solution, documenting an algorithm, improving an existing implementation, or contributing learning materials, your participation helps the project grow.

This document outlines the standards and workflow for contributing to the repository.

---

## Table of Contents

- [Before Contributing](#before-contributing)
- [Types of Contributions](#types-of-contributions)
- [Repository Organization](#repository-organization)
- [Submitting Problem Solutions](#submitting-problem-solutions)
- [Contributing to the Code Library](#contributing-to-the-code-library)
- [Code Standards](#code-standards)
- [Git and GitHub Workflow](#git-and-github-workflow)
- [Pull Request Guidelines](#pull-request-guidelines)
- [Code Review](#code-review)
- [Attribution and Academic Integrity](#attribution-and-academic-integrity)
- [Questions and Discussions](#questions-and-discussions)

---

## Before Contributing

Before submitting a contribution, please ensure that:

1. You have access to the repository or have forked it.
2. You understand the purpose of the section you're contributing to.
3. Your contribution follows the relevant documentation and naming conventions.
4. You have tested your code whenever applicable.
5. You are prepared to explain the reasoning behind your implementation.

Contributors are encouraged to discuss substantial changes with other members before implementation.

---

## Types of Contributions

Student CodeKit accepts the following contributions:

### 1. Problem Solutions

Solutions to competitive programming problems from platforms such as:

- Codeforces
- AtCoder
- Other programming contest platforms

### 2. Algorithms

Reusable implementations and explanations of algorithmic techniques, including:

- Binary Search
- Sorting
- Two Pointers
- Prefix Sums
- Graph Traversal
- Dynamic Programming
- Greedy Algorithms

### 3. Data Structures

Implementations and references for data structures such as:

- Stacks
- Queues
- Heaps
- Hash Tables
- Trees
- Graphs
- Disjoint Set Union

### 4. Programming Templates

Reusable starting points for competitive programming in supported languages.

### 5. Documentation and Learning Resources

Explanations, references, corrections, and other educational materials relevant to competitive programming.

---

## Repository Organization

Contributions should be placed in the appropriate directory.

```text
student-codekit/
│
├── solutions/
│   ├── codeforces/
│   ├── atcoder/
│   └── other/
│
├── library/
│   ├── templates/
│   ├── algorithms/
│   └── data-structures/
│
└── resources/
```

Avoid placing unrelated files in the repository root.

If a contribution requires a new directory, follow the existing organizational conventions. Discuss significant structural changes with the maintainers.

---

## Submitting Problem Solutions

Each problem solution should have its own directory.

### Naming Convention

Use the following format:

```text
<problem-id>-<problem-name>/
```

Use lowercase letters and hyphens for readability.

Example:

```text
266b-queue-at-the-school/
```

### Recommended File Structure

```text
266b-queue-at-the-school/
├── README.md
└── solution.py
```

For C++ submissions:

```text
266b-queue-at-the-school/
├── README.md
└── solution.cpp
```

### Solution Documentation

Each solution's README should ideally contain:

```markdown
# Problem ID - Problem Name

**Platform:**  
**Problem Link:**  
**Author:**  
**Language:**  
**Difficulty:**  

## Approach

Explain the reasoning behind the solution.

## Complexity Analysis

- Time Complexity:
- Space Complexity:

## Notes

Optional observations, edge cases, or alternative approaches.
```

### Solution Requirements

- The implementation must be original or properly attributed.
- The solution should produce the expected output for valid inputs.
- The code should follow the platform's input/output requirements.
- The author must understand and be able to explain the implementation.
- Include the original problem link.

Multiple solutions to the same problem are welcome when they demonstrate meaningfully different approaches, languages, or techniques.

---

## Contributing to the Code Library

The `library/` directory contains reusable implementations rather than individual contest submissions.

Each library entry should be organized by concept.

Example:

```text
library/
└── algorithms/
    └── binary-search/
        ├── README.md
        └── implementation.py
```

Library documentation should include:

- Description of the algorithm or data structure.
- Explanation of how it works.
- Typical use cases.
- Time and space complexity.
- Implementation.
- Example usage.
- Important limitations or edge cases.

Prioritize clarity and correctness over unnecessary optimization.

---

## Code Standards

All contributions should aim to be readable, consistent, and maintainable.

### General Guidelines

- Use descriptive variable and function names.
- Follow the conventions of the programming language.
- Avoid unnecessary complexity.
- Remove unused code and debugging statements.
- Include comments when they clarify non-obvious logic.
- Handle relevant edge cases.
- Test implementations before submission.

### Python

- Follow standard Python naming conventions.
- Use `snake_case` for functions and variables.
- Use meaningful names instead of unexplained abbreviations.
- Avoid unnecessary dependencies.

### C++

- Use consistent indentation and formatting.
- Prefer descriptive identifiers.
- Avoid unnecessary dependencies.
- Follow modern C++ practices where appropriate.

These guidelines are intended to promote readability, not enforce a single programming style on every contributor.

---

## Git and GitHub Workflow

Contributors with direct repository access should generally follow this workflow.

### 1. Synchronize Your Local Repository

```bash
git switch main
git pull origin main
```

### 2. Create a Branch

Use descriptive branch names.

```bash
git switch -c solutions/codeforces-266b
```

Other examples:

```text
library/binary-search
templates/python
docs/update-contributing
```

### 3. Make Your Changes

Add your solution, implementation, or documentation.

Ensure that your files follow the repository conventions.

### 4. Stage and Commit

```bash
git add .
git commit -m "Add Codeforces 266B solution"
```

Write concise commit messages that describe the changes.

### 5. Push Your Branch

```bash
git push -u origin solutions/codeforces-266b
```

### 6. Open a Pull Request

Create a pull request targeting the `main` branch.

Provide a short description of your changes and any relevant context.

For contributors without direct access, fork the repository and submit a pull request from your fork instead.

---

## Pull Request Guidelines

Before submitting a pull request, verify that:

- [ ] The contribution belongs in the appropriate directory.
- [ ] File and directory names follow the conventions.
- [ ] Code has been tested where applicable.
- [ ] Documentation is included where appropriate.
- [ ] Original sources and adapted material are properly attributed.
- [ ] No unrelated files or changes are included.

Pull requests should have clear titles and descriptions.

Examples:

- `Add Codeforces 266B solution (Python)`
- `Implement binary search template`
- `Document prefix sum technique`
- `Fix complexity analysis in heap implementation`

Keep pull requests focused. Separate unrelated changes into different contributions whenever practical.

---

## Code Review

Pull requests may be reviewed by other contributors before being merged.

Reviews should focus on:

- Correctness.
- Readability.
- Efficiency.
- Documentation.
- Consistency with repository conventions.

Feedback should be constructive and respectful.

Contributors are encouraged to ask questions, suggest alternatives, and learn from one another.

A review is an opportunity to improve the code and deepen everyone's understanding—not simply to approve or reject a submission.

---

## Attribution and Academic Integrity

Student CodeKit is a learning-oriented repository.

Contributors must:

1. Submit their own implementations or clearly identify adapted work.
2. Credit the original authors of externally sourced code.
3. Include references to relevant problem statements and learning materials.
4. Respect the licenses and usage conditions of external resources.
5. Follow the academic integrity rules of their respective schools and competitions.

Do not submit code copied from another contributor or external source while claiming it as your own.

Studying other implementations is encouraged. Misrepresenting authorship is not.

---

## Questions and Discussions

If you are uncertain about repository organization, contribution standards, or implementation details, reach out to the project maintainers or discuss the matter with other contributors.

Suggestions for improving the repository are always welcome.

---

**Thank you for helping build Student CodeKit.**

*Learn together. Solve together. Build together.*
