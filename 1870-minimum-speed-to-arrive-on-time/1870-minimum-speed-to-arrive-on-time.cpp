class Solution {
public:
    double istime(vector<int>& dist, int min_speed){
        double hrs = 0.0;
        int n = dist.size();
        for(int i =0; i<n-1; i++){
            double t = (ceil((double)dist[i]/(double)min_speed));
            hrs+=t;
        }
        hrs+=(double(dist[n-1])/double(min_speed));
        return hrs;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int l =1, r= 1e7;
        int minSpeed = -1;

        while(l<=r){
            int mid = l+(r-l)/2;

            if(istime(dist, mid)<=hour){
                minSpeed = mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }

        return minSpeed;
    }
};