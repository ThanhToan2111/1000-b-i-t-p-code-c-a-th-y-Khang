#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    else return n+sum(n-1);
}
int main()
{
    int n,x;
    cin>>n>>x;
    float ans=0;
    for (int i=1;i<=n;i++){
        ans+=pow(x,i)/sum(i);
    }
    cout<<fixed<<setprecision(2)<<ans<<'\n';
    return 0;
}