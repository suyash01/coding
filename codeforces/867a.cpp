#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,f,s;
	cin >> n;
	string str;
	cin >> str;
	f = s = 0;
	for(int i=1;i<n;i++){
		if(str[i-1]=='F' && str[i]=='S')
			f++;
		else if(str[i-1]=='S' && str[i]=='F')
			s++;
	}
	if(s>f)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}