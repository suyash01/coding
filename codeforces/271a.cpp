#include<bits/stdc++.h>

using namespace std;

bool is_distinct(int n){
	set<int> s;
	s.insert(n%10);
	n /= 10;
	s.insert(n%10);
	n /= 10;
	s.insert(n%10);
	s.insert(n/10);
	if(s.size()==4)
		return true;
	return false;
}

int main(){
	int n;
	cin >> n;
	for(int i=n+1;;i++){
		if(is_distinct(i)){
			cout << i;
			break;
		}
	}
 	return 0;
}