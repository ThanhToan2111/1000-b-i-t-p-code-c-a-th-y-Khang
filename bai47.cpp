#include<bits/stdc++.h>
using namespace std;
int soluongsochan(int n)
{
    if(n<10){
        if(n%2==0) return n;
        else return 0;
    }
    else{
        if(n%10%2==0) return n%10+soluongsochan(n/10);
        else return 0+soluongsochan(n/10); 
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<soluongsochan(n);
    return 0;
}