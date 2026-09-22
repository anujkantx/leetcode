class Solution {
public:
    void binn(int n, int last, string word, vector<string>& ans){
        if(n==0){
            ans.push_back(word);
            return;
        }
        if(last==0){
            binn(n-1, 1, word+"1", ans);
        }else{
            binn(n-1, 0, word+"0", ans);
            binn(n-1, 1, word+"1", ans);
        }

    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        binn(n, 1, "", ans);
        return ans;
    }
};