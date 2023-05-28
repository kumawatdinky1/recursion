//factorial
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
   
   // Base Condition.
   if(n == 0)
   {
       return 1;
   }

   return n * factorial(n-1);

}

int main(){
  
  
  int n = 3;
  cout<<factorial(n)<<endl;
  return 0;

}
