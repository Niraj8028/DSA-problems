// C++ program to calculate the maximum
// absolute difference of an array.
#include <bits/stdc++.h>
using namespace std;


int frequencyOfNumber(string s){
	map<int>mp;
	int count=0;
	for(int i=0; i<s.length(); i++){
		if(s[i]>=0 && s[i]<=9){
			mp[s[i]-'0']++;
		}
		else{
			count++;
		}
	}
	for(auto it:mp){
		cout<<it.first<<":"<<it.second;
	}
	cout<<ans<<"count";
}

int main()
{
	string string="raja";
	Set<Integer> s = new HashSet<Integer>();
	s.add('a');
	s.add('e');
	s.add('i');
	s.add('o');
	s.add('u');
	int count=0;
	for(int i=0; i<s.size(); i++){
		if(s.contains(string[i])){
			count++;
		}
	}
	if(count%2==0){
		cout<< "false";
	}
	else{
		cout<<"true";
	}
	

	return 0;
}