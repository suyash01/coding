#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int h1,a1,c1;
	cin >> h1 >> a1 >> c1;
	int h2,a2;
	cin >> h2 >> a2;
	vector<string> v;
	while(h2>0){
		if(h1>a2 || h2<=a1){
			h2-=a1;
			v.push_back("STRIKE");
		}
		else{
			h1+=c1;
			v.push_back("HEAL");
		}
		h1-=a2;
	}
	cout << v.size() << endl;
	for(int i=0;i<v.size();i++)
		cout << v[i] << endl;
	return 0;
}