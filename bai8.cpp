#include<bits/stdc++.h>
using namespace std;
float sum(int n)
{
    if(n==1) return 1.0/2;
    else return (2*n+1)/(2*n+2)+sum(n-1);
}
int main()
{
    int n ;
    cin>>n;
    cout<<fixed<<setprecision(2)<<sum(n);
    return 0;
}