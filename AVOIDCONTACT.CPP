#include <iostream>
#define ll long long
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    
	    int x , y , z , ans ;
	    cin>>x>>y;
	   
	   z = x-y;
	   ans =y*2-1;
	   
	   if(z>0){
	       ans+=1 + z;
	   }
	   cout<<ans<<endl;
	}
	
	return 0;
}
