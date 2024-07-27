class Solution {
public:
    
    vector<int> sortByBits(vector<int>& arr) {
        auto lambda = [](int &a, int &b){
            int countA = __builtin_popcount(a);
            int countB = __builtin_popcount(b);

            if(countA == countB)
            return a < b;
            return countA < countB;
        };

        sort(arr.begin(),arr.end(),lambda);

        return arr;
    }
};