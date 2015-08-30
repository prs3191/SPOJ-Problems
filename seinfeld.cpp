#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
				stack<char> ch;
				int test_no=1,change,len,i;
				char sym[2001],invalid[2]="-";
				while (1)
				{
					  		 //cout<<"\nenter sym..";
										i=1;len=change=0;
										cin>>sym;
										cin.clear();
										if (strncmp(sym,invalid,1)==0) break;
										len=strlen(sym);
										ch.push(sym[0]);
										while (i<len)
										{
																//cout<<"\ni is.."<<i;
																if (!ch.empty() && ch.top()=='{' && sym[i]=='}')
																{
																		//	cout<<"\n{ } found...skipping one char from sym..";
																			ch.pop();
																			//i++;
																}
																else
																{
																			//cout<<"\npushing..."<<i;	
																			ch.push(sym[i]);
																		
																}
																i++;
										}
										while (!ch.empty())
										{
																if	(ch.top()=='}')
																{
																			//cout<<"\n} found..so pop n change to {";
																			ch.pop();
																			change++;
																			//cout<<"\nchange is.."<<change;
																			ch.pop();
																}
															else	if (ch.top()=='{')
																{
																				//cout<<"\n{ found..so pop...";
																				ch.pop();
																				if (ch.top()=='{')
																				{
																						//	cout<<"\n{\n{\nfound..changing to \n }\n{";
																							change++;
																								//cout<<"\nchange is.."<<change;
																							ch.pop();
																				}
																				else if (ch.top()=='}')
																				{
																									//cout<<"\n{\n}\nfound..changing to\n }\n{";
																									change +=2;
																									//cout<<"\nchange is.."<<change;
																									ch.pop();
																								//	ch.pop();
																				}
																}
																
																
										}	 			
										if(sym[0]!='-') printf("%d. %d\n",test_no,change);
										test_no++;						
				}
										
}
