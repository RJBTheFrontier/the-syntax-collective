#include <iostream>
#include <vector>

using namespace std;

// The condition/predicate function
// Change the logic inside this function based on the problem requirements
bool isValid(int mid, const vector<int>& arr, int target) {
    // Example: Find the first element >= target
    return arr[mid] >= target;
}

// Universal Binary Search Template
int binarySearch(int low, int high, const vector<int>& arr, int target) {
    int ans = -1; // Stores the best valid answer found so far
    
    while (low <= high) {
        // Prevents overflow compared to (low + high) / 2
        int mid = low + (high - low) / 2; 
        
        if (isValid(mid, arr, target)) {
            ans = mid;       // Record the potential answer
            high = mid - 1;  // Look for a smaller/better index on the left
        } else {
            low = mid + 1;   // Condition not met, search the right half
        }
    }
    
    return ans;
}
