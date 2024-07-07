class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int c=0;
        int sum=0;
        while(numBottles>0 ){
            sum+=numBottles;
            int n=(numBottles+c)/numExchange;
            c=(numBottles+c)%numExchange;
            numBottles=n;
        }
        return sum;
    }
};