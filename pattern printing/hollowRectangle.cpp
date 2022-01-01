#include <bits/stdc++.h>


using namespace std;



int main(){
	int c,r;
	cin >> c >> r;
	for(int row = 0;row < r; ++row){
		cout << "* ";
		for(int column = 1; column < r; ++column){
			if(row == 0 || row == r-1){
				cout << "* ";
			}else{
				cout << "  ";
			}
		}
		cout << "* ";
		cout << endl;
	}
}