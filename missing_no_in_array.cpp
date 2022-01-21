#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int findMissingElement(vector<int> const  &arr){
  int n=arr.size();
  
  int sum = accumulate(arr.begin(),arr.end(),0);
  
   return (n+1) + n*(n+1)/2 - sum;
  
}

int main(){
  
  vector<int>arr = {3,2,4,6,1};
  
  cout << " The missing element is " << findMissingElement(arr);
  
  return 0;
}
