#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int arr[m];
	for(int i=0;i<m;i++)
		cin >> arr[i];
	sort(arr,arr+m);
	int min = arr[n-1]-arr[0];
	for(int i=n;i<m;i++)
		if(arr[i]-arr[i-n+1]<min)
			min = arr[i]-arr[i-n+1];
	cout << min;
	return 0;
}