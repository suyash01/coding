#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m=0;
	cin >> n;
	string str;
	cin >> str;
	set<char> s;
	for(int i=0;i<n;i++){
		if(str[i]>='a' && str[i]<='z')
			s.insert(str[i]);
		else{
			if(s.size()>m)
				m = s.size();
			s.clear();
		}
	}
	if(s.size()>m)
		m = s.size();
	cout << m;
	return 0;
}