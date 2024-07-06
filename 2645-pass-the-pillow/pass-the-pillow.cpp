class Solution {
public:
    int passThePillow(int n, int time) {
        int i=1;
        int dir = 1;
        while(time>0){
            if(i+dir >=1 && i+dir<=n){
                i = i + dir;
                time--;
            }
            else{
                dir = dir*-1;
            }

        }
        return i;
    }
};