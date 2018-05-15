#include <bits/stdc++.h>
 
#define pb push_back
#define mp make_pair
 
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n,p,q;
		cin >> n >> p >> q;
		ll a[n];
		for(int i=0;i<n;i++)
		    cin >> a[i];
		ll count=0;
		sort(a,a+n);
		for(int i=0;i<n;i++){
			ll x = a[i]/2;
			if(a[i]!=0){
			    if(a[i]&1){
				    if(p>0){
				        if(q>=x){
			                p-=1; 
                            q-=x;
				            count++;
				        }
				        else if((2*q+p)>=a[i]){
					        p-=(a[i]-2*q);
					        q=0;
					        count++;
				        }
				    }
			    }
			    else{
			        if(q>=x){
			            q-=x;
			            count++;
			        }
			        else if(2*q+p>=a[i]){
			            p-=(a[i]-2*q);
			            q=0;
			            count++;
			        }
			    }
			}
		}
		cout << count << endl;
    }
    return 0;
}