// Pattern 1
/*
    patter to print is 

        * * * * * *
        * * * * * *
        * * * * * *
        * * * * * *
        * * * * * *
        * * * * * *

*/


#include<bits/stdc++.h>

using namespace std; 

int main()
{  
    for(int i=0 ; i<6 ; i++)
    {
        for(int j=0 ; j<6 ;j++){
            cout<<"*";
        }
        cout<<endl;
    } 

    return 0;
}