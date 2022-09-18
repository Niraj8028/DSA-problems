vector<int>maximize(vector<int>&arr,vector<int>&rep){
    if(arr.size()==0){
        return {-1};
    }
    if(rep.size()==0){
        return arr;
    }
    sort(rep.begin(),rep.end(),greater<int>());
    int j=0;
    while(j<rep.size()){
        for(int i=0; i<arr.size(); i++){
            if(rep[j]>arr[i]){
                arr[i]=rep[j];
                j++;
                cout<<1;
            }
            
        }
    }
    return arr;

}

int main(){
    vector<int>arr={1,0,2,4,5};
    vector<int>rep={1,9,6};
    maximize(arr,rep);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}