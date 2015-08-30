#include<iostream>
#include<conio.h>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    vector<int> vec;
    int num1,num2;
    vector <int>::iterator it; 
    int test;
     cin>>test;
     cin.clear();
     cin.ignore();
    while(test)
    {
               num1=0;num2=0;
              it=vec.begin(); 
             
              
              cout<<"\nenter:\n";
              scanf("%d %d",&num1,&num2);
              vec.push_back(num1),vec.push_back(num2);
              cout<<"\npushed";
              cin.clear();
              cin.ignore();
              reverse(vec.begin(),vec.end());
              //cin>>vec.push_back(1);
          //  cout<<*it <<endl;it++;cout<<*it<<endl;
              for (it=vec.begin(); it<vec.end(); it++)
              {
                                   
                                       cout << "\n" <<*it; 
              }
              vec.erase(vec.begin());
               vec.erase(vec.begin());
               test--;
    }
    getch();
}
