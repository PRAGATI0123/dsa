class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) { 
        int size = nums.size();
        vector<int> neg;
        vector<int>pos;

        for(int i = 0 ; i<size ; i++){
            if(nums[i] <0)
            neg.push_back(nums[i]);
            else
            pos.push_back(nums[i]);
        }
        if(neg.size() == 0){
            for(int i= 0; i< pos.size() ; i++)
                pos[i] = pos[i]*pos[i];
                return pos;
            
        }
        if(pos.size() == 0){
            for(int i = 0; i< neg.size(); i++)
            neg[i] = neg[i] * neg[i];
            reverse(neg.begin(), neg.end());
            return neg;
        }

        int i = 0, j= 0;
        int id = 0;
        int m = neg.size();
        int n = pos.size();
        vector<int> res(m+n);
        for(int i= 0; i< m; i++)
        neg[i] = neg[i] *neg[i];
        reverse(neg.begin(), neg.end());

        for(int i = 0; i< n; i++)
        pos[i] =pos[i] * pos[i];

   while(i < m && j < n){
    if(neg[i] <= pos[j]){
        res[id++] = neg[i++];
    }
    else{
        res[id++] = pos[j++];
    }
}

while(i < m){
    res[id++] = neg[i++];
}

while(j < n){
    res[id++] = pos[j++];
}
      return res;
       
    }
};
    