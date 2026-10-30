#include<bits/stdc++.h>
using namespace std;
int main () {
    int p,c,m,e,h,per,q;
    cin>>p>>c>>m>>e>>h;
    per=(p+c+m+e+h)*100/500;
    q=per/10;
    switch(q) {
        case 0:
        case 1:
        case 2:
        case 3:
        cout<<"Fail";
        break;
        case 4:
        case 5:
        cout<<"C";
        break;
        case 6:
        cout<<"B";
        break;
        case 7:
        if(per<75) {
            cout<<"B";
        }
        else {
            cout<<"A";
        }
        break;
        case 8:
        cout<<"A";
        break;
        case 9:
        cout<<"A+";
        break;
        case 10:
        if(per==100) {
            cout<<"A+";
        }
        else {
            cout<<"Wrong %age";
        }
        break;
        default :
        cout<<"Wrong %aage";
    }
    return 0;
}