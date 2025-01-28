function twoSum(numbers, target) {
  let left = 0;
  let right = numbers.length - 1;
  while (left !== right) {
    let sum = numbers[left] + numbers[right];
    if (sum === target) return [left + 1, right + 1];
    if (sum > target) {
      right--;
    } else {
      left++;
    }
  }
}

console.log(twoSum([2, 5, 6, 7, 8, 9, 10], 10));
