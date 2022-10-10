// Bitwise Operator and for Loops


#include <iostream>
using namespace std;
int main ()
{
  cout<<"using Bitwise Operator"<<endl;
  int a = 4;
  int b = 6;
  
  cout<<"a&b "<< (a&b) <<endl;
  cout<<"a|b "<< (a|b) <<endl;
  cout<<"~a"<< (~a) <<endl;
  cout<<"a^b "<< (a^b) <<endl;
  
  cout << "____________" <<endl;

  cout <<"Followings are left shift and right shift"<<endl;
  cout<<"17>>1 " <<(17>>1)<<endl;
  cout<<"17>>2 "<<(17<<2)<<endl;
  cout<<"19<<1 "<<(19<<1)<<endl;
  cout<<"21<<2 "<<(21<<2)<<endl;

  cout<<"----------------"<<endl;

  

  // for(int i=0 (initialization); i<=n (condition) ; i++ (updation))

  for(int i=0 ; i<=5 ; i++)
  {
    cout<<i<<endl;
  }

  // sum for all numbers for 1->namespace 
  int j; 
  int sum=0;
  for(j =1 ; j<=5 ;j++) 
  { 
    sum += j;
  }

  cout<<"The sum of all the number for 1 to 5 "<<sum<<endl;
  
  // fibonacci series
  
  int n=10;
  int first = 0;
  int second = 1;
  
  for(int c=1 ; c<= n ; c++)
  {
      int nextNumber = first + second;
      cout<<nextNumber<<" ";
      first = second;
      second = nextNumber;
      
  
  }


  // Prime Number with forloop

  int Range =0;
  cout<<"Enter the ranger upto with you want to check the prime numeber";
  cout<<endl;

  cin>>Range;
  
  bool isPrime = 1;

  for(int n =2 ; n<Range; Range++ )
  {
    if(Range%n==0)
    {
      cout<<"The number is not a prime number"<<endl;
      isPrime =0; 
      break;
    }
    
  }

  if(isPrime==1)
    cout<<"not a PrimeNumber"<<endl;

  // Subtract the Product and Sum of Digits of an interger (Leetcode) 
  // 245 = Product - Sum
  int Product = 1;
  int Sum = 0;
  int Number = 0;
  cout<<"Enter the Number "<<endl;
  cin>>Number;
  while (Number!=0)
  {  
    int Digit = Number%10;
    Product = Product*Digit;
    Sum = Sum + Digit;
    Number = Number/10;
  } 
  cout<<"Product "<<Product << " and the Sum is "<<Sum;
  
  int answer = Product - Sum;
  cout<<"answer "<<answer;

  return 0; 

}

