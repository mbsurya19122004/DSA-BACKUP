#include <iostream>
using namespace std;

int ways(int current,int end){
	if(current==end)return 1;
	if(current >end)return 0;
	return ways(current+1,end)+ways(current+2,end)+ways(current+3,end);
}

int main(){
	int current,end;
	cin>>current>>end;
	int ans=ways(current,end);
	cout<<ans;
	return 0;
}