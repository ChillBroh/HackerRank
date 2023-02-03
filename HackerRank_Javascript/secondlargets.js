'use strict';

let n = 5;
let nums = [2, 3, 6, 6, 5];
let unique = new Set(nums);
let nums2 = [...unique];

let index = nums2.indexOf(Math.max(...nums2));
nums2.splice(index, 1);
let k = nums2[0];
for (let i = 0; i < nums2.length; i++) {
  if (k < nums2[i]) {
    k = nums2[i];
  }
}
console.log(k);
