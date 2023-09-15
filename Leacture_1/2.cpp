// Basic maths

/* Extracting digits form numbers */

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int number = 1562313214;
    int count = 0;
    while(number>0){
        int remainder = number % 10;
        number = number/10;
        count++;
    }
    cout<<"number of digits are "<<count<<endl;
}

*/

// Finding the number of digits

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int number = 156;
    int final = (int)(log10(number)+1);
    cout<<final<<endl; 
    return 0;
}
*/



// Find the palendrom of a number 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number = 122;
    int duplicate = number;
    int reverse_number = 0;
    while (number>0)
    {
      int lastnumber =  number % 10;
      number = number/10;
      reverse_number = (reverse_number*10)+lastnumber;
      

    }
    if (duplicate == reverse_number){
        cout<<"true"<<endl;
    }
    else{
        cout<<"flase"<<endl;
    }
    
}