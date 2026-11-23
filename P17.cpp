#include<bits/stdc++.h>
using namespace std;
int main () {
    int a,b,ch,r;
    cout<<"1.add";
    cout<<"2.sub";
    cout<<"3.mul";
    cout<<"4.div";
    cout<<"enter two no. and choice";
    cin>>a>>b>>ch;
    switch(ch) {
        case 1:
        cout<<a+b;
        break;
        case 2:
        cout<<a-b;
        break;
        case 3:
        cout<<a*b;
        break;
        case 4:
        cout<<a/b;
        break;
        default:
        cout<<"wrong input";
    }
    return 0;
}