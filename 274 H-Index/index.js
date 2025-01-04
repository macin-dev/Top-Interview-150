function hIndex(citations) {
  let hIndex = 0;
  citations.sort((a, b) => b - a);
  for (let i = 1; i <= citations.length; i++) {
    if (citations[i - 1] >= i) {
      hIndex = i;
    } else {
      break;
    }
  }
  return hIndex;
}
