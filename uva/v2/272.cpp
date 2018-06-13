#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	bool c = true;
	while(getline(cin, s)){
		for(int i=0;i<s.length();i++){
			if (s[i] == '"') {
				if(c)
					printf("``");
				else
					printf("''");
				c = !c;
			}
			else
				cout << s[i];
		}
		cout << "\n";
	}
	return 0;
}