#include<bits/stdc++.h>
using namespace std;

void repr(int y){
	if(y){
		repr((y-1)/26);
		char c = (y-1)%26+65;
		cout << c;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y=0;
		char s[20];
		cin >> s;
		if(sscanf(s, "%*c%d%*c%d",&x,&y)==2){
			repr(y);
			cout << x << endl;
		}
		else{
			int i;
			for(i=0;s[i]>64;i++)
				y = y*26+(s[i]-64);
			cout << 'R' << s+i << 'C' << y << endl;;
		}
	}
}