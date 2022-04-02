#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long n;
	int count=0,rem;
	cin >> n;
	while(n!=0){
		rem=n%10;
		if(rem==7 || rem==4){
			count=count+1;
		}
		n=n/10;
	}
	if(count==7 || count==4){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}
