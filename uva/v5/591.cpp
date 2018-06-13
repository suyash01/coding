#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    while(cin >> n, n){
        c++;
        vector<int> v(n);
        int total = 0;
        for(int i=0;i<n;i++) {
            cin >> v[i];
            total += v[i];
        }
        int h = total/n;
        int moves = 0;
        for(int i=0;i<n;i++){
            moves += abs(h-v[i]);
        }
        cout << "Set #" << c << endl;
        cout << "The minimum number of moves is " << moves/2 << ".\n\n";
    }
    return 0;
}