#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int h;
        double u,d,f;
        cin >> h >> u >> d >> f;
        if(h==0)
            break;
        double fa = f/100*u;
        double sh = 0;
        for(int i=1;;i++){
            if(u>0)
                sh += u;
            if(sh>h){
                cout << "success on day " << i << endl;
                break;
            }
            sh -= d;
            u -= fa;
            if(sh<0){
                cout << "failure on day " << i << endl;
                break;
            }
        }
    }
    return 0;
}