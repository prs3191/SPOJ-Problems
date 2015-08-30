#include<iostream>
using namespace std;
int main()
{
    int test,x,y,a,b,num,flag;
    scanf("%d",&test);
    while(test--)
    {
        a=3;b=1;
        flag=0;
        num=0;
         scanf("%d %d",&x,&y);
         if(0==x && 0==y)
         {
             num=0;
             flag=1;
         }
         else if(x==1 && y==1)
         {
              num=1;
              flag=1;
         }
         else if(x==2 && y==0)
         {
             num=2;
             flag=1;
         }
         if(flag!=1)
         {
            num=3;
            for(;num<=100000;)
            {
                //num++;
                for(int i=1;i<=4;i++)
                {
                  //cout<<"\n("<<a<<","<<b<<"):"<<num;
                  
                  if(a==x && b==y)
                  {
                          //printf("%d\n",num);
                          flag=1;
                          break;
                  }
                  num++;
                  if(i==1){a=a-1;b=b+1;}
                  if(i==2){a=a+1;b=b+1;}
                  if(i==3){a=a+1;b=b-1;}
                  
                }
                a=a+1;b=b+1;
                if(a>x && b>y) break;
                if(flag==1) break;
            }
         }
         if(flag==1)printf("%d\n",num);
         else printf("No Number\n");
    }
}
