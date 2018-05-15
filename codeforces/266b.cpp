#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,t;
	cin >> n >> t;
	string str;
	cin >> str;
	for(int i=0;i<t;i++){
		for(int j=1;j<n;j++){
			if(str[j-1]=='B' && str[j]=='G'){
				str[j-1] = 'G';
				str[j] = 'B';
				j++;
			}
		}
	}
	cout << str;
	return 0;
}