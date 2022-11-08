class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        int sum=0;
        for(int i=0;i<boxes.length();i++){
            sum=0;
            for(int j=0;j<boxes.length();j++){
                if(boxes[j]=='1') sum+=fabs(j-i);
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
