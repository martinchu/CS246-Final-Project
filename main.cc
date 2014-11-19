#include "board.h"
#include "property.h"
#include "nonproperty.h"
#include <string>
#include <iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		if(cin.eof()){
			break;
		}
		else if(s=="-load"){
			string infile;
			cin>>infile;
			ifstream in(infile.c_str());
			loadFile(in);
		}
		else if(s=="-testing"){
			while(s!="quitTesting"){
				if(cin.eof()){
					break;
				}
				else if(s=="roll"){
					int dice1,dice2;
					cin>>dice1>>dice2;
					
				}
			}
		}
	}
}
