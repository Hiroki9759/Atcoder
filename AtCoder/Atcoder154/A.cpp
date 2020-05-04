#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main(void){
  int A,B;
  string S,T,U;
  cin >> S >> T >> A >> B >> U;
  if(S == U)
    cout << A-1 << " " << B << endl;
  else
    cout << A << " " << B-1 <<endl;
    
  
  
  return 0;
}
