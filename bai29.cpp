#include<bits/stdc++.h>
using namespace std;
void uocsole(int n)
{
    int max1=1;
    for (int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i%2!=0) max1=max(max1,i);
            if(i!=n/i&&(n/i)%2!=0) max1=max(max1,n/i);
        }
    }
    cout<<max1;
}
int main()
{
    int n;
    cin>>n;
    uocsole(n);
    return 0;
}