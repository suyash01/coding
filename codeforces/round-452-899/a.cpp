#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i]==1)
			x++;
		else
			y++;
	}
	if(x<=y)
		cout << x;
	else
		cout << y+(x-y)/3;
	return 0;
}