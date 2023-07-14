#include <vector>
#include <string>

using namespace std;

vector<int> digitize(unsigned long n) 
{ 
  
vector<int> digits;
  //handle for 0 separately
  if(n == 0){
    digits.push_back(0);
    return digits;
  }
  
  while(n > 0){
    int digit = n % 10;
    digits.push_back(digit);
    n /= 10;
  }
  
  return digits;
}