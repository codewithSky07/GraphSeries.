class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j){
        
        // base
        if(i<0 || i>grid.size()-1 || j<0 || j>grid[0].size()-1 || grid[i][j] != '1')
        return ;
            
            
        // visited.
        grid[i][j] = 2;
        
        // traversal
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        
        
        
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int noofislands =0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                
                
                // if i got '1' got island.
                if(grid[i][j] == '1'){
                    noofislands++;
                    // make it visited and do traversal i.e dfs
                    dfs(grid,i,j);
                }
            }
        }
        
        return noofislands;
        
        
        
    }
};
