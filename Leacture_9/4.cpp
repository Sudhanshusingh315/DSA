// 4
// Linear Search

#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0; i < size; i++){

        if(arr[i]==key){
            return 1;
        }
    }
   return 0; 

}


int main(){

    int arr[10] = {5,7,2,1,-2,-9,6};
    int key;
    cout<<"Enter the key/number you want to search for "<<endl;
    cin>>key;

    bool result = search(arr,10,key);
    if(result == 1){
        cout<<"Key found "<<endl;
    }
    else{
        cout<<"couldn't find the given key "<<endl;
    }

    return 0;
}

