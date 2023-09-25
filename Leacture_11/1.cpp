// Leacture 1

// This is the sart of recursion

// Basic steps of recursion

#include<bits/stdc++.h>
using namespace std;

void printOne(int& count){
    if(count == 3){
        return;
    }
    cout<<"meow "<<endl;
    count++;
    printOne(count);
}


int main(){
    int count = 0;
    printOne(count);
    cout<<"value of count is "<<count;
    return 0;
}
