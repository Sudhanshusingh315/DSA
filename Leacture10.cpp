// Practicing quesiton on array 

#include<iostream>
using namespace std; 

void PritingTheArray(int arr[], int size)
{
  for (int i = 0 ; i < size ;i++)
  {
    cout<<arr[i]<<" , ";
  }cout<<endl;
  
}


void swappingArray(int arr[],int size)
{
  for(int i=0; i<size; i+=2)
  { 
    if(i+1 < size)
    {
      swap(arr[i], arr[i+1]);
    }

    
  }
}


int main ()
{
  int even[8] = {5,2,9,4,7,6,1,0};  

  cout<<"calling the swape funtion on array "<<endl;
  swappingArray(even, 8);
  
  cout<<"Swapping is done"<<endl;
  
  PritingTheArray(even, 8);

  return 0; 
}
