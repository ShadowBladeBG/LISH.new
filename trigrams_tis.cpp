#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_tis()
{
        int countertrigramtis=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("tis"))
			 {
                countertrigramtis++;
			 }
			}
		}
cout<<"(tis) trigrams in that txt = "<<countertrigramtis<<endl;

return 0;
}