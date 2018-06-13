#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        char s[10];
        cin >> s;
        if(!strcmp(s, "0:00"))
            break;
        double h,m;
        sscanf(s, "%lf%*c%lf", &h, &m);
        double hd,md;
        hd = h*30 + m*0.5;
        md = m*6;
        printf("%.3lf\n", min(abs(hd-md), 360-abs(hd-md)));
    }
    return 0;
}