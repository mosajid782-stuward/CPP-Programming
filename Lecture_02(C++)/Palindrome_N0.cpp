#include<bits/stdc++.h>
using namespace std;

int main () {
    int n,m,a,b,c,d,rev;
    cin>>n;
    m=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n;
    rev=a*1000+b*100+c*10+d*1;
    if(rev==m) 
    {
        cout<<"Palindrome No.";
    }
    else
    {
        cout<<"Not Palindrome No.";
    }
    return 0;
}