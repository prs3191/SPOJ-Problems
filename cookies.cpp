#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    int test,tpiles,spile,diff;
    cin>>test;
    if(test<=100)
    {
    while(test)
    {
       
      scanf("%d %d %d",&tpiles,&spile,&diff);
      if(tpiles < 1|| tpiles >100 || spile < 1|| spile >100 || diff < 1|| diff >100) {test--;continue;}
      cout<<(tpiles*spile)-((((tpiles *(1+tpiles))/2))*diff)+(tpiles*tpiles*diff)<<"\n";
      cin.ignore();
      cin.clear();
      test--;
    }
    }
    //getch();
}
      
