class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count = 0;
        int a = 0;
        for(int i=0;i<n;i++){
            a = stoi(details[i].substr(11,2));
            if(a>60)
            count++;
        }
        return count;
    }
};