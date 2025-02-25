#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) ;

int main(void)
{
    int nums[] = {3,2,2,3};
    int numsSize = 3;
    int val = 3;

    // Return the expected length 
    // that does not include "val" elements
    int k = removeElement(nums, numsSize, val);
    
    // Print the expected values from nums array
    for (int i = 0; i < k; i++)
    {
        printf("%i", nums[i]);
    }
    printf("\n");
    printf("k: %i\n", k);
}

int removeElement(int* nums, int numsSize, int val) 
{
    // Count each element from nums1 different to val
    // Place each element in it's corresponding index by 
    // tracking the element's index that equals the current val
    int k = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++; 
        } 
    } 

    // Return the last tracked index
    return k;
}