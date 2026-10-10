class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int trip=0;
        sort(people.begin(), people.end());
        int i =0, j=people.size()-1;

        while(i<=j){
            if(people[i]+people[j] >limit){
                trip++;
                j--;
            }else{
                i++;
                trip++;
                j--;
            }
        }

        return trip;
    }
};