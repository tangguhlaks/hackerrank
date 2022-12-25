#include <bits/stdc++.h>
using namespace std;
class Offer{
	public:
		string offerDate,offerStatus,remarks,volunteerUsername;
		int requestID;
		int getRequestID(){
			return requestID;
		}
		void setRequestID(int x){
			requestID = x;
		}
		string getVolunteerUsername(){
			return volunteerUsername;
		}
		void setVolunteerUsername(string x){
			volunteerUsername = x;
		}
		string getOfferDate(){
			return offerDate;
		}
		void setOfferDate(string x){
			offerDate = x;
		}
		string getOfferStatus(){
			return offerStatus;
		}
		void setOfferStatus(string x){
			offerStatus = x;
		}
		string getRemarks(){
			return remarks;
		}
		void setRemarks(string x){
			remarks = x;
		}
};
