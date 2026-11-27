#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,a,b,c,d,sum;
    cin>>n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n;
    sum=a+b+c+d;
    cout<<"sum is:"<<sum;
    return 0;
}