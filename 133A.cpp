#include <iostream>
#include <string>

using namespace std;

int main (){

  string p;
  int yes = 0;
  
  cin >> p;
  
  for(int i = 0; i < p.size(); i++){
    if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
      yes = 1;
      break;
    }else
      continue;  
  }
  
  if(yes == 1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;  
 
  return 0;
}

