#include <vector>

using namespace std;

vector<int> countBy(int x,int n){
  //initialize vector to count to
  vector<int> multi;
  //first element is x
  multi.push_back(x);
  
  //loop and add elements to vector
  for(int i = 0; i < n - 1; i++){
    multi.push_back(multi[i] + x);
  }
  
  return multi;
}