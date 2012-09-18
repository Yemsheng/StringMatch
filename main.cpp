#include<iostream>

using namespace std;

#include"StringMatch.h"

int main()
{
	cout<<"hello"<<endl;
	
	char *a = "qwdfaaa";
	char *b = "qwtefaa";
	char *c = "qaawdfa";
	char *d = "qwe";
	StringMatch sMatch;
	bool matchFlag = false;
	matchFlag = sMatch.StringMatch1(a,b);
	cout<<a<<" "<<b<<" "<<matchFlag<<endl;
	matchFlag = sMatch.StringMatch1(a,c);
	cout<<a<<" "<<c<<" "<<matchFlag<<endl;
	matchFlag = sMatch.StringMatch1(a,d);
	cout<<a<<" "<<d<<" "<<matchFlag<<endl;
	
	matchFlag = sMatch.StringMatch2(a,b);
	cout<<a<<" "<<b<<" "<<matchFlag<<endl;
	matchFlag = sMatch.StringMatch2(a,c);
	cout<<a<<" "<<c<<" "<<matchFlag<<endl;
	matchFlag = sMatch.StringMatch2(a,d);
	cout<<a<<" "<<d<<" "<<matchFlag<<endl;
	
	
	return 0;
}