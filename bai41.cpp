#include<bits/stdc++.h>
using namespace std;
float tinh(int n)
{
    if (n==1) return 1.0/2;
    else return 1.0/(1+tinh(n-1));
}
int main()
{
    int n;
    cin>>n;
    cout<<fixed<<setprecision(6)<<tinh(n);
    return 0;
}