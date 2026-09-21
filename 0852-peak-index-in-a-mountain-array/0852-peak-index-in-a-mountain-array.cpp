class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1;
        int end = arr.size()-2;
        for(int i =0; i< arr.size(); i++){
            int mid = st + (end-st)/2;
            if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                 return mid;
            }else if(arr[mid]>arr[mid-1]){//right
                st = mid +1;
            }else{// left
                end = mid -1;
            }
        }
    return -1;
    }
};