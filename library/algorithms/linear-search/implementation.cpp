#include <iostream>
#include <vector>

using namespace std;

// Returns the 0-based index of the target, or -1 if not found
int linear_search(const vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, target;
    if (!(cin >> n >> target)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = linear_search(arr, target);
    cout << result << "\n";

    return 0;
}
