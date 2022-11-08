// first non repeating character 
#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
int firstNonrep(char str[]){
    pair<int,int> count[ASCII_SIZE];
    for(int i=0;str[i];i++){
       (count[str[i]].first)++;
       (count[str[i]].second)=i;
    }
    int res=INT_MAX;
    for(int i=0;i<ASCII_SIZE;i++){
        if(count[i].first==1)
        res=min(res,count[i].second);
    }
   return res;
}
int main(){
    char str[]="geeksforgeeks";
    int index=firstNonrep(str);
    if(index==INT_MAX)
    cout<<"all characters are repated";
    else
    cout<<"non repeating character is: "<<str[index];
    return 0;
}