#include <bits/stdc++.h>
#include "User.cpp"
#include "School.cpp"
#include "SchoolAdmin.cpp"
#include "SchoolHelp.cpp"
#include "Request.cpp"
#include "Volunteer.cpp"
#include "Offer.cpp"
#include "TutorialRequest.cpp"
#include "ResourceRequest.cpp"
using namespace std;

// cin with space
#define cin(x) getline(cin,x) 


// save session login
struct session{
	bool isLogin=false;
	int typeLogin=0;
	string username,position,schoolName,staffID;
	int schoolID;
};


session mysession;
SchoolHelp sh;


// list data
vector<SchoolAdmin> listSchoolAdmin;
vector<School> listSchool;
vector<TutorialRequest> listRequest;
vector<ResourceRequest> listRequest2;
vector<Volunteer> listVolunteer;
vector<Offer> listOffer;

//register school 
void registerSchool(vector<School> &listSchool){
	string stmp;int itmp;
	School s;
	cout << "=== Register School ===" << endl;
	cout << "School Name : ";cin(stmp);
	s.setSchoolName(stmp);
	cout << "Address : ";cin(stmp);
	s.setAddress(stmp);
	cout << "City : ";cin(stmp);
	s.setCity(stmp);
	itmp = rand();
	s.setSchoolID(itmp);
	listSchool.push_back(s);
	cout << "Data successful added" << endl << endl;
	system("cls");
}
// show school
void showSchool(vector<School> listSchool){
	cout << "=== List School ===" << endl;
	cout << "===================" << endl;
	int i=1;
	for(auto x:listSchool){
		cout << "School ID : " << x.getSchoolID() << endl;
		cout << "School Name: " << x.getSchoolName() << endl;
		cout << "Address : " << x.getAddress() << endl;
		cout << "City : " << x.getCity() << endl;
		cout << endl;
		i++;
	}
}

void deleteSchoolAdminByStaffID(string id){
	int i=0;
	for(auto x:listSchoolAdmin){
		if (x.getStaffID() == id)break;
		i++;
	}
	listSchoolAdmin.erase(listSchoolAdmin.begin()+i);
}
void updateProfile(){
	cout << "=== "<< mysession.schoolName <<" School Administrator ===" << endl;
	deleteSchoolAdminByStaffID(mysession.staffID);
	SchoolAdmin data; 
	string tmp;
	data.setSchoolID(mysession.schoolID);
	cout << "Username : ";cin(tmp);
	data.setUsername(tmp);
	mysession.username = tmp;
	cout << "Password : ";cin(tmp);
	data.setPassword(tmp);
	cout << "Fullname : ";cin(tmp);
	data.setFullname(tmp);
	cout << "Email : ";cin(tmp);
	data.setEmail(tmp);
	cout << "Phone : ";cin(tmp);
	data.setPhone(tmp);
	cout << "Staff ID : ";cin(tmp);
	data.setStaffID(tmp);
	mysession.staffID = tmp;
	cout << "Position : ";cin(tmp);
	data.setPosition(tmp);
	mysession.position = tmp;
	listSchoolAdmin.push_back(data);
	cout << "Data succesful updated" << endl << endl;
	system("cls");
}
void registerSchoolAdmin(vector<SchoolAdmin> &listSchoolAdmin){
	if(listSchool.empty()){
		cout << "School data is empty,please insert school!" << endl; 
	}else {
		SchoolAdmin data;
		string tmp;
		system("cls");	
		cout << "=== Select School ===" << endl;
		int i=1;
		for(auto x:listSchool){
			cout << "No : "<< i << endl;
			cout << "School ID : " << x.getSchoolID() << endl;
			cout << "School Name: " << x.getSchoolName() << endl;
			cout << "Address : " << x.getAddress() << endl;
			cout << "City : " << x.getCity() << endl;
			cout << endl;
			i++;
		}
		int idx;
		cout << "your option : ";cin >>idx;

		cin.ignore();
		system("cls");
		data.setSchoolID(listSchool[idx-1].getSchoolID());
		cout << "=== Register "<< listSchool[idx-1].getSchoolName() <<" School Administrator ===" << endl;
		cout << "Username : ";cin(tmp);
		data.setUsername(tmp);
		cout << "Password : ";cin(tmp);
		data.setPassword(tmp);
		cout << "Fullname : ";cin(tmp);
		data.setFullname(tmp);
		cout << "Email : ";cin(tmp);
		data.setEmail(tmp);
		cout << "Phone : ";cin(tmp);
		data.setPhone(tmp);
		cout << "Staff ID : ";cin(tmp);
		data.setStaffID(tmp);
		cout << "Position : ";cin(tmp);
		data.setPosition(tmp);
		listSchoolAdmin.push_back(data);
		cout << "Data succesful added" << endl << endl;	
		system("cls");
	}
}
void showSchoolAdmin(vector<SchoolAdmin> listSchoolAdmin){
	cout << "=== List School Admin ===" << endl;
	for(auto x:listSchoolAdmin){
		cout << "School ID	: " << x.getSchoolID() << endl;
		cout << "Username	: " << x.getUsername() << endl;
		cout << "Password	: " << x.getPassword() << endl;
		cout << "Fullname	: " << x.getFullname() << endl;
		cout << "Email		: " << x.getEmail() << endl;
		cout << "Phone		: " << x.getPhone() << endl;
		cout << "Staff ID	: " << x.getStaffID() << endl;
		cout << "Position	: " << x.getPosition() << endl << endl;
	}
	cout << "========================" << endl;
}

