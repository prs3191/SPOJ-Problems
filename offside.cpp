#include<iostream>
//#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
   int attsz=1,defsz=1,k;
    while(1)
    {
            k=0;
           
               // cout<<"no of att players:";
                //cin>>attsz;
               scanf("%d",&attsz);
                   scanf("%d",&defsz);
               // cout<<"\nno of def players:";
                //cin>>defsz;
                 if((attsz==0) && (defsz==0)) break;
                if((!(2<=attsz)) || (!(defsz<=11)))
                { continue;}
                
                if((attsz==0) && (defsz==0)) break;
                int attdist[attsz],defdist[defsz];
                //cout<<"\ndist of each att player:\n";
                for(int i=0;i<attsz;i++)
                {
                   //cin>>attdist[i];
                  scanf("%d",&attdist[i]);
                   if((attdist[i]>10000) && attdist[i]<0)
                               continue;
                }
                 //   cout<<"\ndist of each def player:\n";
                for(int i=0;i<defsz;i++)
                {
                       scanf("%d",&defdist[i]);
                        //cin>>defdist[i];
                         if((defdist[i]>10000) && defdist[i]<0)
                               continue;
                 }
                sort(defdist,defdist+defsz,greater<int>());
                //cout<<"\ndist of each def player sorted:";
               /* for(int i=0;i<defsz;i++)
                {
                              cout<<"\n"<<defdist[i];
                              
                }*/
                  for(k=0;k<attsz;k++)
                   {
                    if(attdist[k]<defdist[defsz-2])
                    {
                                               cout<<"Y"<<"\n";
                                               break;
                    }       
                        
                    }
     if((k==attsz) && k!=0)
     {
                cout<<"N"<<"\n";
     }
     
    }
     //getch();
}
