function positiveSum(arr) {
    return arr.filter(x => x > 0).reduce((accumulator, currentValue) => accumulator + currentValue, 0);
  }