#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double n;
        cin >> n;
        vector<int> v(n);
        double avg;
        double sum=0;
        for(int i=0;i<n;i++) {
            cin >> v[i];
            sum += v[i];
        }
        avg = sum/n;
        int c=0;
        for(int i=0;i<n;i++)
            if(v[i]>avg)
                c++;
        double p = c*(100.0/n);
        printf("%.3lf",p);
        cout << "%\n";
    }
    return 0;
}