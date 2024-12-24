#include<bits/stdc++.h>
using namespace std;
void uocsole(int n)
{
    for (int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i%2!=0) cout<<i<<' ';
            if(i!=n/i&&(n/i)%2!=0) cout<<n/i<<' ';
        }
    }
}
int main()
{
    int n;
    cin>>n;
    uocsole(n);
    return 0;
}