#include<bits/stdc++.h>
using namespace std;
int uocsole(int n)
{
    int prod=1;
    for (int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i%2!=0) prod*=i;
            if(i!=n/i&&(n/i)%2!=0) prod*=n/i;
        }
    }
    return prod;
}
int main()
{
    int n;
    cin>>n;
    cout<<uocsole(n);
    return 0;
}