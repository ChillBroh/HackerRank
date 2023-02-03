let s = "adfvsa";
let letter;
switch (true) {
  case "aeiou".includes(s[0]):
    letter = "A";
    break;
  case "bcdfg".includes(s[0]):
    letter = "B";
    break;
  case "hjkml".includes(s[0]):
    letter = "C";
    break;
  default:
    letter = "D";
    break;
}
console.log(letter);
