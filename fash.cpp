#include<iostream>
//#include<conio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int test,men[1000],fem[1000],tmen,i,sum;
    cin>>test;
    while(test)
    {
       sum=0;
       memset(men,0,sizeof(men));
       memset(fem,0,sizeof(fem));
       scanf("%d",&tmen);
       if(tmen<1 || tmen>1000){test--;continue;}
       for(i=0;i<tmen;i++)
       {
          scanf("%d",&men[i]);
          
       }
       for(i=0;i<tmen;i++)
       {
          scanf("%d",&fem[i]);
       }
       for(i=0;i<tmen;i++)
       {
         if(men[i]<0 || men[i]>10 || fem[i]<0 ||fem[i]>10)
             break;
       }
       if(i!=tmen){test--;continue;}
       sort(men,men+tmen,greater<int>());
       sort(fem,fem+tmen,greater<int>());
       /*for(i=0;i<tmen;i++)
       {
          cout<<men[i]<<endl;
       }
       for(i=0;i<tmen;i++)
       {
          cout<<fem[i]<<endl;
       }*/
       for(i=0;i<tmen;i++)
       {
          sum=sum+(men[i]*fem[i]);
       }
       cout<<sum<<"\n";
       test--;          
    }
    //getch();
}
