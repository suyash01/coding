#include<bits/stdc++.h>
using namespace std;

int maxSum=0;

int kadane(int n, const int *arr){
    int max = 0;
    int maxSoFar = 0;
    for(int i=0; i < n; i++){
        maxSoFar += arr[i];
        if(maxSoFar < 0){
            maxSoFar = 0;
        }
        if(max < maxSoFar){
            max = maxSoFar;
        }
    }
    return max;
}

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];
    int temp[n];
    for(int left = 0; left < n ; left++){
        for(int i=0; i < n; i++){
            temp[i] = 0;
        }
        for(int right = left; right < n; right++){
            for(int i=0; i < n; i++){
                temp[i] += arr[i][right];
            }
            int res = kadane(n, temp);
            if(res > maxSum){
                maxSum = res;
            }
        }
    }
    cout << maxSum << endl;
    return 0;
}