class Solution {
public:
    string toLowerCase(string str) {
        string res;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                res.push_back(str[i]+32);
            }else
            {
                res.push_back(str[i]);
            }
        }
        return res;        
    }
};
