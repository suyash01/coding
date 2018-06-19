#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a, a+n);
	int m = 1, c = 1;
	for(int i=1;i<n;i++){
		if(a[i-1]==a[i])
			c++;
		else
			c = 1;
		if(c>m)
			m = c;
	}
	cout << m;
	return 0;
}