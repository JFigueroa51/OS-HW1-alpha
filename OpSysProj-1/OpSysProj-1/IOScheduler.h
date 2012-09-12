#pragma once
#include "stdafx.h"
#include <queue>
#include <vector>
#include "SchedulingAlgorithm.h"

using namespace std;

class IOScheduler
{
public:
	IOScheduler(string algType);

	//parses all requests from the file and stores them in this->requests
	void readRequests(int requestsFD);

	//prints all remaining requests in the order read from the file
	void printRequests();

	//picks next Request based on logic from this->algorithm
	Request serveNextRequest();

private:
	queue<vector<Request*>> *requests;
	SchedulingAlgorithm *algorithm;
	void initAlgorithm(string algStr);//helper method to construct algorithm
};

