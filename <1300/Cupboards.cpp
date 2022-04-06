//l=1 if open and l=0 if closed similarly for r
#include<bits/stdc++.h>
using namespace std;

int ans1(int count1,int count2){
	int ans;
	ans = count1 > count2 ? count2 : count1;
	return ans;
}

int ans2(int count3,int count4){
	int ans_2;
	ans_2 = count3 > count4 ? count4 : count3;
	return ans_2;
}

int main(){
	int t,answer1,answer2,solution;
	int count1=0,count2=0,count3=0,count4=0;
	cin >> t;
	int l[t],r[t];
	for(int i = 0;i<t;i++){
		cin >> l[i] >> r[i];
	}
	for(int i = 0;i<t;i++){
		if(l[i]==0){
			count1++;
		}
		else{
			count2++;
		}
	}
	for(int i = 0;i<t;i++){
		if(r[i]==0){
			count3++;
		}
		else{
			count4++;
		}
	}
	answer1 = ans1(count1,count2);
	answer2 = ans2(count3,count4);
	solution = answer1+answer2; 
	cout << solution;
	return 0;
}
