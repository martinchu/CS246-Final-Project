#include <string>

class Player{
protected:
		int money;
		int debt
		char piece;
		int place;
		map <std::string,int> monoplyBlock;
		std::vector<Property *> properties;
		bool isBankrupted();
public:
	void roll();
	void showAssets();
	void declareBankruptcy();
	void give(Property &prop,Player &p);
	void receive(Property &prop);
	void mortgageProp(std::string propname);
	void unmortgageProp(std::string propname);
	void buyImproveProp(std::string propname);
	void sellImproveProp(std::string propname);
};

class Human: public Player{
public:
	Human(std::string Name);
};
friend ostream& operator<<(outstream& out, Player* p);

class PC:public Player{
public:
	PC(std::string Name);

};
