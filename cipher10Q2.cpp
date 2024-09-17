#include<iostream>
#include<string>
using namespace std;
char ch;
string cleaned;
 bool palindrome(string str){
    int i;
    int legth=str.size();
    for(i=0;i<legth;i++){
        char ch=str[i];
        if((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z')||(ch>='0'&& ch<='9')){
            if(ch>='A' && ch<='Z'){
                ch=ch+('a'-'A');
            }
        }
        cleaned+=ch;
    }
    int left=0;
    int right=cleaned.size()-1;
    while(left<right){
        if(cleaned[left]!=cleaned[right]){
                return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    string str;
    int i,c=0;
    cin.ignore();
    getline(cin,str);
    if(palindrome(str)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}