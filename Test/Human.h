#pragma once
#include <iostream>
#include <string>
using namespace std;


class Human
{
protected:
	string name;
	int age;
	char gender;
	bool alive;

public:
	//default constructor
	Human();
	//constructor with argumrnts
	Human(string name, int age);
	Human(int age, string name);
	//canonical constructor
	Human(string name, int age, char gender, bool alive);
	//copy constructor
	Human(const Human* human);
	//default destructor
	~Human();
	//getters and setters
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	char getGender();
	void setGender(char gender);
	bool isAlive();
	void setAlive(bool alive);
	string toString();
};

