#include <iostream>

using namespace std;
int power(int a, int b)
{
  int answer=1;
  for(int i=1 ;i<=b; i++)
  {

    answer = answer*a;

  }
  return answer;
  
}

int main()
{
  int a=0;
  int b=0;

  int n=0;


  cout<<"enter the value of number "<<endl;
  cin>>a;
  cout<<"enter the value of power"<<endl;
  cin>>b;
  
  cout<<"power of "<<power(a,b)<<endl;
  
   return 0;
}
