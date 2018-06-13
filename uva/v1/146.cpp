#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        string s;
        cin >> s;
        if(s=="#")
            break;
        if(next_permutation(s.begin(), s.end()))
            cout << s << "\n";
        else
            cout << "No Successor\n";
    }
    return 0;
}