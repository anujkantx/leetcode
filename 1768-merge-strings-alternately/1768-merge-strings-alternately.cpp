class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        
        string ans;
        int k=0;
        
        while(ans.size()!=m+n){
            if(k<m){
                ans+=word1[k];
                }
            if(k<n){
                ans+=word2[k];
                }
            k++;
        }
        return ans;
}
    
};