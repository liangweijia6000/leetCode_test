class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        map<int,int> tempMap;
        for(int i=0;i<len;i++)
        {
            int findNum = target - nums[i];
            if(tempMap.find(findNum) != tempMap.end())
            {
                return {i, tempMap[findNum]};
            }
            tempMap[nums[i]] = i;
        }
    }
};
