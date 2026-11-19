#include <iostream>
using namespace std;

long long log(long long n){
	if(n==1){
		return 0;
	}
	return  1+log(n/2);
}

int main(){
	long long n;
	cin>>n;
	cout<<log(n);
	return 0;
}