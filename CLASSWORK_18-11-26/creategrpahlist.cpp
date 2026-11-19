#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
using namespace std;

void creategraph(unordered_map<int , list<int>> &adj , int u , int v , bool dir){
    adj[u].push_back(v);
    if(!dir){
        adj[u].push_back(v);
    }
}

void print(unordered_map<int , list<int>> &adj){
    for(auto &x : adj){
        cout << x.first << " : ";
        for(int i : x.second){
            cout << i << " , ";
        }
        cout << endl ;
    }
}

int main(){
    unordered_map<int , list<int>> adj;
    int v , e;
    cin >> v ; cin >> e ;
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