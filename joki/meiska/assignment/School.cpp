#include <bits/stdc++.h>
using namespace std;
class School{
	public:
		int schoolID;
		string schoolName,address,city;
		
		int getSchoolID(){
			return schoolID;
		}
		void setSchoolID(int x){
			schoolID = x;
		}
		string getSchoolName(){
			return schoolName;
		}
		void setSchoolName(string x){
			schoolName = x;
		}
		string getAddress(){
			return address;
		}
		void setAddress(string x){
			address = x;
		}
		string getCity(){
			return city;
		}
		void setCity(string x){
			city = x;
		}
};

