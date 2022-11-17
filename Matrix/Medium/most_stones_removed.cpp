class Solution {
public:
    int removeStones(vector<vector<int>>& arr) {
        unordered_map<int,int>row;
        unordered_map<int,int>col;
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size(); i++){
            row[arr[i][0]]++;
            col[arr[i][1]]++;
        }
        int count=0;
        for(int i=0; i<arr.size(); i++){
            if(row[arr[i][0]]>1){
                row[arr[i][0]]--;
                col[arr[i][1]]--;
                count++;
            }
            else if(col[arr[i][1]]>1){
                row[arr[i][0]]--;
                col[arr[i][1]]--;
                count++;
            }
        }
        return count;
    }
};