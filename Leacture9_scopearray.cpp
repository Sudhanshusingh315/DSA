#include <iostream>
using namespace std;


void update(int arr[] , int  size)
{
  cout<<" this is inside the update function"<<endl;
  // updating arr[0]
  arr[0] =  99;
  
  for(int i=0; i<size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"This is going out of the update function"<<endl;
}


// WHEN YOU PASS THE ARRAY IT DOES PASS WITH THE ADDRESS. AND DOES NOT MAKE A COPY OF IT LIKE AN INTEGER.HENCE ALL TEH CHANGES ARE GOING TO BE SAVED 

int main()
{

  int arr[3] = {2,3,4};
  int size = 3;

  update(arr, size);



  cout<<"The is insid the int main function"<<endl; 

  for (int i=0; i<size ; i++) {
    cout<<arr[i]<<" ";
  
  }
 return 0;
}
