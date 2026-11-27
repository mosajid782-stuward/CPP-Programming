#include<bits/stdc++.h>
using namespace std;
int main () {
    int p,c,m,e,h,per;
    cout<<"Enter marks of subject ";
    cin>>p>>c>>m>>e>>h;
    per=(p+c+m+e+h)/5;
    if(per>=0 && per<40) {
        cout<<" Fail";
    }
    else if(per>=40&& per<59) {
        cout<<"C";
    }
    else if(per>=59 && per<70) {
        cout<<"B";
    }
    else if(per>=70 && per<90) {
        cout<<"A";
    }
    else if(per>=90 && per<=100) {
        cout<<"A+";
    }
    else {
        cout<<"invalid percentage ";
    }
    return 0; 
}