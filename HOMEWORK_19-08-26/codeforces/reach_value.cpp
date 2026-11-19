#include <iostream>
using namespace std;

bool reach_value(long long n ,int i){
	if(i==n){
		return true;
	}
	if(i>n){
		return false;
	}
	return reach_value(n,i*10) || reach_value(n,i*20);
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long x;
		cin>>x;
		if(reach_value(x,1)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
return 0;
}