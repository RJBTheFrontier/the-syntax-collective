def binary_search_iterative(arr, target):
    low = 0
    high = len(arr) - 1

    while low <= high:
        # Calculate the middle index safely to avoid potential overflow
        mid = low + (high - low) // 2

        # Check if target is present at mid
        if arr[mid] == target:
            return mid  # Return the index of the element

        # If target is greater, ignore left half
        elif arr[mid] < target:
            low = mid + 1

        # If target is smaller, ignore right half
        else:
            high = mid - 1

    return -1  # Return -1 if the element is not found


def binary_search_recursive(arr, target, low, high):
    # Base case: element is not present in the array
    if low > high:
        return -1

    mid = low + (high - low) // 2

    # If element is found at the middle
    if arr[mid] == target:
        return mid

    # If element is smaller than mid, search the left subarray
    elif arr[mid] > target:
        return binary_search_recursive(arr, target, low, mid - 1)

    # If element is greater than mid, search the right subarray
    else:
        return binary_search_recursive(arr, target, mid + 1, high)
