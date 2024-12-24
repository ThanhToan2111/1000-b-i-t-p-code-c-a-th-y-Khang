#include<bits/stdc++.h>
using namespace std;
void uocso(int n)
{
    int sum=0;
    for (int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            sum+=1;
            if(i!=n/i) sum+=1;
        }
    }
    cout<<sum;
}
int main()
{
    int n;
    cin>>n;
    uocso(n);
    return 0;
}