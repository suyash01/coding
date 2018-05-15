#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	if(c<a && c<b && n!=1)
		cout << min(a,b)+c*(n-2);
	else
		cout << (n-1)*min(a,b);
	return 0;
}