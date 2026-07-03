class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int stops[1001]={0};
        for(const auto& trip :trips){
            int passenger=trip[0];
            int start=trip[1];
            int end=trip[2];
            stops[start]+=passenger;
            stops[end]-=passenger;
        }
        int current=0;
        for(int i=0;i<=1000;i++){
            current +=stops[i];
            if(current>capacity){
                return false;
            }


        }
        return true;
        
    }
};