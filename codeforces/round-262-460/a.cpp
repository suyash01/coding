#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,c;
	cin >> n >> m;
	c = n;
	while(n>=m){
		int q = n/m;
		c+=q;
		n = q+n%m;
	}
	cout << c;
	return 0;
}