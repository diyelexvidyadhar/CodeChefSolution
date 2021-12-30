#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(int a, int b, int c){
	if( a >= b && a >= c)
		return b > c ? b : c;
	return getSecondLargest(b,c,a);
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << getSecondLargest(a,b,c);
    return 0;
}