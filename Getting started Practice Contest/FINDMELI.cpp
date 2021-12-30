#include <iostream>


using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int result = -1;
	while(n--){
		int i;
		cin >> i;
		if(i == k){
			result = 1;
			break;
		}
	}
	cout << result;
	return 0;
}