#include<iostream>
#include"color.h"
#include"file_function.h"

using namespace std;
int main(){
system("clear");
bool status=true;
int choice;
char ch;
while(status==true)
{
    cout<< BOLDWHITE;
    printf("%50s \n","WELCOME TO CYPHER ENCRYPTION");
    cout<< RESET ;
    cout<< BOLDRED;
    printf("%43s \n","BY WhatTheFish");
    cout<< RESET ;
    cout<<BOLDMAGENTA<<"Menu : \n"<<RESET;
    cout<<BOLDBLUE<<"1.Read \n"<<RESET;
    cout<<BOLDBLUE<<"2.Encrypt \n"<<RESET;
    cout<<BOLDBLUE<<"3.Decrypt \n"<<RESET;
    cout<<endl;
    cout<<BOLDBLUE<<"Choose : "<<RESET;
    cin>>choice;
    cout<<endl;
    switch (choice)
    {
    case 1:
        read();
        break;
    case 2:
        encrypt();
        break;

    
    default:
        break;
    }
    cout<<BOLDMAGENTA<<"Quit? (y/n) \n"<<RESET;
    cin>>ch;
    if (ch=='y'|| ch=='Y')
    {
        break;
    }
    else
    {
        status==true;
    }
    
    
}
    
    
}