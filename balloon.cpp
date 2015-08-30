#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
				int test,thread_len,str_len,count;
				string str;
				scanf("%d",&test);
				while (test--)
				{
										thread_len=str_len=count=0;
									 //scanf("%s",&str);
										cin>>str;
										//cout<<"\n"<<str;
										str_len=str.length();
										for (int i=0;i<str_len;i++)
										{
														if (str[i]=='B')
														{
																 count=0;
																	for (int j=i+1;j<str_len;j++)
																	{
																					if (str[j]=='R')
																					{
																								count++;
																								//cout<<"\nFound R at len..."<<count;
																								thread_len += count;
																								str[j]='0';
																								break;
																					}
																					else
																					{
																									count++;
																					}
																	}
																	
														}
														else if(str[i]=='R')
														{
																	count=0;
																	for (int j=i+1;j<str_len;j++)
																	{
																					if (str[j]=='B')
																					{
																								count++;
																								//cout<<"\nFound B at len..."<<count;
																								thread_len += count;
																								str[j]='0';
																								break;
																					}
																					else
																					{
																									count++;
																					}
																	}
														}

										} 
										printf("%d\n",thread_len);
				}
				return 0;
}
