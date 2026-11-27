#include<bits/stdc++.h>
using namespace std;

int main () {
    int n,a,b,c,d,e,rev;
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
    rev=a*10000+b*1000+c*100+d*10+e*1;
    cout<<"reverse number:"   <<rev<<endl;
    return 0 ;
}