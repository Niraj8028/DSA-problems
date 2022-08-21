int maxSubStr(string s){
        //Write your code here
        int cz=0,count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
                cz++;
            else
                cz--;
            if(cz==0)
                count++;
        }
        if(cz==0)
            return count;
        return -1;
    }