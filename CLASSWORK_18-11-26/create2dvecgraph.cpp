#include <iostream>
#include <vector>
using namespace std;

void creategraph(vector<vector<int>> &adj , int u , int v , bool dir){
    adj[u].push_back(v);
    if(!dir){
        adj[v].push_back(u);
    } 
}


void print(vector<vector<int>> &adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << i << " -> ";

        for (int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " , ";
        }

        cout << endl;
    }
}

int main(){
    int v , e;
    cin >> v ; cin >> e ;
    vector<vector<int>> adj(v,vector<int>(0));
    
    for(int i = 0 ; i < e ; i++ ){
        int u , v ;
        cout << "enter u : ";
        cin >> u ;
        cout << "enter v : ";
        cin >> v ;
        creategraph(adj,u,v,false);
    }

    print(adj);


    return 0 ;
}