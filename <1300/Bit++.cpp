#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	cin >> n;
	
	int ans = 0;
	
	while(n--){
		string op;
		cin >> op;
		
		if(op == "++X" || op == "X++") 
			++ans;
		
		else 
			ans--;
	}
	
	cout << ans;
	return 0;
}
