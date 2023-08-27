// pattern 6

/*

1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=1; i<6;i++)
    {
        for(int j=6; j>=i ; j--){
            cout<<i;
        }
        cout<<endl;


    }
    return 0;
}
