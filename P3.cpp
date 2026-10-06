#include<bits/stdc++.h>
using namespace std;
// calculate the simple intrest.
int main () {
    float p,r,t,S;
    cout<<"Enter Principal:";
    cin>>p;
    cout<<"Enter Rate:";
    cin>>r;
    cout<<"Enter time:";
    cin>>t;
    S=(p*r*t)/100.00;
    cout<<"Simple Intrest :"<<S<<endl;
    return 0;
}