class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        set<int> checkSet;
        for(int i=0;i<nums.size();i++)
        {
            if(checkSet.find(nums[i]) == checkSet.end())
            {
                checkSet.insert(nums[i]);
            }else
            {
                checkSet.erase(checkSet.find(nums[i]));
            }
        }
        set<int>::iterator iter = checkSet.begin();
        vector<int> resVec;
        while(iter != checkSet.end())
        {
            resVec.push_back(*iter);
            iter++;
        }
        return resVec;        
    }
};
