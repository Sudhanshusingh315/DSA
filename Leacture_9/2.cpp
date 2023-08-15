// Maximum and Minimum in arrays 

// Given an array print the largest number in the array 

#include <algorithm>
#include <climits>
#include <cstdint>
#include <iostream>
#include <new>
using namespace std;



int getmin(int nump[], int size)
{

 int min=INT_MIN;


 for(int i=0; i<size ;i++)
 {
  /*  if(nump[i]<min)
    {
      min = nump[i];

    }
  */
 }


   return min;

}

int getmax(int nump[], int size)
{
  int maxi=INT_MAX;
  for(int i=0; i<size ;i++)
  {
    // This is who you can fine the maximun of two 
    maxi = max(maxi, nump[i]);

   /* if(nump[i] > max)
    {

        max = nump[i];

    }
    */
  }


    return maxi; 

}




int main()
{

  int size=0;
  cin>>size;

  int array[100];
  
  for(int i=0; i<size ;i++)
  {
    cin>>array[i];

  }

  cout<<"The maximum value of the array is "<<getmax(array, size)<<endl;
  cout<<"The minimum value of the array is "<<getmin(array, size)<<endl;
    





  return 0;
}
