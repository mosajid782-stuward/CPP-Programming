#include<bits/stdc++.h>
using namespace std;
int main () {
    int a,b,c,D;
    cin>>a>>b>>c;
    D=pow(b,2)-4*a*c;
    if(D==0) {
        cout<<"Real and Equal";
    }
    else if(D>0) {
        cout<<"Real and Distinet";
    }
    else {
        cout<<"Imaginary";
    }
    return 0;
}