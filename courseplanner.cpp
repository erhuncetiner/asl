#include <iostream>

using namespace std;
//	int slots = 40;
//	int weekdays = 5;
//	int monday = 1;
//	int tuesday = 2;
//	int wednesday = 3;
//	int thursday = 4;
//	int friday = 5;
	
class lecture{
		public:
			string user;
			string code;
			string department;
	//		bool multipleday;
			int iday;
			string sday;
			int credits;
			int slot1;
			int slot2;
//			lecture(){
//				user="ahmet";
//			}
			
	};
class table{
	
	public:
		string user;
		int columns;
		int rows;
		
		

};



int main(){
	
	lecture EC308;
	table weekly;
	weekly.user = "Erhun Cetiner";
	weekly.columns = 5;
	weekly.rows = 8,
	/*lecture ders;
	ders.code="EC308";
	weekly.lecture1 = ders;*/
	
	
	
//	cout<< weekly.EC308.user;
	EC308.department = "EC";
	EC308.code = "308";
//	lecture.multipleday = true;
//	EC308.user = "Erhun Cetiner";
cout << "What day is your lecture? " << "Type 1 for Monday, 2 for Tuesday etc. " << endl;
cin >> EC308.iday;
	{
	if (EC308.iday == 1){
		EC308.sday = "Monday";
	}
	else if (EC308.iday == 2){
		EC308.sday = "Tuesday";
	}
	else if (EC308.iday == 3){
		EC308.sday = "Wednesday";
	}
	else if (EC308.iday == 4){
		EC308.sday = "Thursday";
	}
	else if (EC308.iday == 5){
		EC308.sday = "Friday";
	}
}
	EC308.slot1 = 5;
	EC308.slot2 = 6;
	EC308.credits = 3;
	
	cout << "The lecture you have chosen is from the " << EC308.department << " department and its code is "
	<< EC308.code << ". Your name is " << weekly.user << ". This lecture has " << EC308.credits << " credits." << endl;
	cout << EC308.code << " is on " << EC308.sday << "s. " << endl;
	
	string empty = "-----";
	{
	
	if (EC308.slot1 == 1 || EC308.slot2 == 1){
	
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << EC308.department<<EC308.code <<     "   *" << "*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;

}
	if (EC308.slot1 == 2 || EC308.slot2 == 2){
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << EC308.department<<EC308.code <<     "   *" << "*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;

}
	if (EC308.slot1 == 3 || EC308.slot2 == 3){
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << EC308.department<<EC308.code <<     "   *" << "*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;


}
	if (EC308.slot1 == 4 || EC308.slot2 == 4){
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << EC308.department<<EC308.code <<     "   *" << "*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;

}
	if (EC308.slot1 == 5 || EC308.slot2 == 5){
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << EC308.department<<EC308.code <<     "   *" << "*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;

}
	if (EC308.slot1 == 6 || EC308.slot2 == 6){
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << EC308.department<<EC308.code <<     "   *" << "*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;

}
	if (EC308.slot1 == 7 || EC308.slot2 == 7){
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << EC308.department<<EC308.code <<     "   *" << "*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;

}
	if (EC308.slot1 == 8 || EC308.slot2 == 8){
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << empty <<     "   *" << "*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<"*   "  << empty <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;
	std::cout << "*   "  << EC308.department<<EC308.code <<     "   *" << "*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<"*   "  << EC308.department<<EC308.code <<     "   *" <<std::endl;
	std::cout << "*****************************************************************" << std::endl;

}
}
}
