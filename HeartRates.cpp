#include<iostream>
#include<string.h>
using namespace std;
class HeartRates {
	string fname;
	string lname;
	int month;
	int day;
	int year;
public:
	HeartRates(string fname, string lname, int month, int day, int year) {
		this->fname = fname;
		this->lname = lname;
		this->month = month;
		this->day = day;
		this->year = year;
	}
	string getFirstName() {
		return fname;
	}
	string getLastName() {
		return lname;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
	int getYear() {
		return year;
	}
	void setFirstName(string fname) {
		this->fname = fname;
	}
	void setLastName(string lname) {
		this->lname = lname;
	}
	void setMonth(int month) {
		this->month = month;
	}
	void setDay(int day) {
		this->day = day;
	}
	void setYear(int year) {
		this->year = year;
	}
	int getAge() {
		return 2022 - year;
	}
	int maxHeartRate() {
		return 220 - getAge();
	}
	void targetHeartRate(double& minRate, double& maxRate) {
		minRate = maxHeartRate() * 0.5;
		maxRate = maxHeartRate() * 0.85;
	}
};
int main() {
	string fname, lname;
	int month, day, year;
	cout << "Enter your first name: ";
	cin >> fname;
	cout << "Enter your last name: ";
	cin >> lname;
	cout << "Enter your date of birth" << endl;
	cout << "Month: ";
	cin >> month;
	cout << "Day: ";
	cin >> day;
	cout << "Year: ";
	cin >> year;
	HeartRates hr(fname, lname, month, day, year);
	cout << "First Name: " << hr.getFirstName() << endl;
	cout << "Last Name: " << hr.getLastName() << endl;
	cout << "Date of Birth: " << hr.getMonth() << "/" << hr.getDay() << "/" << hr.getYear() << endl;
	cout << "Age (in years): " << hr.getAge() << endl;
	cout << "Maximum Heart Rate: " << hr.maxHeartRate() << endl;
	double minRate, maxRate;
	hr.targetHeartRate(minRate, maxRate);
	cout << "Target Heart Rate Range: " << minRate << "-" << maxRate << endl;
	return 0;
}