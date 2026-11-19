#include <iostream>
using namespace std;

long long sequence(long long n){
	if(n==1){
		return 1;
	}
	if(n %2==1){
		return 1+ sequence(3*n+1);
	}else{
		return 1+sequence(n/2);
	}
}

int main(){
	long long n;
	cin>>n;
	cout<<sequence(n);
	return 0;
}