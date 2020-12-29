// easy yet important question.

bool search(vector<vector<int> > matrix, int n, int m, int x){

    int r = 0,c = m-1;
    bool found = false;

    while(r<n && c>= 0){
        if(matrix[r][c] == x){
            found = true;
            break;
        }
        else if(matrix[r][c] > x)
            c--;
        else
            r++;
    }

    if(found)
        return 1;
    else
        return 0;
}