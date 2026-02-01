#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int maxActivity(vector<int> st, vector<int> end) {
  // Sort based on end time
  // A0 Select

  int ans= 1;
  int currEndTime = end[0];

  for(int i=1; i <st.size(); i++) {
    if(st[i] >= currEndTime) {
      ans++;
      currEndTime = end[i];
    }
  }
  return ans;
}

int main(){
  vector<int> st = {1,3,0,5,78,5};
  vector<int> end = {2,4,6,7,8,9};

  cout << maxActivity(st, end);

  return 0;
}