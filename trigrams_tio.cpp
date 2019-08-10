#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_tio()
{
        int countertrigramtio=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("tio"))
			 {
                countertrigramtio++;
			 }
			}
		}
cout<<"(tio) trigrams in that txt = "<<countertrigramtio<<endl;

return 0;
}