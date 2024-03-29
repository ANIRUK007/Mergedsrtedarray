#include <stdio.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n) {
    int i = m - 1; // Index for nums1 array
    int j = n - 1; // Index for nums2 array
    int k = m + n - 1; // Index for merged array

    // Merge nums1 and nums2 starting from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If there are remaining elements in nums2, copy them to nums1
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    // Test case
    int nums1[6] = {1, 3, 5, 0, 0, 0};
    int nums2[3] = {2, 4, 6};

    int m = 3; // Size of nums1
    int n = 3; // Size of nums2

    merge(nums1, 6, m, nums2, 3, n);

    // Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    return 0;
}
