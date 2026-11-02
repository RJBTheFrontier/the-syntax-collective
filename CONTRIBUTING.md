
# Contributing to Precomputation Lab

Welcome to Precomputation Lab!

This repository is a collaborative effort to help student programmers learn, practice, and improve their competitive programming skills.

Whether you're contributing a problem solution, implementing an algorithm, improving documentation, or sharing a useful resource, your contributions are appreciated.

This document explains how we organize the repository and how you can contribute.

## 1. Before Contributing

Before submitting a contribution:

- Check whether the content already exists.
- Make sure your contribution is relevant to competitive programming.
- Test your code whenever possible.
- Follow the existing directory structure and naming conventions.
- Give proper credit when adapting or referencing someone else's work.

You do not need to be an expert to contribute. Learning and improving are part of the project's purpose.

## 2. Types of Contributions

### Problem Solutions

You may contribute solutions to problems from platforms such as:

- Codeforces
- AtCoder
- Other competitive programming platforms

Each solution should be organized in its own problem directory.

Example:

```text
solutions/
└── codeforces/
    └── 266b-queue-at-the-school/
        ├── solution.py
        └── README.md
```

The problem directory should contain:

- The source code.
- A README explaining the solution.

A solution README should ideally include:

| Field | Description |
|---|---|
| Problem | Problem title |
| Platform | Where the problem was published |
| Problem Link | URL to the original problem |
| Author | Contributor's name or GitHub username |
| Language | Programming language used |
| Difficulty | Platform difficulty, if available |
| Approach | Explanation of the solution |
| Complexity | Time and space complexity |
| Notes | Additional observations, if relevant |

### Algorithms

Contributions may include implementations of algorithms such as:

- Sorting and searching
- Binary search
- Prefix sums
- Two pointers
- Greedy algorithms
- Graph traversal
- Dynamic programming
- Number theory

Whenever possible, include a brief explanation of the algorithm and its complexity.

### Data Structures

Examples include:

- Stacks and queues
- Linked lists
- Hash tables
- Heaps
- Trees
- Disjoint Set Union
- Segment trees
- Fenwick trees

Implementations should be reusable and reasonably well documented.

### Templates

Useful programming templates are welcome.

Examples include:

- Fast input/output
- Common utility functions
- Graph representation
- Mathematical utilities
- Language-specific starter templates

### Learning Resources

You may also contribute useful references, tutorials, practice recommendations, and other educational materials.

Make sure external resources are properly attributed.

## 3. Repository Organization

Please place contributions in the appropriate directory.

```text
solutions/
    codeforces/
    atcoder/
    other/

library/
    templates/
        python/
        cpp/
    algorithms/
    data-structures/

resources/
```

If you believe a new directory is necessary, discuss it with the maintainers before introducing major structural changes.

## 4. Code Standards

We value code that is readable, understandable, and maintainable.

### General Guidelines

- Use meaningful variable and function names.
- Keep indentation consistent.
- Avoid unnecessary complexity.
- Add comments when they improve understanding.
- Do not include unrelated code.
- Ensure submitted code is tested whenever possible.

### Python

- Follow conventional Python naming practices.
- Use four spaces for indentation.
- Prefer readable implementations over unnecessarily compressed code.
- Use descriptive function and variable names.

### C++

- Use consistent indentation.
- Include only necessary headers when practical.
- Use appropriate data types.
- Avoid unnecessary global variables.
- Keep implementations understandable and reusable.

These guidelines are recommendations for consistency, not restrictions on learning or experimentation.

## 5. Git Workflow

For contributors with repository access, we recommend using branches for contributions.

### Step 1: Update your local repository

```bash
git switch main
git pull origin main
```

### Step 2: Create a branch

Use a descriptive branch name.

```bash
git switch -c add-codeforces-solution
```

### Step 3: Make your changes

Add your solution, implementation, resource, or documentation.

### Step 4: Stage and commit

```bash
git add .
git commit -m "Add Codeforces solution"
```

Write commit messages that briefly describe what changed.

### Step 5: Push your branch

```bash
git push -u origin add-codeforces-solution
```

### Step 6: Open a Pull Request

Create a Pull Request on GitHub targeting the `main` branch.

Describe what you contributed and provide any relevant explanations or links.

Contributors without direct repository access may fork the repository and submit a Pull Request from their fork.

## 6. Pull Request Guidelines

Before submitting a Pull Request, check that:

- [ ] Your contribution belongs in the appropriate directory.
- [ ] Your code has been tested whenever possible.
- [ ] Your documentation is clear and accurate.
- [ ] Your changes do not unnecessarily duplicate existing content.
- [ ] Proper attribution has been provided.
- [ ] Your commit messages describe your changes.

Pull Requests may be reviewed by other contributors or maintainers before being merged.

Constructive feedback is encouraged. Code reviews are opportunities to learn, not competitions.

## 7. Academic Integrity and Attribution

Precomputation Lab is intended to support learning.

Contributors should:

- Submit work they understand.
- Give credit to original authors when adapting implementations.
- Reference external resources when appropriate.
- Avoid presenting another person's work as their own.

Studying other solutions is encouraged. Understanding the reasoning behind them is even better.

## 8. Questions and Suggestions

Have an idea for the repository? Found a problem? Want to suggest a new feature or directory?

Feel free to open a GitHub Issue or discuss it with the maintainers.

We welcome constructive suggestions from everyone.

---

**Learn together. Solve together. Build together.**
