class Solution {
public:
    bool isAnagram(string s, string t) {
        //first we have to check if the length is equal or not

        if( s.length() != t.length()){
            return false;
        }
      // create a hashmap for both strings and compare both of them
      unordered_map<char, int> stringS;
      unordered_map<char, int> stringT;
      //iterate and compare:

       for( int i = 0; i < s.length() ; i++){
        stringS[s[i]]++;
        stringT[t[i]]++;
       }

       return stringS == stringT;
      

        
    }
};