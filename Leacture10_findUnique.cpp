#include<iostream>
using namespace std; 
int findUnique(int arr[], int size)
{
  int ans = 0;
  for (int i=0 ; i<size;i++ ) {
    ans = ans^arr[i];
    
  }
  
  return ans;

}
int main ()
{
  int arr[5] = {2,7,6,7,2};   
  int size = 5;
  cout<<findUnique(arr, size);
  return 0; 
}
