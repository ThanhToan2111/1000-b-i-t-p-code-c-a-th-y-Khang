#include<bits/stdc++.h>
using namespace std;
int tongchuso(int n)
{
    if(n<10) return n;
    else return n%10 +tongchuso(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<tongchuso(n);
    return 0;
}