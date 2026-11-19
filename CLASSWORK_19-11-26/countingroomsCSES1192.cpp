#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

void bfs(vector<int> source , int n , int m, vector<vector<bool>> &map){
    queue<vector<int>> q;
    q.push(source);
    while(!q.empty()){
        vector<int> cur = q.front();
        q.pop();
        map[cur[0]][cur[1]] = true;
        if(cur[0]+1 < n && !map[cur[0]+1][cur[1]]){
            q.push({cur[0]+1,cur[1]});
        }
        if(cur[0]-1>=0 && !map[cur[0]-1][cur[1]]){
            q.push({cur[0]-1,cur[1]});
        }
        if(cur[1]+1<m && !map[cur[0]][cur[1]+1]){
            q.push({cur[0],cur[1]+1});
        }
        if(cur[1]-1>=0 && !map[cur[0]][cur[1]-1]){
            q.push({cur[0],cur[1]-1});
        }
    }
}

void dfs(vector<int> source , int n , int m, vector<vector<bool>> &map){
    
    if(source[0]>=n || source[0] < 0 || source[1]>=m || source[1]<0 || map[source[0]][source[1]]){
        return ;
    }

    map[source[0]][source[1]] = true;

    vector<int> up = {source[0]+1,source[1]},down = {source[0]-1,source[1]},right = {source[0],source[1]+1},left = {source[0],source[1]-1} ;

    dfs(up,n,m,map);
    dfs(down,n,m,map);
    dfs(left,n,m,map);
    dfs(right,n,m,map);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , m ;
    cin >> n >> m ;
    vector<vector<bool>> map(n,vector<bool>(m,false));
    for(int i = 0 ; i < n ; i++){
        string x ;
        cin >> x ;
        for(int j = 0 ; j < m ; j++){
            if(x[j]=='#'){
                map[i][j] = true;
            }
        }
    }
    int count = 0;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(!map[i][j]){
                
                dfs({i,j},n,m,map);
                count++;
                
            }
        }
    }

    cout << count ;

    return 0;
}