#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];
	int m=1;
	int c=1;
	for(int i=1;i<n;i++){
		if(v[i-1]<=v[i])
			c++;
		else
			c=1;
		if(c>m)
			m = c;
	}
	cout << m;
 	return 0;
}