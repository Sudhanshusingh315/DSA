// Binary to decimal system
// binary is 0/1 
// decimal is 0-9


#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  //Problem 1 :- Decimal to binar
  int n ;
  int answer = 0 ;
  int i = 0 ;

  cin>>n;
  while(n!=0)
  {
    int bit = n & 1;
    answer = (bit*pow(10,i)) + answer;
    n = n>>1;
    i++;
  }

  cout<<answer<<endl;
   
  
    

  return 0;
}

