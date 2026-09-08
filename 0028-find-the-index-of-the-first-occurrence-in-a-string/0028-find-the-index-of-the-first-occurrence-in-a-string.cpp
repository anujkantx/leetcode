class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int h = haystack.size();

        if(h<n) return -1;
        if(needle == haystack) return 0;

        for(int i=0; i<=h-n; i++){
            if (haystack.substr(i,n) == needle){
                return i;
            }
        }
        return -1;
    }
};