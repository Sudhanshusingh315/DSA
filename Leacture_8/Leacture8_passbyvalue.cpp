// Pass by value and Pass by reference 

#include <iostream>
#include <ostream>
using namespace std;


void dummy(int n )
{
  n++;
  cout<<" n is "<<n<<endl;

}



int main()
{

  int n;
  cin>>n;
  dummy(n);
  cout<<"the value of n is "<<n<<endl;     
  return 0;
}
