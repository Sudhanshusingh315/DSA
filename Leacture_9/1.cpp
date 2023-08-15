// 1

//Introduction to arrays


#include <iostream>
using namespace std;

void Printingarray(int arr[], int size)
{

    cout<<"This is inside the funtiong "<<endl;
    
    for(int i=0; i<size ;i++)
    {
        cin>>arr[i];

    }

    for(int i =0 ;i<size; i++)
    {

        cout<<arr[i];

    }




}



int main()
{
  int number[15]; 
  int Printingarraysarray[5];
  int size =5;

  cout<<"Value at index at 14 is "<<number[14]<<endl;

  int second[3] = {3,4,5};

  cout<<"value stored at second[2] "<<second[1]<<endl;
  
  // printing all the elements of the array 
  for(int i=0; i<4 ; i++)
  {
    cout<<second[i]<<endl;
  }


  Printingarray(Printingarraysarray,size);   


  // Printing the size/lenthg of the array 
  // not entirely the right way of to add the array  because this the length of the array but what about the cases wehn you have only added 2 elemetns and rest are zero?
  int sizeofthearray =  sizeof(Printingarraysarray)/ sizeof(int);
  
  cout<<endl;
  cout<<sizeofthearray;
  return 0;
  

}
