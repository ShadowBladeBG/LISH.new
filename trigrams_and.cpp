#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_and()
{
        int countertrigramand=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("and"))
			 {
                countertrigramand++;
			 }
			}
		}
cout<<"(the) trigrams in that txt = "<<countertrigramand<<endl;

return 0;
}