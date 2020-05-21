#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin >> n;
    int price[n],Sp[n];
    
    for(i=0;i<n;i++)
    cin >> price[i];
    
    Sp[0]=1;

    for(i=1;i<n;i++){
        Sp[i]=1;
      for(j=i-1;(j>=0) && (price[i] >= price[j]);j--){
          Sp[i]++;
      }
    }

    for(i=0;i<n;i++)
      cout << Sp[i] << " ";

   return 0;
}
