// pattern

/*

     *
    ***
   ***** 
  *******
 *********
***********  
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

    // pattern 9 is the combinaiton of 7th and 8th pattern 
    
    // printing pattern no 7 first 
    for(int i=0; i<5 ; i++)
    { 
        // space
        for(int j=0; j<(6-i-1); j++){

            cout<<" ";

        }

        // starts
        for(int j=0; j<((2*i)+1); j++){
            cout<<"*";
        }

        // space
        for(int j=0; j<(6-i-1); j++){

            cout<<" ";

        }

        cout<<endl;
    }

    // now printing pattern no 8
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