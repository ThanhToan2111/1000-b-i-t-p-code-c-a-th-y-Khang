#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=pow(x,2*i);
    }
    cout<<sum<<'\n';
    return 0;
}