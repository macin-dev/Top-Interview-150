# LeetCode - [88 Merge Sorted Array]

![Difficulty](https://img.shields.io/badge/Difficulty-easy-green)

**Problem Link:** [LeetCode Problem Link](https://leetcode.com/problems/merge-sorted-array/description/)

## Code implementation

📝 Implemented in **C**

```C
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
```

## How to Run

```sh
clang merge_sorted_array.c -o merge && ./merge
```
