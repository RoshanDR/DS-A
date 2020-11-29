
class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        int count = k-1;
        for(int i=0;i<n;i++){
            if(i<count){
                arr[i] += k;
                count++;
            }
            else{
                arr[i] -= k;
            }
        }
        sort(arr,arr+n);
        return (arr[n-1] - arr0[]);
    }
};