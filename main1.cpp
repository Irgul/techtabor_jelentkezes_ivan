#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string populacio[100];
int wizards=0;
int dragons=0;
int dwarfs=0;
int elfs=0;
int orcs=0;
int wizardswin=0;
int dragonswin=0;
int dwarfswin=0;
int elfswin=0;
int orcswin=0;
void eredmenyek ()
{
    cout<<dragonswin<<" dragons,";
    cout<<orcswin<<" orcs,";
    cout<<dwarfswin<<" dwarfs,";
    cout<<elfswin<<" elfs,";
    cout<<wizardswin<<" wizards"<<" winned  the game"<<endl;

}
string battle(string a, string b)
{
    if(a=="dragon"&&b=="orc")
    {
        return ("a");
    }
    else if(a=="dragon"&&b=="dwarf")
    {
        return ("a");
    }
    else if(a=="dragon"&&b=="elf")
    {
        return ("a");
    }
    else if(a=="orc"&&b=="dwarf")
    {
        return ("b");
    }
    else if(a=="orc"&&b=="elf")
    {
        return ("a");
    }
    else if(a=="dwarf"&&b=="elf")
    {
        return ("b");
    }
    else if(a=="orc"&&b=="wizard")
    {
        return ("a");
    }
    else if(a=="dwarf"&&b=="wizard")
    {
        return ("a");
    }
    else if(a=="elf"&&b=="wizard")
    {
        return ("a");
    }
    else if(a=="dragon"&&b=="wizard")
    {
        return ("b");
    }
    else if(b=="dragon"&&a=="orc")
    {
        return ("b");
    }
    else if(b=="dragon"&&a=="dwarf")
    {
        return ("b");
    }
    else if(b=="dragon"&&a=="elf")
    {
        return ("b");
    }
    else if(b=="orc"&&a=="dwarf")
    {
        return ("a");
    }
    else if(b=="orc"&&a=="elf")
    {
        return ("b");
    }
    else if(b=="dwarf"&&a=="elf")
    {
        return ("a");
    }
    else if(b=="orc"&&a=="wizard")
    {
        return ("b");
    }
    else if(b=="dwarf"&&a=="wizard")
    {
        return ("b");
    }
    else if(b=="elf"&&a=="wizard")
    {
        return ("b");
    }
    else if(b=="dragon"&&a=="wizard")
    {
        return ("a");
    }
    else
    {
        return ("it's a tie");
    }
}
void newarena ()
{
    for(int i=0; i<20; i++)
    {
        populacio[i]="dragon";
    }
    for(int i=20; i<40; i++)
    {
        populacio[i]="dwarf";
    }
    for(int i=40; i<60; i++)
    {
        populacio[i]="orc";
    }
    for(int i=60; i<80; i++)
    {
        populacio[i]="elf";
    }
    for(int i=80; i<100; i++)
    {
        populacio[i]="wizard";
    }
}
void match ()
{
    while (dragons!=100&& orcs!=100&& dwarfs!=100&& elfs!=100&& wizards!=100)
    {
        dragons=0;
        orcs=0;
        dwarfs=0;
        elfs=0;
        wizards=0;
        int person1=rand() % 100;
        int person2=rand() % 100;
        string eredmeny=battle(populacio[person1], populacio[person2]);
        if(eredmeny=="a")
        {
            populacio[person2]=populacio[person1];
        }
        if(eredmeny=="b")
        {
            populacio[person1]=populacio[person2];
        }

        for(int i=0; i<100; i++)
        {
            if(populacio[i]=="dragon")
            {
                dragons++;
            }
            if(populacio[i]=="elf")
            {
                elfs++;
            }
            if(populacio[i]=="orc")
            {
                orcs++;
            }
            if(populacio[i]=="dwarf")
            {
                dwarfs++;
            }
            if(populacio[i]=="wizard")
            {
                wizards++;
            }

        }



    }
    if(dragons==100)
    {
        dragonswin++;
    }
    else if(orcs==100)
    {
        orcswin++;
    }
    else if(dwarfs==100)
    {
        dwarfswin++;
    }
    else if(elfs==100)
    {
        elfswin++;
    }
    else if(wizards==100)
    {
        wizardswin++;
    }

    dragons=0;
    orcs=0;
    dwarfs=0;
    elfs=0;
    wizards=0;
    newarena ();
}
int main()
{
    int check=0;
    srand (time(NULL));
    newarena ();

    while(check<1000)
    {
        match ();
        check++;
        cout<<check<<endl;

    }
    eredmenyek();
    return 0;
}
