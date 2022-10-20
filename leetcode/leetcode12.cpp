#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v){
  for(int i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m){
  for(vector<int> v:m){
    printV(v);
  }
}

string intToRoman(int x)
{
  vector<string> ones = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
  vector<string> tens = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
  vector<string> huns = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
  vector<string> thus = {"","M","MM","MMM"};

  return thus[x/1000] + huns[(x%1000)/100] + tens[(x%100)/10] + ones[(x%10)];
}

int main()
{
  int x = 152;
  cout<<intToRoman(x);
  return 0;
}
