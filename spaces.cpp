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
int countSpaces(char space);
//int third(int argc, char *argv[]);
int spaces()
//int main()
{
    char space;
    
    cout<<" Spaces\t\tHow many times"<<endl;
    
    for (space = ' '; space<= ' '; space++)
    {
        cout<<space<<"\t\t"<<countSpaces(space)<<"times"<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
    

}
int countSpaces(char space)
{
    ifstream stream;
    char spacing;
    int counterforspacing = 0;
    
    stream.open("Plain.txt");
    //stream.open("chipher2.txt");
    stream.get(spacing);
    
    while(!stream.fail())
    {
        if(spacing == space)
            counterforspacing++;
        stream.get(spacing);
    }
    ofstream file_("spacing fitness.txt");
    if(file_.is_open())
    {
        
    
    stream.close();
    file_<<counterforspacing;
    }
    return counterforspacing;
}