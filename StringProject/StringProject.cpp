#include "presentation.h"
#include <iostream>
#include "struct.h"
#include <fstream>
#include <vector>
#include <string>
#include "data.h"
using namespace std;










int main()
{
	DATA_LAYER ds;
	PRESENTATION_LAYER ps;
	//ds.createCategory("pesho","haka","da");
	int choice;
	cout << "1. LOGIN" << endl << "2. REGISTER" << endl << "3. ADMIN" << endl<<"4. POST"<<endl<<"5. SHOW CATEGORIES"<<endl<<"6. BROWSE CATEGORIES"<<endl<<"choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		ps.login();
		break;
	case 2:
		ps.Register();
		break;
	case 3:
		ps.manageAccounts();
		break;
	case 4:
		//ds.getPostInfo();
		break;
	case 5:
		//ds.showCategories();
		break;
	default:
		return 0;
		break;
	}
}

// FOR DEBUGIN LOGIN/REGISTER
//int choice;
	//cout << "1. LOGIN" << endl << "2. REGISTER" << endl << "3. ADMIN" << endl<<"choice: ";
	//cin >> choice;
	//switch (choice)
	//{
	//case 1:
	//	login();
	//	break;
	//case 2:
	//	Register();
	//	break;
	//case 3:
	//	manageAccounts();
	//	break;
	//default:
	//	return 0;
	//	break;
	//}