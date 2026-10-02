class Solution {
public:
    int getmax(int index,vector<int>arr){
        int maxi=-1;
        for(int i=index+1;i<arr.size();i++){
            if(arr[i]>maxi){
                maxi=max(maxi,arr[i]);
            }
        }
        return maxi;

    }
    vector<int> replaceElements(vector<int>& arr) {
    vector<int> ans;

        for(int i = 0; i < arr.size(); i++) {
            ans.push_back(getmax(i, arr));
        }

        return ans;
    }
};