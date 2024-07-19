class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        vector<int> minimum(n,INT_MAX);
        int m = matrix[0].size();
        vector<int> maximum(m,INT_MIN);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                minimum[i] = min(minimum[i],matrix[i][j]);
            }
        }
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                maximum[j] = max(maximum[j],matrix[i][j]);
            }
        }
       for(int i=0;i<maximum.size();i++){
        for(int j=0;j<minimum.size();j++){
            if(maximum[i]==minimum[j]){
                ans.push_back(maximum[i]);
            }
        }
    }
        return ans;
    }
};