// Pattern 5

/*

* * * * * *
* * * * * 
* * * * 
* * * 
* * 
* 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i=0 ; i<=6 ; i++)
    {
        for(int j=6 ; j>=i ; j--){

            cout<<"*";
        }
        cout<<endl;
    }

    return 0;   
}