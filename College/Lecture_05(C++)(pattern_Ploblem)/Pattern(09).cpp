#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	for(x=1;x<=5;x++){
	    for(y=1;y<=5-x;y++){
	        cout<<" ";//for[]
	    }
	    for(y=x;y>=1;y--){
	        cout<<y;//for∆1
	    }
	    for(y=2;y<=x;y++){
	        cout<<y;//∆2
	    }
	    cout<<endl;
	}
    return 0;
}