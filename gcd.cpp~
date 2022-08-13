#include <bits/stdc++.h>
using namespace std;

int gcd(int a,
	int b,
	int& x,
	int& y)
{
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  int x1, y1;
  int d = gcd(b, a%b, x1, y1);
  x = y1;
  y = x1 - y1*(a/b);
  return d;
}

int LinDioSol(int a,
	      int b,
	      int c,
	      int& x,
	      int& y)
{
  int z;
  z = gcd(a, b, x, y);
  
  
  if (c%z)
    return false;
  else
    {
      int scale = c/z;
      x = x*scale;
      y = y*scale;
    }
  return z;
}

void MinSumXY(int a,
	      int b,
	      int& x,
	      int& y,
	      int z)
{
  int k = 1;
  int xn = x + k*(b/z);
  int yn = y - k*(a/z);
  if ((abs(xn) + abs(yn)) < (abs(x) + abs(y)))
    k = 1;
  else
    k = -1;
  
  
  while ((abs(xn) + abs(yn)) < (abs(x) + abs(y)))
    {
      x = xn;
      y = yn;
      xn = x + k*(b/z);
      yn = y - k*(a/z);
    }
}

int main(){
  
  int a = 2;
  int b = 3;
  int c = 13;
  int x, y, z;

  z = LinDioSol(a, b, c, x, y);
  cout << "x, y: " << x << ", " << y << "\n";
  MinSumXY(a, b, x, y, z);
  cout << "x, y: " << x << ", " << y << "\n";

  return 0;
}
