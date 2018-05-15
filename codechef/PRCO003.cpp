#include <bits/stdc++.h>
 
#define pb push_back
#define mp make_pair
 
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

priority_queue<int> max_heap_left;
priority_queue<int,vector<int>,greater<int>> min_heap_right;

void calculate_median(double x,double &median){
    if (max_heap_left.size() > min_heap_right.size()){
        if (x < median){
            min_heap_right.push(max_heap_left.top());
            max_heap_left.pop();
            max_heap_left.push(x);
        }
        else
            min_heap_right.push(x);
        median = ((double)max_heap_left.top()
                +(double)min_heap_right.top())/2.0;
    }
    else if (max_heap_left.size()==min_heap_right.size()){
        if (x < median){
            max_heap_left.push(x);
            median = (double)max_heap_left.top();
        }
        else{
            min_heap_right.push(x);
            median = (double)min_heap_right.top();
        }
    }
    else{
        if (x > median){
            max_heap_left.push(min_heap_right.top());
            min_heap_right.pop();
            min_heap_right.push(x);
        }
        else
            max_heap_left.push(x);
        median = ((double)max_heap_left.top()
                 + (double)min_heap_right.top())/2.0;
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    double a[n];
    double median = 0;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++){
        calculate_median(a[i], median);
        printf("%.1f\n",median);
    }
    return 0;
}