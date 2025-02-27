# LeetCode - [26 Remove Duplicates from Sorted Array]

![Difficulty](https://img.shields.io/badge/Difficulty-easy-green)

**Problem Link:** [LeetCode Problem Link](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)

## Code implementation

📝 Implemented in **C**

```C
int removeDuplicates(int* nums, int numsSize)
{
    int k = 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[k] != nums[i])
        {
            nums[k + 1] = nums[i];
            k++;
        }
    }
    return k + 1;
}
```

## How to Run

```sh
clang remove_duplicates.c -o remove_duplicates && ./remove_duplicates
```
