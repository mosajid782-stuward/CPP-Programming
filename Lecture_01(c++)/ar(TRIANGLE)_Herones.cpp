#include<bits/stdc++.h>
#include<math.h>
using namespace std;
// area of triangle by herones formula..
int main () {
    float a,b,c,S,A,Ar;
    cout<<"Enter side a:";
    cin>>a;
    cout<<"Enter side b:";
    cin>>b;
    cout<<"Enter side c";
    cin>>c;
    S=(a+b+c)/2;
    A=S*((S-a)*(S-b)*(S-c));
    Ar=sqrt(A);
    cout<<"Area is:"<<Ar<<endl;
    return 0;
}
