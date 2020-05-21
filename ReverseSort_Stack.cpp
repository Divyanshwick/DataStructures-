#include<bits/stdc++.h>
using namespace std;

stack<int> sortStack(stack<int> &s){
    stack<int> s1;
    int temp;
    while(!s.empty()){
      temp=s.top();
      s.pop();

      while(!s1.empty() && s1.top() > temp){
          s.push(s1.top());
          s1.pop();
      }

      s1.push(temp);
    }
    return s1;
} 

int main(){
  stack<int> s;
  int n,num;
  cin >> n;
  for(int i=0;i<n;i++){
      cin >> num;
      s.push(num);
  }

  stack<int> tempStack=sortStack(s);  

 while(!tempStack.empty()){
   cout << tempStack.top() << " ";
   tempStack.pop();
 }

   return 0;
}
