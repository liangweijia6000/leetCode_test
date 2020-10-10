class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> resVec;
        int sum = 0;
        for(auto& it:nums)
        {
            sum += it;
            resVec.push_back(sum);
        }

        return resVec;
    }
};