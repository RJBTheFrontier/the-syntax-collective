# Contributing to The Syntax Collective

Welcome to the repo! 

This space is literally just for us to hang out, practice competitive programming, and build a shared vault of solutions and code templates so we can all get better together. 

You don't need to be an absolute genius to push code here. Making mistakes, getting TLEs, and asking each other for help is exactly why we set this up. Here is how we keep the repo from turning into absolute chaos.

## 1. Before You Push Anything

Just a few quick sanity checks before you make a commit:
- **Check if it's already there:** Don't double-post a solution someone else in the group already pushed unless your approach is completely different (e.g., swapping a brute-force approach for a dynamic programming one).
- **Test your code:** Make sure it actually compiles, runs, and passes the sample test cases before pushing it to the shared space. 
- **Give credit:** If you copy-pasted a genius template or logic from a Codeforces blog or an editorial, just drop a quick link to it so the rest of us can read it and learn too.

## 2. What We're Collecting

### Problem Solutions
Drop your accepted solutions from Codeforces, AtCoder, or anywhere else we're grinding. Keep things neat by giving each problem its own folder.

Example:
```text
solutions/
└── codeforces/
    └── 266b-queue-at-the-school/
        ├── solution.py
        └── README.md
```

Inside that folder, dump your code and write a quick, casual `README.md` to explain how you cracked it. It doesn't need to be an essay—just cover the basics:
- What's the problem name and the link to it?
- Who wrote the solution?
- What was the core idea/approach? (e.g., "Two-pointers, greedily picking the smallest element")
- Time and Space complexity (O(N), O(1), etc.)

### Algorithms & Data Structures
If you implement a standard algorithm or data structure from scratch, drop it into the `library/` folder so the rest of the squad can reuse it later.
- **Algos:** Binary search, graph traversals, DP, math utilities, prefix sums, etc.
- **Data Structures:** Segment trees, Fenwick trees, DSU, heaps, or whatever else we're learning.
- *Tip: Drop a quick comment at the top explaining how to call it.*

### Templates
Got a fast I/O setup, boilerplate setup, or standard debugging macros you swear by? Put it in `library/templates/` so we can all steal it.

### Learning Resources
Found an incredible YouTube channel, an easy-to-understand article, or a curated problem list? Throw the link or Markdown file into the `resources/` folder.

## 3. Folder Layout

Stick to the plan so no one gets lost looking for files:

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

If you think we need a new root folder, just pitch it to the group chat before making it.

## 4. Code Quirks & Cleanliness

We aren't a big tech company, so we don't have a rigid style guide. However, please write code that someone else in the group can actually read without getting a headache.

- **Don't code like a robot:** Use variables that make sense. `nodes_count` is infinitely better than `xyz123`.
- **Comment the weird parts:** If you wrote a crazy bitwise hack or a highly optimized math trick, leave a one-line comment explaining *why* it works.
- **Python:** Stick to 4-space indentation and prioritize readability over trying to squeeze the entire solution into a single line of unreadable list comprehension.
- **C++:** Keep your macros clean, avoid global variable spam where you can, and make sure your templates are easy for the rest of us to plug into our own files.

## 5. The Git Workflow (How to not break things)

Since we're all working out of the same repo, let's use branches so we don't accidentally override each other's work or cause massive merge conflicts.

### Step 1: Snag the latest changes
Before you start working, make sure your local copy has everyone else's latest code.
```bash
git switch main
git pull origin main
```

### Step 2: Make your own playground branch
Give it a short, descriptive name.
```bash
git switch -c add-my-codeforces-sol
```

### Step 3: Write code & test it
Do your thing. Add your solutions, tweak templates, or fix typos.

### Step 4: Commit your stuff
Stage your changes and write a normal commit message. No need to be overly corporate, just say what you did.
```bash
git add .
git commit -m "Added solution for CF 266B"
```
*(Avoid lazy commit messages like "updates" or "fix". Just type 5 words describing the change.)*

### Step 5: Push it up
```bash
git push -u origin add-my-codeforces-sol
```

### Step 6: Open a Pull Request (PR)
Go to GitHub and open a Pull Request to merge your branch into `main`. Tag someone in the group to take a look, approve it, and merge it in.

## 6. Code Reviews are for Learning

When someone opens a PR, take a look at their code! Don't look at it as a competition or a way to critique someone. 
- If you see a cleaner way to write a loop, suggest it.
- If you don't understand how their math works, ask them to explain it.
- If their code looks clean and elegant, hype them up.

## 7. Keep It Honest

We're all here to improve our actual skills. Don't push solutions you don't actually understand just to pad your contribution graph. If you looked up a tutorial or an editorial to get unstuck (which we all do!), make sure you study the logic until you can explain it to the rest of us. 

---

**Learn together. Solve together. Build together.**
