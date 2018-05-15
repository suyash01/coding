#include <bits/stdc++.h>
using namespace std;

int main(){
	const string names[5] = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
	string str;
	int res = 0;
	cin >> str;
	for (int i=0;i<str.length();i++)
		for (int j=0;j<5;j++)
			if (i+names[j].length()<=str.length())
				if (str.substr(i, names[j].length()) == names[j])
					res++;
	cout << ((res==1)?"YES":"NO");
	return 0;
}