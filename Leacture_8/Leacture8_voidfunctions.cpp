#include <cerrno>
#include <iostream>
#include <type_traits>
using namespace std;

// void function don't repeat anything but they still can perform various tasks and obiously can print
void printingNumber(int n)
{

  for (int i=0 ;i<=n;i++ ) {
      cout<<i<<" "<<endl; 
  }

}

//Prime number
bool isPrime(int n )
{
  for(int i = 2 ; i<n ;i++)
  {

    if(n%i==0)
    {

      return 0;

    }
  }
    return 1;
}

int main()
{
  
  int number=0;
  cout<<"Ente the number "<<endl;
  cin>>number;
    
  isPrime(number);
  printingNumber(number);
  return 0;
}



