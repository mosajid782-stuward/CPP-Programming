#include<bits/stdc++.h>
#include<math.h>
using namespace std;
// Calculate the Compound Intrest.

int main () {
    float A,p,r,t,C;
    cout<<"Enter Principal:";
    cin>>p;
    cout<<"Enter Rate:";
    cin>>r;
    cout<<"EnterTime:";
    cin>>t;
    A=p*pow(1+r/100.00,t);
    cout<<"Ammount:"<<A<<endl;
    C=A-p;
    cout<<"Compound intresr:"<<C<<endl;
    return 0;
}
