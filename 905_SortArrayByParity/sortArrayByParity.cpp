class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int size = A.size();
        vector<int> res(size);
        int pos1=0;
        int pos2=size-1;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
            {
                res[pos1] = A[i];
                pos1++;
            }else
            {
                res[pos2] = A[i];
                pos2--;
            }
        }
        
        return res;
        
    }
};
