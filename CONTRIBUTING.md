
<div align="center">

<h1>CONTRIBUTING.md</h1>

<p><strong>So, you want to add something to the collective?</strong></p>

<p><em>Pull up a chair. There's room for one more.</em></p>

</div>

---

the team! 🖥️

| Codeforces Handle | AtCoder Handle | Contact | Name |
| ----------------- | -------------- | ------- | ---- |
| atomicLogic | atomicLogic | rjbalala.thefrontier@gmail.com | Ram Jhydell Balala |
| roshaun | N/A | roshaunangelia4@gmail.com | Roshaun Matteo Angelia |

## <code>00</code> — welcome to the workspace! 👋

Hey, welcome in!

The Syntax Collective is our little corner of the internet where a group of friends hang out, practice competitive programming, exchange ideas, and build a shared collection of code and discoveries.

You don't need to be an expert to contribute. Seriously.

Making mistakes, getting TLEs, asking questions, and figuring things out together are all part of the process. That's exactly why this project exists.

This guide is just here to keep our shared workspace organized while leaving plenty of room to experiment.

---

## <code>01</code> — before you upload anything 📋

A few quick checks before sending your work into the collective:

- **Check the shelves first.** See if someone has already contributed the same solution or implementation. Different approaches are absolutely welcome, though!
- **Give your code a test run.** Make sure it compiles or runs correctly and passes the available sample cases.
- **Credit your sources.** If you learned something from an editorial, tutorial, article, or someone else's implementation, include a link. Sharing where we learned something helps everyone.
- **Keep it understandable.** Someone else should be able to read your contribution and figure out what it does.

No complicated paperwork. Just a little consideration for everyone sharing the space.

---

## <code>02</code> — what can you contribute? 🗂️

Quite a lot, actually.

### 🔎 Problem solutions

Solved something interesting on Codeforces, AtCoder, or another platform? Add it!

Give every problem its own folder.

**Example structure:**

```text
solutions/
└── codeforces/
    └── 266b-queue-at-the-school/
        ├── solution.py
        └── README.md
```

Include a short `README.md` explaining:

- **Problem:** Name, platform, and problem link.
- **Author:** Who wrote the solution.
- **Approach:** The main idea behind the solution.
- **Complexity:** Time and space complexity, where applicable.

It doesn't need to be an essay. A clear explanation is more useful than a wall of text.

### ⚙️ Algorithms & data structures

Built something from scratch or finally understood an algorithm you've been studying?

Add it to the appropriate `library/` directory.

Some examples:

- **Algorithms:** Binary search, graph traversal, dynamic programming, prefix sums, and mathematical utilities.
- **Data structures:** Segment trees, Fenwick trees, disjoint set union, heaps, and more.

Whenever possible, include a short explanation and a comment showing how to use the implementation.

### 🧰 Templates

Have a useful fast I/O setup, debugging helper, or reusable code template?

Drop it into `library/templates/`.

Keep things practical. We want reusable tools, not an endless collection of boilerplate.

### 📚 Learning resources

Found a particularly helpful article, YouTube channel, tutorial, or problem collection?

Share it in `resources/`!

If you can, add a sentence explaining what makes the resource useful.

---

## <code>03</code> — keep the shelves organized 🗃️

Here's the directory layout we're working with:

```text
the-syntax-collective/
│
├── solutions/
│   ├── codeforces/
│   ├── atcoder/
│   └── other/
│
├── library/
│   ├── templates/
│   │   ├── python/
│   │   └── cpp/
│   ├── algorithms/
│   └── data-structures/
│
├── resources/
│
├── README.md
├── CONTRIBUTING.md
└── LICENSE
```

Try to place new files where they naturally belong.

Have an idea for a new top-level directory? Bring it up with the group before adding it. We're building this together, after all.

---

## <code>04</code> — code etiquette 💻

We're a group of students, not a software corporation. There's no need for an intimidating style guide.

Still, a little consistency makes everyone's life easier.

**General**
- Use descriptive variable and function names.
- Comment on unusual or complicated logic.
- Avoid unnecessary complexity.
- Write code that another person can reasonably understand.

**Python**
- Use 4-space indentation.
- Prefer readable code over unnecessarily compressed expressions.
- Keep reusable implementations separate from problem-specific input/output.

**C++**
- Keep macros reasonable and understandable.
- Avoid unnecessary global variables.
- Include the headers your reusable code actually needs.
- Use C++17 for our standard implementations unless a contribution specifies otherwise.

The goal isn't to make everyone's code look identical. It's to make it easier for us to learn from one another.

---

## <code>05</code> — the Git workflow 🔧

Since multiple people are working in the same repository, let's use branches and pull requests to keep everything organized.

### 01. Sync your local copy

Start by getting the latest changes from `main`.

```bash
git switch main
git pull origin main
```

### 02. Create your own branch

Give it a short, descriptive name.

```bash
git switch -c add-my-codeforces-sol
```

### 03. Make your contribution

Write your code, test it, update documentation, and make sure everything is where it belongs.

### 04. Commit your changes

Stage your work and write a meaningful commit message.

```bash
git add .
git commit -m "Add solution for CF 266B"
```

Avoid messages like `updates` or `fix`. A few descriptive words go a long way.

### 05. Push your branch

```bash
git push -u origin add-my-codeforces-sol
```

### 06. Open a Pull Request

Head over to GitHub and open a Pull Request targeting `main`.

Give it a descriptive title, explain what you changed, and tag a fellow contributor for review.

Once everything looks good, the changes can be merged!

---

## <code>06</code> — reviews are for learning, not judging 🤝

Pull Requests aren't competitions.

They're opportunities to learn from one another.

- Found a cleaner way to write something? Suggest it.
- Don't understand someone's approach? Ask them about it.
- Spotted a bug? Explain what might be going wrong.
- Saw a particularly clever implementation? Give it some appreciation!

Be constructive, be respectful, and remember that everyone is still learning.

A good review should leave both people knowing a little more than before.

---

## <code>07</code> — keep it honest 🧠

This one's important.

We're here to improve our actual problem-solving skills, not just make our contribution graphs look impressive.

Don't submit code you don't understand simply to add another commit.

Looked at an editorial? Used a tutorial? Asked someone for help?

That's completely fine! We all learn from other people.

Just make sure you understand the reasoning behind your contribution and acknowledge the sources that helped you.

An accepted solution is nice. Understanding why it works is even better.

---

## <code>08</code> — one last thing ✨

There isn't a minimum skill level for belonging here.

You can contribute a complete algorithm implementation, a tiny typo correction, a useful resource, or a thoughtful code review.

Every bit of effort helps.

This is our shared workspace. Let's keep it welcoming, organized, and full of things worth learning.

<div align="center">

---

**Learn together. Solve together. Build together.**

`while (learning) { keep_building(); }`

**THE SYNTAX COLLECTIVE · EST. 2026**

</div>