#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int f[4] = {0};
	int x = 0, y = 0;
	for(int i=0;i<n;i++){
		if(s[i]=='U')
			f[0]++;
		else if(s[i]=='D')
			f[1]++;
		else if(s[i]=='L')
			f[2]++;
		else if(s[i]=='R')
			f[3]++;
	}
	y += f[0];
	y -= f[1];
	x -= f[2];
	x += f[3];
	if(x==0 && y==0)
		cout << f[0]+f[1]+f[2]+f[3];
	else{
		cout << f[0]+f[1]+f[2]+f[3]-abs(x)-abs(y);
	}
	return 0;
}