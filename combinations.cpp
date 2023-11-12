#include<iostream>
#include <vector>
using namespace std;



void solve(int index, vector<string> &ans,string output,vector<string>mapping, string digits){

//base case
 if(index == digits.length()){
     ans.push_back(output);
     return ;
 }

//now 
int digit = digits[index] -'0';
string value = mapping[digit];
for(int i = 0;i<value.length();i++){
    char ch = value[i];
    output.push_back(ch);
    //1 case solve krdo baaki recursion sambhal lega
    solve(index+1,ans,output,mapping,digits);

  //backtrack
  output.pop_back();

}


 


}

int main(){
  vector<string> ans;
  string output = "";
  int index = 0;
  string digits;

  vector<string> mapping(10);
  mapping[2] =  "abc";
  mapping[3] = "def";
  mapping[4] =  "ghi";
  mapping[5] = "jkl";
  mapping[6] = "mno";
  mapping[7] = "pqrs";
  mapping[8] = "tuv";
  mapping[10] = "wxyz";

  solve(0,ans, output, mapping, digits);
  

}