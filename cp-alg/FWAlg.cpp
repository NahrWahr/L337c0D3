#include <bits/stdc++.h>
using namespace std;

#define nv 4
void printMatrix(int matrix[][nv]){
  for(int i=0;i<nv;i++){
    for(int j=0;j<nv;j++){
      if(matrix[i][j]>9999)
	cout << "\u221e"<<' ';
      else
	cout <<matrix[i][j]<<' ';
    }
    cout << "\n";
  }
  cout << "\n";
}

void FW(int graph[][nv])
{
  int matrix[nv][nv], i, j, k;

  for(i=0;i<nv;i++)
    for(j=0;j<nv;j++)
      matrix[i][j]=graph[i][j];

  for(k=0;k<nv;k++){
    for(i=0;i<nv;i++){
      for(j=0;j<nv;j++){
	if(matrix[i][k] + matrix[k][j] < matrix[i][j])
	  matrix[i][j]=matrix[i][k]+matrix[k][j];
      }
    }
    printMatrix(matrix);
  }
}
  

int main()
{
  int INF = 999999999;
  int graph[nv][nv] = {{0, 3, INF, 5},
		       {2, 0, INF, 4},
		       {INF, 1, 0, INF},
		       {INF, INF, 2, 0}};
  //  printMatrix(graph);
  FW(graph);
  return 0;
}
