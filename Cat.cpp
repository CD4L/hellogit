#include <iostream>
#include <vector>
#include "Cat.h"
using namespace std;


int linearSearch(auto data, auto key)//prototype
{
	for (int i=0; i < data.size(); i++)
	{
		if (data[i]==key)
		return i;
	}//end for
	return -1;
}

int main()
{
	Cat cats;
	vector<Cat>catVec;
	string catName;
	int catAge;

	for(int i=0;i<=3;i++)
	{
		cout<<"Please enter cat name and age \n";
		cin>> catName >> catAge;
		cats.setName(catName);
		cats.setAge(catAge);
		catVec.push_back(cats);
	}

	for(int i=0;i<=3;i++)
	{
		cout<<catVec[i].getName()<<"\t";
		cout<<catVec[i].getAge()<<"\n";
	}
	return 0;
}
