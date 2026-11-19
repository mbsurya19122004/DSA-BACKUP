#include <iostream>
#include <vector>
using namespace std;

long long sol(vector<int> &arr){
	vector<long long> val(100001,0);
	int high = arr[0];
	for(int i : arr){
		val[i]+=i;
		high = max(high,i);
	}
	long long a = 0;
	long long b = 0;
	for(int i = 1 ; i < 100001 ; i++){
		if(high<i) break;
		long long c = max(b,a+val[i]);
		a = b;
		b = c;
	}
	return b;
}

int main(){
	int n ;
	cin >> n ;
	vector<int> arr(n);
	for(int i = 0 ;  i < n ; i++){
		cin  >> arr[i];
	}
	cout << sol(arr);
	return 0;
}
