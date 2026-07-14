class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int x=0;x<31;x++){
            int r=pow(2,x);
            if(n==r){
                return true;
            }
            

        }
        return false;

        
        
    }
};