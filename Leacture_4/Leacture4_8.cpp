// Pattern 8

/*

***********
 *********
  *******
   ***** 
    ***    
     *

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    // space
    for(int i =0;i<6;i++)
    {   
        // space
        for(int j=0; j<i ;j++)
        {
            cout<<" ";
        } 

        // start
        for(int j=0; j<(2*n-1);j++) {

            cout<<"*";
        }       



        // space
        for(int j=0; j<i;j++)
        {
            cout<<" ";
        } 
        n = n-1; 
        cout<<endl;
    }

    
    
    return 0;
}