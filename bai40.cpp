#include<bits/stdc++.h>
using namespace std;
float tinh(int n,int x)
{
    if(n==1) return sqrt(x);
    else return sqrt(pow(x,n)+tinh(n-1,x));
}
int main()
{
    int n,x;
    cin>>n>>x;
    cout<<fixed<<setprecision(6)<<tinh(n,x);
    return 0;
}