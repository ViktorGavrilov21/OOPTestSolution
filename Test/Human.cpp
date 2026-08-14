#include "Human.h"


Human::Human() : Human("", 0, '\0', false) {
	cout << "Human default constructor\n";
}

Human::Human(string name, int age) {
	cout << "Human constructor with arguments\n";
	this->name = name;
	this->age = age;
	alive = false;
	gender = '\0';
}

Human::Human(int age, string name) {
	cout << "Human constructor with arguments\n";
	this->name = name;
	this->age = age;
	alive = false;
	gender = '\0';
}

Human::Human(string name, int age, char gender, bool alive) {
	cout << "Human canonical constructor\n";
	this->name = name;
	this->age = age;
	this->alive = alive;
	this->gender = gender;
}

Human::Human(const Human* human) {
	cout << "Human copy-constructor\n";
	name = human->name;
	age = human->age;
	alive = human->alive;
	gender = human->gender;
}

Human::~Human() {
	cout << "Human default desructor\n";
}

string Human::getName() {
	return name;
}

void Human::setName(string name) {
	this->name = name;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int age) {
	if (age > 0) {
		this->age = age;
	}
}

char Human::getGender() {
	return gender;
}

void Human::setGender(char gender) {
	if (gender == 'm' || gender == 'f') {
		this->gender = gender;
	}
}

bool Human::isAlive() {
	return alive;
}

void Human::setAlive(bool alive) {
	this->alive = alive;
}


string Human::toString() {
	string s = "";
	string mrks = "";

	s += +"Human: " + name + ", age = " + to_string(age)
		+ ", gender = " + gender
		+ ", alive = " + (alive ? "yes" : "no");

	return s;
}