# Rotate Array
## Level: *Medium*
### Explanation 

Create an extra array to place each element into it's correct
position while iterating over  the original one,
by doing so, you have to shift each element by `k` times, to keep 
the placing effectively allocated into the new array `iterator < length`, 
use the module operation to compute the next equation `((iterator + k) % length)`.
This will keep the elements moved to it's correct position,

### Mathematical explanation

`a = b x q + r`

- `a` is the dividend (the number you're dividing).   
- `b` is the divisor (the number you're dividing by).
- `q` is the quotient (the result of integer division).
- `r` is the remainder (the result of the modulo operation).

` a % b = a if a < b`

`((0 + 3) % 7)) = 3 < 7`, which means `7` does not fit into `3`,
for instance, the result becomes `3`, the remainder `r` must be non-negative
and less than the absolute value of the divisor (`b`). This operation perfectly will
handle each position of the array to the copy array placing them into it's correct position.

Finally loop over the copy array performing constant time operations `nums[iterator] = copy[i]`,
it needs to the values be placed in the correct order into the original array since the 
problems asked us to mutate the same array.

#### Time Complexity = `O(n) + O(n) = O(n)`.
#### Space Complexity = `O(n)`.