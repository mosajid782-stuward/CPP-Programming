#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m,r,c=0,sum=0;
	cin>>n;
	m=n;
	while(n>0) {
	    n=n/10;
	    c++;
	}
	n=m;
	while(n>0) {
	    r=n%10;
	    sum=sum+pow(r,c);
	    n=n/10;
	}
	if(sum==m) {
	    cout<<"armstrong no.";
	}
	else {
	    cout<<"Not armstrong no.";
	}
	return 0;