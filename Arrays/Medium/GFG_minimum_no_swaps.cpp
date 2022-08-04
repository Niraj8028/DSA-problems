vector<pair<int,int>>v;
	int n=nums.size();
	for(int i=0 ;i<n;i++){
	    
	   v.push_back({nums[i],i});
	    
	    
	}
	int ans=0;
	sort(v.begin(),v.end());
	
	for(int i=0 ;i<n;i++){
	    
	    if(i==v[i].second){
	        continue;
	    }
	    else{
	        ans++;
	       swap(v[i],v[v[i].second]);
	    
	        i--;//this is done to check the current element which is swapped .
	    }
	
	}
	return ans;