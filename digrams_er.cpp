#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int digram_er()
{
        int counterdigramer=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("er"))
			 {
                counterdigramer++;
			 }
			}
		}
cout<<"(er) digrams in that txt = "<<counterdigramer<<endl;

return 0;
}