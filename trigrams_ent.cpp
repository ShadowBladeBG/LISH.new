#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_ent()
{
        int countertrigrament=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("ent"))
			 {
                countertrigrament++;
			 }
			}
		}
cout<<"(ent) trigrams in that txt = "<<countertrigrament<<endl;

return 0;
}