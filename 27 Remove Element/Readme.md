# LeetCode - [27 Remove Element]

![Difficulty](https://img.shields.io/badge/Difficulty-easy-green)

**Problem Link:** [LeetCode Problem Link](https://leetcode.com/problems/remove-element/description/)

## Code implementation

📝 Implemented in **C**

```C
int removeElement(int* nums, int numsSize, int val)
{
    int k = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
```

## How to Run

```sh
clang remove_element.c -o remove && ./remove
```
