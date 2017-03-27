#include <bits/stdc++.h>

using namespace std;

int main(){

  string s;
  
  cin >> s;
  
  int cont = 0;
  
  for( int i = 0; i < s.size(); i++ ){
    if( s[i] == '-' && s[i-1] == '-' && cont == 1 ){
      cout << 2;
      cont = 0;
    }else if( s[i-1] == '-' && s[i] == '.' && cont == 1 ){
      cout << 1;
      cont = 0;
    }else if( s[i] == '.' ){
      cout << 0;
      cont = 0;
    }else{
      cont++;
    }
  }
  
  cout << endl;
  
  return 0;
}
