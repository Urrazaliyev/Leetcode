class Solution {
public:
    int minimumSum(int num) {
              int d=num%10,c=num%100/10,b=num%1000/100,a=num/1000;
        vector<int> arr={a,b,c,d};
        sort(arr.begin(),arr.end());
        return (arr[0]*10+arr[2])+(arr[1]*10+arr[3]);
    }
};
