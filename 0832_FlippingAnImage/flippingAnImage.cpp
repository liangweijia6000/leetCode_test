class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<(A[i].size())/2;j++)
            {
                int size = A[i].size();
                int temp = A[i][j];
                A[i][j] = 1 - A[i][size-j-1];
                A[i][size-j-1] = 1 - temp;
            }
            if(A[i].size()%2==1)
            {
                A[i][(A[i].size()/2)] = 1 - A[i][(A[i].size()/2)];
            }
        }
        return A;
    }
};