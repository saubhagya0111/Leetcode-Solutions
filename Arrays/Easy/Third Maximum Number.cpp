class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int ans;
        if(s.size()>=3)
        {
            for(auto i1=s.begin();i1!=s.end();i1++){
                v.push_back(*i1);
            }
            sort(nums.begin(),nums.end());
            ans = v[v.size()-3];
        }
        else 
        {
            ans = *max_element(nums.begin(),nums.end());
        }
        return ans;
    }
};
