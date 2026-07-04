class Solution {
public:
     typedef pair<int,int>P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp; //map thst stores number and its frequency
        for(int &num : nums){
            mp[num]++;
        }

        //store in min heap for max value of k
        priority_queue<P, vector<P>, greater<P>> pq;// it makes min heap

        //push elements in min heap maintain size of k only
        for(auto &it:mp){
            int value = it.first;
            int freq = it.second;

            pq.push({freq, value});

            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> result;
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;  
    }
};
        
    