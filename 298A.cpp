#include<iostream>

using namespace std;
char s[1000];
int main(){

int x,countr=0,countl=0,startr=0,endr=0,startl=0,flag=0,flag2=0;
cin >> x;
cin >> s;

for(int i=0;s[i]!=NULL;i++)
{
//-----------------------------------------------------------------------------------------------------
if(s[i]=='R')
countr++;
else if(s[i]=='L')
countl++;
//-----------------------------------------------------------------------------------------------------
if(flag==0&&s[i]=='R')
{
startr=i;
flag=1;
}
//---------------------------------------------------------------------------------------------------------
if(flag2==0&&s[i]=='L')
{
startl=i;
endr=i-1;
flag2=1;
}
//--------------------------------------------------------------------------------------------------------
}

 cout << startr+1<<" "<<startl;

}
