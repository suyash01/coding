#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s1,s2,s3="";
	cin >> s1 >> s2;
	for(int i=0;i<s1.length();i++){
		if(s1[i]==s2[i])
			s3+="0";
		else
			s3+="1";
	}
	cout << s3;
	return 0;
}