// Problems solving with leetcode 
#include <climits>
#include <cstdint>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

// Problem 1: - Reverse Integer (Leetcode) 
/*
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
*/



// Problem 2 :- Power of two  
   int answer = 0;  
   int numberThatPowerOfTwo =0;
   bool ForT=0;
   cout<<"Enter the number to be checked"<<endl;
   cin>>numberThatPowerOfTwo;
   for(int i=0 ; i<=30 ;i++)
   {  
      
       answer = pow(2,i);
       if(answer == numberThatPowerOfTwo) 
       {
         ForT = 1;

            
       }

       
  
   }
   
   if(ForT == 1)
   {
     cout<<"Power of two"<<endl;
     
   }
   else {
      cout<<"not the power of two "<<endl;
   }
    

  return 0;
}  
