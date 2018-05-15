#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t,tl=0;
	cin >> n >> t;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		tl += 86400-a;
		if(tl>=t){
			cout << i+1;
			break;
		}
	}
	return 0;
}