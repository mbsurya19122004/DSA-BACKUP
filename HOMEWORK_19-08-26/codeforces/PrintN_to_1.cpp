#include <iostream>
using namespace std;

void Print_n_to_1(int n){
	if(n==0)return ;
	cout<<n;	
	if(n!=1)cout<<" ";
	Print_n_to_1(n-1);
}

int main(){
	int n;
	cin>>n;
	Print_n_to_1(n);
	return 0;
}