#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_the()
{
        int countertrigramthe=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("the"))
			 {
                countertrigramthe++;
			 }
			}
		}
cout<<"(the) trigrams in that txt = "<<countertrigramthe<<endl;

return 0;
}