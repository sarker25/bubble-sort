let arr = [3, 4, 5, 78, 67, 342];
let size = arr.length;
for (let i = 0; i < size; i++) {
  let swap = false;
  for (let j = 0; j < size - 1 - i; j++) {
    if (arr[j] > arr[j + 1]) {
      [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
      swap = true;
    }
  }
  if (!swap) {
    break;
  }
}
console.log("after bubble sort");
for (let i = 0; i < size; i++) {
  console.log(arr[i]);
}
