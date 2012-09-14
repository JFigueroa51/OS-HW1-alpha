#ifndef __FCFS__H
#define __FCFS__H

#pragma once
#include "stdafx.h"
#include "SchedulingAlgorithm.h"

class FCFS: public SchedulingAlgorithm
{
public:
	FCFS(){};
	//TODO: figure out how to construct the class with its own pointer to the request
		//data structure in the IOScheduler object
	//FCFS(queue<vector<Request*>> *q);

	//pulls next request from the Requests data structure in IOScheduler
		//based on the logic specified by the FCFS algorithm as defined in class
	Request nextRequest();

};

#endif