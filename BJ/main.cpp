#include"BJ_header.h"
#include <iostream>
#include<stdio.h>
#include<cstdlib>
#include<ctime>
#include<string.h>
using namespace std;
carte pachet[52];
void showcard(int card1)
{ if (strcmp(pachet[card1].simbol,"romb")==0)
   {
       if (pachet[card1].numar==1)
       {cout<<" ____________"<<endl;
        cout<<"|A<>         |"<<endl;
        cout<<"|  _______   |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"| |_______|  |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"|         A<>|"<<endl;
        cout<<"|____________|"<<endl;
        cout<<endl;
       }
if (pachet[card1].numar==2)
{
cout<<" ____________"<<endl;
cout<<"|2<>         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|         2<>|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==3)
{
cout<<" ____________"<<endl;
cout<<"|3<>         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|     <>     |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|         3<>|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==4)
{
cout<<" ____________"<<endl;
cout<<"|4<>         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|         4<>|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==5)
{
cout<<" ____________"<<endl;
cout<<"|5<>         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|     <>     |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|         5<>|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==6)
{
cout<<" ____________"<<endl;
cout<<"|6<>         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|         6<>|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;

}
if (pachet[card1].numar==7)
{
cout<<" ____________"<<endl;
cout<<"|7<>         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <> <> <>  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|         7<>|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==8)
{
cout<<" ____________"<<endl;
cout<<"|8<>         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|         8<>|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==9)
{
cout<<" ____________"<<endl;
cout<<"|9<>         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|     <>     |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|         9<>|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==13)
{
cout<<" ____________"<<endl;
cout<<"|K<>         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <> <> <>  |"<<endl;
cout<<"|  <> <> <>  |"<<endl;
cout<<"|  <> <> <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|         K<>|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==12)
{
cout<<" ____________"<<endl;
cout<<"|Q<>         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <> <> <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <> <> <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|         Q<>|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==11)
{
cout<<" ____________"<<endl;
cout<<"|J<>         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <> <> <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|         J<>|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==10)
{
cout<<" ____________"<<endl;
cout<<"|10<>        |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|  <>    <>  |"<<endl;
cout<<"|        10<>|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
   }
else
if (strcmp(pachet[card1].simbol,"inima")==0)
   {
       if (pachet[card1].numar==1)
       {cout<<" ____________"<<endl;
        cout<<"|A<3         |"<<endl;
        cout<<"|  _______   |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"| |_______|  |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"|         A<3|"<<endl;
        cout<<"|____________|"<<endl;
        cout<<endl;
       }
if (pachet[card1].numar==2)
{
cout<<" ____________"<<endl;
cout<<"|2<3         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|         2<3|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==3)
{
cout<<" ____________"<<endl;
cout<<"|3<3         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|     <3     |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|         3<3|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==4)
{
cout<<" ____________"<<endl;
cout<<"|4<3         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|         4<3|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==5)
{
cout<<" ____________"<<endl;
cout<<"|5<3         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|     <3     |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|         5<3|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==6)
{
cout<<" ____________"<<endl;
cout<<"|6<3         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|         6<3|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;

}
if (pachet[card1].numar==7)
{
cout<<" ____________"<<endl;
cout<<"|7<3         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3 <3 <3  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|         7<3|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==8)
{
cout<<" ____________"<<endl;
cout<<"|8<3         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|         8<3|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==9)
{
cout<<" ____________"<<endl;
cout<<"|9<3         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|     <3     |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|         9<3|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==13)
{
cout<<" ____________"<<endl;
cout<<"|K<3         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3 <3 <3  |"<<endl;
cout<<"|  <3 <3 <3  |"<<endl;
cout<<"|  <3 <3 <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|         K<3|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==12)
{
cout<<" ____________"<<endl;
cout<<"|Q<3         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3 <3 <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3 <3 <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|         Q<3|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==11)
{
cout<<" ____________"<<endl;
cout<<"|J<3         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3 <3 <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|         J<3|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==10)
{
cout<<" ____________"<<endl;
cout<<"|10<3        |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|  <3    <3  |"<<endl;
cout<<"|        10<3|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
   }
else
if (strcmp(pachet[card1].simbol,"frunza")==0)
   {
       if (pachet[card1].numar==1)
       {cout<<" ____________"<<endl;
        cout<<"|A{)         |"<<endl;
        cout<<"|  _______   |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"| |_______|  |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"|         A{)|"<<endl;
        cout<<"|____________|"<<endl;
        cout<<endl;
       }
if (pachet[card1].numar==2)
{
cout<<" ____________"<<endl;
cout<<"|2{)         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|         2{)|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==3)
{
cout<<" ____________"<<endl;
cout<<"|3{)         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|     {)     |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|         3{)|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==4)
{
cout<<" ____________"<<endl;
cout<<"|4{)         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|         4{)|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==5)
{
cout<<" ____________"<<endl;
cout<<"|5{)         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|     {)     |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|         5{)|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==6)
{
cout<<" ____________"<<endl;
cout<<"|6{)         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|         6{)|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;

}
if (pachet[card1].numar==7)
{
cout<<" ____________"<<endl;
cout<<"|7{)         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {) {) {)  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|         7{)|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==8)
{
cout<<" ____________"<<endl;
cout<<"|8{)         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|         8{)|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==9)
{
cout<<" ____________"<<endl;
cout<<"|9{)         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|     {)     |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|         9{)|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==13)
{
cout<<" ____________"<<endl;
cout<<"|K{)         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {) {) {)  |"<<endl;
cout<<"|  {) {) {)  |"<<endl;
cout<<"|  {) {) {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|         K{)|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==12)
{
cout<<" ____________"<<endl;
cout<<"|Q{)         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {) {) {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {) {) {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|         Q{)|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==11)
{
cout<<" ____________"<<endl;
cout<<"|J{)         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {) {) {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|         J{)|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==10)
{
cout<<" ____________"<<endl;
cout<<"|10{)        |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|  {)    {)  |"<<endl;
cout<<"|        10{)|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
}
else
if (strcmp(pachet[card1].simbol,"trefla")==0)
   {
       if (pachet[card1].numar==1)
       {cout<<" ____________"<<endl;
        cout<<"|A*          |"<<endl;
        cout<<"|  _______   |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"| |_______|  |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"| |       |  |"<<endl;
        cout<<"|          A*|"<<endl;
        cout<<"|____________|"<<endl;
        cout<<endl;
       }
if (pachet[card1].numar==2)
{
cout<<" ____________"<<endl;
cout<<"|2*          |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|          2*|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==3)
{
cout<<" ____________"<<endl;
cout<<"|3*          |"<<endl;
cout<<"|            |"<<endl;
cout<<"|     *      |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|         3* |"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==4)
{
cout<<" ____________"<<endl;
cout<<"|4*          |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|          4*|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==5)
{
cout<<" ____________"<<endl;
cout<<"|5*          |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|      *     |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|          5*|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==6)
{
cout<<" ____________"<<endl;
cout<<"|6*          |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|          6*|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;

}
if (pachet[card1].numar==7)
{
cout<<" ____________"<<endl;
cout<<"|7*          |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *  *   *  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|          7*|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==8)
{
cout<<" ____________"<<endl;
cout<<"|8*          |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|          8*|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==9)
{
cout<<" ____________"<<endl;
cout<<"|9*          |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|     *      |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|          9*|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==13)
{
cout<<" ____________"<<endl;
cout<<"|K*          |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *  *   *  |"<<endl;
cout<<"|  *  *   *  |"<<endl;
cout<<"|  *  *   *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|          K*|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==12)
{
cout<<" ____________"<<endl;
cout<<"|Q*          |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *  *   *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *  *   *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|          Q*|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==11)
{
cout<<" ____________"<<endl;
cout<<"|J*          |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *  *   *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|          J*|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
if (pachet[card1].numar==10)
{
cout<<" ____________"<<endl;
cout<<"|10*         |"<<endl;
cout<<"|            |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|  *      *  |"<<endl;
cout<<"|         10*|"<<endl;
cout<<"|____________|"<<endl;
cout<<endl;
}
}
}

void randCard(unsigned int & a)
{
    srand((unsigned)time(0));
    a= (rand()%52);

}
void creare_pachet()
{unsigned int i;
for(i=0;i<52;i++)
{pachet[i].numar=i%13+1;
if(i<13)strcpy(pachet[i].simbol,"inima");
else if(i<26) strcpy(pachet[i].simbol,"romb");
else if(i<39)strcpy(pachet[i].simbol,"frunza");
else strcpy(pachet[i].simbol,"trefla");
}}
int lansare_carte()
{unsigned int c;
randCard(c);
while (pachet[c].aparitie==1)
    randCard(c);
    pachet[c].aparitie=1;
return c;
}
void initializareFrecventa()
{int i;
    for(i=0;i<52;i++)
    pachet[i].aparitie=0;
}
void hit(int &suma,int &cartea)
{

    cartea=lansare_carte();
    if(pachet[cartea].numar>10)
        suma=suma+10;
    else
        suma=suma+pachet[cartea].numar;
}

int main()
{unsigned int i,b;
unsigned int choice;
creare_pachet();
initializareFrecventa();
cout<<"Alegeti modul de joc pe care il doriti"<<endl<<"Press 1 for playing with computer"<<endl<<"Press 2 for playing with your friend"<<endl<<"Alegerea dumneavoastra:";
cin>>choice;
cout<<endl;
system("CLS");
while (choice==1)
{int card,card2;
int sumajucator=0,asi=0,sumacomputer=0;
{//computer
    card=lansare_carte();
card2=lansare_carte();
if(pachet[card2].numar<11&& pachet[card].numar<11)
    sumacomputer=pachet[card2].numar+pachet[card].numar;
else if(pachet[card2].numar<11)
    sumacomputer=10+pachet[card2].numar;
else
   sumacomputer=10+pachet[card].numar;
if(pachet[card2].numar==1)
{asi++;
 sumacomputer=sumacomputer+10;
}
if(pachet[card].numar==1)
{
    asi++;
    sumacomputer=sumacomputer+10;
}
if(sumacomputer>21&&asi!=0)
{
    asi--;
    sumacomputer=sumacomputer-10;
}
    cout<<"Dealer's hand:"<<endl;
   showcard(card);
    cout<<" ";
    showcard(card2);
    cout<<"("<<sumacomputer<<")"<<endl;
    system("PAUSE");
    system("CLS");
 while (sumacomputer<=16)
 {
     cout<<endl<<"Computerul alege sa mai traga o carte:"<<endl;
     hit(sumacomputer,card2);
     showcard(card2);
     if(pachet[card2].numar==1)
     {
         asi++;
         sumacomputer=sumacomputer+10;
     }
     if (sumacomputer>21&&asi!=0)
     {
         asi--;
         sumacomputer=sumacomputer-10;
     }
     cout<<" ("<<sumacomputer<<")";
     cout<<endl;
 }
 system("PAUSE");
 system("CLS");
}
{ char hitstay;
asi=0;
card=lansare_carte();
card2=lansare_carte();
if(pachet[card2].numar<11&& pachet[card].numar<11)
    sumajucator=pachet[card2].numar+pachet[card].numar;
else if(pachet[card2].numar<11)
    sumajucator=10+pachet[card2].numar;
else
   sumajucator=10+pachet[card].numar;
if(pachet[card2].numar==1)
{asi++;
 sumajucator=sumajucator+10;
}
if(pachet[card].numar==1)
{
    asi++;
    sumajucator=sumajucator+10;
}
if(sumajucator>21&&asi!=0)
{
    asi--;
    sumajucator=sumajucator-10;
}

    cout<<"Your hand:"<<endl;
    showcard(card);
    showcard(card2);
    cout<<" ";
    cout<<"("<<sumajucator<<")"<<endl;
do{ cout<<"Do you want to hit(press h) or to stay(press s):";
   cin >> hitstay;
   system("CLS");
   cout<<endl;
   if(hitstay=='h')
   {
    hit(sumajucator,card2);
     if(pachet[card2].numar==1)
     {
         asi++;
         sumajucator=sumajucator+10;
     }
     if (sumajucator>21&&asi!=0)
     {
         asi--;
         sumajucator=sumajucator-10;
     }
    showcard(card2);
   cout<<" ("<<sumajucator<<")";
   cout<<endl;
   }
   if(sumajucator>21)
    system("PAUSE");
  } while(hitstay!='s'&&sumajucator<=21);
system("CLS");}
cout<<endl;
cout<<"Dealerul are "<<sumacomputer<<" puncte";
cout<<endl;
cout<<"Dumneavoastra aveti "<<sumajucator<<" puncte";
cout<<endl;
if(sumajucator<=21&&sumacomputer<=21&&sumacomputer<sumajucator)
    cout<<"Felicitari, ati castigat!";
if(sumajucator<=21&&sumacomputer<=21&&sumacomputer>sumajucator)
cout<<"Dealerul a castigat";
int ok=0;
if (sumajucator>21)
    {cout<<"Dealerul a castigat";
    ok=1;}
if (ok==0&&sumacomputer>21&&sumajucator<=21)
    {ok=1;
    cout<<"Felicitari, ati castigat!";}
if(sumajucator==sumacomputer&&ok==0)
{
 ok=1;
 cout<<"Remiza";
}
cout<<endl;
system("PAUSE");
system("CLS");
cout<<"Doriti sa mai jucati o runda?(Daca da, apasati 1 si enter. Daca nu, apasati 2):";
cin>>choice;
}
return 0;
}
