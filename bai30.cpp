#include<bits/stdc++.h>
using namespace std;
int Tonguocso(int n)
{
    int sum=1;
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i) sum+=n/i;
        }
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    if(Tonguocso(n)==n) cout<<"YES";
    else cout<<"NO";
    return 0;
}