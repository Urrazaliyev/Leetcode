class Solution {
public:

    int mostWordsFound(vector<string>& sentences) {
        int a[sentences.size()],max=INT_MIN;
        for(int i=0;i<sentences.size();i++){
            a[i]=0;
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i][j]==' ')a[i]++;
            }
            
        }
        for(int i=0;i<sentences.size();i++){
            if(max<a[i])max=a[i];
        }
    return max+1;
    }
};
