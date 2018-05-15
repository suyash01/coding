#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k,m;
	cin >> n >> k >> m;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];
	vector<vector<int>> r(m);
	for(int i=0;i<n;i++)
		r[a[i]%m].push_back(a[i]);
	for(int i=0;i<m;i++){
		if(r[i].size()>=k){
			cout << "Yes\n";
			for(int j=0;j<k;j++)
				cout << r[i][j] << " ";
			return 0;
		}
	}
	cout << "No";
	return 0;
}