// login admin help
void login(){
	string username,password;
	while(mysession.isLogin==false){
		cout << "=== SchoolHelp System ===" << endl;
		cout << "Username : ";cin(username);
		cout << "Password : ";cin(password);
		if(username==sh.username && password == sh.password){
			cout << "Login successful" << endl;
			cout << endl;
			mysession.isLogin=true;
			mysession.typeLogin =1;
			system("cls");
		}else{
			cout << "Login failed" << endl;
			cout << endl;
		}

	}
}
School getSchoolBySchoolID(int id){
	School ans;
	for(auto x:listSchool){
		if (x.getSchoolID() == id) {
			ans = x;
			break;
		}
	}
	return ans;
}
Volunteer getVolunteerByUsername(string username){
	Volunteer ans;
	for(auto x:listVolunteer){
		if (x.getUsername() == username) {
			ans = x;
			break;
		}
	}
	return ans;
}
string getSchoolNameBySchoolID(int id){
	string ans="";
	for(auto x:listSchool){
		if (x.getSchoolID() == id) {
			ans = x.getSchoolName();
			break;
		}
	}
	return ans;
}
// login Administrator school
void loginSchoolAdmin(){
	string username,password;
	while(mysession.isLogin==false){
		cout << "=== SchoolHelp System ===" << endl;
		cout << "Username : ";cin(username);
		cout << "Password : ";cin(password);
		bool ans=false;
		SchoolAdmin tmp;
		for(auto x:listSchoolAdmin){
			if(x.getUsername() == username){
				ans=true;
				tmp = x;
				break;
			}
		}
		if(ans){
			if(username==tmp.username && password == tmp.password){
				cout << "Login successful" << endl;
				cout << endl;
				mysession.isLogin=true;
				mysession.username = username;
				mysession.position = tmp.getPosition();
				mysession.schoolID = tmp.getSchoolID();
				mysession.staffID = tmp.getStaffID();
				mysession.schoolName = getSchoolNameBySchoolID(tmp.getSchoolID());
				mysession.typeLogin =2;
				system("cls");
			}else{
				cout << "Wrong password" << endl;
				cout << endl;
			}
		}else{
			cout << "Username not found" << endl;
			cout << endl;
		}

	}
}
//login Volunteer
void loginVolunteer(){
	string username,password;
	while(mysession.isLogin==false){
		cout << "=== SchoolHelp System ===" << endl;
		cout << "Username : ";cin(username);
		cout << "Password : ";cin(password);
		bool ans=false;
		Volunteer tmp;
		for(auto x:listVolunteer){
			if(x.getUsername() == username){
				ans=true;
				tmp = x;
				break;
			}
		}
		if(ans){
			if(username==tmp.username && password == tmp.password){
				cout << "Login successful" << endl;
				cout << endl;
				mysession.isLogin=true;
				mysession.username = username;
				mysession.typeLogin =3;
				system("cls");
			}else{
				cout << "Wrong password" << endl;
				cout << endl;
			}
		}else{
			cout << "Username not found" << endl;
			cout << endl;
		}

	}
}

