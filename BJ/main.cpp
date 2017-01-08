#include"BJ_header.h"
#include <iostream>
#include<stdio.h>
#include<cstdlib>
#include<ctime>
#include<string.h>
using namespace std;
carte pachet[52];
void showcard(int card1,)
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
void hit(int &suma)
{
    int d;
    d=lansare_carte();
    if(pachet[d].numar>10)
        suma=suma+10;
    else
        suma=suma+pachet[d].numar;
    cout<<pachet[d].numar<<"->"<<pachet[d].simbol;
}
int main()
{unsigned int i,b;
unsigned int choice;
creare_pachet();
initializareFrecventa();
cout<<"Alegeti modul de joc pe care il doriti"<<endl<<"Press 1 for playing with computer"<<endl<<"Press 2 for playing with your friend"<<endl<<"Alegerea dumneavoastra:";
cin>>choice;
cout<<endl;
if (choice==1)
{int card,card2;
int sumajucator=0,sumacomputer=0;
{//computer
    card=lansare_carte();
card2=lansare_carte();
if(pachet[card2].numar<11&& pachet[card].numar<11)
    sumacomputer=pachet[card2].numar+pachet[card].numar;
else if(pachet[card2].numar<11)
    sumacomputer=10+pachet[card2].numar;
else
   sumacomputer=10+pachet[card].numar;
    cout<<"Dealer's hand:";
    cout<<pachet[card].numar<<"->"<<pachet[card].simbol;
    cout<<" ";
    cout<<pachet[card2].numar<<"->"<<pachet[card2].simbol<<"("<<sumacomputer<<")"<<endl;
 if (sumacomputer<16)
 {
     cout<<endl<<"Computerul alege sa mai traga o carte:"<<endl;
     hit(sumacomputer);
     cout<<" ("<<sumacomputer<<")";
     cout<<endl;
 }
}
{ char hitstay;
card=lansare_carte();
card2=lansare_carte();
if(pachet[card2].numar<11&& pachet[card].numar<11)
    sumajucator=pachet[card2].numar+pachet[card].numar;
else if(pachet[card2].numar<11)
    sumajucator=10+pachet[card2].numar;
else
   sumajucator=10+pachet[card].numar;

    cout<<"Your hand:";
    cout<<pachet[card].numar<<"->"<<pachet[card].simbol;
    cout<<" ";
    cout<<pachet[card2].numar<<"->"<<pachet[card2].simbol<<"("<<sumajucator<<")"<<endl;
do{ cout<<"Do you want to hit(press h) or to stay(press s):";
   cin >> hitstay;
   cout<<endl;
   if(hitstay=='h')
   {
    hit(sumajucator);
   cout<<" ("<<sumajucator<<")";
   cout<<endl;
   }
  } while(hitstay!='s');
}
cout<<endl;
cout<<"Dealerul are "<<sumacomputer<<" puncte";
cout<<endl;
cout<<"Dumneavoastra aveti "<<sumajucator<<" puncte";
cout<<endl;
if(sumajucator<=21&&sumacomputer<=21)
    cout<<"Felicitari, ati castigat!";
else if (sumajucator>21)
    cout<<"Dealerul a castigat";
     else
        cout<<"Felicitari, ati castigat!";
}
return 0;

}
