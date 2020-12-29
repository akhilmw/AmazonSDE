// rotate matrix 90 (clockwise);

void rotate(vector<vector<int> >& matrix){

    int n = matrix.size();
    // transpose matrix first

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    // reverse rows;
    for(int i =0;i<n;i++){
        int start = 0;
        int end = n-1;

        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }
}


// rotate matrix 90 (anticlockwise)

void rotate(vector<vector<int> >& matrix){

    // transpose matrix
    int n = matrix.size();

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    // reverse columns;

    for(int j=0;j<n;j++){
        int start = 0;
        int end = n-1;

        while(start<end){
            swap(matrix[start][j],matrix[j][end]);
            start++;end--;
        }
    }
}

