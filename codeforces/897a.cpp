#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin >> n >> m;
	string s;
	cin >> s;
	while(m--){
		int l,r;
		char a,b;
		cin >> l >> r;
		cin >> a >> b;
		for(int i=l-1;i<r;i++)
			if(s[i]==a)
				s[i] = b;
	}
	cout << s;
	return 0;
}