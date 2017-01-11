#include"BJ_header.h"
#include <iostream>
#include<stdio.h>
#include<cstdlib>
#include<ctime>
#include<string.h>
#include<stdio.h>
using namespace std;
carte pachet[52];
void info()
{
    cout<<"                                 Blackjack"<<endl<<endl<<endl;
    cout<<"     Acest joc este unul din cele mai populare jocuri de carti din lume. Pentru a juca se folosesc 52 din cele 54 de carti de joc "<<endl;
    cout<<"exclusi fiind cei doi jokeri. Scopul jocului este de a ajunge cat mai aproape de 21 de puncte, fara a depasi aceasta valoare."<<endl;
    cout<<endl<<"Fiecare carte valoreaza un anumit punctaj, indiferent de simbolul pe care cartea il are. Punctajele sunt urmatoarele:"<<endl;
    cout<<"-Asul valoreaza 1 sau 11, in functie de punctajul de care jucatorul are nevoie"<<endl;
    cout<<"-Cartile numerotate cu valori de la 2 la 10 valoreaza exact atatea puncte cat numarul pe care il poarta"<<endl;
    cout<<"-Juva, dama si popa valoreaza cate 10 puncte fiecare"<<endl;
    cout<<endl<<"       Acest joc se poate juca impotriva dealerului sau impotriva unui prieten. In ambele moduri de joc, jucatorii vor primi "<<endl;
    cout<<"initial cate doua carti. Dupa aceea fiecare va avea posibilitatea de a alege daca vrea sa mai primeasca o carte(apasand h) sau "<<endl;
    cout<<"ramana cu cele pe care le are pana acum. Castigatorul va fi cel care va avea punctajul cel mai apropiat de 21, dar fara sa treaca"<<endl;
    cout<<"de acest numar. ";
    cout<<"     Jocul se poate juca plasand o suma de intrare. In cazul jocului cu dealerul, cel din urma va paria si el suma ceruta de jucator."<<endl;
    cout<<"Cel ce va castiga runda va castiga si banii pusi in joc. In cazul jocului contra unui prieten suma va pariata va fi suma pariata de "<<endl;
    cout<<"jucatorul care a oferit cel mai putin";
    cout<<endl<<endl<<endl;
    cout<<"                                 Bucurati-va de joc!";
}
void meniu()
{
int j=1;
system("Color 7C");
cout<<endl;
cout<<(char)201;
for(int i=1;i<100;i++)
    {;cout<<(char)205;}
cout<<(char)187<<endl;

    for(int i=1;i<25;i++)
    {cout<<(char)186;
    j=0;
    if (i==3)
        {j=j+strlen("                     Alegeti modul de joc pe care il doriti");
          cout<<"                     Alegeti modul de joc pe care il doriti";}
    if(i==5)
    {
         cout<<"      Apasati 1 pentru a juca impotriva calculatorului";
        j=j+strlen("      Apasati 1 pentru a juca impotriva calculatorului");
    }
    if(i==6)
    {
        cout<<"      Apasati 2 pentru a juca impotriva altei persoane";
     j=j+strlen("      Apasati 2 pentru a juca impotriva altei persoane");
    }
    if (i==7)
    {
        cout<<"      Apasati 3 pentru a vedea regulile jocului Black Jack";
    j=j+strlen("      Apasati 3 pentru a vedea regulile jocului Black Jack");
    }
    while(j<99)
        {j++;
        cout<<" ";}
    cout<<(char)186;
    cout<< endl;}
    cout<<(char)200;
for(int i=1;i<100;i++) cout<<(char)205;
cout<<(char)188;

}

