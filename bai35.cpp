#include<bits/stdc++.h>
using namespace std;
float square(int n)
{
    float ans=0;
    for(int i=n;i>=1;i--){
        ans+=i;
        ans=sqrt(ans);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<fixed<<setprecision(6)<<square(n);
    return 0;
}