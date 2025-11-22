class Solution {
public:
    string reverseWords(string s) {
        //reverse the whole string first
        reverse(s.begin(),s.end());

        int i = 0;
        int l = 0, r = 0 ;//l and r will reverse the reversed words 

        int n = s.length();

        while(i<n){
            while ( i< n && s[i] != ' '){//i ko agr char dikha to r ko dega and i++, r++
                  s[r] = s[i];
                  i++ ;
                  r++ ;

            }

            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                s[r] = ' ';
                r++ ;

                  l = r;
            }
            i++; // ye badhta rhega isko rokna nhi h
        }
        s = s.substr(0,r-1);
        return s;
    }
};