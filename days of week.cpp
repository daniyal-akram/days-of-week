#include<iostream>
using namespace std;
int main()
{ int choice;
 cout<<"dayz of week\n1\n2\n3\n4\n5\n6\n7\n";
 cout<<"Enter Your choice";
 cin>>choice;
 if(choice==1){ 
 cout<<"Sunday";
 }else if(choice==2){
 cout<<"Monday";
 }else if(choice==3){
 cout<<"Tuesday";
 }else if(choice==4){
 cout<<"Wednesday";
 }else if(choice==5){
 cout<<"Thursday";
 }else if(choice==6){
 cout<<"Friday";
 }else if(choice==7){
 cout<<"Saturday";
 }else if(choice){
 cout<<"invalid";
 }
}
