class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

       int n = nums.size();

       unordered_map<int,int>indices;

       for(int i = 0 ; i < n ; i++){
         int remainder = target - nums[i];

         if(indices.find(remainder) != indices.end()){
            return { indices[remainder], i};
         }
         indices[nums[i]] = i;
       }
       return{};
        
    }
};