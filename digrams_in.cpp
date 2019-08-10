#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int digram_in()
{
        int counterdigramin=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("in"))
			 {
                counterdigramin++;
			 }
			}
		}
cout<<"(in) digrams in that txt = "<<counterdigramin<<endl;

return 0;
}