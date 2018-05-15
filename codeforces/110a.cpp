#include <iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;
	int c=0;
	while(n){
		int a = n%10;
		n /= 10;
		if(a==4 || a==7)
			c++;
	}
	if(!c){
		cout << "NO";
		return 0;
	}
	while(c){
		int a = c%10;
		c = c/10;
		if(a!=4 && a!=7){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}