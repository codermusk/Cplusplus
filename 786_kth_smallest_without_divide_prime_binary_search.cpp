class Solution {
public:
    vector<int> countSmallFrac(double val, vector<int> arr){
        int n = arr.size() , count = 0 , i = 0 , j = 1,ans1, ans2;
        double max_value = 0.0 ; 
        while(i<n-1){
            while(j<n && arr[i] > val*arr[j]){
                j++ ; 
            }
            count+= (n-j) ;
            if(j==n) break ; 
            double curr_value = (arr[i] * 1.0 )/ arr[j] ; 
            if(max_value < curr_value){
                ans1 = i ; 
                ans2 = j ; 
                max_value = curr_value ;
            }
            i++;
        }
        return { count , ans1 , ans2 } ;

    }
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        double lef = 0.0 , right = 1.0; 
        int n = arr.size() , ans1 , ans2 ; 
        while(lef<right){
            double mid = (lef + right) / 2 ; 
            vector<int> count = countSmallFrac(mid , arr) ; 
            if(count[0]==k){
                ans1 = count[1] ; 
                ans2 = count[2] ; 
                break ;
            }else if(count[0] < k){
                lef = mid ; 
            }else{
                right = mid ;
            }
        }
        return {arr[ans1],arr[ans2] } ;
    }
};
