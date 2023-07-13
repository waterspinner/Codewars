#include <vector>


int square_sum(const std::vector<int>& numbers)
{
  //initialize variable to track sum
  int sum = 0;
  //iterate through each elemen in the vector
  for(const auto& number : numbers){
    //add the number squared to the sum.
    sum += number * number;
  }
    return sum;
}