/* Filters all prime numbers under certain number */
#include<iostream>
#include<cmath>
#include<chrono>
#include<ctime>
using namespace std;
bool check(int n){// check if number is prime
  for(int i=2;i<sqrt(n);i++){
    if(n%i==0)return false;
  }
  return true;
}
int main(){
  int limit;
  cin>>limit;
  auto start=chrono::system_clock::now();// start clock
  for(int i=1;i<limit;i++){
    if(check(i))cout<<i<<' ';
  }
  auto end=chrono::system_clock::now();// end clock
  chrono::duration<double> elapsed=end-start;
  cout<<"\n"<<elapsed.count();
  return 0;
}
