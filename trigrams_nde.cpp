#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_nde()
{
        int countertrigramnde=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("nde"))
			 {
                countertrigramnde++;
			 }
			}
		}
cout<<"(nde) trigrams in that txt = "<<countertrigramnde<<endl;

return 0;
}