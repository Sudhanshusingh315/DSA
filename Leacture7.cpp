// Problems solving with leetcode 
#include <climits>
#include <cstdint>
#include <iostream>
using namespace std;
int main()
{

 // Problem 1: - Reverse Integer (Leetcode) 

  int answer=0;
  int numberToBeReversed = 0;
  
  cout<<"Enter the number"<<endl;

  cin>>numberToBeReversed;  
  while (numberToBeReversed!= 0)
  {
    int digit = numberToBeReversed%10;
    
    answer = (answer*10) + digit;
    
    numberToBeReversed = numberToBeReversed/10;
  }
  cout<<"answer"<<answer<<endl;



  return 0;
}
