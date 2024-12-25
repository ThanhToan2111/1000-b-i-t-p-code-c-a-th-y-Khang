#include<bits/stdc++.h>
using namespace std;
int chusonhonhat(int n)
{
    int ans=10;
    while(n>0){
        ans=min(ans,n%10);
        n/=10;
    } 
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<chusonhonhat(n);
    return 0;
}