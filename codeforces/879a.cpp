#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	int day = 0;
	for(int i=0;i<n;i++){
		int s,d;
		cin >> s >> d;
		while(s<=day)
			s+=d;
		a[i] = s;
		day = s;
	}
	cout << day;
	return 0;
}