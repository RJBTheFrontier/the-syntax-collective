# Binary Search

**Algorithm Documentation**

## 1. Purpose

The primary purpose of binary search is to find the position of a target value within a sorted array as efficiently as possible.
Instead of checking every single item one by one, binary search dramatically cuts down search time by using a "divide and conquer" strategy.

## 2. Prerequisites

- **Sorted Collection:** The elements in the data structure **must** be sorted in a consistent order (either ascending or descending) before the search begins.
- **Random Access:** The data structure **must** allow fast, direct access to any element by its index (Constant time, or O(1) complexity).

## 3. How it Works (in Pseudocode)

1. Find the middle: Look at the middle element of the sorted array.
2. Compare: Match the middle element against your target value.
3. Eliminate half:
	• If the middle element equals the target, you are done.
	• If the target is smaller, discard the right half. Repeat the process on the left half.
	• If the target is larger, discard the left half. Repeat the process on the right half.
4. Repeat: Continue until the target is found or the search interval is empty.

## 4. Complexity Analysis

### Time Complexity

| Case | Time Complexity | Scenario |
| ---- | --------------- | -------- |
| Best Case | O(1) | The target element is right at the middle index of the array on the very first check. |
| Average Case | O(log n) | The target element is found after making a few splits through the array. |
| Worst Case | O(log n) | The target element is at the extreme ends of the array, or it is not present in the array at all. |

### Space Complexity

The space complexity depends entirely on how the algorithm is implemented:
• Iterative Approach: O(1)
	• It uses a loop (while or for) and only a few variables (low, high, mid) to track indices.
	• It requires a constant amount of extra memory space.
• Recursive Approach: O(log n)
	• Each recursive call adds a new frame to the call stack.
	• Since the maximum number of recursive calls is equal to the depth of the search (\(\log n\)), the stack memory grows logarithmically.

## 5. Edge Cases

### 1. Array Contents & Size

• Empty array: The array has a length of 0 ([]). The algorithm must immediately return -out-of-bounds or -1 without throwing a null or index exception.
• Single element: The array has exactly one element ([5]). Test both when this element matches the target and when it does not.
• Two elements: The array has exactly two elements ([3, 7]). This is notorious for causing infinite loops if your pointer update logic is incorrect.
• Massive array: Extremely large arrays can cause integer overflow when calculating the midpoint if using standard math.

### 2. Target Value Position

• Target at the exact boundaries: The target is the very first element (array[0]) or the very last element (array[array.length - 1]).
• Target out of bounds:
	• The target is smaller than the smallest element.
	• The target is larger than the largest element.
• Target missing (interior): The target falls within the range of the array but does not exist (e.g., searching for 4 in [1, 3, 5, 7]).

### 3. Duplicate Elements

If the array contains duplicate values (e.g., [1, 2, 2, 2, 3, 4]), standard binary search will return any index matching the target. If your goal is specific, watch out for:
• First occurrence: Finding the leftmost index of the duplicate target.
• Last occurrence: Finding the rightmost index of the duplicate target.

### 4. Arithmetic & Implementation Pitfalls

Midpoint Overflow

A classic bug involves calculating the middle index. If your array is large, adding the low and high pointers can exceed the maximum value of a standard integer.
• Buggy: int mid = (low + high) / 2;
• Safe: int mid = low + (high - low) / 2;

Infinite Loops (Pointer Updates)

If your boundaries do not shrink properly, the algorithm can get stuck looking at the same two elements forever.
• Buggy: low = mid; or high = mid; (when using while (low < high))
• Safe: low = mid + 1; or high = mid - 1; (depending on your loop condition)