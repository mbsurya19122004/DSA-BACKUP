#include <iostream>
using namespace std;

void rec(int n, int &ans,int &s){
	if(n==s){
		ans++;
		return ;
	}
	if(n<s){
		return ;
	}
	rec(n-1,ans,s);
	rec(n-2,ans,s);
	rec(n-3,ans,s);
}
int main(){
	int s , e;
	cin >> s;
	cin >> e;
	int ans = 0;
	rec(e,ans,s);
	cout << ans ;

	return 0;
}
