#include<bits/stdc++.h>
using namespace std;
int chusolonnhat(int n)
{
    int ans=0;
    while(n>0){
        ans=max(ans,n%10);
        n/=10;
    } 
    return ans;
}
int dem(int n){
    int count=0;
    while(n>0){
        if(n%10==chusolonnhat(n)) count++;
        n/=10;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<dem(n);
    return 0;
}