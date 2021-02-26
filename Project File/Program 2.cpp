#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
	int number[100];
	int unrepeated[50];
	string line;
	int n;
	int i=0;
	ifstream myfile("Numbers");
	if(myfile.is_open())
	{
		while(getline(myfile,line))
		{
		//	cout<<line<<endl;
		}
		istringstream is (line);
		while(is >> n)
		{
			number[i]=n;
			i++;
		}
	int size= i--;
	int k=0,f=0;
	for (int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(i==j)
			{
				continue;
			}
			if(number[i]==number[j])
			{
				k++;
			}	
		}
		if(k==0)
		{
			unrepeated[f]=number[i];
			f++;
		}
		k=0;
	}
	int unrepeated_size=f--;
	ofstream unrepeatedfile ("unRepeated_Numers");
	if(unrepeatedfile.is_open())
	{
		for(int i=0;i<unrepeated_size;i++)
		{
			unrepeatedfile<<unrepeated[i]<<"  ";
		}
	}
		for(int i=0;i<unrepeated_size;i++)
		{
			cout<<unrepeated[i]<<"  ";
		}
	}
	else
	{
		cout<<"Open the File, Please";
	}
	return 0;
}
