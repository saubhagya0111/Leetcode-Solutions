class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int sum=0;
        for(auto m1=m.begin();m1!=m.end();++m1){
            if(m1->second==1){
                sum+=(m1->first);
            }
        }
        return sum;
    }
};
