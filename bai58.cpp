#include<bits/stdc++.h>
using namespace std;
void kiemtradoixung(int n)
{
    int m=n;
    int ans=0;
    while(n>0){
        ans*=10;
        ans+=n%10;
        n/=10;
    }
    if(ans==m) cout<<"YES";
    else cout<<"NO";
}
int main()
{
    int n;
    cin>>n;
    kiemtradoixung(n);
    return 0;
}