void registerVolunteer(){
		Volunteer data;
		string tmp;
		cout << "=== Register Volunteer ===" << endl;
		cout << "Username : ";cin(tmp);
		data.setUsername(tmp);
		cout << "Password : ";cin(tmp);
		data.setPassword(tmp);
		cout << "Fullname : ";cin(tmp);
		data.setFullname(tmp);
		cout << "Email : ";cin(tmp);
		data.setEmail(tmp);
		cout << "Phone : ";cin(tmp);
		data.setPhone(tmp);
		cout << "Date of Birth (Y-m-d) : ";cin(tmp);
		data.setDOB(tmp);
		cout << "Occupation : ";cin(tmp);
		data.setOccupation(tmp);
		listVolunteer.push_back(data);
		cout << "Register successful" << endl << endl;
		system("cls");

}
void loginMain(){
	int x=1;
	while (x!=0 && mysession.isLogin==false) {	
		cout << "=== SchoolHelp System ===" << endl;
		cout << "1.Login as SchoolHelp Admin" << endl;
		cout << "2.Login as School Administrator" << endl;
		cout << "3.Register Volunteer" << endl;
		cout << "4.Login as Volunteer" << endl;
		cout << "your option : ";cin >> x;
		cin.ignore();
		system("cls");
		if(x==1){
			login();
		}else if(x==2) {
			loginSchoolAdmin();	
		}else if (x==3) {
			registerVolunteer();
		}else if (x==4) {
			loginVolunteer();
		}
	}

}

// Tutorial Request
void requestAssistance(){
	TutorialRequest data;
	string s;int i;
	cout << "=== Tutorial Request For Assistance ===" << endl;
	School myschool = getSchoolBySchoolID(mysession.schoolID);
	data.setSchoolName(mysession.schoolName);
	data.setCity(myschool.getCity());
	i = rand();
	data.setRequestID(i);
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int d = ltm->tm_mday;
	int m =1 + ltm->tm_mon;
	int y = 1900 + ltm->tm_year;
	s= to_string(y)+"-"+to_string(m)+"-"+to_string(d);
	data.setRequestDate(s);
	data.setRequestStatus("NEW");
	cout << "Description : ";cin(s);
	data.setDescription(s);
	cout << "Proposed Date : ";cin(s);
	data.setProposedDate(s);
	cout << "Proposed Time : ";cin(s);
	data.setProposedTime(s);
	cout << "Student Level : ";cin(s);
	data.setStudentLevel(s);
	cout << "Num Student : ";cin >> i;
	cin.ignore();
	data.setNumStudent(i);
	listRequest.push_back(data);
	cout << "Data succesful added" << endl << endl;	
	system("cls");
}

