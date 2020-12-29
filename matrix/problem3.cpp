vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m){

    vector<int> ans;

    int row_start = 0,row_end = n-1,col_start = 0,col_end = m-1;

    if(n==1){
        int i=0;
        while(i<m){
            ans.push_back(matrix[0][i++]);
        }
    }
    else if(m==1){
        int i=0;
        while(i<n){
            ans.push_back(matrix[i++][0]);
        }
    }
    else{

        for(int col = col_start;col<col_end;col++){
            ans.push_back(matrix[row_start][col]);
        }
        for(int row = row_start;row<row_end;row++;){
            ans.push_back(matrix[row][col_end]);
        }
        for(int col = col_end;col>=col_start;col--){
            ans.push_back(matrix[row_end][col]);
        }
        for(int row=row_end;row>=row_start;row--){
            ans.push_back(matrix[row][col_start]);
        }
    }

    return ans;
}