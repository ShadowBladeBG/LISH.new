#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_oft()
{
        int countertrigramoft=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("oft"))
			 {
                countertrigramoft++;
			 }
			}
		}
cout<<"(oft) trigrams in that txt = "<<countertrigramoft<<endl;

return 0;
}