// Resource Request
void requestAssistance2(){
	ResourceRequest data;
	string s;int i;
	cout << "=== Resource Request For Assistance ===" << endl;
	School myschool = getSchoolBySchoolID(mysession.schoolID);
	data.setSchoolName(mysession.schoolName);
	data.setCity(myschool.getCity());
	i = rand();
	data.setRequestID(i);
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int d = ltm->tm_mday;
	int m =1 + ltm->tm_mon;
	int y = 1900 + ltm->tm_year;
	s= to_string(y)+"-"+to_string(m)+"-"+to_string(d);
	data.setRequestDate(s);
	data.setRequestStatus("NEW");
	cout << "Description : ";cin(s);
	data.setDescription(s);
	cout << "Resource Type : ";cin(s);
	data.setResourceType(s);
	cout << "Num Required : ";cin >> i;
	cin.ignore();
	data.setNumRequired(i);
	listRequest2.push_back(data);
	cout << "Data succesful added" << endl << endl;	
	system("cls");
}
TutorialRequest searchRequestAssistanceByRequestID(int id){
	TutorialRequest ans;
	for(auto x:listRequest){
		if(x.getRequestID() == id){
			ans = x;
			break;
		}
	}
	return ans;
}
ResourceRequest searchRequestAssistanceByRequestID2(int id){
	ResourceRequest ans;
	for(auto x:listRequest2){
		if(x.getRequestID() == id){
			ans = x;
			break;
		}
	}
	return ans;
}
// TutorialRequest
bool isRequestAssistanceOk(int id){
	bool ans=false;
	for(auto x:listRequest){
		if(x.getRequestID() == id){
			ans = true;
			break;
		}
	}
	return ans;
}
// ResourceRequest
bool isRequestAssistanceOk2(int id){
	bool ans=false;
	for(auto x:listRequest2){
		if(x.getRequestID() == id){
			ans = true;
			break;
		}
	}
	return ans;
}
vector<string> explode( const string &delimiter, const string &str)
{
    vector<string> arr;
 
    int strleng = str.length();
    int delleng = delimiter.length();
    if (delleng==0)
        return arr;//no change
 
    int i=0;
    int k=0;
    while( i<strleng )
    {
        int j=0;
        while (i+j<strleng && j<delleng && str[i+j]==delimiter[j])
            j++;
        if (j==delleng)//found delimiter
        {
            arr.push_back(  str.substr(k, i-k) );
            i+=delleng;
            k=i;
        }
        else
        {
            i++;
        }
    }
    arr.push_back(  str.substr(k, i-k) );
    return arr;
}
int getAge(string dob){
	vector<string> arr = explode("-",dob);
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int d = ltm->tm_mday;
	int m =1 + ltm->tm_mon;
	int y = 1900 + ltm->tm_year;
	int dd = stoi(arr[2]);
	int mm = stoi(arr[1]);
	int yy = stoi(arr[0]);
	int ans = y-yy;
	if(m > mm && d > dd)ans+=1;

	return ans;
}
//TutorialRequest
void setStatusRequest(int id,string status){
	int i=0;
	for(auto x:listRequest){
		if(x.getRequestID() == id)break;
		i++;
	}
	TutorialRequest data = listRequest[i];
	data.setRequestStatus(status);
	listRequest[i] = data;
}
//ResourceRequest
void setStatusRequest2(int id,string status){
	int i=0;
	for(auto x:listRequest2){
		if(x.getRequestID() == id)break;
		i++;
	}
	ResourceRequest data = listRequest2[i];
	data.setRequestStatus(status);
	listRequest2[i] = data;
}
// Tutorial Request
void showRequestAssistance(){
	cout << "=== List Tutorial Request For Assistance ===" << endl;
	for(auto x:listRequest){
		cout << "Request ID	: " << x.getRequestID() << endl; 
		cout << "Request Date	: " << x.getRequestDate() << endl; 
		cout << "Request Status	 : " << x.getRequestStatus() << endl;
		cout << "Description	: " << x.getDescription() << endl; 
		cout << "Proposed Date	: " << x.getProposedDate() << endl; 
		cout << "Proposed Time	: " << x.getProposedTime() << endl; 
		cout << "Student Level	: " << x.getStudentLevel() << endl; 
		cout << "Num Student	: " << x.getNumStudent() << endl << endl; 
	}
	cout << "===================================" << endl;
	int id;
	cout << "Check detail Request ID : ";cin >> id;
	cin.ignore();
	if (isRequestAssistanceOk(id)) {
		cout << "=== List Offer ===" << endl;
		int i=1;
		int no=1;
		for (auto x : listOffer) {
			if(x.getRequestID() == id){
				Volunteer v = getVolunteerByUsername(x.getVolunteerUsername());
				cout << "No : " << no << endl;no++; 
				cout << "Full Name : " << v.getFullname() << endl;
				cout << "Occupation : " << v.getOccupation() << endl;
				cout << "Age : " << getAge(v.getDOB()) << endl;
				cout << "Offer Date	: " << x.getOfferDate() << endl; 
				cout << "Offer Status	: " << x.getOfferStatus() << endl; 
				cout << "Remarks	: " << x.getRemarks() << endl << endl; 
			}
			i++;
		}
		cout << "==========================" << endl;
		cout << "1.Accept Offer" << endl;
		cout << "2.Close Request" << endl;
		cout << "3.Back to list" << endl;
		cout << "4.Back to menu" << endl;
		int o;
		cout << "your option : ";cin >> o;
		cin.ignore();
		if(o==1){
			int of;
			cout << "Select Offer No : ";cin >> of;cin.ignore();
			Offer newoffer;
			Offer oldoffer = listOffer[of-1];
			newoffer.setOfferStatus("ACCEPTED");
			newoffer.setOfferDate(oldoffer.getOfferDate());
			newoffer.setRemarks(oldoffer.getRemarks());
			newoffer.setVolunteerUsername(oldoffer.getVolunteerUsername());
			newoffer.setRequestID(oldoffer.getRequestID());
			listOffer[of-1] = newoffer;
			cout << "Offer accepted successful" << endl;
			system("cls");
		}else if(o==2){
			setStatusRequest(id,"CLOSED");
		}else if(o==3){
			system("cls");
			showRequestAssistance();
		}else{
			system("cls");
			return;
		}
	}else{
		cout << "Request ID not found" << endl;
	}

}
// Resource Request
void showRequestAssistance2(){
	cout << "=== List Resource Request For Assistance ===" << endl;
	for(auto x:listRequest2){
		cout << "Request ID	: " << x.getRequestID() << endl; 
		cout << "Request Date	: " << x.getRequestDate() << endl; 
		cout << "Request Status	 : " << x.getRequestStatus() << endl;
		cout << "Description	: " << x.getDescription() << endl; 
		cout << "Resource Type	: " << x.getResourceType() << endl; 
		cout << "Num Required	: " << x.getNumRequired() << endl << endl; 
	}
	cout << "===================================" << endl;
	int id;
	cout << "Check detail Request ID : ";cin >> id;
	cin.ignore();
	if (isRequestAssistanceOk2(id)) {
		cout << "=== List Offer ===" << endl;
		int i=1;
		int no=1;
		for (auto x : listOffer) {
			if(x.getRequestID() == id){
				Volunteer v = getVolunteerByUsername(x.getVolunteerUsername());
				cout << "No : " << no << endl;no++; 
				cout << "Full Name : " << v.getFullname() << endl;
				cout << "Occupation : " << v.getOccupation() << endl;
				cout << "Age : " << getAge(v.getDOB()) << endl;
				cout << "Offer Date	: " << x.getOfferDate() << endl; 
				cout << "Offer Status	: " << x.getOfferStatus() << endl; 
				cout << "Remarks	: " << x.getRemarks() << endl << endl; 
			}
			i++;
		}
		cout << "==========================" << endl;
		cout << "1.Accept Offer" << endl;
		cout << "2.Close Request" << endl;
		cout << "3.Back to list" << endl;
		cout << "4.Back to menu" << endl;
		int o;
		cout << "your option : ";cin >> o;
		cin.ignore();
		if(o==1){
			int of;
			cout << "Select Offer No : ";cin >> of;cin.ignore();
			Offer newoffer;
			Offer oldoffer = listOffer[of-1];
			newoffer.setOfferStatus("ACCEPTED");
			newoffer.setOfferDate(oldoffer.getOfferDate());
			newoffer.setRemarks(oldoffer.getRemarks());
			newoffer.setVolunteerUsername(oldoffer.getVolunteerUsername());
			newoffer.setRequestID(oldoffer.getRequestID());
			listOffer[of-1] = newoffer;
			cout << "Offer accepted successful" << endl;
			system("cls");
		}else if (o==2) {
			setStatusRequest2(id,"CLOSED");
		}else if(o==3){
			system("cls");
			showRequestAssistance2();
		}else{
			system("cls");
			return;
		}
	}else{
		cout << "Request ID not found" << endl;
	}

}

