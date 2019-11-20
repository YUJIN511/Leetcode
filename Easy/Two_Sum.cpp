class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> results;
        vector<int>::iterator it;
        int index;
        for(int i=0; i<nums.size(); i++){
            it=find(nums.begin()+i+1, nums.end(),target-nums[i]);
            if(it!=nums.end()){
                results.push_back(i);
                results.push_back(distance(nums.begin(),it));
                break;
            }
        }
        
        return results;
    }
};
