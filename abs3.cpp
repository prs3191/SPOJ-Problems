#include<iostream>
//#include<conio.h>
#include<cstdlib>
#include<string>
//#include<stdio.h>
#include <sstream>
using namespace std;
int main()
{
    
    struct expr
    {
           string op[5],exprs;
    };
    int test,i=0,k=0;
   
   
    //cout<<"test:";
    cin>>test;
    //cout<<"\n";
     string strin,exprs[test];
    cin.clear();
    cin.ignore();
   stringstream ss1;
    struct expr obj[test];
    for(int t=0; t<test*2;t++)
    {
             //cout<<"\nexpr:";
             getline(cin,exprs[k],'\n');
           
             istringstream ss (exprs[k],istringstream::in | istringstream::out);
             if(exprs[k].empty()== true )
             {
                        ss.str("");
                        ss.clear();  
                        continue;
             }
            while ( ss >> strin )
            {
                  obj[k].op[i++] = strin;
                 // cout << strin << endl;
                  
            }    
            i=0;   
            ss.str("");
            ss.clear();
            for (int j =0 ;j<5;j++)
            {
                //cout<< obj[t].op[j] << endl;
               if(obj[k].op[j].find("machula",0)!= -1)
                {
                   if (j==0)
                   {
                            ss1 << atoi(obj[k].op[4].data()) - atoi(obj[k].op[2].data());
                                                      obj[k].op[0]  = ss1.str();
                           cout<<obj[k].op[0]<<" "<<obj[k].op[1]<<" "<<obj[k].op[2]<<" "<<obj[k].op[3]<<" "<<obj[k].op[4]<<endl;
                            ss1.str("");
            ss1.clear();
                            break;
                            }             
                    else if(j==2)
                    { ss1 << atoi(obj[k].op[4].data()) - atoi(obj[k].op[0].data());
                    obj[k].op[2] =  ss1.str();
                    cout<<obj[k].op[0]<<" "<<obj[k].op[1]<<" "<<obj[k].op[2]<<" "<<obj[k].op[3]<<" "<<obj[k].op[4]<<endl;
                      ss1.str("");
                                ss1.clear();
                                               break;}               
                    else
                    {ss1 << atoi(obj[k].op[0].data()) + atoi(obj[k].op[2].data());
                    obj[k].op[4] =  ss1.str();
                     ss1.str("");
                                ss1.clear();

                                               cout<<obj[k].op[0]<<" "<<obj[k].op[1]<<" "<<obj[k].op[2]<<" "<<obj[k].op[3]<<" "<<obj[k].op[4]<<endl;
                                               break;}
                }
                                            
                
            }
            //cout<<"\n";
            k++;
              
    }
    //getch();
}
    


