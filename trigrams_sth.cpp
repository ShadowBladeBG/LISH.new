#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_sth()
{
        int countertrigramsth=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("sth"))
			 {
                countertrigramsth++;
			 }
			}
		}
cout<<"(sth) trigrams in that txt = "<<countertrigramsth<<endl;

return 0;
}