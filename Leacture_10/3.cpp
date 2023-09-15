// Find Duplicates

// Question 3 : https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

#include<bits/stdc++.h>
using namespace std;

int test(int arr[],int size){
    int ans =0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5] = {1,2,3,4,4}; 
    cout<<test(arr,5);
    return 0;
}

// Find better solution, kyuki ye samj nhi aaya