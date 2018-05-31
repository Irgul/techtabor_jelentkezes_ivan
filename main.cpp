#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
int koveknyertek=0;
int olloknyertek=0;
int papiroknyertek=0;
void eredmenyek()
{
    cout<<koveknyertek<<" kovek"<<endl;
    cout<<papiroknyertek<<" papirok"<<endl;
    cout<<olloknyertek<<" ollok"<<endl;
    cout<<endl<<endl<<endl;
}
string battle (string a, string b)
{
    if(a=="rock"&&b=="paper")
    {
        return ("paper");
    }
  else  if(a=="rock"&&b=="scissor")
    {
        return ("rock");
    }

  else    if(a=="paper"&&b=="rock")
    {
        return ("paper");
    }

   else    if(a=="paper"&&b=="scissor")
    {
        return ("scissor");
    }
    else   if(a=="scissor"&&b=="rock")
    {
        return ("rock");
    }
   else    if(a=="scissor"&&b=="paper")
    {
        return ("scissor");
    }

    else
    {
        return ("tie");

    }
}

void match(int kovekszama, int papirokszama, int ollokszama)
{
    int ossz=kovekszama+papirokszama+ollokszama;
    string populacio[ossz];
    for(int i=0; i<kovekszama; i++)
    {
        populacio[i]="rock";

    }
    for(int i=kovekszama; i<kovekszama+papirokszama; i++)
    {
        populacio[i]="paper";
    }
    for(int i=papirokszama+kovekszama; i<ossz; i++)
    {
        populacio[i]="scissor";
    }
    int kovek=0;
    int papirok=0;
    int ollok=0;
    while (kovek!=ossz&& ollok!=ossz&& papirok!=ossz)
    {
        kovek=0;
        papirok=0;
        ollok=0;
        int person1=rand() % ossz;
        int person2=rand() % ossz;
        if(populacio[person1]!=populacio[person2]){
        string eredmeny=battle(populacio[person1], populacio[person2]);
        if(eredmeny=="rock")
        {
            populacio[person2]="rock";
            populacio[person1]="rock";
        }
        if(eredmeny=="paper")
        {
            populacio[person2]="paper";
            populacio[person1]="paper";
        }
        if(eredmeny=="scissor")
        {
            populacio[person2]="scissor";
            populacio[person1]="scissor";
        }

        }
        for(int i=0; i<ossz; i++)
        {
            if(populacio[i]=="rock")
            {
                kovek++;
            }
            if(populacio[i]=="paper")
            {
                papirok++;
            }
            if(populacio[i]=="scissor")
            {
                ollok++;
            }

        }



    }
    if(kovek==ossz)
    {
        koveknyertek++;
    }

    else if(papirok==ossz)
    {
        papiroknyertek++;
    }
    else if(ollok==ossz)

    {
        olloknyertek++;
    }

}
int main ()
{
    srand (time(NULL));
    fstream myfile;
myfile.open ("2,1,n.txt");
    for(int k=1; k<21; k++){
    for(int i=1; i<100000; i++)
    {
        match(2,1,k);

    }
myfile<<olloknyertek<<endl;
koveknyertek=0;
olloknyertek=0;
papiroknyertek=0;
    }
myfile.close();


    return (0);
}
