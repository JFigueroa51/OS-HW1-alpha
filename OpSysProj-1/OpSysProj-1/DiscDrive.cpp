#pragma once
#include "stdafx.h"
#include "DiscDrive.h"


DiscDrive::DiscDrive(int configFD)
{
	//read file

	//set data members based on file data 
	//(use defaults specified in project description if there is no setting specified)

	//set up IOScheduler by calling this->scheduler = new IOScheduler(this->algorithmName)
	this->scheduler = new IOScheduler("FCFS");//test data
}


//send the file to the IOScheduler
//then perform the request operations
//then log the results
void DiscDrive::performRequests(int requestsFD)
{
	this->scheduler->readRequests(requestsFD);

	//while IOScheduler still serves non-null Requests
		//get next request served by this->scheduler->serveNextRequest()

	//calculate request time
		//*remember to update new position of the disc head

	//log the info for the Request
	//NOTE: need to figure out the best way to record the data for later use
		//by a graphing program
}


//this is where the actual time calculations are performed
	//based on the current position of the disc head and the configuration of the disc
int DiscDrive::calculateRequestTime(Request *r)
{
	return 0;
}


//record the data about the request in a format that can be read by the grapher
void DiscDrive::logGraphInfoForRequest(Request *r)
{

}