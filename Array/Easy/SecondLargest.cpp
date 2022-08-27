public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    sort(arr , arr + n);
        int index = n - 1;
        for(int i = index ; i > 0 ; i--){
            if(arr[i] > arr[i - 1]){
               return arr[i - 1];
            }
        }
    return -1;
	}
};