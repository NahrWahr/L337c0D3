#include<bits/stdc++.h>
using namespace std;

char opposite(char c)
{
  if(c=='(')
    return ')';
  if(c=='{')
    return '}';
  if(c=='[')
    return ']';
  
  return 'f';
}


bool isValid(string s) {
  stack<char> par;
  
  for(char c: s){
    if(par.empty()){
      par.push(opposite(c));
    }
    else if(par.top() == c){
      par.pop();
    }
    else{
      par.push(opposite(c));
    }
  }
      
  if(par.empty())
    return true;
  else
    return false;
}

int main()
{
  string s="(){[[]]}]";
  cout<<isValid(s);
  return 0;
}
