class Solution {
public:
    
void dfs(vector<vector<int>>&image,int i,int j,int r,int col,int prevcolor,int newcolor){
    
    
    // base case
    if(i<0 || i>r || j<0 || j>col || image[i][j] != prevcolor)
    return;
    
    // change color.
    image[i][j] = newcolor;
    
    
    // traversal
    // up,down,left,right;
    
    dfs(image,i-1,j,r,col,prevcolor,newcolor);
    dfs(image,i+1,j,r,col,prevcolor,newcolor);
    dfs(image,i,j-1,r,col,prevcolor,newcolor);
    dfs(image,i,j+1,r,col,prevcolor,newcolor);
    
    
    
    
}
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        
        if(image[sr][sc] == color)
        {return image;}
        
        if(image[sr][sc] != color){
            dfs(image,sr,sc,image.size()-1,image[0].size()-1,image[sr][sc],color);
        }
        
        return image;
        
        
    }
};
