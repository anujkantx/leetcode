class Solution {
public:
long long countCommas(long long n) {
        long long comma = 0;
        if( n <999) return 0;
        long long x = 999999;
        int i=1;
        while(true){
            if(n<=x){
                comma += (n-(x%(long long)pow(10, 3*i))) *i;
                return comma;
            }
            if (n>x){
                comma += (x-(x%(long long)pow(10, 3*i))) *i;
                i++;
                x= x*1000+999;
            }
        }
        return comma;

    }
};