#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0||n==1) return 1;
    else return n*factorial(n-1);
}
float square(int n)
{
    if(n==1) return 1;
    else return sqrt(factorial(n)+square(n-1));
}
int main()
{
    int n;
    cin>>n;
    cout<<fixed<<setprecision(6)<<square(n);
    return 0;
}