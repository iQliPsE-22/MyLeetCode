const checkMyAge = new Promise((resoleve, reject) => {
  let age = 17;
  if (age >= 18) resoleve("ELIGIBLE TO VOTE");
  else reject("NOT ELIGIBLE TO VOTE");
});

checkMyAge
  .then((message) => console.log(message))
  .catch((message) => console.log(message));
