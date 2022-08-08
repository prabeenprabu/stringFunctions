/*
	Name: String Functions
	Copyright: Free
	Author: Prabeen
	Date: 07/08/22 21:31
	Description: This library has the all string function
	 			 which are presented in javascript.
	 			 This string function save the time.
*/
#include <string>
#include <string.h>
using namespace std;

//function declaration
string capitalize(string value);
string trimStart(string value);
string toLowerCase(string value);
string toUpperCase(string value);
string slice(string value,int start,int end);
string substr(string value,int start,int length);
string substring(string value,int start,int end);
bool isEndsWith(string value,string endsValue);
bool isStartsWith(string value,string startValue);
string trimEnd(string value);
string trim(string value);
int indexOf(string value,char point);

//function defenition
string capitalize(string value){
	for(int i=0;i<value.length();i++){
		int k = value[i];
		if(k == 32){
			i++;
			value[i] = toupper(value[i]);
		}
		else{
			value[i] = tolower(value[i]);
		}
	}
	return value;
}
string toLowerCase(string value){
	for(int i=0;i<value.length();i++){
		if(int(value[i])!=32){
			value[i] = tolower(value[i]);
		}
	}
	return value;
}
string toUpperCase(string value){
	for(int i=0;i<value.length();i++){
		if(int(value[i])!=32){
			value[i] = toupper(value[i]);
		}
	}
	return value;
}
char charAt(string value,int position){
	return (value[position]);
}
string substr(string value,int start,int length=NULL){
	string ret;
	if(length == NULL){		
		for(int i=start;i<value.length();i++){
			ret += value[i];
		}
	}
	else{
		for(int i=start;i<length;i++){
			ret += value[i];
		}
	}
	return ret;
}
string substring(string value,int start,int end=NULL){
	string ret;
	if(end == NULL){		
		for(int i=start;i<value.length();i++){
			ret += value[i];
		}
	}
	else{
		for(int i=start;i<end;i++){
			ret += value[i];
		}
	}
	return ret;
}
string slice(string value,int start,int end=NULL){
	string ret;
	if(end == NULL){		
		for(int i=start;i<value.length();i++){
			ret += value[i];
		}
	}
	else{
		for(int i=start;i<end;i++){
			ret += value[i];
		}
	}
	return ret;
}
bool isEndsWith(string value,string endsValue){
	if(slice(value,(value.length() - endsValue.length())) == endsValue) return true;
	else return false;
}
bool isStartsWith(string value,string startValue){
	if(slice(value,0,startValue.length()) == startValue) return true;
	else return false;
}
string trimStart(string value){
	int j = 0;
	int k = value[j];
	while(k == 32){
		k = value[++j];
	}
	return (slice(value,j));
}
string trimEnd(string value){
	int j = value.length() - 1;
	int k = value[j];
	while(k == 32){
		j--;
		k = value[j];
	}
	return (slice(value,0,j+1));
}
string trim(string value){
	value = trimStart(value);
	return (trimEnd(value));
}
int indexOf(string value,char point){
	int position;
	for(int i=0;i,value.length();i++){
		if(value[i] == point){
			position = i;
			break;
		}
	}
	return position;
}

