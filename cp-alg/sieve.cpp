#include <bits/stdc++.h>
using namespace std;

vector<int> Primes(int n){
  vector<int> IsPrime(n+1, 1);
  for (int i = 0; i<n+1; i++){
    IsPrime[i] = i;
  }
  IsPrime[0] = IsPrime[1] = 0;
  for (int i=2; (i*i)<n; i++){
      if (IsPrime[i]){
	for (int j=2*i; j<=n; j+=i){
	  IsPrime[j] = 0;
	}
      }
  }
  return IsPrime;
}

int main(){
  vector<int> Prt= Primes(10);
  for (int n: Prt){
    cout << n << " ";
  }
  return 0;
}

  
