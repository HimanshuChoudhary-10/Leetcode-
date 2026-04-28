class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int s=nums.size();
        for(int i=1;i<s;i++){
            if(nums[k]!=nums[i]){
                nums[k+1]=nums[i];
                 k++;
                }
               
            }
        return k+1;}
           
    };
