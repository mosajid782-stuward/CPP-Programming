#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	for(x=1;x<=5;x++){
	    for(y=1;y<=5-x;y++){
	        cout<<" ";
	    }
	    for(y=1;y<=x;y++){
	        cout<<" *";
	    }
	    cout<<endl;
	}
	return 0;
}