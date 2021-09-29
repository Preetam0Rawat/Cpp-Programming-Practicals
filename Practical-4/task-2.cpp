#include<iostream>
using namespace std;

namespace first
{
  int add(int a, int b)
   {
      return (a+b);
   }
}


namespace second
{
  float add(float a, float b)
  {
   return (a+b);
  }
}


using namespace first;
//using namespace second;
int main()
{
 cout<<add(1,3)<<"\n";
 cout<<add(1.4,2.2)<<"\n";
 cout<<add(3,7)<<"\n";
 cout<<add(1,4.2)<<"\n";
 
 
return 0;

}




