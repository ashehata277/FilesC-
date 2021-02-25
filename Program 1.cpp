#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
	int number[100];                       // we will assume we have array with maximum number 100
	int repeated[50];                      //array for repeated unmbers 
	string line;                           //string to read line from file  
	int n;                                 //int for convert string of integers  to array integers 
	int i=0;                               
	ifstream myfile("Numbers");             // get file with name Numbers with reference myfile
	if(myfile.is_open())
	{
		while(getline(myfile,line))              // extract  line from file
		{
		//	cout<<line<<endl;
		}
		istringstream is (line);                  
		while(is >> n)
		{
			number[i]=n;
			i++;
		}
	int size= i--;                      // size of number array
	int k=0,q=0;                            
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
		if(k>0)
		{
			repeated[q]=number[i];
			q++;
		}
		k=0;
	}
	int repeated_size=q--;                                           //size of repeated unmbers
	ofstream repeatedfile ("Repeated_Numers");                              //make file with name  repeated_numbers with reference repeatedfile
	if(repeatedfile.is_open())
	{
		for(int i=0;i<repeated_size;i++)
		{
			repeatedfile<<repeated[i]<<"  ";                         
		}
	}
	for(int i=0;i<repeated_size;i++)
		{
			cout<<repeated[i]<<"  ";                         
		}
	}
	else
	{
		cout<<"Open the File, Please";
	}
	return 0;
}
