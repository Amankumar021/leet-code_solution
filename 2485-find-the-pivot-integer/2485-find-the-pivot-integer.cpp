class Solution {
public:
    int pivotInteger(int n) {
        int i = 1, j = n;
        int leftsum = 0, rightsum = 0;

        while (i < j) {
            if (leftsum >= rightsum) {
                rightsum += j;
                j--;
            } else {
                leftsum += i;
                i++;
            }
        }

        return leftsum  == rightsum  ? i : -1;
    }
};