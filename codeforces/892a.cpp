#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int r[n], c[n];
	long long m=0;
	for(int i=0;i<n;i++){
		cin >> r[i];
		m += r[i];
	}
	for(int i=0;i<n;i++)
	    cin >> c[i];
	sort(c,c+n);
	if(m<=(c[n-1]+c[n-2]))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}