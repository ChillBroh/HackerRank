let s = "aeiou  abc";
let k = 0;
s = s.trim();
let arr = [];
for (let i = 0; i < s.length; i++) {
  if (s[i].includes("a", "e", "i", "o", "u")) {
    console.log(s[i]);
  } else {
    if (s[i] != " ") {
      arr[k] = s[i];
      k++;
    }
  }
}
for (const x of arr) {
  console.log(x);
}
