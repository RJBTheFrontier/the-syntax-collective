import sys


def linear_search(arr, target):
    # Returns the 0-based index of the target, or -1 if not found
    for i, val in enumerate(arr):
        if val == target:
            return i
    return -1


def main():
    # Read all inputs from standard input at once for speed
    input_data = sys.stdin.read().split()
    if not input_data:
        return

    n = int(input_data[0])
    target = int(input_data[1])

    # Parse the array elements
    arr = [int(x) for x in input_data[2 : 2 + n]]

    result = linear_search(arr, target)
    print(result)


if __name__ == "__main__":
    main()
