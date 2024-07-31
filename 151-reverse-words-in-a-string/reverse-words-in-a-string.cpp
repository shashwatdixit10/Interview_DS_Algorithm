class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        stringstream ss(s);
        string token="";
        string result = "";
        while(ss>>token){
            result = token + " " + result;
        }
        n = result.size();
        return result.substr(0,n-1);
    }
};