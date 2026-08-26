class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(j=i+1;j<i;j++){
                if(nums[i]==nums[j]){
                    return true;
                }else{
                    return false;
                }
            }
        }
    }
};