#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_nce()
{
        int countertrigramnce=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("nce"))
			 {
                countertrigramnce++;
			 }
			}
		}
cout<<"(nce) trigrams in that txt = "<<countertrigramnce<<endl;

return 0;
}