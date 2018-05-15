#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int e = 0;
	for(int i=1;i<n-1;i++){
		if(a[i]<a[i-1] && a[i]<a[i+1])
			e++;
		if(a[i]>a[i-1] && a[i]>a[i+1])
			e++;
	}
	cout << e;
	return 0;
}