class Solution {
public:
    string convertToTitle(int columnNumber) {
         int ans = 0;
         string result = "";
        while(columnNumber!=0){
            columnNumber--;
            ans = columnNumber % 26;
            columnNumber = columnNumber / 26;
            result = result + char(ans + 'A');
        }
        reverse(result.begin(),result.end());
        return result;
    }
};