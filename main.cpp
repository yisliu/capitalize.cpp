#include <iostream>
#include <string>
using namespace std;
/*
If it is 2 letter, make it lower
if it is more, make first upper

main: input while or getline?
while(true){
cin>>str[1]
}
*/
//First leTTeR of EACH Word

string s(int len, string str){
  string strn = "";
  if(len<=2){
    for(int i = 0; i<=len-1; i++){
      if(str[i]<=90){
        strn.push_back(str[i]+32);
        // cout<<strn;
        continue;
      }
      strn.push_back(str[i]);
    }
  }
  else{
    if(str[0]>90){
      strn.push_back(str[0]-32);
    }
    else{
    strn.push_back(str[0]);
    }
    for(int i = 1; i<=len-1; i++){
      // if(str[i]==32){
      //   cout<<strn;
      //   continue;
      // }
      if(str[i]<=90){
        strn.push_back(str[i]+32);
                // cout<<strn;
        continue;
      }
      strn.push_back(str[i]);
    }
  }
  return strn;
}

int main() {
  string str, strn = " ";
  // int temp = 0;
  getline(cin, str);
  int temp1 = 0;
  for(int i = 0; i<str.length(); i++){
    if(str[i]==32){
      string temp = s(i-temp1,str.substr(temp1, i));
      strn.append(temp);
      strn.append(" ");
      temp1 = i+1;
      continue;
    }
    if(i==str.length()-1){
      string temp = s(i-temp1+1,str.substr(temp1, i));
      strn.append(temp);
    }
    continue;
    // if(str[i]==32){
    //   string temp = s((i-temp1)+1, str.substr(temp1, i));
    //   strn.append(temp);
    //   strn.append(" ");
    //   temp1 = i;
    //   continue;
    // }
    // continue;
  }
  
  cout<<strn;
}