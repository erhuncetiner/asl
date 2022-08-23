#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cmath>
#include <iostream>

#include "player.h"
#include "npc.h"
#include "building.h"
#include "city.h"

using namespace std;

////class player {
////	public:
//////		int hp;
////		string name;
////		string race;
////		double gold;
////		int goods;
//////		string coord;
////		
////		void getName(string inname);
////		void getRace(string inrace);
//////		void relocate;
//////		bool alive;
////};

//	string getName(void);
	void player::getName(string inname){
		cout << "What is your name? " << endl;
		cin >> inname;
		name = inname;
	}
	
	void player::getRace(string inrace){
		cout << "What is your race? " << endl;
		cin >> inrace;
		race = inrace;
	}
	




//class npc {
//	public:
////		int hp;
//		string name;
//		string race;
//		double gold;
//		int amount;
////		bool enemy;
////		bool friendly;
////		bool alive;	
//		
//};

//class building {
//	public:
//		double gold;
////		bool empty;
//		string name;
//		int goods;
//		npc owner;
////		npc customer;
//		
//};

//class city {
//	public:
//		string cityname;
////		building tavern;
//		building shop;
//		double gold;
//		int population;	
//			
//};

void startingLoc(player& self, npc& npc_01, city& firstCity, building& notable){
	

	
	
	cout << "Welcome to Erhunia fellow traveller! First, you must choose a starting location." << endl << endl;
	cout << "You may start in Erhunia or in Erhunic. Choose wisely." << " When you decide, you must type in the name of the city below and tap ENTER."
	<< endl;
	
	cin >> firstCity.cityname;
	if (firstCity.cityname == "Erhunic"){
	
		self.gold = 20;
		self.goods = 60;
		npc_01.amount = 150;
		npc_01.gold = 30;
		npc_01.race = "Snow Elf";
		npc_01.name = "Heiten Kren";
//		cout << npc_01.race << endl;
		firstCity.gold = 5000;
		firstCity.population = 6000;
		firstCity.shop.owner.name = npc_01.name;
		
		firstCity.shop.name = "Nakibey Doner Salonu";
		notable.name = firstCity.shop.name;		
//		cout << npc_01.gold << endl;
	}
	
	
	
}

void purchase(player& self, building& shop, npc& person, city& town){
	
	self.gold = self.gold - 10;
	self.goods = self.goods + 1;
	
	person.gold = person.gold + 10;
	person.amount = person.amount - 1;
	
	
	cout << "After a short walk, you push the door of an old looking building and enter inside. "
	<< "You are now at " << shop.name << ". The shopkeeper greets you. This old looking man introduces himself as "
	<< person.name << ". By his clothing and stereotypical looks, you note that this man is an obvious " << person.race
	<< ". In a calm and well-toned voice, he says: Welcome to " << town.cityname << ", fellow " << self.race << "." << endl;
	
	
//	cout <<	person.gold;
//	cout << person.race << endl;
	
//	cout << "The shopowner now has " << person.gold << " gold." << endl;
//	cout << "You have " << self.gold << " gold left." << endl;

	
}


//void refill

//void travel

//void talk






string entry_name, entry_race;
double start_gold = 100;
int start_goods = 20;


int main(){

	player new_player;
	npc npc_01;
	city city_01;
	building shop_01;
	
	new_player.getName(entry_name);
	new_player.getRace(entry_race);
	
	startingLoc(new_player, npc_01, city_01, shop_01);
//	cout << npc_01.gold << endl;
	purchase(new_player, shop_01, npc_01, city_01);
//	cout << npc_01.gold << endl;
	
	
	
	
	return 0;
}
