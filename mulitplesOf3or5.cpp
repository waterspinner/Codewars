int solution(int number) 
{if(number < 0)
  return 0;
 
  int sum = 0;
for(int x = number - 1; x > 0; x--){
  if(x % 3 == 0 || x % 5 == 0)
     sum += x;
}
  return sum;
}