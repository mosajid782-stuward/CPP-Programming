#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,rev,r,m;
	cin>>n;
	while(n>0) {
	    r=n%10;
	    rev=rev*10+r;
	    n=n/10;
	}
	m=n;
	if(m==rev) {
	    cout<<"palindrome no.";
	}
	else {
	    cout<<"Not palindrome no.";
	}
	return 0;