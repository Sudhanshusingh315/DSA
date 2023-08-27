// 2

// Maximum and Minimum in arrays 

// Given an array print the largest number in the array 

#include<bits/stdc++.h>
using namespace std;

int getmin(int num[], int size)
{ 
  int minimun = num[0];
  for(int i=0;i<size;i++){
  //   if(num[i]< min){
  //     min = num[i];
      minimun = min(minimun,num[i]);
    }
  // }
  return minimun;
}

int getmax(int num[],int size)
{
  int max = num[0];
  for(int i=0; i<size;i++){
    if(num[i]>max){
      max = num[i];
    }
  }
  return max;
}


int main(){
  
  int size;
  int num[100];
  cin>>size;
  for(int i=0;i<size;i++)
  {
    cin>>num[i];
  }

  cout<<"Maximum of the array is "<<getmax(num,size)<<endl;
  cout<<"Minimum of the array is "<<getmin(num,size)<<endl;
} 
