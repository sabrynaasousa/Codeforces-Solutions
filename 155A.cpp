#include <iostream>

using namespace std;

int main(){

  int n, points, max = 0, min = 0, amazing = 0;
  
  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> points;
    
    if (i == 0){
      max = points;
      min = points;

    }else if(i != 0 && points > max){
      max = points;
      amazing++;
    }else if(i != 0 && points < min){
      min = points;
      amazing++;
    }

  }
  
  cout << amazing << endl;
  
  return 0;
}
