#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "PERFECTION OUTPUT\n";
    while(true){
        int n;
        cin >> n;
        if(n==0)
            break;
        if(n==1){
            cout << right << setw(5) << n << "  DEFICIENT\n";
            continue;
        }
        int sum=1;
        for(int i=2;i<=(int)sqrt(n);i++) {
            if(i==n/i && n%i==0)
                sum += i;
            else if (n % i == 0)
                sum += i + n / i;
        }
        if(sum==n)
            cout << right << setw(5) << n << "  PERFECT\n";
        else if(sum > n)
            cout << right << setw(5) << n << "  ABUNDANT\n";
        else
            cout << right << setw(5) << n << "  DEFICIENT\n";
    }
    cout << "END OF OUTPUT\n";
    return 0;
}