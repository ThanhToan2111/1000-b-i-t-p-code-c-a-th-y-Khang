#include<bits/stdc++.h>
using namespace std;
int chusolonnhat(int n)
{
    int ans=0;
    while(n>0){
        ans=max(ans,n%10);
        n/=10;
    } 
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<chusolonnhat(n);
    return 0;
}