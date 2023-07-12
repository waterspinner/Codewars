function solution(number){
    number--;
    if(number <= 0){
      return 0;
    }
    var sum = 0;
    for(number; number > 0; number--){
      if(number % 3 == 0 && number % 5 == 0){
        sum += number;
      }
      else if(number % 3 == 0){
        sum += number;
      }
      else if(number % 5 == 0){
        sum += number;
      }
    }
    return sum;
  }