#include<bits/stdc++.h>
using namespace std;
float tinh(int n)
{
    if(n==1) return sqrt(1);
    else return pow(n+tinh(n-1),1.0/(n+1));
}
int main()
{
    int n;
    cin>>n;
    cout<<fixed<<setprecision(6)<<tinh(n);
    return 0;
}