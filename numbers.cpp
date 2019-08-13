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
using namespace std;
int countNumbers(char number);
//int third(int argc, char *argv[]);
int numbers()
{
    char number;
    
    cout<<" Numbers\t\tHow many times"<<endl;
    
    for (number = '0'; number<= '9'; number++)
    {
        cout<<number<<"\t\t"<<countNumbers(number)<<"times"<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
    

}
int countNumbers(char number)
{
    ifstream stream;
    char numbering;
    int counterfornumbers = 0;
    
    stream.open("Plain.txt");
    //stream.open("chipher2.txt");
    stream.get(numbering);
    
    while(!stream.fail())
    {
        if(numbering == number)
            counterfornumbers++;
        stream.get(numbering);
    }
    stream.close();
    return counterfornumbers;
}

    
    