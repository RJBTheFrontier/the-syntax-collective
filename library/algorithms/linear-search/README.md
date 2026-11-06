# Linear Search

**Algorithm Documentation**

## Purpose

A linear search (also known as a sequential search) is the simplest searching algorithm that checks every element in a list or array one by one from the beginning until it finds a match or reaches the end of the data.

## Prerequisites

Linear search has no special data prerequisites and requires no sorting or preprocessing before execution.

### Key Requirements

- **A searchable collection:** A data structure that allows sequential access or traversal (such as an array, list, or linked list).
- **A target value:** The specific item or key you want to find.
- **An equality comparison operator:** A way to compare each element in the collection to the target value (e.g., ==).

### How It Works (in Psuedocode)

Linear search (also known as sequential search) works by checking every element in a data structure one by one from start to finish until it finds the target value or reaches the end. It is the most basic, straightforward searching algorithm and requires no advanced setup or data preprocessing.

### Step-by-Step Mechanism

The underlying logic of a linear search can be broken down into a simple, repetitive loop:
- Start at the beginning: The algorithm points to the very first item (index 0) in the collection.
- Compare the values: It checks if the current item matches your target value.
- Found condition: If the item matches, the search successfully ends and returns the item's position or index.
- Move forward: If it does not match, the algorithm increments its position to the next item.
- Not found condition: The loop repeats until a match is found. If it runs through the entire collection and reaches the end without a match, it stops and returns a failure indicator (typically -1 or null).

```text
FUNCTION linearSearchWithFlag(list, target)
    found = FALSE
    counter = 0
    listLength = length of list
    
    WHILE found == FALSE AND counter < listLength DO
        IF list[counter] == target THEN
            found = TRUE
        ELSE
            counter = counter + 1
        ENDIF
    ENDWHILE
    
    IF found == TRUE THEN
        OUTPUT "Item found at position: ", counter
    ELSE
        OUTPUT "Item not found"
    ENDIF
ENDFUNCTION
```

## Complexity Analysis of Linear Search

**Linear Search** operates by scanning elements sequentially from left to right until the target element is found or the array ends. Its efficiency is analyzed using **Big O notation**, evaluating the execution time relative to the number of elements (N) in the input dataset.

---

### Complexity Analysis Summary

| Case | Time Complexity | Scenario Description |
| :--- | :--- | :--- |
| **Best Case** | $\mathcal{O}(1)$ | The target element is located at the very first position of the array. |
| **Worst Case** | $\mathcal{O}(N)$ | The target element is at the final index or does not exist in the array. |
| **Average Case** | $\mathcal{O}(N)$ | The target element is found somewhere near the middle ($\frac{N}{2}$ comparisons). |
| **Space Complexity** | $\mathcal{O}(1)$ | Operates in-place, requiring a fixed, minimal amount of extra memory. |

---

### Detailed Breakdown

#### 1. Time Complexity

* **Best Case: $\mathcal{O}(1)$ (Constant Time)**  
  When the target item is at the start of the list, the algorithm terminates immediately after a single comparison. Execution time remains unchanged regardless of how large the array grows.
* **Worst Case: $\mathcal{O}(N)$ (Linear Time)**  
  If the target is missing or sitting at the end of the collection, the algorithm must evaluate all N elements. The processing time scales in a direct, 1-to-1 linear proportion with the size of the dataset.
* **Average Case: $\mathcal{O}(N)$ (Linear Time)**  
  Statistically, an item in a randomly ordered list will be found in the middle, taking roughly $\frac{N}{2}$ iterations. In asymptotic Big O analysis, constant factors like coefficients are dropped ($\frac{1}{2} \cdot N \rightarrow N$), grouping average performance into the linear $\mathcal{O}(N)$ classification.

#### 2. Space Complexity: $\mathcal{O}(1)$ (Constant Space)

Linear search is an **in-place algorithm**. It only uses a fixed set of tracking variables (such as an index loop pointer) to read through the memory. The algorithm does not clone data structures or spin up dynamic allocations, meaning its structural memory footprint stays constant no matter the input volume.

## Edge Cases in Linear Search

When implementing or evaluating a **Linear Search**, certain critical edge cases must be handled safely to ensure code stability, prevent runtime exceptions, and optimize boundary execution.

---

### Core Edge Cases & Scenarios

| Edge Case | Description | Expected Outcome / Mitigation |
| :--- | :--- | :--- |
| **Empty Array / Collection** | The input structure contains no elements (`N = 0`). | Return target not found (`-1` or `None`) immediately without entering the loop. |
| **Single-Element Collection** | The collection size is exactly one (`N = 1`). | Loop runs exactly once. Resolves immediately as a best-case or worst-case scenario. |
| **Target at First Position** | The target sits at index `0`. | Best-case scenario \(\mathcal{O}(1)\). Terminates instantly. |
| **Target at Last Position** | The target sits at index `N-1`. | Worst-case scenario \(\mathcal{O}(N)\). Requires scanning the entire collection. |
| **Target is Missing** | The item does not exist in the collection. | Worst-case scenario \(\mathcal{O}(N)\). Must evaluate every item to safely confirm absence. |
| **Duplicate Target Elements** | Multiple instances of the target value exist. | **First-match strategy:** Returns the lowest index. <br>**All-matches strategy:** Modifies output to a list of indexes. |
| **Null/None Collection Input** | The input collection pointer evaluates to null. | Throws a null pointer exception if unhandled. Requires an upfront input validation guard. |
| **Data Type Mismatches** | Elements exist but have conflicting types (e.g., searching for `"5"` in `[5, 10]`). | Structural type errors or strict equality evaluation failures. Requires type casting or strict `===` verification. |

---

### Key Code Implementations for Robustness

#### 1. Input Validation Guard
Always verify the validity of the structure before executing pointer operations. This prevents illegal memory access or null reference crashes.
```python
if array is None:
    return -1  # Guard against null reference error
```

#### 2. Duplicate Strategy Resolution
Define the precise behavior required when encountering duplicate items within the dataset:

*   **First Occurrence (Standard Return):**
    ```python
    for i in range(len(array)):
        if array[i] == target:
            return i  # Exits early at the very first match
    ```
*   **All Occurrences (Tracking Return):**
    ```python
    matches = []
    for i in range(len(array)):
        if array[i] == target:
            matches.append(i)  # Collects every index, eliminating early exit optimization
    return matches if matches else -1
    ```
