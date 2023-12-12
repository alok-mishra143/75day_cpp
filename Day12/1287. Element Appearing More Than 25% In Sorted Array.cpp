class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {

        if(arr.size()==1) return arr[0];
        double con=arr.size()*0.25;
        int fre=1;
        
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]==arr[i]){
                fre++;
                if(fre>con) return arr[i];
            }else fre=1;
        }

        return -1;
    }
};

