#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v){
  for(int i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m){
  for(vector<int> v:m){
    printV(v);
  }
}

int threeSumClosest(vector<int> &x, int t)
{
  int n = x.size();
  sort(x.begin(),x.end());

  int minsum = INT_MAX;
  int sum = 0;
  for(int i=0;i<n-2;i++){
    int l=i+1,r=n-1;
    while(l<r){
      int s = x[i] + x[l] + x[r];
      if(s==t){
	return s;
      }
      if(minsum > abs(s-t)){
	minsum = abs(s-t);
	sum = s;
      }
      if(s > t){
	r--;
      }
      if(s < t){
	l++;
      }
    }
  }
  
  return sum;
}

int main()
{
  vector<int> x = {833,736,953,-584,-448,207,128,-445,126,248,871,860,333,-899,463,488,-50,-331,903,575,265,162,-733,648,678,549,579,-172,-897,562,-503,-508,858,259,-347,-162,-505,-694,300,-40,-147,383,-221,-28,-699,36,-229,960,317,-585,879,406,2,409,-393,-934,67,71,-312,787,161,514,865,60,555,843,-725,-966,-352,862,821,803,-835,-635,476,-704,-78,393,212,767,-833,543,923,-993,274,-839,389,447,741,999,-87,599,-349,-515,-553,-14,-421,-294,-204,-713,497,168,337,-345,-948,145,625,901,34,-306,-546,-536,332,-467,-729,229,-170,-915,407,450,159,-385,163,-420,58,869,308,-494,367,-33,205,-823,-869,478,-238,-375,352,113,-741,-970,-990,802,-173,-977,464,-801,-408,-77,694,-58,-796,-599,-918,643,-651,-555,864,-274,534,211,-910,815,-102,24,-461,-146};
  int t = -7111;
  cout<<threeSumClosest(x, t);
  return 0;
}