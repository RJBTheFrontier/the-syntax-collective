import sys


def solve():
    input = sys.stdin.readline
    w = input()

    if w % 2 == 0 and w > 2:
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    solve()
