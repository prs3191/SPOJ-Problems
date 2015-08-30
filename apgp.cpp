#include<iostream>
//#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int a=1,b,c,test=1;
    //cout<<"nos:";
    while(test)
    {
            scanf("%d %d %d",&a,&b,&c);
            if(a==0 && b==0 && c==0)
            {
                    test=0;
                    continue;
            }
            if((a<=-10000 || a>=10000) || (b<=-10000 || b>=10000) || (c<=-10000 || c>=10000))
            {
                    //test=0;
                    continue;
            }
            //cout<<a<<endl<<b<<endl<<c<<endl;
            if((a+c)==2*b)
            {
                          cout<<"AP "<<a+(3*(b-a))<<endl;
            }
            else
            {
                          cout<<"GP "<<a*(pow((b/a),3))<<endl;
            }
    }
    //getch();
    return 0;
}
