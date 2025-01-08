function productExceptSelf(nums) {
  let answer = [1];
  let i = 1;
  while (i < nums.length) {
    answer[i] = answer[i - 1] * nums[i - 1];
    i++;
  }
  let j = answer.length - 1;
  let suffix = 1;
  while (j >= 0) {
    answer[j] = suffix * answer[j];
    suffix *= nums[j];
    j--;
  }
  return answer;
}
