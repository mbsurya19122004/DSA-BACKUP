#include <iostream>
using namespace std;

void weird_algo(long long n){
	if(n==1){
		cout<<n;
		return;
	}
	if(n%2==0){
		cout<<n<<" ";
		n/=2;
	}else{
		cout<<n<<" ";
		n*=3;
        n++;
	}
    weird_algo(n);
}

int main(){
	long long n;
	cin>>n;
	weird_algo(n);
	return 0;
}

		