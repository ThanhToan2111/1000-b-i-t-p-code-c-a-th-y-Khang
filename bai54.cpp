#include<bits/stdc++.h>
using namespace std;
int chusonhonhat(int n)
{
    int ans=10;
    while(n>0){
        ans=min(ans,n%10);
        n/=10;
    } 
    return ans;
}
int dem(int n){
    int count=0;
    while(n>0){
        if(n%10==chusonhonhat(n)) count++;
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