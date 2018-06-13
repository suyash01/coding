#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        if (s == "DONE")
            return 0;
        string a;
        for(int i=0;i<s.size();i++)
            if(isalpha(s[i]))
                a += s[i];
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        int flag = true;
        for(int i=0;i<=a.size()/2;i++){
            if(a[i]!=a[a.size()-i-1]){
                cout << "Uh oh.." << endl;
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "You won't be eaten!" << endl;
    }
    return 0;
}