#include <bits/stdc++.h>

using namespace std;

int main (){

  string s1, s2;
  int cont = 0;
  
  cin >> s1 >> s2;
  
  if( s1.size() != s2.size() ){
    cout << "NO" << endl;
    
  }else {
    for( int i = 0; i < s1.size(); i++ ){
      if( s1[i] == s2[s2.size() -1 -i] ){
        cont++;
      }  
    } 
    
    if( cont == s1.size() )
      cout << "YES" << endl;
    else
      cout << "NO" << endl;  
  }  
  return 0;
}
