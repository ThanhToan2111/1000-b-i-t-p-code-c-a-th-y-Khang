#include<bits/stdc++.h>
using namespace std;
int chusodaonguoc(int n)
{
    int ans=0;
    while(n>0){
        ans*=10;
        ans+=n%10;
        n/=10;
    } 
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<chusodaonguoc(n);
    return 0;
}