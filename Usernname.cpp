#include<iostream>
#include<string>
using namespace std;
int main(){
	string name;
	string id;
	getline(cin,name);
	getline(cin,id);
	for(int i=0;i<name.length();i++){
		if(name[i]>='A' && name[i]<='Z'){
			name[i] = name[i]+32;
		}
	}
	stringstream ss(name);
	string word;
	string firstname="";
	string lastname="";
	bool firstwordfound = false;
	while(ss>>word){
		if(!firstwordfound){
			firstname=word;
			firstwordfound=true;
		}
		lastname = word;
	}
	string username = firstname+"_"+lastname+id;
	cout<<username;
	return 0;
}
