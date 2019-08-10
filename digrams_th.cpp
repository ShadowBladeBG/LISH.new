#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int digram_th()
{
        int counterdigramth=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("th"))
			 {
                counterdigramth++;
			 }
			}
		}
cout<<"(th) digrams in that txt = "<<counterdigramth<<endl;

return 0;
}