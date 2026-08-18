// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         vector<int>leftMax(n,0);
//         vector<int>rightMax(n,0);
//         leftMax[0] = height[0];
//         rightMax[n-1] =  height[n-1];

//         int ans = 0;

//         for(int i=1;i<n;i++)
//         {
//             leftMax[i] = max(leftMax[i-1],height[i]);
//         }

//         for(int i=n-2;i>=0;i--)
//         {
//             rightMax[i] = max(rightMax[i+1],height[i]);
//         }

//         for(int i=0;i<n;i++)
//         {
//             ans+= min(leftMax[i],rightMax[i])-height[i];
//         }
//         return ans;


//     }
// };


//TWO POINTER -  AS WE ARE USING 2 EXRA SPACES TO STORE MAX EVERYTIME RATHER WE CAN USE TWO POINTERS AS THERE IS NO NEED IN FUTURE OF THESE VALUES.

class Solution {
public:
    int trap(vector<int>& height) {
       int n = height.size();
       int l = 0;
       int r = n-1;
       int ans = 0;
       int leftMax = 0;
       int rightMax = 0;
       while(l<r)
       {
        leftMax = max(leftMax,height[l]);
        rightMax = max(rightMax,height[r]);

        if(leftMax < rightMax)
        {
            ans += leftMax - height[l];
            l++;
        }
        else
        {
            ans += rightMax - height[r];
            r--;
        }
       }
       return ans;
    }
};