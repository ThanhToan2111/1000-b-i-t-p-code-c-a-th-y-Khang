#include<bits/stdc++.h>
using namespace std;
int chusodautien(int n)
{
    if(n<10) return n;
    else return chusodautien(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<chusodautien(n);
    return 0;
}