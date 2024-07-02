class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        string a = words[0];
        for(int i=1;i<n;i++){
            string b = words[i];
            string res = "";
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            int k=0,j=0;
            while(k < a.size() && j < b.size()){
                if(a[k]==b[j]){
                    res = res + a[k];
                    k++;
                    j++;
                }
                else if(a[k]<b[j])
                k++;
                else
                j++;
            }
            a = res;
        }
         vector<string> result;
        for (char c : a) {
            result.push_back(string(1, c));
        }
        return result;
    }
};