#include<iostream>
#include <fstream>
#include<string>

using namespace std;
char c;

//void tokenGenerator(){
//	if(c=='='){
//			cout<<"equal"<<endl;
//		}
//		else if(c=='+'){
//			cout<<"plus"<<endl;
//		}
//		else if(c=='-'){
//			cout<<"minus"<<endl;
//		}
//		else if(c=='*'){
//			cout<<"asterisk"<<endl;
//		}
//		else if(c=='/'){
//			cout<<"divider"<<endl;
//		}	
//		else if(c==','){
//			cout<<"comma"<<endl;
//		}
//		else if(c==';'){
//			cout<<"semiColon"<<endl;
//		}
//		else if(c==':'){
//			cout<<"colon"<<endl;
//		}
//		else if(c=='.'){
//			cout<<"fullStop"<<endl;
//		}
//		else if(c=='('){
//			cout<<"leftPrantheses"<<endl;
//		}
//		else if(c==')'){
//			cout<<"rightPrantheses"<<endl;
//		}
//		else if(c=='{'){
//			cout<<"leftCurly"<<endl;
//		}
//		else if(c=='}'){
//			cout<<"rightCurly"<<endl;
//		}
//		else if(c=='['){
//			cout<<"leftSquareBraket"<<endl;
//		}
//		else if(c==']'){
//			cout<<"rightSquareBraket"<<endl;
//		}
//}

int main(){
	fstream fin;
	char c;
	fin.open("datafile.txt", ios::in);
	
	while(!fin.eof() && fin.get(c)){
//		tokenGenerator();	

	if(c=='='){
			cout<<"equal"<<endl;
		}
		else if(c=='+'){
			cout<<"plus"<<endl;
		}
		else if(c=='-'){
			cout<<"minus"<<endl;
		}
		else if(c=='*'){
			cout<<"asterisk"<<endl;
		}
		else if(c=='/'){
			cout<<"divider"<<endl;
		}	
		else if(c==','){
			cout<<"comma"<<endl;
		}
		else if(c==';'){
			cout<<"semiColon"<<endl;
		}
	}
	
	return 0;
}