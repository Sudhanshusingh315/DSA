// Leacture 3

// Question 1: Summation of first N natural numbers  []

// ------------------------------------------------------------------------------------------->

// Mehtod 1 :- paramaterised  way

/*

#include<bits/stdc++.h>
using namespace std;

void sumToN(int n, int sum){
    if(n<1){
       cout<<sum; 
       return;
    }
    
    sumToN(n-1,sum+n);


}

int main(){
    int n;
    int sum = 0;
    cout<<"Enter the number till N ";
    cin>>n;
    sumToN(n,sum);
    return 0;
}

*/

// -------------------------------------------------------------------------------------------------------->


// Method 2 :- funtional way, it will return something

/*
#include<bits/stdc++.h>
using namespace std;

int returingANumber(int n){
    if(n==0){
        return n;
    } 
    return n + returingANumber(n-1);
}


int main(){
    int n = 0;
    cout<<"Enter the value of n ";
    cin>>n;
    cout<<"the answer is "<<returingANumber(n)<<endl;
    return 0;
}
*/

// ---------------------------------------------------------------------------------------------------------> 

// Question 2: recursion for factorial of n 

#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1; 
    }
    return n * factorial(n-1);
}
int main(){
    int n=0;
    cout<<"Pass the number you want to find the factorial of "<<endl;
    cin>>n;
    factorial(n);
    return 0;   

}

























