#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    else return n+sum(n-1);
}
void giai(int n)
{
    int ans=0;
    for (int i=1;i<=n;i++){
        if(sum(i)<n){
            ans=max(ans,i);
        }
    }
    cout<<ans;
}
int main()
{
    int n;
    cin>>n;
    giai(n);
    return 0;
}