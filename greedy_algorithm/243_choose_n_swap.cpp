#include <iostream>
#include <set>
using namespace std;

string choose_n_swap(string a){
    set<char>s;
    for(int i=0; i<a.length(); i++){
        s.insert(a[i]);
    }
    for(int i=0; i<a.length(); i++){
        s.erase(a[i]);
        char ch=*s.begin();
        if(s.empty()){
            break;
        }
        if(ch<a[i]){
            char ch2=a[i];
            for(int j=0; j<a.length(); j++){
                if(a[j]==ch2){
                    a[j]=ch;
                }
                else if(a[j]==ch){
                    a[j]=ch2;
                }
            }
            break;
        }
    }
    return a;
}
int main(){
    string s="adcba";
    cout<<choose_n_swap(s);
    
    return 0;
}