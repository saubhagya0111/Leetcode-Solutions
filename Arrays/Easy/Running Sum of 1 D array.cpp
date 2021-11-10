class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int element;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            element=0;
            for(int j=0;j<=i;j++)
            {
                element+=nums[j];
            }
            v.push_back(element);
        }
        return v;
    }
};
