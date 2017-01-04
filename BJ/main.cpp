#include"BJ_header.h"
#include <iostream>
#include<string.h>
using namespace std;
carte pachet[52];
void creare_pachet()
{unsigned int i;
for(i=0;i<52;i++)
{pachet[i].numar=i%13+1;
if(i<13)strcpy(pachet[i].simbol,"inima");
else if(i<26) strcpy(pachet[i].simbol,"romb");
else if(i<39)strcpy(pachet[i].simbol,"frunza");
else strcpy(pachet[i].simbol,"trefla");
}}

int main()
{
}
