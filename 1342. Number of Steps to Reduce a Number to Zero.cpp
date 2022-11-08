class Solution {
public:
    int numberOfSteps (int num) {
    int check=0;
        while(num!=0){
         if(num%2!=0){check++; num--;}
         if(num!=0) {  num=num/2;
            check++; }
     }   
    return check;
    }
};
