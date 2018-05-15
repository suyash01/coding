#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int f,m,c,ma;
	cin >> f >> m >> c >> ma;
	int lar = 2*f;
    int mid = 2*m;
    int sm = ma>c?ma:c;
    if(2*ma<mid && 2*ma>=sm && 2*c>=sm)
        printf("%d %d %d", lar, mid, sm);
    else
        printf("-1");
	return 0;
}