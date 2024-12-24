#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==1||n==0) return 1;
    else return n*factorial(n-1);
}
int main()
{
    int n,x;
    cin>>n>>x;
    float ans=0;
    for (int i=1;i<=n;i++){
        ans+=pow(x,i)/factorial(i);
    }
    cout<<fixed<<setprecision(2)<<ans<<'\n';
    return 0;
}