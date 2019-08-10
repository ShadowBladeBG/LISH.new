#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_ing()
{
        int countertrigraming=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("ing"))
			 {
                countertrigraming++;
			 }
			}
		}
cout<<"(ing) trigrams in that txt = "<<countertrigraming<<endl;

return 0;
}