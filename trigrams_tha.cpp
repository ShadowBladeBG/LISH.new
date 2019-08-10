#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_tha()
{
        int countertrigramtha=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("tha"))
			 {
                countertrigramtha++;
			 }
			}
		}
cout<<"(tha) trigrams in that txt = "<<countertrigramtha<<endl;

return 0;
}