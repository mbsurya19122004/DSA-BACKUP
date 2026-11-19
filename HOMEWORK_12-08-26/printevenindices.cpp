#include <iostream>
#include <vector>

using namespace std;

void rec(vector<int> &arr,int n){
	if(n<0) return ;
	if(n%2==0) cout << arr[n] << " " ;
	rec(arr,n-1);
}
int main(){
	
	int n ;
	cin >> n;
	vector<int> arr;
	for(int i = 0 ; i < n ; i++){
		int x ;
		cin >> x;
		arr.push_back(x);
	
	}

	rec(arr,n-1);


	return 0 ;
}
