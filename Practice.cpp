// Liear Search
/*
#include<bits/stdc++.h>
using namespace std;

bool liner_search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"Key found at index "<<i<<"th position"<<endl;
            return 1;
        

        }
    }
    return 0;
}


int main(){
    int arr[7] = {1,2,3,4,5,7,6};
    int key;
    cout<<"Enter the key/number you want to search for "<<endl;
    cin>>key;
    liner_search(arr,7,key);
    return 0;
}
*/



// Reversing an array

#include<bits/stdc++.h>
using namespace std;

void reversing_array(int arr[],int size){
    int start = 0;
    int end = size-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    

}

void printing_array(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}



int main(){
    int arr[6] = {1,2,3,4,5,6};

    reversing_array(arr,6); 
    printing_array(arr,6);
    return 0;
}













