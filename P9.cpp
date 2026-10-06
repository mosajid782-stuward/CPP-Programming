#include<bits/stdc++.h>
using namespace std;

int main () {
    int n,a,b,sum;
    cout<<"Enter number(5 digit number:";
    cin>>n;
    a=(n/10)%10;
    b=(n/1000)%10;
    sum=a+b;
    cout<<"sum is:"<<sum<<endl;
    return 0;
}