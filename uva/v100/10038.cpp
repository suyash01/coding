#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(cin >> n){
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		vector<int> d(n-1);
		for(int i=1;i<n;i++){
			d[i-1] = abs(a[i-1]-a[i]);
		}
		sort(d.begin(), d.end());
		int flag = 1;
		for(int i=1;i<n-1;i++)
			if(d[i]-d[i-1]!=1){
				cout << "Not jolly\n";
				flag = 0;
				break;
			}
		if(flag)
			cout << "Jolly\n";
	}
	return 0;
}