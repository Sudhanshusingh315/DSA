// Find Unique

// Question 2: - https://www.codingninjas.com/studio/problems/find-unique_625159

#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[],int size){
    int ans = 0;
    for(int i=0; i<size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}


int main(){

    int arr[5] = {1,2,4,2,1};
    cout<<"Unique element is "<<findUnique(arr,5)<<endl;
    return 0;
}


// Homework: - https://leetcode.com/problems/unique-number-of-occurrences/