// Revers of an array 

#include <iostream>
#include <type_traits>
#include <utility>
using namespace std;
void reversingArray(int arr[], int size)
{
   int start = 0;
   int end  = size-1;

   while(start<=end) 
   {
      swap(arr[start],arr[end]);
      start++;
      end--;

   }

}
void printTheArray(int arr[], int size)
{
  for(int i =0; i<size;i++) 
  {
    cout<<arr[i]<<",";
  }

}

int main()
{
  int arr[6] = {1,4,0,5,-2,15}; 
  int size = 6;
  cout<<"Printing the array "<<endl;
  printTheArray(arr,size );
  
  reversingArray(arr,size);
  cout<<"After the reversing the Array"<<endl;
  printTheArray(arr, size);
  return 0;
}
