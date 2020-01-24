#include<iostream>

using namespace std;

class rational
{
  private:
  int num,deno;
  
  public:

  rational(){
    num=1;
    deno=1;
   }

  rational add(rational);
  rational subtract(rational);
  rational multiply(rational);
  rational divide(rational);
  void print()
  {     
   cout<<num<<"/"<<deno;
  }
  int rat(int n,int d)
 {
    num=n;
    deno=d;
    return 0;
 }

  




};


//rational::add(rational)
      
             

int main()
{
       
    rational c;
    //c.rat(2,3);
    c.print();
    return 0;
}
