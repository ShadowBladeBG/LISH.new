#include<iostream>
#include "second.cpp"
#include "third.cpp"
#include "fourth.cpp"
#include "digrams_he.cpp"
#include "digrams_th.cpp"
#include "digrams_er.cpp"
#include "digrams_in.cpp"
#include "trigrams_and.cpp"
#include "trigrams_edt.cpp"
#include "trigrams_ent.cpp"
#include "trigrams_for.cpp"
#include "trigrams_has.cpp"
#include "trigrams_ing.cpp"
#include "trigrams_ion.cpp"
#include "trigrams_men.cpp"
#include "trigrams_nce.cpp"
#include "trigrams_nde.cpp"
#include "trigrams_oft.cpp"
#include "trigrams_sth.cpp"
#include "trigrams_tha.cpp"
#include "trigrams_the.cpp"
#include "trigrams_tio.cpp"
#include "trigrams_tis.cpp"
#include<cstdlib>
#include<math.h>
#include<random>
#pragma once
#include<cmath>
#include<utility>
#include<algorithm>
#include<fstream>
#include<string>
const int KEYLEN=17;
using namespace std;
int main()
{
    second();
    third();
    fourth();
    digram_he();
    digram_th();
    digram_er();
    digram_in();
    trigrams_and();
    trigrams_edt();
    trigrams_ent();
    trigrams_for();
    trigrams_has();
    trigrams_ing();
    trigrams_ion();
    trigrams_men();
    trigrams_nce();
    trigrams_nde();
    trigrams_oft();
    trigrams_sth();
    trigrams_tha();
    trigrams_the();
    trigrams_tio();
    trigrams_tis();
    ifstream stream;
    int br=0, brn=0, t;

   int BONUS_FOR_PRINTABLE=1;
   int BONUS_FOR_LOWERCASE=3;
   int BONUS_FOR_SPACE=8;
   int BONUS_FOR_DIGRAM=8;
   int BONUS_FOR_TRIGRAM=16;
   int PENALTY_FOR_DIGIT=-10;
   int fitness=0;

   //opening the two chipers //deep copy might be needed
      /*                  std::string line_;
                        ifstream file_("chipher1.txt");
                        if(file_.is_open())
                            {
                                while(getline(file_,line_))
                                    {
                                        std::cout<<line_<< '\n';
                                    }
                                file_.close();
                            }
                        else
                            std::cout<<"file is not open"<< '\n';
                        cout<<endl<<endl<<endl;
        */
  /*  std::string line2_;
    ifstream file2_("chipher2.txt");
    if(file2_.is_open())
    {
        while(getline(file2_,line2_))
        {
            std::cout<<line2_<< '\n';
            for(t=0;t<26;t++)
                {
                    if(p[]==line2_) //p[]
                    {
                        fitness=fitness+BONUS_FOR_LOWERCASE;
                    }
                }
        }
        file2_.close();
    }
    else
        std::cout<<"file is not open"<< '\n';

        std::cin.get();

 */
    // TUNNING //
/*

/*
if(p==file2_)
    {
        fitness=fitness+BONUS_FOR_LOWERCASE;
    }
else
    {
        cout<<endl<<"wrong"<<endl;
    }


for(p[] in file2_("chipher2.txt"))
    {


        if p in "qwertyuiopasdfghjklzxcvbnm":
            fitness=fitness+BONUS_FOR_LOWERCASE;
        if p in "0123456789":
            fitness=fitness+PENALTY_FOR_DIGIT
        p=ord(p)
        if (p>=0x20 and p<=0x7E) or p==0xA or p==0xD:
            fitness=fitness+BONUS_FOR_PRINTABLE

    for digram in digrams:
        fitness=fitness + plain.count(digram)*BONUS_FOR_DIGRAM

    for trigram in trigrams:
        fitness=fitness + plain.count(trigram)*BONUS_FOR_TRIGRAM

    fitness=fitness + plain.count(" ")*BONUS_FOR_SPACE
    }
    cout<<endl<<"fitness = "<<fitness<<endl;
*/

//    cout<<"pepe is p = "<<p<<endl;
                                        //cout<<"pepe is lower = "<<fitness<<endl;


 // TESTING //

 /*
    for(int i=0;i<15;i++)
        {
            if((offset == line2_.find('the', 0)) ) //!=string::npos)
                {
                    br++;
                }
            else
                {
                    brn++;
                }
        }
        cout<<endl;
        cout<<offset<<endl;
        cout<<endl;
        cout<<line2_<<endl;
        cout<<br;
        cout<<endl<<brn<<endl;
     //experiment failed for now.. needed tunning
    */
    
    cout<<endl<<"for now"<<endl;



     return 0;
}
