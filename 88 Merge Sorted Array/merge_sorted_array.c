#include <stdio.h>
#include <string.h>

void merge(int* nums1, int m, int* nums2, int n);

int main(void)
{
    int nums1[] = {1,2,3,0,0,0};
    int nums2[] = {2,5,6};
    int m = 3;
    int n = 3;

    merge(nums1, m, nums2, n);

    // Print he merged array
    for(int i = 0; i < m + n; i++)
    {
        printf("%i ", nums1[i]);
    }
    printf("\n");
    
    return 0;
}

// LeetCode Function
void merge(int* nums1, int m, int* nums2, int n) 
{
    int sorted[m + n];
    int i = 0;
    int l = 0;
    int r = 0;

    // Merge nums1 & nums2 into sorted array
    while(l < m && r < n)
    {
        if(nums1[l] > nums2[r])
        {
            sorted[i] = nums2[r];
            r++;
        }
        else 
        {
            sorted[i] = nums1[l];
            l++;
        }
        i++;
    }

    // Copy remaining elements from nums1
    while (l < m)
    {
        sorted[i++] = nums1[l++];
    }

    // Copy remaining elements from nums2
    while (r < n)
    {
        sorted[i++] = nums2[r++];
    }

    // Copy sorted array back to nums1
    for(int i = 0; i < m + n; i++)
    {
        nums1[i] = sorted[i];
    }
}