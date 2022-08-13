#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
  if (x < 0)
    return false;

  int xo = x;
  unsigned int sum = 0;
  while (x>0)
    {
      sum = sum*10 + x%10;
      x /= 10;
    }
  return (xo==sum);
}

int main(){
  int k = 11111111;
  cout << isPalindrome(k);
  return 0;
}
