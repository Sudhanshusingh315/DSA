// Leacture 2
// Question: Print Name "N" times recurions

/*
#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n){
    if(i>n){
        return;
    }
    cout<<"LeaderOfMeow"<<endl;
    printName(i+1,n);

}

int main(){
    int n;
    cout<<"Enter the number of times you want your name to be printed"<<endl;
    cin>>n;
    printName(1,n);
    return 0;
}
*/

/*********************************************************************************************/

// Question 2: Print Linearly from 1 to N

/*
#include<bits/stdc++.h>
using namespace std;

void printCount(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    printCount(i+1,n);

}

int main(){
    int n;
    cout<<"type interger to get linear counting"<<endl;
    cin>>n;
    printCount(1,n);
    return 0;
}
*/


/*********************************************************************************************/


// Question 3: Print from N to 1 

/*
#include<bits/stdc++.h>
using namespace std;

void printDesending(int i, int n){
    if(n<i){
        return;
    }
    cout<<n<<",";
    printDesending(i,n-1);


}

int main(){
    int n;
    cout<<"Enter an interg N"<<endl;
    cin>>n;
    printDesending(1,n);
    return 0;
}

*/

/*********************************************************************************************/


// Question 4: Print 1 - N but linearly with backtracking

/*

#include<bits/stdc++.h>
using namespace std;

void backTrackingCount(int i, int n){
    if(i<1){
        return;
    }
    backTrackingCount(i-1,n);
    cout<<i;
}

int main(){
    int n;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    backTrackingCount(n,n);
    return 0;
}

*/

/*********************************************************************************************/


// Question 5: pirnt form N to 1 but backtracking

#include<bits/stdc++.h>
using namespace std;

void backTrackingReverse(int i,int n ){
    if(i>n){
        return;
    } 
    backTrackingReverse(i+1,n);
    cout<<i<<",";

}

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    backTrackingReverse(1,n);
    return 0;
    
}

/*********************************************************************************************/
