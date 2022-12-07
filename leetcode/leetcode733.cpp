#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{for(auto i:v) cout<<i<<' '; cout<<'\n';}
void printM(vector<vector<int>> m)
{for(auto v:m) printV(v);}

int m,n,c,originalColor;
vector<vector<bool>> visited;

void dfs(int i, int j,vector<vector<int>> &image)
{
  if(i<0 || i>=n ||
     j<0 || j>=n ||
     visited[i][j] ||
     image[i][j] != originalColor)
    return;

  visited[i][j] = true;
  image[i][j] = c;

  dfs(i+1,j,image);
  dfs(i-1,j,image);
  dfs(i,j+1,image);
  dfs(i,j-1,image);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
{
  m=image.size(), n=image[0].size(), c=color, originalColor=image[sr][sc];
  visited.resize(m, vector<bool> (n));
  
  dfs(sr,sc,image);
  return image;
}

int main()
{
  vector<vector<int>> image = {{1,1,1},{1,1,0},{1,0,1}};
  int sr = 1, sc = 1, color = 2;
  printM(floodFill(image, sr, sc, color));
  return 0;
}
