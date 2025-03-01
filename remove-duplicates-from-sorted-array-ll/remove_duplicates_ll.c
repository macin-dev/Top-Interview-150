#include <stdio.h>

// Prototype
int removeDuplicates(int* nums, int numsSize);

int main(void)
{
    // Input
    int nums[] = {1,1,1,2,2,3};
    int numsSize = 6;
    
    // Return the expected length after 
    // each unique element appears at most twice
    int k = removeDuplicates(nums, numsSize);

    // Print expected values from nums array
    for (int i = 0; i < k; i++)
    {
        printf("%i", nums[i]);
    }
    printf("\n");
    printf("Output: %i\n", k);
    return 0;
}

// LeetCode function
int removeDuplicates(int* nums, int numsSize) {
    // Track the left index
    int k = 0;

    // Track the element's count
    int count = 1;

    // If kth number equals ith number and count 
    // being less than two, increment count and k by 1.
    // Otherwise, only increment k by 1, reset count to 1.
    // Place each number(ith) in its corresponding index(kth).
    for (int i = 1; i < numsSize; i++) {
        if (nums[k] == nums[i] && count < 2)
        {
            k++;
            nums[k] = nums[i];
            count++;
        }
        else if (nums[k] != nums[i])
        {
            k++;
            nums[k] = nums[i];
            count = 1;
        }
    }
    // Add 1 for the expected length
    return k + 1;
}