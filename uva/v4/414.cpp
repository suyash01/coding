#include <bits/stdc++.h>

using namespace std;

#define INF 100000000
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector <ii> vii;

int main() {
    while(true){
        int n;
        cin >> n;
        if(!n)
            break;
        vector<string> s1(n), s2(n);
        int max = 0;
        for(int i=0;i<n;i++) {
            cin >> s1[i];
            if(s1[i].size()==25)
                s2[i] = "";
            else
                cin >> s2[i];
            if(max < s1[i].size() + s2[i].size())
                max = s1[i].size() + s2[i].size();
        }
        int gaps = 0;
        for(int i=0;i<n;i++)
            gaps += max - (s1[i].size() + s2[i].size());
        cout << gaps << endl;
    }
    return 0;
}