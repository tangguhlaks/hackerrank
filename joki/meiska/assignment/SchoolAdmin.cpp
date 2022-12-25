#include <bits/stdc++.h>
using namespace std;
class SchoolAdmin: public User{
	public:
		string staffID,position;
		int schoolID;
		int getSchoolID(){
			return schoolID;
		}
		void setSchoolID(int x){
			schoolID = x;
		}

		string getStaffID(){
			return staffID;
		}
		void setStaffID(string x){
			staffID = x;
		}
		string getPosition(){
			return position;
		}
		void setPosition(string x){
			position = x;
		}
};

