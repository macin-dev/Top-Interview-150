let nums = [1,2,3,4,5,6,7], k = 3

function rotate(nums, k) {
    const a = [];
    for(let i = 0; i < nums.length; i++) {
        a[(i + k) % nums.length] = nums[i]
    }

    for(let i = 0; i < nums.length; i++) {
        nums[i] = a[i]
    }
}

