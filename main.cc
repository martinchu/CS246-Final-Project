#include "board.h"
#include "property.h"
#include "nonproperty.h"
#include <string>
#include <iostream>
using namespace std;
void loadGame(istream &in){
	string line;
	while(getline(in,line)){
		if(in.eof()){
			break;
		}
		
		if(){
			
		}
	}
}
int main(){
	string s;
	//string for intake user's input
	while(cin>>s){
		if(cin.eof()){
			break;
		}
		//LOAD function
		else if(s=="-load"){
			string infile;
			cin>>infile;
			ifstream in(infile.c_str());
			loadGame(in);
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
