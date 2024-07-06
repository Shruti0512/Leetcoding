class Solution {
public:
    int passThePillow(int k, int time) {
       int n=k-1;
        int m=time/n;
        if(m%2==0){
            return (time%n)+1;
        }
        return k-(time%n);
    }
};