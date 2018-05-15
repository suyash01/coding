#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,res;
	cin >> n >> m;
	res = 1;
	for(long long i=n+1;i<=m;i++){
		res = (res*(i%10))%10;
		if(!res)
			break;
	}
	cout << res;
	return 0;
}