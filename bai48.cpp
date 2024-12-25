#include<bits/stdc++.h>
using namespace std;
int soluongsole(int n)
{
    if(n<10){
        if(n%2!=0) return n;
        else return 1;
    }
    else{
        if(n%10%2!=0) return n%10*soluongsole(n/10);
        else return 1*soluongsole(n/10); 
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<soluongsole(n);
    return 0;
}