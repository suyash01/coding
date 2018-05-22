#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b,h,w;
    while(cin >> n >> b >> h >> w){
        int minBudget = INT_MAX;
        while(h--) {
            int r;
            cin >> r;
            for (int i = 0; i < w; ++i) {
                int a;
                cin >> a;
                if (a >= n && r * n <= b && r * n < minBudget)
                    minBudget = r * n;
            }
        }
        if(minBudget!=INT_MAX)
            cout << minBudget << endl;
        else
            cout << "stay home\n";
    }
    return 0;
}