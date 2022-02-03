#include <iostream>
#define ll long long
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    
	    int a , b , c ;
	    cin>>a>>b>>c;
	    
	    int p , q , r ;
	    cin>>p>>q>>r;
	   int total = (p+q+r)/2;
	   
	   int diff = max(p-a , max(q-b , r-c));
	   if(total<a+b+c+diff){
	       cout<<"YES"<<endl;
	   }
	   else{
	       cout<<"NO"<<endl;
	   }
	   
	}
	
	return 0;
}
