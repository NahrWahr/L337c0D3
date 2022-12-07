#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{
  for(auto i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m)
{
  for(auto v:m){
    printV(v);
  }
}

int n = 9;

vector<vector<int>> conv(vector<vector<char>> &in)
{
  vector<vector<int>> b(n, vector<int> (n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(in[i][j] == '.')
	b[i][j] = 0;
      else
	b[i][j] = (int) in[i][j] - '0';
    }
  }
  return b;
}

bool isValidSudoku(vector<vector<char>> &in)
{
  auto b = conv(in);
  printM(b);
  vector<bool> v(n+1,false);

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(v[b[i][j]])
	return false;
      if(b[i][j])
	v[b[i][j]] = true;
    }

    fill(v.begin(), v.end(), 0);
    
    for(int j=0;j<n;j++){
      if(v[b[j][i]])
	return false;
      if(b[i][j])
	v[b[j][i]] = true;
    }

    fill(v.begin(), v.end(), 0);
  }

  bool mem[3][3][9];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(mem[i/3][j/3][b[i][j]])
	return false;
      if(b[i][j])
	mem[i/3][j/3][b[i][j]] = true;
    }
  }

  return true;
}

int main()
{

  vector<vector<char>> b =
    {
      {'5','3','.','.','7','.','.','.','.'}
     ,{'6','.','.','1','9','5','.','.','.'}
     ,{'.','9','8','.','.','.','.','6','.'}
     ,{'8','.','.','.','6','.','.','.','3'}
     ,{'4','.','.','8','.','3','.','.','1'}
     ,{'7','.','.','.','2','.','.','.','6'}
     ,{'.','6','.','.','.','.','2','8','.'}
     ,{'.','.','.','4','1','9','.','.','5'}
     ,{'.','.','.','.','8','.','.','7','9'}
    };
  cout<<isValidSudoku(b);
  return 0;
}
