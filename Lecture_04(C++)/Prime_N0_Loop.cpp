#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,i;
	cin>>n;
	for(i=2;i<=n/2;i++) {
	    if(n%2==0) {
	        break;
	    }
	}
	if(i>n/2) {
	    cout<<"Prime no.";
	}
	else {
	    cout<<"Not Prime no.";
	}
	return 0;