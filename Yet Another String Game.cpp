// **** Proplem Link )
// https://codeforces.com/contest/1480/problem/A

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
int t; cin>>t;
//for(int i = 0; i<;++i)
while(t--){
 string a; cin>>a;
for(int i=0; i<a.length();++i){
    if (i%2==0){
        if(a[i]== 'a') {
            cout<<'b';
        } 
        else cout<<'a';
    }
     if (i%2==1){
        if(a[i]== 'z') {
            cout<<'y';
        } 
        else cout<<'z';
    } 
}
cout<<endl;
}
    return 0;
 
}
