#include<iostream>
#include <fstream>
#include<string>

using namespace std;

int main(){
	char c, ch;
	fstream fin;
	fin.open("task_01.txt", ios::in);
	fin.get(c);
	
	while(fin.get(ch)){
		if(c == '/' && ch =='/'){
			while(fin.get(ch) &&ch != '\n'){
			continue;
			}
			c = ch;
			fin.get(ch);
		}
		cout<<c;

		c = ch;	

	}
	
		cout<<c;

	return 0;
}
