#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int trigrams_for()
{
        int countertrigramfor=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 if(pos = line.find("for"))
			 {
                countertrigramfor++;
			 }
			}
		}
cout<<"(for) trigrams in that txt = "<<countertrigramfor<<endl;

return 0;
}