#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool is_palindrom(vector<int>arr){
    int n = arr.size();
    for(int i = 0 ; i<n ; i++){
        if(arr[i]==arr[n-i-1])
            return false;
        
    }
    return true;
}
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    
	   int n  ;
	   cin>>n;
	   string s;
	   cin>>s;
	    
	   sort(s.begin() , s.end());
	   vector<int> swaped ;
	   int start = n-1;
	   for(int i = 0 ; i<n; i++){
	       if(s[i]==s[n-i-1] and i<n/2+1){
	           swap(s[start] , s[i]);
	           swaped.push_back(s[i]);
	           start--;
	       }
	       else
	       swaped.push_back(s[i]);
	       
	   }
	   if(is_palindrom(swaped)==false){
	       cout<<"NO"<<endl;
	   }
	   else{
	       cout<<"YES"<<endl;
	       for(int i = 0 ; i<n ; i++){
	           cout<<char(swaped[i]);
	       }
	       cout<<endl;
	   }
	}
	
	return 0;
}
