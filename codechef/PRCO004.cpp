#include <bits/stdc++.h>
 
#define pb push_back
#define mp make_pair
 
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
		cin >> s;
        bool k = true;
		int res = 0;
        bool test = false;
		for(int i=0;i<s.length();i++){
			if(s[i]=='1'){
				if(test==0&&res>0){
                    cout << "NO" << endl;
                    k = 0;
                    break;
                }
				res++;
				test = 1;
			}
			else
				test=0;
		}
		if(k&&res)
            cout << "YES" << endl;
		if(res==0)
            cout << "NO" << endl;
    }
    return 0;
}