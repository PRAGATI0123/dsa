class Solution {
public:
    bool isVowel(char &ch){
        return( ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    }
    bool halvesAreAlike(string s) {
        int n = s.size();
        int mid = n/2;
        int countLeft = 0;
        int countRight = 0;
       

        int i = 0 , j = mid;
        while(i< n/2 && j < n){
            if(isVowel(s[i])){
                countLeft++ ;
            }if(isVowel(s[j])){
                countRight++ ;
            }
            i++;
            j++;

        }

       return countLeft == countRight ;
        
    }
  
};