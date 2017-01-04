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
return c+1;
}

int main()
{unsigned int i,b;
creare_pachet();
for(i=0;i<52;i++)
    pachet[i].aparitie=0;
  for(i=0;i<52;i++)  cout<<lansare_carte()<<endl;

}
