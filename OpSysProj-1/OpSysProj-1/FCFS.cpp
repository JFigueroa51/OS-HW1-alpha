#pragma once
#include "stdafx.h"
#include "FCFS.h"

using namespace std;

/*
FCFS::FCFS(queue<vector<Request*>> *q)//NOTE: I couldn't get the syntax to work... any ideas what I'm doing wrong? -Rick
{
	//this->requests = q;
	cout<< "Constructing FCFS object\n";
}
*/

Request FCFS::nextRequest()
{
	cout<< "Returning Request via FCFS algorithm\n\n";
	return Request(0, 0, 0);
}