#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
        int counterdigramth=0;
        int counterdigramhe=0;
        int counterdigrams=0;
        ifstream input;
		size_t pos;
        string line;

		input.open("Plain.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{
			 pos = line.find("th");
			 counterdigramth++;    //working!!!!! not so much....
			 pos = line.find("he");
			 counterdigramhe++;
			}
		}

//system("pause");
cout<<"(th) digrams in that txt = "<<counterdigramth<<endl;
cout<<"(he) digrams in that txt = "<<counterdigramhe<<endl;

return counterdigrams;
}