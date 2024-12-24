#include<bits/stdc++.h>
using namespace std;
int Tonguocsochan(int n)
{
    int sum=0;
    for (int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i%2==0) sum+=i;
            if(i!=n/i&&(n/i)%2==0) sum+=n/i;
        }
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<Tonguocsochan(n);
    return 0;
}