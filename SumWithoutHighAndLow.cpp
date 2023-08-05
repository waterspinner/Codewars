#include<vector>
#include<string>
#include<iostream>
#include<algorithm>


using namespace std;

int sum(vector<int> numbers)
{
  if(numbers.size() == 1 || numbers.empty()){
    return 0;
  }
    bool swapped;
    for(int i = 0; i < numbers.size() - 1; i++){
      swapped = false;
        for(int j = 0; j < numbers.size() - i - 1; j++){
          if(numbers[j] < numbers[j + 1]){
            swap(numbers[j], numbers[j + 1]);
            swapped = true;
          }
        }
        if(!swapped){
          break;
        } 
      }
    int accumulator = 0;
    for(int i = 1; i < numbers.size() - 1; i++){
      accumulator+= numbers[i];
    }
  return accumulator;
}