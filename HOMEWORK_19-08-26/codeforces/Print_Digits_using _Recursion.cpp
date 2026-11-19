#include <iostream>
using namespace std;

void digit(int n){
	if(n<10){
		cout<<n<<" ";
		return ;
	}
	digit(n/10);
	cout<<n%10<<" ";
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		digit(x);
		cout<<endl;
	}
	return 0;
}