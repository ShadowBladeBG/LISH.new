#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_ion()
{
        int countertrigramion=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("ion"))
			 {
                countertrigramion++;
			 }
			}
		}
cout<<"(ion) trigrams in that txt = "<<countertrigramion<<endl;

return 0;
}