#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_men()
{
        int countertrigrammen=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("men"))
			 {
                countertrigrammen++;
			 }
			}
		}
cout<<"(men) trigrams in that txt = "<<countertrigrammen<<endl;

return 0;
}