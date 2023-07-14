#include <vector>
#include <algorithm>

int maxSequence(const std::vector<int>& arr){
  
  int counter = 0;
  for(const auto& element : arr){
      if(element > 0)
      counter++;
    }
  
  if(counter == 0 || arr.size() == 0)
  return 0;
  
  //if above tests failed, then continue with kadanes algo
  //copy array into dp variable
  std::vector<int> dp(arr.size());
  
  //base case, the first element of dp is equal to
  //the first element of arr
  dp[0] = arr[0];
  
  //begin for loop
  for(std::vector<int>::size_type i = 1 ; i < arr.size(); i++){
    dp[i] = std::max(arr[i], dp[i-1] + arr[i]);
  }
  
  int maxSum = *std::max_element(dp.begin(), dp.end());
  return maxSum;
  
}