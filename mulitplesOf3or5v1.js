function solution(number){
    //initialize blank array
    const arr = [];
    let numberBelow = number - 1;
    //using unshift, assign all natural numbers
    //to array
    while (numberBelow > 0){
      arr.unshift(numberBelow);
      numberBelow--;
    }
    //filter the array to have only 
    //multiples of 3 or 5
    const filteredArr = arr.filter(int => int % 3 === 0 || int % 5 === 0);
    //initialize value for array reduce callback
    const initialVal = 0;
    const sumArr = filteredArr.reduce(
      (accumulator, currentValue) => accumulator + currentValue, initialVal
    )
    return sumArr;
  }