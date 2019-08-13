#include<iostream>
#include<cstdlib>
#include<math.h>
#include<random>
#pragma once
#include<cmath>
#include<utility>
#include<algorithm>
#include<string>
#include<fstream>
#include <stdio.h>
#include <ctype.h>
int countPrint(char printable);
//int third(int argc, char *argv[]);
int print()
{
    char printable;
    std::cout<<" Printables\t\tHow many times"<<std::endl;
    std::ifstream isprint;
    int counterforprintable = 0;
    
    isprint.open("Plain.txt");
    //stream.open("chipher2.txt");
    isprint.get(printable);
    
    while(!isprint.fail())
    {
        if(printable == printable)
            counterforprintable++;
        isprint.get(printable);
    }
    isprint.close();
    std::cout<<counterforprintable<<std::endl;
    return counterforprintable;
}

/*
{
  int i=0;
  char str[]="first line \n second line \n";
  while (isprint(str[i]))
  {
    putchar (str[i]);
    i++;
  }
  return 0;
}
*/