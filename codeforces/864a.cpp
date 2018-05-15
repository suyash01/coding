#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a;
	cin >> n;
	set<int> s;
	multiset<int> ms;
	for(int i=0;i<n;i++){
		cin >> a;
		s.insert(a);
		ms.insert(a);
	}
	if(s.size()==2 && ms.count(a)==n/2){
		cout << "YES\n";
		for(auto item : s)
			cout << item << " ";
	}
	else
		cout << "NO";
	return 0;
}