#include<iostream>
#include<string>
using namespace std;
struct seat {
	int id;
	bool  st;
};
struct car_id {
	int id2;
	seat c[30];
};
struct train {
     car_id z[10];
};


int main() {
	int seat_number,car_number,n,count1=0,count2=0;
	train t;
	bool stat;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 30; j++) {
			t.z[i].c[j].st = true;
		}
	}


	do {
		cout << "choose the number of operation :" << endl;
		cout << endl;
		cout << "1- Reserve a ticket." << endl;
		cout << "2- Cancel the reservation." << endl;
		cout << "3- Check whether a specific car has available seat or not." << endl;
		cout << "4- Check whether a specific seat is available or not." << endl;
		cout << "5- Get the number of the available seats in a specific car." << endl;
		cout << "6-	Show all the seats status of a specific car." << endl;
		cout << "7- Exit." << endl;

		cin >> n;

		switch 👎 {
		case 1:
		{
			cout << "enter the car number: " << endl;
			cin >> car_number;
			cout << "enter the seat number:" << endl;
			cin >> seat_number;
			if (t.z[car_number].c[seat_number].st == true)
			{
				t.z[car_number].c[seat_number].st = false;
				cout << "proces is done ." << endl;
				cout << endl;

			}

			else {

				cout << "this seat is not available ." << endl;
				cout << endl;

			}
			break;
		}

		case 2:
		{
			cout << "enter the car number :" << endl;
			cin >> car_number;
			cout << "enter the seat number:" << endl;
			cin >> seat_number;
			if (t.z[car_number].c[seat_number].st == false) {
				t.z[car_number].c[seat_number].st = true;
				cout << "reservation is canceled" << endl;
				cout << endl;
			}
			else {
				cout << "this seat is not reserved to be canceleld " << endl;
				cout << endl;
			}
		}
		break;
		case 3:
		{	cout << "enter the car number: " << endl;
		cin >> car_number;
		for (int i = 0; i < 30; i++) {
			if (t.z[car_number].c[i].st == true) {
				count1++;
				break;
			}
		}
		if (count1 != 0) {
			cout << "there are available seats in this car" << endl;
			cout << endl;
		}
		else {
			cout << "there are no available seats in this car" << endl;
			cout << endl;
		}
		}
		count1 = 0;
		break;
		case 4:
		{	cout << "enter the car number:" << endl;
		cin >> car_number;
		   cout << "enter the seat number:" << endl;
		cin>> seat_number;
		if (t.z[car_number].c[seat_number].st == true)
		{
			cout << "the seat is available" << endl;
			cout << endl;
		}
		else {
			cout << "the seat is not available" << endl;
			cout << endl;
		}
		}
		break;
		case 5:
		{	cout << "enter the car number " << endl;
		cin >> car_number;
		for (int i = 0; i < 30; i++) {
			if (t.z[car_number].c[i].st == true) {
				count2++;

			}
		}
		cout << "the number of available seats in this car is:" << count2 << endl;
		cout << endl;
		}
		count2 = 0;
		break;
		case 6:
		{cout << "enter the car number:" << endl;
		cin >> car_number;
		for (int i = 0; i < 30; i++) {
			if (t.z[car_number].c[i].st == true) {
				cout << "the seat number :" << "  " << i << "   is available" << endl;

			}
			else {
				cout << "the seat number :" << "  " << i << "   is not available" << endl;

			}
		}
		cout << endl;
		}
		break;
		case 7: {

			return 0;
		}

		}
	}
	while (n != 7);

	system("pause");

	return 0;
}
