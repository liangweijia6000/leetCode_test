class Solution {
public:
    int hammingDistance(int x, int y) {
        int temp = x ^ y;
        int res = 0;
        while(temp)
        {
            if(temp & 1)
            {
                res++;
            }
            temp >>= 1;
        }
        return res;
        
    }
};