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

typedef int coord_t;
typedef long long coord2_t;
struct Point
{
  coord_t x, y;
 
  bool operator <(const Point &p) const
  {
    return x < p.x || (x == p.x && y < p.y);
  }
};

coord2_t cross(const Point &O, const Point &A, const Point &B)
{
  return (A.x - O.x) * (coord2_t)(B.y - O.y) -
    (A.y - O.y) * (coord2_t)(B.x - O.x);
}

static bool cmp(Point &p1, Point &p2)
{
  return p1.x < p2.x || (p1.x == p2.x && p1.y < p2.y);
}

static bool equ(Point &p1, Point &p2)
{
  return p1.x == p2.x && p1.y == p2.y;
}

vector<Point> outerTrees(vector<Point> &P)
{
  int n = P.size(), k = 0;
  vector<Point> H(2 * n);

  sort(P.begin(), P.end(), cmp);

  for (int i = 0; i < n; i++) {
    while (k >= 2 && cross(H[k - 2], H[k - 1], P[i]) < 0) k--;
    H[k++] = P[i];
  }

  for (int i = n - 2, t = k + 1; i >= 0; i--) {
    while (k >= t && cross(H[k - 2], H[k - 1], P[i]) < 0) k--;
    H[k++] = P[i];
  }

  H.resize(k);
  sort(H.begin(), H.end(), cmp);
  H.erase(unique(H.begin(), H.end(), equ), H.end());
  return H;
}

int main()
{
  return 0;
}
