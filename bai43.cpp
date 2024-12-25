#include<bits/stdc++.h>
using namespace std;
int soluongchuso(int n)
{
    if(n<10) return 1;
    else return 1+soluongchuso(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<soluongchuso(n);
    return 0;
}