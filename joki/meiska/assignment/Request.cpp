#include <bits/stdc++.h>
using namespace std;

class Request : public School{
	public:
		int requestID;
		string requestDate,requestStatus,description;
		
		int getRequestID(){
			return requestID;
		}
		void setRequestID(int x){
			requestID = x;
		}
		string getRequestDate(){
			return requestDate;
		}
		void setRequestDate(string x){
			requestDate = x;
		}
		string getRequestStatus(){
			return requestStatus;
		}
		void setRequestStatus(string x){
			requestStatus = x;
		}
		string getDescription(){
			return description;
		}
		void setDescription(string x){
			description = x;
		}
};
