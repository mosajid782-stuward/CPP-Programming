#include<bits/stdc++.h>
using namespace std;

int main () {
    int n,a,b,c,d,e,sum;
    cout<<"Enter number:";
    cin>>n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n;
    sum=a+b+c+d+e;
    cout<<"digit sum:"<<sum<<endl;   
    return 0;
}

