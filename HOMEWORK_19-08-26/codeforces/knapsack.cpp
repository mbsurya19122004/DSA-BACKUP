#include <iostream>
using namespace std;

int val(int w[],int p[],int n,int cap,int i){
	if(i==n){
		return 0;
	}
	if(cap <w[i]){
		return val(w,p,n,cap,i+1);
	}
	return max(p[i]+val(w,p,n,cap-w[i],i+1) ,val(w,p,n,cap,i+1));
}

int main(){
	int n,cap;
	cin>>n;
	cin>>cap;
	int w[n];
	int p[n];
	for(int i=0;i<n;i++){
		cin>>w[i];
		cin>>p[i];
	}
	cout<<val(w,p,n,cap,0);
	return 0;
}
	