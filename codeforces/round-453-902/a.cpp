#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin >> n >> m;
	vector<pair<int, int>> v;
	for(int i=0;i<n;i++){
		int x,y;
		cin >> x >> y;
		v.push_back(make_pair(x,y));
	}
	if(v[0].first==0){
		int k = v[0].second;
		for(int i=1;i<v.size();i++){
			if(v[i].first <= k){
				if(k<v[i].second)
					k = v[i].second;
			}
			else
				break;
		}
		if(k>=m)
			cout << "YES";
		else
			cout << "NO";
	}
	else
		cout << "NO";
	return 0;
}