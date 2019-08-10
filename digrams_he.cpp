#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int digram_he()
{
        int counterdigramhe=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("he"))
			 {
                counterdigramhe++;
			 }
			}
		}
cout<<"(he) digrams in that txt = "<<counterdigramhe<<endl;

return 0;
}