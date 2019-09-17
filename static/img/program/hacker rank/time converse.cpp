#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
    int hh,mm,ss;
    string fm;
    scanf("%d:%d:%d",&hh,&mm,&ss);
    cin>>fm;
    if(hh<10&&fm=="AM"){
        cout<<'0'<<hh<<':'<<mm<<':'<<ss;
    }
   if(hh<12&&fm=="PM"){
        cout<<hh+12<<':'<<mm<<':'<<ss;
   }
   if(hh==12&&fm=="AM"){
        cout<<"00"<<':'<<mm<<':'<<ss;
   }
}
