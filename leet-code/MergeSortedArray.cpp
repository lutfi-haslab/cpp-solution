#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;  // Pointer for the last element in nums1's initial part
        int j = n - 1;  // Pointer for the last element in nums2
        int k = m + n - 1;  // Pointer for the last position in nums1

        // Merge the arrays starting from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // If there are remaining elements in nums2, copy them
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    Solution solution;

    // Test case 1
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;
    solution.merge(nums1, m, nums2, n);
    printArray(nums1);  // Output: 1 2 2 3 5 6

    // Test case 2
    nums1 = {1, 0};
    nums2 = {2};
    m = 1, n = 1;
    solution.merge(nums1, m, nums2, n);
    printArray(nums1);  // Output: 1 2

    // Test case 3
    nums1 = {0};
    nums2 = {1};
    m = 0, n = 1;
    solution.merge(nums1, m, nums2, n);
    printArray(nums1);  // Output: 1

    // Test case 4
    nums1 = {4, 5, 6, 0, 0, 0};
    nums2 = {1, 2, 3};
    m = 3, n = 3;
    solution.merge(nums1, m, nums2, n);
    printArray(nums1);  // Output: 1 2 3 4 5 6

    return 0;
}
