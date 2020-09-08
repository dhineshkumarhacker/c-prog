#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c,ans=0;
clrscr();
cout<<"enter a,b,c";
cin>>a>>b>>c;
ans=a<b?b:a;
ans=ans<c?c:ans;
cout<<ans;
getch();
}