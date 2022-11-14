class Solution
{
    public:
    #define pii pair<double,int>
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<pii>ans;
        for(int i=0; i<n; i++){
            double x=((arr[i].value*1.0)/(arr[i].weight*1.0));
            ans.push_back({x,i});
        }
        int s=0;
        double val;
        sort(ans.begin(),ans.end(),greater<pii>());
        for(int i=0; i<n; i++){
            if(W>arr[ans[i].second].weight+s){
                s+=arr[ans[i].second].weight;
                val+=arr[ans[i].second].value;
                
            }
            else{
                double x=W-s;
                val+=(x*(ans[i].first));
                break;
            }
        }
        return val;
    }
        
};