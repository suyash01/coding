#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int l;
        cin >> l;
        int a[l];
        for(int i=0;i<l;i++)
            cin >> a[i];
        int swaps = 0;
        for(int i=0;i<l;i++){
            for(int j=1;j<l;j++){
                if(a[j-1]>a[j]){
                    swaps++;
                    int t = a[j-1];
                    a[j-1] = a[j];
                    a[j] = t;
                }
            }
        }
        cout << "Optimal train swapping takes " << swaps << " swaps.\n";
    }
    return 0;
}