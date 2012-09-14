#ifndef __DISCDRIVE__H
#define __DISCDRIVE__H

#pragma once
#include "stdafx.h"
#include "IOScheduler.h"

class DiscDrive
{
public:
	DiscDrive(){};
	DiscDrive(int configFD);//default constructor, builds the DiscDrive based on the configuration file
	void performRequests(int requestsFD);//recieve requests file and pass it to the IOScheduler

private:
	//DATA MEMBERS
	IOScheduler *scheduler;
	int headPosition;//TODO: consider how to encapsulate this with an object
	int numTracks;
	int numSectors;
	int numPlatters;
	int maxRotationalDelay;
	int armStartTime;
	int maxArmMovetime;
	int dataTransferTime;
	string algorithmName;
	int Nsize;

	//FUNCTIONS
	//call calculateRequest on scheduler->serveNextRequest() to perform actual computation
	int calculateRequestTime(Request *r);

	//records info about each request for the grapher
	void logGraphInfoForRequest(Request *r);
};

#endif