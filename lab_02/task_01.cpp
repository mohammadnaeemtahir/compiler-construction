#include<iostream>
#include <fstream>
#include<string>

using namespace std;

int main(){
	char c;
	fstream fin;
	fin.open("task_01.txt", ios::in);
	
	while(!fin.eof() && fin.get(c)){
//		fin.get(c);
		cout<<c;
	}
	
	return 0;
}
