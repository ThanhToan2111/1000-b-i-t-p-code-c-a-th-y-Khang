#include<bits/stdc++.h>
using namespace std;
int Tichuocso(int n)
{
    int prod=0;
    for (int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            prod*=i;
            if(i!=n/i) prod*=n/i;
        }
    }
    return prod;
}
int main()
{
    int n;
    cin>>n;
    cout<<Tichuocso(n);
    return 0;
}