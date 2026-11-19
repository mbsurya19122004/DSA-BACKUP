#include <iostream>
#include <vector>
using namespace std;

int max_path(vector<vector<int>>&mat ,int i,int j ,int n,int m){
	if(i==n-1 && j==m-1){
		return mat[i][j];
	}
	if(i==n-1){
		return mat[i][j]+max_path(mat,i,j+1,n,m);
	}
	if(j==m-1){
		return mat[i][j]+max_path(mat,i+1,j,n,m);
	}
	return max(mat[i][j]+max_path(mat,i+1,j,n,m) ,mat[i][j]+max_path(mat,i,j+1,n,m));
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>>mat(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
	}
	cout<<max_path(mat,0,0,n,m);
	return 0;
}