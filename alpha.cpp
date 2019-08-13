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
int countChars(char letter);
//int second (int argc, char *argv[])
int alpha()
//int main()
{
    char letter;
    
    cout<<" Character\t\tHow many times"<<endl;
    
    for (letter = 'a'; letter<= 'z'; letter++)
    {
        cout<<letter<<"\t\t"<<countChars(letter)<<"times"<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
    
 }
int countChars(char letter)
 {
    ifstream stream;
    char character;
    int count = 0;
    
    stream.open("Plain.txt");
    //stream.open("chipher2.txt");
    stream.get(character);
    
    while(!stream.fail())
    {
        if(character == letter)
            count++;
        stream.get(character);
    }
    ofstream file_("alpha fitness.txt");
    if(file_.is_open())
    file_<<count;
    {
    stream.close();
    return count;
    }
 }

    
    
    