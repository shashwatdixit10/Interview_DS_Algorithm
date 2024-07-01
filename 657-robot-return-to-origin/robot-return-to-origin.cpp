class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int> mp;
        int n = moves.size();
        mp['U'] = 1;
        mp['D'] = -1;
        mp['L'] = 1000;
        mp['R'] = -1000;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + mp[moves[i]];
        }
        if(sum==0)
        return true;
        return false;
    }
};