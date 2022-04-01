#include <bits/stdc++.h>

using namespace std;

string Upper(string x){
	int len;
	len=x.length();
	for(int i=0;i<len;i++){
		if(x[i]>=97 && x[i]<=122){
			x[i]=x[i]-32;
		}
	}
		return x;
}

string Lower(string y){
	int len;
	len=y.length();
	for(int j=0;j<len;j++){
		if(y[j]>=65 && y[j]<=90){
			y[j]=y[j]+32;
		}
	}
	return y;
}

int main(){
	string s,ans;
	int upper=0,lower=0;
	cin >> s;
	int len = s.length();
	for(int i =0 ;i<len;i++){
		if(s[i]>=97 && s[i]<=122){
			lower++;
		}
		else if (s[i]>=65 && s[i]<=90){
			upper++;
		} 
	}
	if(lower>upper || lower == upper){
		ans=Lower(s);
	}
	else{
		ans=Upper(s);
	}
	cout << ans << endl;
}
