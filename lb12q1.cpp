#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream MyWriteFile("filename.txt");
  MyWriteFile << "Files can be tricky, but it is fun enough!";
  MyWriteFile.close();
  string MyText;
  ifstream MyReadFile("filename.txt");
  while(getline (MyReadFile, MyText))
   {
    cout<<MyText;
   }
  MyReadFile.close();
}

