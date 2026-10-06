#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter year:";
    cin>>n;
    (n%100==0)?((n%400==0)? cout<<"leap year":cout<<"Not leap year") :((n%4==0)? cout<<"leap year" : cout<<"not leap year");
    return 0;
}