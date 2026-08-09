// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         map<int,int>mpp;
//         for(auto it:nums)
//         {
//             mpp[it]++;
//             if(mpp[it]>n/2)
//             {
//                 return it;
//             }
//         }
//     }
// };

// Moore Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =  nums.size();
        int candidate = nums[0];
        int count = 1;

        for(int i=1;i<n;i++)
        {
            if(candidate == nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count==0)
            {
                candidate = nums[i];
                count = 1;
            }
        }
        return candidate;
    }
};
