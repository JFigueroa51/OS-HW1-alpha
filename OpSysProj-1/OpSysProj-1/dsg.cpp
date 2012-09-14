#pragma once
#include "stdafx.h"
#include "DiscDrive.h"
#include "DiscHead.h"
#include "MutableDiscHead.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//read command line arguments

	//set up DiscDrive by passing config file to the constructor

	//call performRequests() on the requests file

	//graph results
	
	//end, because the design is badass and does very little work in the main method



	//test the DiscHead class
	DiscHead *disc = new DiscHead(2,3);
	cout << "The disc sector is: " <<  disc->getSector() << endl;

	MutableDiscHead *myDisc = new MutableDiscHead(*disc);
	cout << "MY disc sector is: " << myDisc->getSector() << endl;

	cout<<"enter any character to end program\n";
	
	string s;
	cin>>s;

	return 0;
}

