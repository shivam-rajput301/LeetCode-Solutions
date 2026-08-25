class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int current_number=nums[i];
            int digits=0;
            while(current_number>0){
                current_number=current_number/10;
                digits++;
            }
            if(digits%2==0){
                count++;
            }
        }
        return count;
    }
};