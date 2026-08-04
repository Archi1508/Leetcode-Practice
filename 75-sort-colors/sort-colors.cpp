class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;

        // Count frequencies
        for (int num : nums) {
            if (num == 0)
                count0++;
            else if (num == 1)
                count1++;
            else
                count2++;
        }

        // Overwrite the array
        int index = 0;

        while (count0--)
            nums[index++] = 0;

        while (count1--)
            nums[index++] = 1;

        while (count2--)
            nums[index++] = 2;
    }
};