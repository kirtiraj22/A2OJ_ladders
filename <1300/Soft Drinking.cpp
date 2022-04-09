#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np;
	int milliliters,slices,salt;
	vector <int> answer;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	milliliters=k*l;
	answer.push_back(milliliters/nl);
	slices=c*d;
	answer.push_back(slices);
	salt=p/np;
	answer.push_back(salt);
	
	int min = answer[0];
	
	for (int i = 0;i<3;i++){
		if(answer[i]<min){
			min = answer[i];
		}
	}
	cout << min/n;
	return 0;
}
