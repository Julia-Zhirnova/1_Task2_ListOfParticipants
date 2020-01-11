#include <vector>
#include <iostream>
#include <fstream>
#include "recogniser.h"

using namespace std;

void testOfRecogniserCreation()
{	
  ofstream file;
  Recognizer recog;
  vector<vector<int>> data;

  recog.load("table_10.jpg");
  data = recog.recognise();
  if (!data.empty()) 
   {
	file.open("test_10.txt", ofstream::out | ofstream::trunc);
	// ofstream::out открытие потока вывода
	// ofstream::trunc обуславливает уничтожение содержимого файла с заданным именем и усечение дли­ны файла до нуля.
		for (int j = 0; j < data.size(); ++j) 
		{
		 file << j << "..|";
			for (int k = 0; k < data[j].size(); ++k) 
			{
			 if (data[j][k] == 1) file << "+|";
			 else file << " |";
			}
		 file << "\n";
		}
	file.close();
   }
  cout<< "test testOfRecogniserCreation - OK"<<endl;
}

int main()
{
  testOfRecogniserCreation();
}
