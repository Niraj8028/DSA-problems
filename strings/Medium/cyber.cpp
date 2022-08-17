 
 #include "bits/stdc++.h"
 using namespace std;
 #define vi vector<int>
 #define pii vector<pair<int,int>>
 
int main(){
    string str="Hi! there";
    vector<string>mp={"Alfa","Bravo","Charlie","Delta","Echo","Foxtrot","Golf","Hotel","India","Juliet","Kilo","Lima","Mike","November","Oscar","Papa","Quebec","Romeo","Sierra","Tango","Uniform","Victor","Whiskey","X-ray","Yankee","Zulu"};
    string ans="";
    for(int i=0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z' ) {
            string temp=mp[str[i]-'a'];
            for (int i = 0; i < temp.length(); i++)
  	    {
  		temp[i] = tolower(temp[i]);
  	   }
            ans+= temp+' ';
        }
        else if(str[i]>='A' && str[i]<='Z'){
            ans+=mp[str[i]-'A']+' ';
        }
        else if(str[i]==' '){
            ans=ans+' '+' ';
        }
        else{
        ans=ans+str[i]+str[i];
        }
    }
cout<<ans;
    return 0;
}
