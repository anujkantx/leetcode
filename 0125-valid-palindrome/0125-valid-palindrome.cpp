class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string newstring;
        for(int i=0; i<n; i++){
            if(s[i]>='A' && s[i]<='Z'){
                newstring+=tolower(s[i]);
            }else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                newstring+=s[i];
            }else{
                continue; 
            }
        }

        int k = newstring.size();
        int i = 0;
        int j = k-1;
        while(i<j){
            if(newstring[i]!=newstring[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
        
    }
};