// TutorialRequest
void showRequestAssistanceVolunteer(string key,string value){
	cout << "=== List Tutorial Request For Assistance ===" << endl;
	for(auto x:listRequest){
		bool flag = false;
		if(key=="ALL"){
			flag = true;
		}else{
			if(key == "CITY"){
				if(x.getCity() == value)flag=true;
			}else if (key == "REQUESTDATE") {
				if(x.getRequestDate() == value)flag=true;
			}else if(key == "SCHOOLNAME"){
				if(x.getSchoolName() == value)flag=true;
			}
		}
		if(flag){
			cout << "Request ID	: " << x.getRequestID() << endl; 
			cout << "School Name : " << x.getSchoolName() << endl;
			cout << "City : " << x.getCity() << endl;
			cout << "Request Date	: " << x.getRequestDate() << endl; 
			cout << "Request Status	 : " << x.getRequestStatus() << endl;
			cout << "Description	: " << x.getDescription() << endl << endl;
		}
	}
	cout << "===================================" << endl;
	int id;
	cout << "Check detail Request ID : ";cin >> id;
	cin.ignore();
	if (isRequestAssistanceOk(id)) {
		TutorialRequest req=searchRequestAssistanceByRequestID(id);
		cout << "=== Detail Information ===" << endl;
		cout << "Proposed Date	: " << req.getProposedDate() << endl; 
		cout << "Proposed Time	: " << req.getProposedTime() << endl; 
		cout << "Student Level	: " << req.getStudentLevel() << endl; 
		cout << "Num Student	: " << req.getNumStudent() << endl; 
		cout << "==========================" << endl;
		cout << "1.Submit offer" << endl;
		cout << "2.Back to list" << endl;
		cout << "3.Back to menu" << endl;
		int o;
		cout << "your option : ";cin >> o;
		cin.ignore();
		if(o==1){
			string tmp;
			Offer newoffer;
			newoffer.setOfferStatus("PENDING");
			cout << "Offer Date : ";cin(tmp);
			newoffer.setOfferDate(tmp);
			cout << "Remarks : ";cin(tmp);
			newoffer.setRemarks(tmp);
			newoffer.setVolunteerUsername(mysession.username);
			newoffer.setRequestID(req.getRequestID());
			listOffer.push_back(newoffer);
			cout << "Submit offer successful" << endl;
		}else if(o==2){
			system("cls");
			showRequestAssistanceVolunteer(key,value);
		}else{
			system("cls");
			return;
		}
	}else{
		cout << "Request ID not found" << endl;
	}
}
// ResourceRequest
void showRequestAssistanceVolunteer2(string key,string value){
	cout << "=== List Tutorial Request For Assistance ===" << endl;
	for(auto x:listRequest2){
		bool flag = false;
		if(key=="ALL"){
			flag = true;
		}else{
			if(key == "CITY"){
				if(x.getCity() == value)flag=true;
			}else if (key == "REQUESTDATE") {
				if(x.getRequestDate() == value)flag=true;
			}else if(key == "SCHOOLNAME"){
				if(x.getSchoolName() == value)flag=true;
			}
		}
		if(flag){
			cout << "Request ID	: " << x.getRequestID() << endl; 
			cout << "School Name : " << x.getSchoolName() << endl;
			cout << "City : " << x.getCity() << endl;
			cout << "Request Date	: " << x.getRequestDate() << endl; 
			cout << "Request Status	 : " << x.getRequestStatus() << endl;
			cout << "Description	: " << x.getDescription() << endl << endl;
		}
	}
	cout << "===================================" << endl;
	int id;
	cout << "Check detail Request ID : ";cin >> id;
	cin.ignore();
	if (isRequestAssistanceOk2(id)) {
		ResourceRequest req=searchRequestAssistanceByRequestID2(id);
		cout << "=== Detail Information ===" << endl;
		cout << "Resource Type	: " << req.getResourceType() << endl; 
		cout << "Num Required	: " << req.getNumRequired() << endl; 
		cout << "==========================" << endl;
		cout << "1.Submit offer" << endl;
		cout << "2.Back to list" << endl;
		cout << "3.Back to menu" << endl;
		int o;
		cout << "your option : ";cin >> o;
		cin.ignore();
		if(o==1){
			string tmp;
			Offer newoffer;
			newoffer.setOfferStatus("PENDING");
			cout << "Offer Date : ";cin(tmp);
			newoffer.setOfferDate(tmp);
			cout << "Remarks : ";cin(tmp);
			newoffer.setRemarks(tmp);
			newoffer.setVolunteerUsername(mysession.username);
			newoffer.setRequestID(req.getRequestID());
			listOffer.push_back(newoffer);
			cout << "Submit offer successful" << endl;
		}else if(o==2){
			system("cls");
			showRequestAssistanceVolunteer2(key,value);
		}else{
			system("cls");
			return;
		}
	}else{
		cout << "Request ID not found" << endl;
	}
}

