class Solution {
public:
    bool isPalindrome(int x) {
        int r=x;
        long long rev=0;
        while(x>0){
            int r=x%10;
            rev= rev*10 +r;
            x=x/10;

        }
        if(r==rev){
            return true;
        }else{
            return false;  
        }


    }
    
};