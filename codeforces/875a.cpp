#include <bits/stdc++.h>
using namespace std;

int digits(int n){
	int c = 0;
	while(n){
		n/=10;
		c++;
	}
	return c;
}

int digit_sum(int n){
	int sum = 0;
	while(n){
		sum = sum+n%10;
		n/=10;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int d = digits(n);
	vector<int> v;
	for(int i=n-9*d;i<=n;i++){
		if(i+digit_sum(i)==n)
			v.push_back(i);
	}
	sort(v.begin(), v.end());
	if(v.size()){
		cout << v.size() << endl;
		for(int i=0;i<v.size();i++)
			cout << v[i] << endl;
	}
	else
		cout << "0\n";
	return 0;
}