void cinhitstay(char & hitst, char N[100])
{
    if(strlen(N)>1)
        cout<<endl<<"Selectie gresita. Mai incercati:";
    else if(strlen(N)==1&&(N[0]!='h'&& N[0]!='s'&& N[0]!='d'))
        cout<<endl<<"Selectie gresita.Mai incercati:";
        else if(strlen(N)==0)
            cout<<endl<<"Selectie gresita.Mai incercati"<<endl;
            else hitst=N[0];
}
void citirealegere(unsigned int &alegere, char s[100])
{
    if(strlen(s)>1)
        cout<<endl<<"Selectie gresita.Mai incercati"<<endl;
    else if(strlen(s)==1&&s[0]-'0'>3)
        cout<<endl<<"Selectie gresita.Mai incercati"<<endl;
        else if(strlen(s)==0)
            cout<<endl<<"Selectie gresita.Mai incercati"<<endl;
            else if(strlen(s)!=0)
                alegere=s[0]-'0';

}
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
{unsigned int i,menu=1,b;
char s[100];
    char nin[100];
unsigned int choice;
while(menu==1)
{system("CLS");
    creare_pachet();
initializareFrecventa();
meniu();
choice=0;
menu=0;
while(choice==0)
{gets(s);
citirealegere(choice,s);
}
system("CLS");
int card,card2;
int sumajucator=0,asi=0,sumacomputer=0;
while (choice==1)
{initializareFrecventa();
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
char nin[100];
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
    hitstay='y';
    showcard(card);
    showcard(card2);
    cout<<" ";
    cout<<"("<<sumajucator<<")"<<endl;
do{ cout<<"Do you want to hit(press h) or to stay(press s):";
   while(hitstay=='y')
   {gets(nin);
   cinhitstay(hitstay,nin);
   }
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
cout<<"Doriti sa mai jucati o runda?(Daca da, apasati 1 si enter. Daca doriti sa va intoarceti la meniu apasati 2 si enter):";
choice=0;
while(choice==0)
{gets(s);
citirealegere(choice,s);
}
if(choice==2)
    {choice=0;
     menu=1;}
     else if (choice==1)
        choice=1;
       else choice=0;
}

if (choice==2)
{char player1[100],player2[100];
    int card,card2;
   initializareFrecventa();
    cout<<"Introduceti numele primului jucator:";
    cin>>player1;
    cout<<endl<<"Introduceti numele celui de-al doilea jucator:";
    cin>>player2;
    cout<<endl;
    cout<<"Salutari "<<player1<<" si "<<player2<<"! Distractie placuta!";
    cout<<endl;
    system("PAUSE");
    system("CLS");
while(choice==2)
    {cout<<"Buna, "<<player1<<", tu vei incepe primul"<<endl;
    system("Pause");
    system("CLS");
     char hitstay3='y',hitstay2='y';
     int sumajucator2=0,sumajucator3=0;

asi=0;
card=lansare_carte();
card2=lansare_carte();
if(pachet[card2].numar<11&& pachet[card].numar<11)
    sumajucator2=pachet[card2].numar+pachet[card].numar;
else if(pachet[card2].numar<11)
    sumajucator2=10+pachet[card2].numar;
else
   sumajucator2=10+pachet[card].numar;
if(pachet[card2].numar==1)
{asi++;
 sumajucator2=sumajucator2+10;
}
if(pachet[card].numar==1)
{
    asi++;
    sumajucator2=sumajucator2+10;
}
if(sumajucator2>21&&asi!=0)
{
    asi--;
    sumajucator2=sumajucator2-10;
}

    cout<<"Your hand:"<<endl;
    showcard(card);
    showcard(card2);
    cout<<" ";
    cout<<"("<<sumajucator2<<")"<<endl;
do{ cout<<player1<<", do you want to hit(press h) or to stay(press s)?:";
   while(hitstay2=='y')
   {gets(nin);
   cinhitstay(hitstay2,nin);
   }
   system("CLS");
   cout<<endl;
   if(hitstay2=='h')
   {
    hit(sumajucator2,card2);
     if(pachet[card2].numar==1)
     {
         asi++;
         sumajucator2=sumajucator2+10;
     }
     if (sumajucator2>21&&asi!=0)
     {
         asi--;
         sumajucator2=sumajucator2-10;
     }
    showcard(card2);
   cout<<" ("<<sumajucator2<<")";
   cout<<endl;
   }
   if(sumajucator2>21)
    system("PAUSE");
  } while(hitstay2!='s'&&sumajucator2<=21);
system("CLS");
 cout<<"Buna, "<<player2<<", acum e randul tau "<<endl;
    system("Pause");
    system("CLS");

    asi=0;
card=lansare_carte();
card2=lansare_carte();
if(pachet[card2].numar<11&& pachet[card].numar<11)
    sumajucator3=pachet[card2].numar+pachet[card].numar;
else if(pachet[card2].numar<11)
    sumajucator3=10+pachet[card2].numar;
else
   sumajucator3=10+pachet[card].numar;
if(pachet[card2].numar==1)
{asi++;
 sumajucator3=sumajucator3+10;
}
if(pachet[card].numar==1)
{
    asi++;
    sumajucator3=sumajucator3+10;
}
if(sumajucator3>21&&asi!=0)
{
    asi--;
    sumajucator3=sumajucator3-10;
}

    cout<<"Your hand:"<<endl;
    showcard(card);
    showcard(card2);
    cout<<" ";
    cout<<"("<<sumajucator3<<")"<<endl;
do{ cout<<player2<<", do you want to hit(press h) or to stay(press s)?:";
   while(hitstay3=='y')
   {gets(nin);
   cinhitstay(hitstay3,nin);
   }
   system("CLS");
   cout<<endl;
   if(hitstay3=='h')
   {
    hit(sumajucator3,card2);
     if(pachet[card2].numar==1)
     {
         asi++;
         sumajucator3=sumajucator3+10;
     }
     if (sumajucator3>21&&asi!=0)
     {
         asi--;
         sumajucator3=sumajucator3-10;
     }
    showcard(card2);
   cout<<" ("<<sumajucator3<<")";
   cout<<endl;
   }
   if(sumajucator3>21)
    system("PAUSE");
  } while(hitstay3!='s'&&sumajucator3<=21);
system("CLS");
cout<<endl;
cout<<player1<<" are:"<<sumajucator2<<" puncte";
cout<<endl;
cout<<player2<<" are:"<<sumajucator3<<" puncte";
cout<<endl;
if(sumajucator2<=21&&sumajucator3<=21&&sumajucator2<sumajucator3)
    cout<<"Felicitari, "<<player2<<", ai castigat!";
if(sumajucator2<=21&&sumajucator3<=21&&sumajucator2>sumajucator3)
cout<<"Felicitari, "<<player1<<", ai castigat!";
int ok2=0;
if(sumajucator2>22&&sumajucator3>22)
{
    cout<<"Remiza";
    ok2=1;
}
if (sumajucator2>21&&sumajucator3<22)
    {cout<<"Felicitari, "<<player2<<", ai castigat!";
    ok2=1;}
if (ok2==0&&sumajucator3>21&&sumajucator2<=21)
    {ok2=1;
    cout<<"Felicitari, "<<player1<<", ai castigat!";}
if(sumajucator3==sumajucator2&&ok2==0)
{
 ok2=1;
 cout<<"Remiza";
}
cout<<endl;
system("PAUSE");
system("CLS");

cout<<"Doriti sa mai jucati o runda?(Daca da, apasati 1 si enter. Daca doriti sa reveniti la meniu apasati 2 si enter):";
choice=0;
while(choice==0)
{gets(s);
citirealegere(choice,s);
}
if (choice==1)
    choice=2;
if (choice==2)
{menu=1;
choice=0;
}
}
}//choice 2
if (choice==3)
{
    system("CLS");
    info();
    system("PAUSE");
    menu=1;
}
}
return 0;
}
