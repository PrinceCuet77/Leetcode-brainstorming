class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector < int > result;
        for ( auto value : nums ) 
            result.push_back(nums[value]);
        
        return result;
    }
};