#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string a,b;
	while(cin >> a >> b){
		if(a=="0" && b=="0")
			break;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		if(a.size()<b.size()){
            while(a.size()!=b.size())
            	a+='0';
        }
        else{
            while(a.size()!=b.size())
            	b+='0';
        }
        int carry = 0;
        int ncarry = 0;
        for(int i=0;i<a.size();i++){
            if((a[i]-'0')+(b[i]-'0')+carry>9){
                ncarry++;
                carry=1;
            }
            else
            	carry=0;
        }
        if(ncarry==0)
        	cout << "No carry operation." << endl;
        else if(ncarry==1)
        	cout << 1 << " carry operation." << endl;
        else
        	cout << ncarry << " carry operations." << endl;
	}
	return 0;
}