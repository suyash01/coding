#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,c=0;
    while(cin >> n >> p, n || p){
        c++;
        string s,name;
        cin.ignore();
        for(int i=0;i<n;i++)
            getline(cin, s);
        double price = LONG_LONG_MAX;
        int mr = -1;
        while(p--){
            getline(cin, s);
            double d;
            int r;
            cin >> d >> r;
            if(r > mr){
                mr = r;
                name = s;
                price = d;
            }
            else if(r==mr && d<price){
                mr = r;
                name = s;
                price = d;
            }
            cin.ignore();
            while(r--)
                getline(cin, s);
        }
        if(c>1)
            cout << endl;
        cout << "RFP #" << c << endl;
        cout << name << endl;
    }
    return 0;
}