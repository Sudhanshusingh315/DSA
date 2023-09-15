// Question 1: swap alternate
#include<bits/stdc++.h>
using namespace std;

void printing(int arr[5],int size){

    for(int i=0 ;i<size;i++ ){
        cout<<arr[i]<<",";
    }
}


void swapAlternate(int arr[5], int size){

    for(int i=0;i<size;i+=2){

       if(i+1<size) {

            swap(arr[i],arr[i+1]);

        }

    }

}


int main(){
    int arr[5] = {1,2,3,5,6};
    swapAlternate(arr,5);

    printing(arr,5); 
} 