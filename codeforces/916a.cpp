#include<bits/stdc++.h>
using namespace std;

bool lucky(int h, int m){
	h1 = h%10;
	h2 = h/10;
	m1 = m%10;
	m2 = m/10;
	if(h1==7 || h2==7 || m1==7 || m2==7)
		return true;
	return false;
}

int main(int argc, char const *argv[])
{
	int x;
	cin >> x;
	int h,m,f = 1;
	cin >> h >> m;
	for(int i=0;;i++){
		int m1 = x*i;
		int h1 = m1/60;
		m1 %= 60;
		h -= h1;
		m -= m1;
		if(h<0)
			h += 24;
		if(lucky(h, m)){
			cout << i;
			f = 0;
			break;
		}
	}
	return 0;
}