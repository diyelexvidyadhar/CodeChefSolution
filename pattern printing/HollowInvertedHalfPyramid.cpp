#include <bits/stdc++.h>
using namespace std;

/*

* * * *
*   *
* *
*

*/

int main(){
	int n;
	cin >> n;
	for(int row = 0; row < n; ++row){
		cout << "*";
		for(int column = 1; column < n - row - 1; ++column){
			if(row == 0 || row == n-1)
			   cout << " *";
			else
				cout << "  ";
		}
		if(row != n-1)
		cout << " *";

		cout << endl;
	}
}