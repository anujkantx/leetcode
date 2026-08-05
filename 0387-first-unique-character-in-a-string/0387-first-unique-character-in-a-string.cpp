class Solution {
public:
    int firstUniqChar(string s) {
        map<char , int> frequency;
        for(char ch : s){
            if(frequency.count(ch)> 0){
                frequency[ch] = frequency[ch] + 1;
            }else{
                frequency[ch] = 1;
            }
        }
        for(int i=0; i<s.size(); i++){
            if(frequency[s[i]]==1){
                return i;
            }
        }
        return -1;
        
    }
};