#include<bits/stdc++.h>
using namespace std;

int cycle(int n){
	int c = 1;
	while(n!=1){
		if(n&1){
			n = 3*n+1;
			n >>= 1;
			c += 2;
		}
		else{
			n >>= 1;
			c++;
		}
	}
	return c;
}

int main(int argc, char const *argv[])
{
	int i,j;
	while(cin >> i >> j){
		int oi = i;
		int oj = j;
		if(i>j)
			swap(i,j);
		int maxCycle = 0, c;
		for(int k=i;k<=j;k++){
			c = cycle(k);
			if(c > maxCycle)
				maxCycle = c;
		}
		cout << oi << " " << oj << " " << maxCycle << endl;
	}
	return 0;
}