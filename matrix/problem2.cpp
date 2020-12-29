vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
{
    vector<int> ans;

    int row_start = 0,row_end = r-1,col_start = 0,col_end = c-1;

    while(row_start<=row_end && col_start<=col_end){

        for(int col = col_start;col<=col_end;col++){
            ans.push_back(matrix[row_start][col]);
        }
        row_start++;

        for(int row=row_start;row<=row_end;row++){
            ans.push_back(matrix[col_end][row]);
        }
        col_end--;

        if(row_start<=row_end){
            for(int col = col_end;col>=col_start;col--){
                ans.push_back(matrix[row_end][col]);
            }
        }
        row_end--;

        if(col_start<=col_end){
            for(int row=row_end;row>=row_start;row--){
                ans.push_back(matrix[row][col_start]);
            }
        }
        col_start++;
    }

    return ans;
}