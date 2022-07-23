int search(int arr[], int n, int x, int k)
{
    // Complete the function	
    int i=0;
    while(i<n){
        if(arr[i]==x){
            return i;
            break;
        }
        else{
            int diff = abs(arr[i]-x); // difference b/w current and required element
            int jumps = diff/k; //least number of jumps required from current element
            i += max(1,jumps);
        }
    }
    return -1;
}  