#include <iostream>
#include <vector>
using namespace std;

int BinPowMod(int a, int b, int m){
  a %= m;
  int res = 1;

  while (b>0){

    if (b%2)
      res = (res*a)%m;

    a = (a*a)%m;
    b /= 2;
  }

  return res;
}

vector<int> applyPermutation(vector<int> sequence, vector<int> permutation){
  vector<int> newSequence(sequence.size());

  for(int i = 0; i<sequence.size(); i++){
    newSequence[permutation[i]] = sequence[i];
  }

  return newSequence;
}

vector<int> permute(vector<int> sequence, vector<int> permutation, long b){
  while (b > 0){
    if (b%2){
      sequence = applyPermutation(sequence, permutation);
    }

    permutation = applyPermutation(permutation, permutation);
    b /= 2;
  }
  return sequence;
}

int gcd(int a, int b){
  if (b == 0)
    return a;
  else
    return gcd(b, a%b);
}

int main(){
  int a = 131;
  int b = 13;
  int m = 7;

  cout << gcd(a,b) << "\n";

  return 0;
}
