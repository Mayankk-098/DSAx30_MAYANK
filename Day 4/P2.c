#include <stdio.h>

void printSubset(int* subset, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", subset[i]);
        if (i < size - 1) printf(",");
    }
    printf("]");
}

void generateSubsets(int* nums, int n, int index, int* subset, int subsetSize) {
    printSubset(subset, subsetSize);
    printf("\n");

    for (int i = index; i < n; i++) {
        subset[subsetSize] = nums[i];
        generateSubsets(nums, n, i + 1, subset, subsetSize + 1);
    }
}

int main() {
    int nums[] = {1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int subset[100];  // Big enough for all recursive paths

    printf("Output:\n");
    generateSubsets(nums, n, 0, subset, 0);

    return 0;
}
