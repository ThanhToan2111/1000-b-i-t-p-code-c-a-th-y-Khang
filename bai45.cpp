#include<bits/stdc++.h>
using namespace std;
int tichchuso(int n)
{
    if(n<10) return n;
    else return n%10 * tichchuso(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<tichchuso(n);
    return 0;
}