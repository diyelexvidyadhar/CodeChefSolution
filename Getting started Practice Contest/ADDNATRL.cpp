#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int sum = 0;

    while(n){
    	sum += n;
    	n--;
    }
    cout << sum;

    return 0;
}