#include <iostream>

using namespace std;

int main (){

  int n;
  int V[13] = {0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 15, 4};

  cin >> n;
  
  if (n < 10 || n >= 22)
    cout << 0 << endl;
  else  
    cout << V[n-10] << endl;

  return 0;
}
