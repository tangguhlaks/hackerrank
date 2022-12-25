#include <bits/stdc++.h>
using namespace std;
class ResourceRequest : public Request{
	public:
		string resourceType;
		int numRequired;

		string getResourceType(){
			return resourceType;
		}
		void setResourceType(string x){
			resourceType = x;
		}
		int getNumRequired(){
			return numRequired;
		}
		void setNumRequired(int x){
			numRequired = x;
		}
};
