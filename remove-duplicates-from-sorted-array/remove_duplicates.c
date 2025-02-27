#include <stdio.h>

// Prototypes
int removeDuplicates(int* nums, int numsSize);

int main(void)
{
    // Input
    int nums[] = {1,1,2};
    int numsSize = 3;

    // Return the expected length after
    // removing duplicates values from nums
    int k = removeDuplicates(nums, numsSize);

    // Print the unique values from nums
    for (int i = 0; i < k; i++)
    {
        printf("%i", nums[i]);
    }
    printf("\n");

    return 0;
}

// LeetCode function
int removeDuplicates(int* nums, int numsSize) 
{
    // Track the current value's index
    int k = 0;
    for (int i = 1; i < numsSize; i++) {
        // Position the ith element
        // to its corresponding index(k + 1)
        // if it is different from the current element(k)
        if (nums[k] != nums[i]) 
        {
            nums[k + 1] = nums[i];
            k++;
        }
    }
    // Add 1 to k
    return k + 1;
}