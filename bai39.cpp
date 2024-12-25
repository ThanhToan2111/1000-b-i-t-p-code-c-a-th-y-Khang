#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0||n==1) return 1;
    else return n*factorial(n-1);
}
float tinh(int n)
{
    if(n==1) return sqrt(1);
    else return pow(factorial(n)+tinh(n-1),1.0/(n+1));
}
int main()
{
    int n;
    cin>>n;
    cout<<fixed<<setprecision(6)<<tinh(n);
    return 0;
}