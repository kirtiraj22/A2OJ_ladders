#include<bits/stdc++.h>
using namespace std;

int main(){
	int len,temp=0;
	string s;
	cin >> s;
	len = s.length();
	int v[len];
	for(int i =0;i<len;i+=2){
		v[i]=s[i];
	}
	for(int i =0;i<len;i+=2){
		for(int j=i+2;j<len;j+=2){
			if(v[i]>v[j]){
				temp = v[i];
				v[i] = v[j];
				v[j] = temp; 
			}
		}
	}
		for(int i = 0;i<len;i++){
			if(i%2==0){
				cout << v[i]-48;
			}
			else{
				cout << s[i];
			}
		}
	return 0;
}
