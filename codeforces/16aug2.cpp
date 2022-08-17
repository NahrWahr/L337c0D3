#include<bits/stdc++.h>
using namespace std;

bool
div4 (int n, int k)
{
  if (k & 1)
    return true;
  else
    {
      for (int i = 2; i <= n; i += 2)
	{
	  if ((i % 4) == 0)
	    continue;
	  if ((i + k) % 4)
	    return false;
	}
      return true;
    }
}

void
PrintCases (int n, int k)
{
  if (k % 1)
    {
      for (int i = 1; i <= n - 1; i += 2)
	{
	  cout << i << ' ' << i + 1 << '\n';
	}
    }
  else
    {
      for (int i = 1; i <= n - 1; i += 2)
	{
	  if ((i + 1) % 4)
	    cout << i + 1 << ' ' << i << '\n';

	  else
	    cout << i << ' ' << i + 1 << '\n';
	}
    }
}

int
main ()
{
  int ncases;
  cin >> ncases;

  vector < vector < int >>tcases (ncases, vector < int >(2));
  for (int i = 0; i < ncases; i++)
    {
      cin >> tcases[i][0];
      cin >> tcases[i][1];
    }

  for (vector < int >x:tcases)
    {
      if (div4 (x[0], x[1]))
	{
	  cout << "YES" << '\n';
	  PrintCases (x[0], x[1]);
	}
      else
	cout << "NO" << '\n';
    }

  return 0;
}
