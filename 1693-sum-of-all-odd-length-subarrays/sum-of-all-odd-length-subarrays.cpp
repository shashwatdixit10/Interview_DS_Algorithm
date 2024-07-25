class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int i=0,j=0;
        int sum = 0, sum1 = 0;
        while(i<n){
                sum = 0;
                j=i;
            while(j<n){
            sum = sum + arr[j];
            if( (j-i+1)%2 != 0 ){
                sum1 = sum + sum1;
            }
            j++;
            }
            i++;
        }
        return sum1;
    }
};