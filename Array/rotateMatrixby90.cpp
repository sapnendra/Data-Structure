void reverseVector(vector<int>& vec) {
        int n = vec.size();
        int start = 0;
        int end = n-1;
        while(start < end) {
            swap(vec[start++], vec[end--]);
        }
    } 

    void rotate(vector<vector<int>>& matrix) {
       int row = matrix.size();

        // transpose
    for(int i=0; i<row; i++) {
        for(int j=i; j<matrix[i].size(); j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

        // reverse -> 2d marix ki saari rows ko.
        
        // total rows kitni hai = o -> n-1 
        for(int i=0; i<row; i++) {
            reverseVector(matrix[i]);
        }
    }