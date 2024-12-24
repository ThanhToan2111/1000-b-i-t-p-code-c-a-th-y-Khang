#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==1||n==0) return 1;
    else return n*factorial(n-1);
}
float count(int n,int x)
{
    if(n==1) return 1;
    else return pow(x,2*n+1)/(factorial(2*n+1));
}
int main()
{
    int n,x;
    cin>>n>>x;
    cout<<count(n,x)<<'\n';
    return 0;
}