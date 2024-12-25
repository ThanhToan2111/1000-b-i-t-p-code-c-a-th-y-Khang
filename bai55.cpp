#include<bits/stdc++.h>
using namespace std;
int chusodautien(int n)
{
    if(n<10) return n;
    else return chusodautien(n/10);
}
int dem(int n){
    int count=0;
    while(n>0){
        if(n%10==chusodautien(n)) count++;
        n/=10;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<dem(n);
    return 0;
}