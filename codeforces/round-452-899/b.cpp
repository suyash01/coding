#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	string t = "31283130313031313031303131283130313031313031303131293130313031313031303131283130313031313031303131283130313031313031303131";
	string s = "";
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		s += to_string(a);
	}
	auto r = t.find(s);
	if(r == string::npos)
		cout << "No";
	else
		cout << "Yes";
	return 0;
}