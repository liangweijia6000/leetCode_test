class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxCount = 0;
        int currCount = 0;
        
        for(int i=0;i<s.length();i++)
        {
            map<char, int> checkMap;
            for(int k=i;k<s.length();k++)
            {
                if(checkMap.find(s[k]) == checkMap.end())
                {
                    checkMap[s[k]] = 1;
                    currCount++;
                    if(k == s.size()-1)
                        if(maxCount < currCount)
                        {
                            maxCount = currCount;
                            currCount = 0;
                        }
                            
                }else
                {
                    if(maxCount < currCount)
                        maxCount = currCount;
                    
                    checkMap.clear();
                    
                    currCount = 0;
                    break;
                }
            }
        }
        return maxCount;      
    }
};
