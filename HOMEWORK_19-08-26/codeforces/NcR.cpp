#include <iostream>
using namespace std;

long long solve(int n,int r){
	if(r>n)return 0;
	if(r==0 ||n==r){
		return 1;
	}
	return solve(n-1,r-1)+solve(n-1,r);
}

int main(){
	int n;
	cin>>n;
	int r;
	cin>>r;
	cout<<solve(n,r);
	return 0;
}