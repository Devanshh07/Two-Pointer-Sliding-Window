#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> grid = {{1,1,0,0},{0,0,1,0},{0,0,1,0},{0,0,0,1}};
    int m = grid.size();
    int n = grid[0].size();

vector<int> row(m,0);
vector<int> col(n,0);
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(grid[i][j]==1){
            row[i]++;
            col[j]++;
        }
    }
}
int cnt=0;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(grid[i][j]==1&&(col[j]>1||row[i]>1)){
            cnt++;
        }
    }
}
cout<<"server -> "<<cnt;


    return 0;
}