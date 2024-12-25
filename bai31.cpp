#include<iostream>
using namespace std;
void checkprime(int n)
{
    if(n<2) cout<<"NO";
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                cout<<"NO";
                return;
            }
        }
        cout<<"YES";
    }
}
int main()
{
    int n;
    cin>>n;
    checkprime(n);
    return 0;
}