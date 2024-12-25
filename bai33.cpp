#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
float square(int n)
{
    if(n==1) return sqrt(2);
    else return sqrt(2+square(n-1));
}
int main()
{
    int n;
    cin>>n;
    cout << fixed << setprecision(6) << square(n);
    return 0;
}