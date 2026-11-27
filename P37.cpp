#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z=1;
	for(x=1;x<=5;x++){
	    for(y=1;y<=5-x;y++){
	        cout<<" ";
	    }
	    for(y=1;y<=2*x-1;y++){
	        if(z==1){
	            cout<<z;
	            z=2;
	        }
	        else if(z==2){
	            cout<<z;
	            z=3;
	        }
	        else {
	            cout<<z;
	            z=1;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}