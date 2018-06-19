#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c,flag = 1;
	cin >> a >> b >> c;
	for(int i=0;i<b;i++){
		a *= 10;
		int q = a/b;
		a %= b;
		if(q==c){
			cout << i+1;
			flag = 0;
			break;
		}
	}
	if(flag)
		cout << -1;
	return 0;
}