class Solution {
public:
long long countCommas(long long n) {
        long long comma = 0;
        if( n <999) return 0;
        long long z = 999;
        long long x = 999999;
        int i=1;
        while(true){
            if(n<=x){
                comma += (n-z)*i;
                return comma;
            }
            if (n>x){
                comma += (x-z)*i;
                i++;
                x= x*1000+999;
                z= z*1000+999;
            }
        }
        return comma;

    }
};