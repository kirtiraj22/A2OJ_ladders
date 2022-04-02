#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int len;
	string n1,n2;
	vector <int> v1;
	vector <int> v2;
	vector <int> v3;
	cin >> n1;
	cin >> n2;
	len=n1.length();
	for(int i=0;i<len;i++){
		v1.push_back(n1[i]);
		v2.push_back(n2[i]);
	}
	for(int i=0;i<len;i++){
			if(v1[i]==v2[i]){
				v3.push_back(0);
			}
			else{
				v3.push_back(1);
			}
	} 
	for(int i=0;i<len;i++){
		cout << v3[i];
	}
	return 0;
}
