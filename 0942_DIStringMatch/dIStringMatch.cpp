class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> res;
        int min = 0;
        int max = S.size();
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='I')
            {
                res.push_back(min);
                min++;
            }else
            {
                res.push_back(max);
                max--;
            }
        }
        
        res.push_back((min+max)/2);
        return res;
    }
};