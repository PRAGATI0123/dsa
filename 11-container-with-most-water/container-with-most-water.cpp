class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int n = height.size();
        int left = 0, right = n - 1;

        while (left < right) {
            int w = right - left;
            int ht = min(height[left], height[right]);
            int area = w * ht;

            maxWater = max(maxWater, area);

            height[left] < height[right] ? left++ : right-- ;
            
        }
        return maxWater;
    }
};