//print 1 to n
#include<iostream>
using namespace std;
void fun1(int i,int n)
{
  if(i>n)
  {
    return ;
  }
  cout<<i<<" ";
  i++;
  fun1(i,n);
  }

int main()
{
  int n;
  cin>>n;
  fun1(1,n);
  }
  
