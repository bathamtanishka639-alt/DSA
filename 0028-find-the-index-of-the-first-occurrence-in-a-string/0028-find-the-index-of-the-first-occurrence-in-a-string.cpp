class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int s=needle.size();
        
        for(int i=0;i<=n-s;i++){
            int j=0;
            while(j<s && haystack[i+j]==needle[j]){
                j++;
            }
            if(j==s){
                return i;
            }
        }
        return -1;
        
    }
};