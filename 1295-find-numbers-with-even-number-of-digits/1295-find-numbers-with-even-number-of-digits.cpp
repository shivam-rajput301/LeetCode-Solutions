class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int b=0;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int count=0;
            while(a>0){
                a=a/10;
                count++;
            }
            if(count%2==0){
                b++;
            }
        }
    return b;
    }
};