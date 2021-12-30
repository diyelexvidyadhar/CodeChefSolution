#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = n;
   long long int even_sum = 0;
    long long int odd_sum = 0;
    int i = 1;
    while(n){
    	if(i%2 == 0){
    		even_sum += i;
    		n--;
    	}
    	i++;
    }
    i = 1;
    n = count;
    while(n){
    	if(i%2 != 0){
    		odd_sum += i;
    		n--;
    	}
    	i++;
    }
    cout << odd_sum << " " << even_sum;

    return 0;
}