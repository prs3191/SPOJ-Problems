#include<iostream>
//#include<conio.h>
#include<list>
using namespace std;
int main()
{
    int test_case,no_of_elem,pos,elem,count,x,flag;
    list<int> list1;
    list<int> list2;
    list<int>::iterator it;
    list<int>::iterator temp;
    list<int>::iterator it2;
    scanf("%d",&test_case);
    while(test_case--)
    {
       count=0,flag=0;
       scanf("%d%d",&no_of_elem,&pos);
       while(no_of_elem--)
       {
          scanf("%d",&elem);
          list1.push_back(elem);   
                         
       }
       it=list1.begin();
       //cout<<"it addr:"<<<<"\n";
      // cout<<"*(list1.begin())="<<*(list1.begin());
       temp=list1.begin(); 
       for(int i=0;i<pos;i++) it++;
       x=*it;
       list2=list1;
       list2.sort();
       list2.reverse();
       
       //for(it2=list2.begin();it2!=list2.end();it2++) printf("\n%d",*it2);
       
       *it=0;
       it2=list2.begin();
        while(1)
          {
             
             if( *temp==0 && *it2==x )
               {
                 //cout<<"\nelem to be printed is found....\n";
                 count++;
                 flag=1;
                 break;   
               }
            if(flag==1) break;
             if(*temp!=*it2)
             {
         //     cout<<"\npushing....\n";
              list1.push_back(*temp);
             // cout<<"poping....\n";
              list1.pop_front();
              temp=list1.begin();
           //   cout<<"\nbegin of list1......"<<*temp<<"\n";
             }
          
            else if(*temp==*it2)
           {
             
             // cout<<"\nbegin of list1 equals list2.....\n";
               
              list2.pop_front();
              list1.pop_front();
              temp=list1.begin();
              it2=list2.begin(); 
              //cout<<"\nelem to be found....."<<*it;
              //cout<<"\ntemp addr:"<<temp<<"\n";
              count++;
              //cout<<"\ncount="<<count<<"\n";
           }
           
           /*if( *temp==0 && *it2==x )
          {
            //cout<<"\nelem to be printed is found....\n";
            count++;
            flag=1;
            break;   
          }*/
          
        }
          printf("%d\n",count);
          list1.clear();
          list2.clear();
    }
    return 0;
}
    
