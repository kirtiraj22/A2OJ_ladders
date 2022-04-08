#include<bits/stdc++.h>
using namespace std;

int main()
{
	string guest,host,letters,answer;
	cin >> guest >> host >> letters;
	int len1,len2,len3,flag=0;
	len1 = guest.length();
	len2 = host.length();
	len3 = letters.length();
	char temp;

	answer = guest + host;

	for(int i=0;i<len1+len2;i++)
	{
		for(int j = i+1;j<len1+len2;j++)
		{
			if(answer[i]>answer[j])
			{
				temp = answer[i];
				answer[i]=answer[j];
				answer[j]=temp;
			}
		}
	}
	
	for(int i=0;i<len3;i++)
	{
		for(int j = i+1;j<len3;j++)
		{
			if(letters[i]>letters[j])
			{
				temp = letters[i];
				letters[i]=letters[j];
				letters[j]=temp;
			}
		}
	}
	if(answer == letters){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
