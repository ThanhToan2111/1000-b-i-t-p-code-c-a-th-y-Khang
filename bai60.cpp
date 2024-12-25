#include<bits/stdc++.h>
using namespace std;
void kiemtratangdan(int n)
{
    int prev=10;
    bool flag=true;
    while(n>0){
        if(n%10>prev){
            flag=false;
            break;
        }
        prev=n%10;
        n/=10;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}
int main()
{
    int n;
    cin>>n;
    kiemtratangdan(n);
    return 0;
}