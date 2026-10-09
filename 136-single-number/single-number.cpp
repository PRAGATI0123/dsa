class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //cancelling out same number , and in programming we can do this by applying XOR fxn
        //and print the single number , n^n = 0 and n^0 = n

        int ans = 0; //intitalizing the answer

        for( int val: nums){ //loop for every value at index of nums vector
            ans = ans^val; //xor operation 
        }
        return ans;       
    }
};