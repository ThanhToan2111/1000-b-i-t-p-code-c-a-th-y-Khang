#include<iostream>
#include<math.h>
using namespace std;
void checkperfectsquare(int n)
{
    if(n<0) cout<<"NO";
    else{
        int x=sqrt(n);
        if(x*x==n) cout<<"YES";
        else cout<<"NO";
    }
}
int main()
{
    int n;
    cin>>n;
    checkperfectsquare(n);
    return 0;
}