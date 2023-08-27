// 3

// Finding the sum of the array

#include<bits/stdc++.h>
using namespace std;

int sum_of_array(int arr[], int size){
  int sum = 0; 
  for(int i=0;i<size;i++ ){
    sum+=arr[i];
  }
  return sum;
}


int main(){

  int arr[12];
  int size;
  cin>>size;
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  cout<<"sum is : "<<sum_of_array(arr,size)<<endl;
  return 0;
}