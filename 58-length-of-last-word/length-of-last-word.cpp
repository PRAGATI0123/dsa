class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx = s.find_last_not_of(' ')+1;//using c++ stl library that will find the last index has not space and plus 1 means index of the space after last word

        s.erase(idx);//it will erase all the trailing spaces(spaces after the last word)

        int last_space_idx = s.find_last_of(' '); //it will find the space from last word

        return last_space_idx == string::npos ?s.length(): s.length() - last_space_idx -1;
    }
};
//npos value is given when there is not space before the last word so in that case we will
//length of the string directly