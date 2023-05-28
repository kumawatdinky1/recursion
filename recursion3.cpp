//print nto 1
#include<iostream>
using namespace std;
void fun1(int i,int n)
{
  if(i<1)
  {
    return ;
  }
  cout<<i<<" ";
  i--;
  fun1(i,n);
  }

int main()
{
  int n;
  cin>>n;
  fun1(n,n);
  }
  
