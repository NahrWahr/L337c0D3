#include <bits/stdc++.h>
using namespace std;

struct LN{
  int val;
  LN *next;
  LN() : val(0), next(nullptr) {}
  LN(int x) : val(x), next(nullptr) {}
  LN(int x, LN *n) : val(x), next(n) {}
};

int main(){
  int n = 10;
  auto *list = new LN(n);

  auto iter = list;
  while(n--){
    auto *tmp = new LN(n);
    iter->next = tmp;
    iter = iter->next;
  }

  while(list){
    cout<<list->val<<' ';
    list = list->next;
  }
  return 0;
}
