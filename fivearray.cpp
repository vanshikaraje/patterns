#include <iostream>
#include <vector>
using namespace std;

// Function to reverse a portion of the array
void reverseArray(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // In case k > n

    // Step 1: Reverse whole array
    reverseArray(nums, 0, n - 1);

    // Step 2: Reverse first k elements
    reverseArray(nums, 0, k - 1);

    // Step 3: Reverse remaining n-k elements
    reverseArray(nums, k, n - 1);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
