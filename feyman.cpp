#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num)
    {
      if(num<=100)
           cout<<((num)*(num+1)*((2*num)+1))/6<<"\n";
      cin>>num;
    }
}
