class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int>mpp;
        int complement = 0;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int current =  nums[i];
            complement = target - current;
            auto it = mpp.find(complement);
            if(it!= mpp.end())
            {
                // ans.push_back(it.second);
                // ans.push_back(i);
                return{it->second,i};
            }
            else
            {
                mpp[nums[i]]=i;
            }
        }
        return {};
    }
};