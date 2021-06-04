
//  *** Proplem Link ***
// https://codeforces.com/contest/1535/problem/A


#include <iostream>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int a[40];
        for(int i =0; i<4; ++i){
            cin>>a[i];
        }
        if( max(a[0],a[1])  > min(a[2],a[3]) && max(a[2],a[3])  > min(a[0],a[1]) ){
            cout<<"YES"<<endl;
        }
        else   cout<<"NO"<<endl;
    }

    return 0;
}

