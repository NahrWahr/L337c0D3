#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

void printV(vector<int> v)
{
  for(int i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

bool hasCycle(ListNode *h)
{
  if(h==NULL)
    return false;

  ListNode *f=h, *s=h;
  while((f!=NULL) && (f->next!=NULL)){
        f=f->next->next;
	s=s->next;

	if(f==s)
	  return true;
  }
  return false;
}

int main(){
  vector<int> x(16);
  for(int i=0;i<x.size();i++){
    x[i]=1+random()%20;
  }
  sort(x.begin(),x.end());
  int t=17;
  
  printV(x);

  return 0;
}
