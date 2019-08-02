#include <iostream>
using namespace std;

   int main()
   {
   unsigned  int a ;
   cout<<"Vasha zarplata($): ";
   cin>>a;
   if (a>1000)
    {
     if (a>1000000) cout<<"Ti millioner!";
     if (a<1000001) cout<<"Horosho";
    }
   if (a<1001) cout<<"Rabotai bolshe";
   cout<<"...no ti molodec";
   return 0;
   }
