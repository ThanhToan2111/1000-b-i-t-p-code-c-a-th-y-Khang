#include<bits/stdc++.h>
using namespace std;
int sum1(int n){
    if(n==1) return 1;
    else return n+sum1(n-1);
}
float sum(int n)
{
    if(n==1) return 1.0;
    else return 1.0/sum1(n)+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<'\n';
    return 0;
}