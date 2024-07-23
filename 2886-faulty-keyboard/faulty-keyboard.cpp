class Solution {
public:
    string finalString(string s) {
        int n = s.size();
        int initial = 0;
        int final = 0;
        for(int i=0;i<n;i++){
            if(s[i] == 'i'){
                final = i-1;
                int a = 0, b = final;
                while(a<b){
                    swap(s[a++], s[b--]);
                }
            s.erase(s.begin()+(final+1));
            n = s.size();
            i--;
            }
        }
        return s;
    }
};