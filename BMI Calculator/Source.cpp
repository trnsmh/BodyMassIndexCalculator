//Semih Turan LAB#5
//This program prompts user to enter data and calculates body mass index and outputs weight status.

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class secretType {

public:
	void print();
	void setName(string);
	void setAge(int);
	void setWeight(int);
	void setHeight(double);
	string getName()const;
	int getAge()const;
	int getWeight()const;
	double getHeight()const;
	string weightStatus();
private:
	string name;
	int age, weight;
	double height;

}person;

int main() {
	string N;
	int A, W, i, rep;
	double H;

	cout << "How many people will use the BMI calculator?" << endl;
	cin >> rep;

	for (i = 0; i < rep; i++) {

		cout << endl;
		cout << "Please enter your name: " ;
		cin >> N;
		cout << "Please enter your age: " ;
		cin >> A;
		cout << "Please enter your weight (pounds): " ;
		cin >> W;
		cout << "Please enter your height (inches): " ;
		cin >> H;

		person.setName(N);
		person.setAge(A);
		person.setWeight(W);
		person.setHeight(H);
		person.print();
	}
	return 0;
}

void secretType::print() {
	cout << "According to the data entered " << person.getName() << " is " << person.weightStatus() << endl;
}
void secretType::setName(string N) {
	name = N;
}
void secretType::setAge(int A) {
	age = A;
}
void secretType::setWeight(int W) {
	weight = W;
}
void secretType::setHeight(double H) {
	height = H;
}
string secretType::getName()const {
	return name;
}
int secretType::getAge()const {
	return age;
}
int secretType::getWeight()const {
	return weight;
}
double secretType::getHeight()const {
	return height;
}
string secretType::weightStatus() {
	double catgry;
	catgry=((person.getWeight() / (pow(person.getHeight(), 2)))*703);

	if (catgry <= 18.5) {
		return "underweight";
	}
	else if ((catgry <= 24.9) && (catgry > 18.5)) {
		return "normal weight";
	}
	else if ((catgry <= 29.9) && (catgry > 24.9)) {
		return "overweight";
	}
	else 
		return "obese";
	
}
