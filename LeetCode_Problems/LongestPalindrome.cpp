// problem link
// https://leetcode.com/problems/longest-palindrome/description/

class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;

        for(char i : s){
            mp[i]++;
        }

        int count = 0,max_odd = 0;
        bool flag = false;

        for(auto i : mp){
            if(i.second % 2 == 1){
                count += i.second-1;
                flag = true;
            }else if(i.second%2 == 0){
                count += i.second;
            }
        }

        // count += max_odd;
        if(flag){
            return count+1;
        }else{
            return count;
        }
    }
};
