#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    map<string, int> m;
    int p=1;
    string s;
    for(int i=0;i<26;i++) {
        s = (char)(i + 97);
        m.insert(make_pair(s, p));
        p++;
    }
    for(int i=0;i<25;i++){
        for(int j=i+1;j<26;j++){
            s = (char)(i + 97);
            s += (char)(j + 97);
            m.insert(make_pair(s, p));
            p++;
        }
    }
    for(int i=0;i<24;i++){
        for(int j=i+1;j<25;j++){
            for(int k=j+1;k<26;k++) {
                s = (char) (i + 97);
                s += (char) (j + 97);
                s += (char) (k + 97);
                m.insert(make_pair(s, p));
                p++;
            }
        }
    }
    for(int i=0;i<23;i++){
        for(int j=i+1;j<24;j++){
            for(int k=j+1;k<25;k++) {
                for(int l=k+1;l<26;l++) {
                    s = (char) (i + 97);
                    s += (char) (j + 97);
                    s += (char) (k + 97);
                    s += (char) (l + 97);
                    m.insert(make_pair(s, p));
                    p++;
                }
            }
        }
    }
    for(int i=0;i<22;i++){
        for(int j=i+1;j<23;j++){
            for(int k=j+1;k<24;k++) {
                for(int l=k+1;l<25;l++) {
                    for(int n=l+1;n<26;n++) {
                        s = (char) (i + 97);
                        s += (char) (j + 97);
                        s += (char) (k + 97);
                        s += (char) (l + 97);
                        s += (char) (n + 97);
                        m.insert(make_pair(s, p));
                        p++;
                    }
                }
            }
        }
    }
//    for(auto i : m){
//        cout << i.first << " = " << i.second << endl;
//    }
    while(cin >> s){
        if(m.find(s) != m.end())
            cout << m[s] << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}