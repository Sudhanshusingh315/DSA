// PatternPrinting Programs

/*
*
**
***
****
*****

 */





#include <iostream>
using namespace std;
int main()
{
  int n= 5 ;
  for (int i = 1 ; i<=n ;i++ ) // This loop controls the rows  
  {
    for(int j = 1; j<=i ; j++) // This loops prints the starts
    {
      cout<<"*";
    } 
    // because we have only put endl so that it can go to the next line 
    cout<<endl;
  } 
  return 0;
}
