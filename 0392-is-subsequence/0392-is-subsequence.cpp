class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.size();
        int slen = s.size();
        int k = 0;
        
        if(s==t) return true;
        for(int i=0; i<n; i++){
            if(t[i]==s[k]){
                k++;
            }
            if(k==slen) return true;
        }
        return false;
    }
};