class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp(heights);
        std::sort(temp.begin(), temp.end());
        int res = 0;
        for(int i=0;i<temp.size();i++)
        {
            if(heights[i] != temp[i])
            {
                res++;
            }
        }
        
        return res;        
    }
};