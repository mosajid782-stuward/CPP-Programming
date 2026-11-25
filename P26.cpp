#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int x,y,m,n,count,sum,z,r;
	cin>>m>>n;
	for(x=m;x<=n;x++) {
	    z=x;
	    count=0;
	    sum=0;
	    while(x>0) {
	        x=x/10;
	        count++;
	    }
	    x=z;
	    while(x>0){
	      r=x%10;
	      sum=sum+pow(r,count);
	      x=x/10;
	    }
	    x=z;
	    if(x==sum){
	        cout<<x<<",";
	    }
	}
	return 0;