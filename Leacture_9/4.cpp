// Linear Search

#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int valueToBeFind)
{
  for(int i=0; i<size;i++)
  {
      if(arr[i] == valueToBeFind)
      {
        return 1;
      }
  }
  return 0;
}


int main()
{

int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
int size = 10;
int valueToBeFind=0;

cout<<"Enter the value to search in the array "<<endl;
cin>>valueToBeFind;
bool finalans = LinearSearch(arr, size, valueToBeFind);
if(finalans) 
{
  cout<<"the element "<<valueToBeFind<<"is present"<<endl;

}
else {
  cout<<"not to be found ";
}

return 0;
}
