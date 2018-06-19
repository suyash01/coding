#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int t, n;
        double d, p;
        cin >> t >> d >> p >> n;
        if(t<0)
            break;
        map<int, double> m;
        while(n--) {
            int mn;
            double r;
            cin >> mn >> r;
            m[mn] = r;
        }
        double cr = m[0];
        double amt = (p+d)*(1-cr);
        if(amt>p){
            cout << "0 months\n";
            continue;
        }
        for (int i = 1; i <= t; ++i) {
            if(m.find(i) != m.end())
                cr = m[i];
            amt = amt*(1-cr);
            if(amt>p-i*p/t){
                if(i==1)
                    cout << "1 month\n";
                else
                    cout << i << " months\n";
                break;
            }
        }
    }
    return 0;
}