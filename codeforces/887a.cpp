#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	int m = 0, c = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]=='1')
			m = 1;
		else
			if(m)
				c++;
	}
	if(c>5)
		cout << "yes";
	else
		cout << "no";
	return 0;
}