#pragma once
#include "stdafx.h"
#include <queue>
#include <vector>
#include "Request.h"

//abstract base class that sets the contract for scheduling alrorithms

class SchedulingAlgorithm
{
public:
	SchedulingAlgorithm(){};

	//implemented in the subclasses according to the logic of the specific algorithms
	virtual Request nextRequest();
};