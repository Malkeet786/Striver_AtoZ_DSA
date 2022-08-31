pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr+n);
    int lo = 0, hi = n-1 ;
    int flr = -1 ;
    int cl = -1 ;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2 ;
        if(arr[mid]==x){
            flr = arr[mid];
            cl = arr[mid];
            break ;
        }
        else if(arr[mid] < x){
            flr = arr[mid];
            lo = mid+1 ;
        }else{
            cl = arr[mid];
            hi = mid-1 ;
        }
    }
    return {flr, cl};
}