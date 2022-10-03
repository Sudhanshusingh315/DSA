// part 2 :- patter printing programs

/*

*****
****
***
**
*

*/

#include <iostream>
using namespace std;
int main()
{
  int n=1;
  
  for(int i=5; i>=n; i--)
  {
    for(int j = 1 ;j<=i ; j++) 
      {
        cout<<"*";
 
      }
    cout<<endl;
  }
  return 0;
}
