#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int l = 0, r = 0;
	while(n--){
		int x,y;
		cin >> x >> y;
		if(x<0)
			l++;
		else
			r++;
	}
	if(l<2 || r<2)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}