int main(){
	int x=1;
	system("cls");	
	loginMain();
	while (mysession.isLogin) {
		if (mysession.typeLogin == 1) {
			cout << "=== SchoolHelp System ===" << endl;
			cout << "1.Register School" << endl;
			cout << "2.School Data" << endl;
			cout << "3.Register School Administrator" << endl;
			cout << "4.School Administrator Data" << endl;
			cout << "0.logout" << endl;
			cout << "your option : ";cin >> x;
			cin.ignore();

			system("cls");
			//statement
			if(x==1){
				registerSchool(listSchool);
			}else if (x==2) {
				showSchool(listSchool);
			}else if(x==3){
				registerSchoolAdmin(listSchoolAdmin);
			}else if (x==4) {
				showSchoolAdmin(listSchoolAdmin);
			}else if (x==0) {
				mysession.isLogin=false;
				system("cls");
				loginMain();
			}
		}else if(mysession.typeLogin == 2){
			cout << "=== SchoolHelp System School Administrator ===" << endl;
			cout << "Username    : " << mysession.username <<endl;
			cout << "Position    : " << mysession.position << endl;
			cout << "School ID   : " << mysession.schoolID << endl;
			cout << "School Name : " << mysession.schoolName << endl;
			cout << "------------------------" << endl;
			cout << "===== MENU =====" << endl; 
			cout << "1.Change Profile" << endl;
			cout << "2.Tutorial Request For Assistance" << endl;
			cout << "3.Tutorial Request For Assistance Data" << endl;
			cout << "4.Resource Request For Assistance" << endl;
			cout << "5.Resource Request For Assistance Data" << endl;
			cout << "0.logout" << endl;
			cout << "your option : ";cin >> x;
			cin.ignore();

			system("cls");
			//statement
			if(x==1){
				updateProfile();	
			}else if(x==2){
				requestAssistance();
			}else if (x==3) {
				showRequestAssistance();
			}else if(x==4){
				requestAssistance2();
			}else if (x==5) {
				showRequestAssistance2();
			}else if (x==0) {
				mysession.isLogin=false;
				loginMain();
			}

		}else if (mysession.typeLogin == 3) {
			cout << "=== SchoolHelp System Volunteer ===" << endl;
			cout << "Username    : " << mysession.username <<endl;
			cout << "===== MENU =====" << endl; 
			cout << "1.Tutorial Request For Assistance All" << endl;
			cout << "2.Tutorial Request For Assistance Find By School Name" << endl;
			cout << "3.Tutorial Request For Assistance Find By City" << endl;
			cout << "4.Tutorial Request For Assistance Find By Request Date" << endl; 
			cout << "5.Resource Request For Assistance All" << endl;
			cout << "6.Resource Request For Assistance Find By School Name" << endl;
			cout << "7.Resource Request For Assistance Find By City" << endl;
			cout << "8.Resource Request For Assistance Find By Request Date" << endl;
			cout << "0.logout" << endl;
			cout << "your option : ";cin >> x;
			cin.ignore();
			system("cls");
			if(x==1){
				showRequestAssistanceVolunteer("ALL","ALL");
			}else if (x==2) {
				string tmp;
				cout << "School Name : ";cin(tmp);
				showRequestAssistanceVolunteer("SCHOOLNAME",tmp);
			}else if (x==3) {
				string tmp;
				cout << "City : ";cin(tmp);
				showRequestAssistanceVolunteer("CITY",tmp);
			}else if (x == 4) {
				string tmp;
				cout << "Request Date : ";cin(tmp);
				showRequestAssistanceVolunteer("REQUESTDATE",tmp);
			}else if(x==5){
				showRequestAssistanceVolunteer2("ALL","ALL");
			}else if (x==6) {
				string tmp;
				cout << "School Name : ";cin(tmp);
				showRequestAssistanceVolunteer2("SCHOOLNAME",tmp);
			}else if (x==7) {
				string tmp;
				cout << "City : ";cin(tmp);
				showRequestAssistanceVolunteer2("CITY",tmp);
			}else if (x == 8) {
				string tmp;
				cout << "Request Date : ";cin(tmp);
				showRequestAssistanceVolunteer2("REQUESTDATE",tmp);
			}else if (x==0) {
				mysession.isLogin=false;
				loginMain();
			}

		}
	}

}

