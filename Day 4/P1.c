#include <stdio.h>
#include <stdbool.h>

bool isSubsetSum(int* nums, int n, int k) {
    if (k == 0) return true;
    if (n == 0) return false;

    if (nums[n - 1] > k)
        return isSubsetSum(nums, n - 1, k);
    
    return isSubsetSum(nums, n - 1, k) || isSubsetSum(nums, n - 1, k - nums[n - 1]);
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int k = 8;
    int n = sizeof(nums) / sizeof(nums[0]);

    if (isSubsetSum(nums, n, k))
        printf("Output: Yes\n");
    else
        printf("Output: No\n");

    return 0;
}
