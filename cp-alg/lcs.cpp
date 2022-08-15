#include<bits/stdc++.h>
using namespace std;

void LcsAlgo(char *a, char *b){
  int n=strlen(a);
  int m=strlen(b);
  cout<<n<<' '<<m;

  int LcsTable[m+1][n+1];

  for(int i;i<=m;i++){
    for(int j;j<=n;j++){
      if(i==0 || j==0)
	LcsTable[i][j]=0;
      else if(a[i-1]==b[j-1])
	LcsTable[i][j]=LcsTable[i-1][j-1]+1;
      else
	LcsTable[i][j]=max(LcsTable[i-1][j],LcsTable[i][j-1]);
    }
  }

  int index=LcsTable[m][n];
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
    else if(LcsTable[i-1][j]>LcsTable[i][j-1])
      i--;
    else
      j--;
  }
  cout<<"a:"<<a<<"\nb:"<<b<<"\nLCS:"<<LcsAlgo<<"\n";
}

int main()
{
  char a[] = "acbcbbcca";
  char b[] = "ababaaccb";
  LcsAlgo(a,b);
  return 0;
}
