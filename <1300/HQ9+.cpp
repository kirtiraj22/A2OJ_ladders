#include <bits/stdc++.h>

using namespace std;

int main(){
	string p;
	cin >> p;
	int len,ans=0;
	len = p.length();
	for(int i = 0; i<len; i++){
		if(p[i]>33 && p[i]<126){
			if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
				ans=1;
			}
		}
	}
	if(ans == 1){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
