#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include <cmath>
#include <algorithm>
#include <climits>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	
	ll t;
	cin>>t;
	while(t--){
	    
	    ll n ,k ;
	    cin>>n;
	    k=n;
	    if(n==0){
	        cout<<0<<" "<<1<<" "<<2<<endl;
	        continue;
	    }
	    
	    ll a = 0;
	    ll b = 1;
	    while(n>0){
	        n=n/2;
	        b=b*2;}
	       
	    
	    b= b*2;
	    cout<<a<<" "<<k<<" "<<b-1<<endl;
	    
	   
	}
	
	return 0;
}
