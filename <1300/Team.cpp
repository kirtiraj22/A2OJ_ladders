#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,player1,player2,player3;
	cin >> n;
	int count = 0;
	while(n--){
		cin >> player1 >> player2 >> player3;
		if(player1+player2+player3 >=2){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
