class Solution {
public:
    bool isvowel(char c){
        if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u') || (c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U'))
        return true;
        return false;
    }
    string sortVowels(string s) {
        int n = s.size();
        vector<int> arr;
        string vowel;
        string t = s;
        for(int i=0;i<n;i++){
            if(isvowel(s[i])==true){
                vowel.push_back(s[i]);
                arr.push_back(i);
            }
        }
        sort(vowel.begin(),vowel.end());
        for(int i=0;i<arr.size();i++){
            t[arr[i]] = vowel[i];
        }
        return t;
    }
};