#include"BJ_header.h"
#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string.h>
using namespace std;
carte pachet[52];
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
card=lansare_carte();
card2=lansare_carte();
    cout<<"Dealer's hand:";
    cout<<pachet[card].numar<<"->"<<pachet[card].simbol;
    cout<<" ";
    cout<<pachet[card2].numar<<"->"<<pachet[card2].simbol<<endl;
card=lansare_carte();
card2=lansare_carte();
    cout<<"Your hand:";
    cout<<pachet[card].numar<<"->"<<pachet[card].simbol;
    cout<<" ";
    cout<<pachet[card2].numar<<"->"<<pachet[card2].simbol<<endl;
}
return 0;

}
