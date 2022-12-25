#include <bits/stdc++.h>
using namespace std;
class Volunteer : public User{
	public:
		string DOB,occupation;
		
		string getDOB(){
			return DOB;
		}
		void setDOB(string x){
			DOB = x;
		}
		string getOccupation(){
			return occupation;
		}
		void setOccupation(string x){
			occupation = x;
		}
};
