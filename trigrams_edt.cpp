#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_edt()
{
        int countertrigramedt=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("edt"))
			 {
                countertrigramedt++;
			 }
			}
		}
cout<<"(edt) trigrams in that txt = "<<countertrigramedt<<endl;

return 0;
}