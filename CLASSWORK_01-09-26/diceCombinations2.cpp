#include <iostream>
#include <vector>
#include <cmath>
using namespace std;




int sol(int n){
	const int MOD= 1e9 + 7;
	vector<int> dp(n+1,0);
	dp[0] = 1;
	for(int i = 1 ; i<= n ; i++){
		
		for(int j = 1 ; j <=6 ;j++){
			if(i-j>=0){
				dp[i]+=dp[i-j];
				dp[i]%=MOD;
			}
	}}
	return dp[n];
}

int main(){
	int n ;
	cin >> n ;

	cout << sol(n);
	return 0;
}
