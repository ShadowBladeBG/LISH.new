#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_has()
{
        int countertrigramhas=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("has"))
			 {
                countertrigramhas++;
			 }
			}
		}
cout<<"(has) trigrams in that txt = "<<countertrigramhas<<endl;

return 0;
}