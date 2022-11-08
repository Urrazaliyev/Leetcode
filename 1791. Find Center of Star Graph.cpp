class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
     int first=edges[0][0],check=0;
        for(int i=1;i<edges.size();i++){
            for(int j=0;j<1;j++){
                if(edges[i][j]==first)
                    check++;
            }
            if(check==1) return first;
        }
         return edges[0][1];
        
        
    }
};
