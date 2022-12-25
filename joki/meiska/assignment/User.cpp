#include <bits/stdc++.h>
using namespace std;
class User{
	public:
		string username,password,fullname,email,phone;	
		string getUsername(){
			return username;
		}
		void setUsername(string x){
			username= x;
		}
		string getPassword(){
			return password;
		}
		void setPassword(string x){
			password = x;
		}
		string getFullname(){
			return fullname;
		}
		void setFullname(string x){
			fullname = x;
		}
		string getEmail(){
			return email;
		}
		void setEmail(string x){
			email = x;
		}
		string getPhone(){
			return phone;
		}
		void setPhone(string x){
			phone = x;
		}
};

