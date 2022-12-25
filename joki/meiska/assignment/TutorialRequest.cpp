#include <bits/stdc++.h>
using namespace std;

class TutorialRequest : public Request{
	public:
		string proposedDate,proposedTime,studentLevel;
		int numStudent;
		
		int getNumStudent(){
			return numStudent;
		}
		void setNumStudent(int x){
			numStudent = x;
		}
		string getProposedDate(){
			return proposedDate;
		}
		void setProposedDate(string x){
			proposedDate = x;
		}
		string getProposedTime(){
			return proposedTime;
		}
		void setProposedTime(string x){
			proposedTime = x;
		}
		string getStudentLevel(){
			return studentLevel;
		}
		void setStudentLevel(string x){
			studentLevel = x;
		}
};
