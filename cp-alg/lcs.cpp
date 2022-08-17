#include<bits/stdc++.h>
using namespace std;

void PrintMatrix(vector<vector<int>> M)
{
  int m=M.size();
  int n=M[0].size();
  
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout <<M[i][j]<<' ';
    }
    cout<<'\n';
  }
}

void LcsAlgo(char *a, char *b)
{
  int m=strlen(a);
  int n=strlen(b);
  //  cout<<m<<' '<<n<<'\n';

  vector<vector<int>> LcsMatrix(m+1,vector<int>(n+1));
  
  for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
      if(i==0 || j==0)
	LcsMatrix[i][j]=0;
      else if(a[i-1]==b[j-1])
	LcsMatrix[i][j]=LcsMatrix[i-1][j-1]+1;
      else
	LcsMatrix[i][j]=max(LcsMatrix[i-1][j],LcsMatrix[i][j-1]);
    }
  }

  PrintMatrix(LcsMatrix);

  int index=LcsMatrix[m][n];
  char LcsAlgo[index+1];
  LcsAlgo[index]='\0';

  int i=m,j=n;
  while(i>0 && j>0){
    if(a[i-1]==b[j-1]){
      LcsAlgo[index-1]=a[i-1];
      i--;
      j--;
      index--;
    }
    else if(LcsMatrix[i-1][j]>LcsMatrix[i][j-1])
      i--;
    else
      j--;
  }
  cout<<"a:"<<a<<"\nb:"<<b<<"\nLCS:"<<LcsAlgo<<"\n";
}

int main()
{
  char a[] = "1234";
  char b[] = "134";
  LcsAlgo(a,b);
  return 0;
}
