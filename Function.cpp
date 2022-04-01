#include "Header.h"

using namespace std;

int counter = 2;
struct Tutor {
	int tutorID;
	string tutorName;
	int inDay;
	int inMonth;
	int inYear;
	int outDay;
	int outMonth;
	int outYear;
	int hourlyPay;
	string phoneNum;
	string address;
	string tutitonCode;
	string tutionCentreName;
	string subjectCode;
	string subjectName;
	int rating;
};
Tutor tutor[50];
int Day = 22;
int Month = 5;
int Year = 2020;

void predefineTutor() {
	tutor[0].tutorID = 01;
	tutor[0].tutorName = "Johny";
	tutor[0].inDay = 20;
	tutor[0].inMonth = 044;
	tutor[0].inYear = 2019;
	tutor[0].outDay = 30;
	tutor[0].outMonth = 05;
	tutor[0].outYear = 2019;
	tutor[0].hourlyPay = 300;
	tutor[0].phoneNum = "011-2142-7218";
	tutor[0].address = "Bukit-Jalil";
	tutor[0].tutitonCode = "B01";
	tutor[0].tutionCentreName = "Cerdas Tuition";
	tutor[0].subjectCode = "MTH";
	tutor[0].subjectName = "Math";
	tutor[0].rating = 5;
	tutor[1].tutorID = 05;
	tutor[1].tutorName = "Richard";
	tutor[1].inDay = 30;
	tutor[1].inMonth = 05;
	tutor[1].inYear = 2005;
	tutor[1].outDay = 15;
	tutor[1].outMonth = 12;
	tutor[1].outYear = 2005;
	tutor[1].hourlyPay = 200;
	tutor[1].phoneNum = "011-4567-7123";
	tutor[1].address = "Sunway";
	tutor[1].tutitonCode = "S01";
	tutor[1].tutionCentreName = "Sunway Tuition";
	tutor[1].subjectCode = "ENG";
	tutor[1].subjectName = "English";
	tutor[1].rating = 4;
}
void mainMenu() {
	string mainAns;
	do {
		cout << "Main Menu" << endl;
		cout << "1) Add Tutor" << endl;
		cout << "2) Modify Tutor" << endl;
		cout << "3) Remove Tutor" << endl;
		cout << "4) Display Tutor" << endl;
		cout << "5) Exit" << endl;
		cout << "Answer: ";
		cin >> mainAns;

		if (mainAns == "1") {
			addTutor();
		}
		else if (mainAns == "2") {
			modifyMenu();
		}
		else if (mainAns == "3") {
			removeTutor();
		}
		else if (mainAns == "4") {
			displayMenu();
		}
		else if (mainAns == "5") {
			exit(1);
		}
		else {
			cout << "No Choices Recognize\n" << endl;
		}
	} while (mainAns != "5");
}
void addTutor() {
	string addYN;
	system("cls");
	cout << "Please Enter Tutor Information." << endl;
	while (true) {
		for (int i = 0; i < counter; i++) {
			cout << "Tutor ID: ";
			cin >> tutor[counter].tutorID;
			if (tutor[counter].tutorID == tutor[i].tutorID) {
				cout << "Tutor ID Exist! Please Enter A Different Tutor ID" << endl;
				continue;
			}
			else if (tutor[counter].tutorID != tutor[i].tutorID) {
				break;
			}
		}
		break;
	}
	cout << "Tutor Name: ";
	cin >> tutor[counter].tutorName;
	cout << "Tutor Join Day: ";
	cin >> tutor[counter].inDay;
	cout << "Tutor Join Month: ";
	cin >> tutor[counter].inMonth;
	cout << "Tutor Join Year: ";
	cin >> tutor[counter].inYear;
	cout << "Tutor Termination Day: ";
	cin >> tutor[counter].outDay;
	cout << "Tutor Termination Month: ";
	cin >> tutor[counter].outMonth;
	cout << "Tutor Termination Year: ";
	cin >> tutor[counter].outYear;
	cout << "Tutor Hourly Pay: ";
	cin >> tutor[counter].hourlyPay;
	cout << "Tutor Phone Number: ";
	cin >> tutor[counter].phoneNum;
	cout << "Tutor Address: ";
	cin >> tutor[counter].address;
	cout << "Tuition Code: ";
	cin >> tutor[counter].tutitonCode;
	cout << "Tuition Centre Name: ";
	cin >> tutor[counter].tutionCentreName;
	cout << "Subject Code: ";
	cin >> tutor[counter].subjectCode;
	cout << "Subject Name: ";
	cin >> tutor[counter].subjectName;
	cout << "Tutor Rating: ";
	cin >> tutor[counter].rating;
	counter++;
	cout << "Do You Wish To Add More Tutor? (Y/N): ";
	while (true) {
		cout << "Answer: ";
		cin >> addYN;

		if (addYN == "Yes" or addYN == "Y") {
			addTutor();
			break;
		}
		else if (addYN == "No" or addYN == "N") {
			cout << "Returning to Main Menu\n" << endl;
			break;
		}
		else {
			cout << "Please Choose Yes or No!!!" << endl;
			continue;
		}
	}
}
void modifyMenu() {
	while (true) {
		string modifyAns;
		system("cls");
		cout << "Modify Menu" << endl;
		cout << "What Tutor Info You Wanted To Modify?" << endl;
		cout << "1) Tutor Address" << endl;
		cout << "2) Tutor Phone Number" << endl;
		cout << "3) Back" << endl;
		cout << "Answer: ";
		cin >> modifyAns;

		if (modifyAns == "1") {
			modifyAddress();
			break;
		}
		else if (modifyAns == "2") {
			modifyPhone();
			break;
		}
		else if (modifyAns == "3") {
			system("cls");
			return;
		}
		else {
			cout << "No Choices Recognize\n" << endl;
		}
	}
}
void modifyAddress() {
	system("cls");
	int id;
	string newAddress;
	cout << "What is the Current Tutor ID: ";
	cin >> id;
	cout << "New Address: ";
	cin >> newAddress;
	for (int i = 0; i < counter; i++) {
		if (tutor[i].tutorID == id) {
			tutor[i].address = newAddress;
			cout << "Address Succesfully Changed! Returning To Main Menu\n" << endl;
			break;
		}
		else {
			cout << "No tutor Id Found" << endl;
		}
	}
}
void modifyPhone() {
	system("cls");
	int id;
	string newPhone;
	cout << "What is the Current Tutor ID: ";
	cin >> id;
	cout << "New Phone Number: ";
	cin >> newPhone;
	for (int i = 0; i < counter; i++) {
		if (tutor[i].tutorID == id) {
			tutor[i].phoneNum = newPhone;
			cout << "Phone Number Succesfully Changed! Returning To Main Menu\n" << endl;
			break;
		}
		else {
			cout << "No tutor Id Found" << endl;
		}
	}
}
void removeTutor() {
	system("cls");
	int removeID;
	cout << "Please Enter Tutor ID to Remove Tutor Information" << endl;
	cout << "Tutor ID:";
	cin >> removeID;

	for (int i = 0; i < counter; i++) {
		int different;
		if (removeID == tutor[i].tutorID) {
			if (tutor[i].outYear == Year) {
				different = Month - tutor[i].outMonth;
				if (different >= 6) {
					for (int j = 0; j < counter; j++) {
						tutor[j] = tutor[j + 1];
					}
					counter--;
					cout << "Tutor Data Succesfully Removed\n" << endl;
				}
				else {
					cout << "Unable To Delete Because Its Not 6 Months Old" << endl;
				}
			}
			else if (tutor[i].outYear < Year) {
				int diffYear = Year - tutor[i].outYear;
				different = ((12 * diffYear) + Month) - tutor[i].outMonth;
				if (different >= 6) {
					for (int j = 0; j < counter; j++) {
						tutor[j] = tutor[j + 1];
					}
					counter--;
					cout << "Tutor Data Succesfully Removed\n" << endl;
				}
				else {
					cout << "Unable To Delete Because Its Not 6 Months Old" << endl;
				}
			}
			else {
				cout << "Unable To Delete Because Its Not 6 Months Old" << endl;
			}
		}
	}
}
void displayMenu() {
	system("cls");
	string displayAns;
	while (true) {
		cout << "Display Menu" << endl;
		cout << "1) Non Sorted" << endl;
		cout << "2) Sort By ID" << endl;
		cout << "3) Sort By Rating" << endl;
		cout << "4) Sort By Hourly Pay" << endl;
		cout << "5) Search Tutor Data" << endl;
		cout << "6) Back" << endl;
		cout << "Answer: ";
		cin >> displayAns;
		if (displayAns == "1") {
			displayNotSorted();
		}
		else if (displayAns == "2") {
			int sortID[50];
			for (int i = 0; i < counter; i++) {
				sortID[i] = tutor[i].tutorID;
			}
			bubbleSort(sortID);
			break;
		}
		else if (displayAns == "3") {
			int sortRating[50];
			for (int i = 0; i < counter; i++) {
				sortRating[i] = tutor[i].rating;
			}
			bubbleSort(sortRating);
			break;
		}
		else if (displayAns == "4") {
			int sortHrPay[50];
			for (int i = 0; i < counter; i++) {
				sortHrPay[i] = tutor[i].hourlyPay;
			}
			bubbleSort(sortHrPay);
			break;
		}
		else if (displayAns == "5") {
			searchMenu();
			break;
		}
		else if (displayAns == "6") {
			system("cls");
			return;
		}
		else {
			cout << "No Choices Recognize\n" << endl;
		}
	}
}
void searchMenu() {
	string searchMenu;
	while (true) {
		system("cls");
		cout << "Search Menu" << endl;
		cout << "1) Search By ID" << endl;
		cout << "2) Search by Rating" << endl;
		cout << "Answer: ";
		cin >> searchMenu;
		if (searchMenu == "1") {
			int searchID[50];
			for (int i = 0; i < counter; i++) {
				searchID[i] = tutor[i].tutorID;
			}
			binarySearch("ID",searchID, 0, counter);
			break;
		}
		else if (searchMenu == "2") {
			int searchRating[50];
			for (int i = 0; i < counter; i++) {
				searchRating[i] = tutor[i].rating;
			}
			binarySearch("Rating",searchRating , 0, counter);
			break;
		}
		else {
			cout << "No Choices Recognize" << endl;
			continue;
		}
	}
}
void displayNotSorted() {
	system("cls");
	for (int i = 0; i < counter; i++) {
		cout << "Tutor ID               : " << setfill('0') << setw(2) << tutor[i].tutorID << endl;
		cout << "Tutor Name             : " << tutor[i].tutorName << endl;
		cout << "Tutor Join Date        : " << tutor[i].inDay << "-" << tutor[i].inMonth << "-" << tutor[i].inYear << endl;
		cout << "Tutor Termination Date : " << tutor[i].outDay << "-" << tutor[i].outMonth << "-" << tutor[i].outYear << endl;
		cout << "Tutor Hourle Pay       : " << tutor[i].hourlyPay << endl;
		cout << "Tutor Phone Number     : " << tutor[i].phoneNum << endl;
		cout << "Tutor Address          : " << tutor[i].address << endl;
		cout << "Tuition Code           : " << tutor[i].tutitonCode << endl;
		cout << "Tuition Name           : " << tutor[i].tutionCentreName << endl;
		cout << "Subject Code           : " << tutor[i].subjectCode << endl;
		cout << "Subject Name           : " << tutor[i].subjectName << endl;
		cout << "Tutor Rating           : " << tutor[i].rating << "\n" << endl;
	}
	mainMenu();
}
void bubbleSort(int tutorArray[]) {
	system("cls");
	int temp1;
	Tutor temp;
	Tutor copy[50];
	bool switchy;
	int bubbleCounter = 0;
	string nextbackAns;

	for (int i = 0; i < counter; i++) {
		copy[i] = tutor[i];
	}
	for (int i = 0; i < counter - 1; i++) {
		switchy = false;
		for (int j = 0; j < counter - i - 1; j++) {
			if (tutorArray[j] > tutorArray[j + 1]) {
				temp1 = tutorArray[j];
				temp = copy[j];
				tutorArray[j] = tutorArray[j + 1];
				copy[j] = copy[j + 1];
				tutorArray[j + 1] = temp1;
				copy[j + 1] = temp;
				switchy = true;
			}
		}
		if (switchy == false and i == 0) {
			cout << "The Data Is In Sorted Condition Printing Info:" << endl;
			break;
		}
	}
	while (bubbleCounter != counter + 1) {
		if (bubbleCounter >= 0 and bubbleCounter < counter) {
			cout << "Tutor ID               : " << setfill('0') << setw(2) << copy[bubbleCounter].tutorID << endl;
			cout << "Tutor Name             : " << copy[bubbleCounter].tutorName << endl;
			cout << "Tutor Join Date        : " << copy[bubbleCounter].inDay << "-" << copy[bubbleCounter].inMonth << "-" << copy[bubbleCounter].inYear << endl;
			cout << "Tutor Termination Date : " << copy[bubbleCounter].outDay << "-" << copy[bubbleCounter].outMonth << "-" << copy[bubbleCounter].outYear << endl;
			cout << "Tutor Hourle Pay       : " << copy[bubbleCounter].hourlyPay << endl;
			cout << "Tutor Phone Number     : " << copy[bubbleCounter].phoneNum << endl;
			cout << "Tutor Address          : " << copy[bubbleCounter].address << endl;
			cout << "Tuition Code           : " << copy[bubbleCounter].tutitonCode << endl;
			cout << "Tuition Name           : " << copy[bubbleCounter].tutionCentreName << endl;
			cout << "Subject Code           : " << copy[bubbleCounter].subjectCode << endl;
			cout << "Subject Name           : " << copy[bubbleCounter].subjectName << endl;
			cout << "Tutor Rating           : " << copy[bubbleCounter].rating << endl;
			cout << "1) Next" << endl;
			cout << "2) Previous" << endl;
			cout << "3) Main Menu" << endl;
			cout << "Answer: ";
			cin >> nextbackAns;
			cout << "\n";
			system("cls");
		}
		else if (bubbleCounter < 0 or bubbleCounter == counter) {
			cout << "No Data Left Returning to Main Menu\n" << endl;
			break;
		}
		if (nextbackAns == "1") {
			bubbleCounter++;
		}
		else if (nextbackAns == "2") {
			bubbleCounter--;
		}
		else {
			system("cls");
			return;
		}
	}
}
void binarySearch(string type, int binaryArray[], int left, int right) {
	Tutor search[50];
	Tutor temp;
	int nextprevCounter = 0;
	int temp1;
	bool returnSearch = false;
	bool switchy = false;
	int searchData;
	int middle;
	cout << "Tutor " << type << " You Wish To Search: ";
	cin >> searchData;
	for (int i = 0; i < counter; i++) {
		search[i] = tutor[i];
	}
	for (int i = 0; i < counter - 1; i++) {
		switchy = false;
		for (int j = 0; j < counter - i - 1; j++) {
			if (binaryArray[j] > binaryArray[j + 1]) {
				temp1 = binaryArray[j];
				temp = search[j];
				binaryArray[j] = binaryArray[j + 1];
				search[j] = search[j + 1];
				binaryArray[j + 1] = temp1;
				search[j + 1] = temp;
				switchy = true;
			}
		}
		if (switchy == false and i == 0) {
			break;
		}
	}
	if (type == "ID") {
		while (left <= right) {
			middle = left + (right - 1) / 2;
			if (search[middle].tutorID == searchData) {
				cout << "Data Found Printing Info:" << endl;
				cout << "Tutor ID               : " << setfill('0') << setw(2) << search[middle].tutorID << endl;
				cout << "Tutor Name             : " << search[middle].tutorName << endl;
				cout << "Tutor Join Date        : " << search[middle].inDay << "-" << search[middle].inMonth << "-" << search[middle].inYear << endl;
				cout << "Tutor Termination Date : " << search[middle].outDay << "-" << search[middle].outMonth << "-" << search[middle].outYear << endl;
				cout << "Tutor Hourle Pay       : " << search[middle].hourlyPay << endl;
				cout << "Tutor Phone Number     : " << search[middle].phoneNum << endl;
				cout << "Tutor Address          : " << search[middle].address << endl;
				cout << "Tuition Code           : " << search[middle].tutitonCode << endl;
				cout << "Tuition Name           : " << search[middle].tutionCentreName << endl;
				cout << "Subject Code           : " << search[middle].subjectCode << endl;
				cout << "Subject Name           : " << search[middle].subjectName << endl;
				cout << "Tutor Rating           : " << search[middle].rating << "\n" << endl;
				returnSearch = true;
				break;
			}
			else if (search[middle].tutorID > searchData) {
				right = middle - 1;
			}
			else {
				left = middle + 1;
			}
		}
		if (returnSearch == false) {
			cout << "No Data Found" << endl;
		}
	}
	else {
		for (int i = 0; i < counter; i++) {
			if (search[i].rating == searchData) {
				cout << "Data Found Printing Info:" << endl;
				cout << "Tutor ID               : " << setfill('0') << setw(2) << search[i].tutorID << endl;
				cout << "Tutor Name             : " << search[i].tutorName << endl;
				cout << "Tutor Join Date        : " << search[i].inDay << "-" << search[i].inMonth << "-" << search[i].inYear << endl;
				cout << "Tutor Termination Date : " << search[i].outDay << "-" << search[i].outMonth << "-" << search[i].outYear << endl;
				cout << "Tutor Hourle Pay       : " << search[i].hourlyPay << endl;
				cout << "Tutor Phone Number     : " << search[i].phoneNum << endl;
				cout << "Tutor Address          : " << search[i].address << endl;
				cout << "Tuition Code           : " << search[i].tutitonCode << endl;
				cout << "Tuition Name           : " << search[i].tutionCentreName << endl;
				cout << "Subject Code           : " << search[i].subjectCode << endl;
				cout << "Subject Name           : " << search[i].subjectName << endl;
				cout << "Tutor Rating           : " << search[i].rating << "\n" << endl;
				returnSearch = true;
			}
		}
		if (returnSearch == false) {
			cout << "No Data Found" << endl;
		}
	}
}