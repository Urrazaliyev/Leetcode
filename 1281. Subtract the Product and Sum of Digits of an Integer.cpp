class Solution {
public:
    int subtractProductAndSum(int n) {
    int size=0,add=0,prod=1;
       while(n>0){
            prod*=n%10;
            add+=n%10;
           n/=10;
       }
    return prod-add;
    }
};
