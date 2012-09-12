#pragma once
#include "stdafx.h"

class Request
{
public:
	Request() {}; //default constructor used for array initialization
	Request(int track, int sector, int platter);
	int getTrack();
	int getSector();
	int getPlatter();
	int getStartTime();
	void setStartTime(int time);
	int getEndTime();
	void setEndTime(int time);
	void printRequest();

private:
	int track;
	int sector;
	int platter;
	int startTime;
	int endTime; 
};