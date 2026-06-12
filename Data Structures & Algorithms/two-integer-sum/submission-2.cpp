class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int map[nums.size()];
        int length=0;
        int found=0;
        vector<int> output(2);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<length;j++){
                if(map[j]==target-nums[i]){
                   output[0]=j;
                   output[1]=i;
                   found ++; 
                   break;
                }
            }
            if(found !=0){
                break;
            }
            map[i]=nums[i];
            length++;
        }
        return output;
    }
};
