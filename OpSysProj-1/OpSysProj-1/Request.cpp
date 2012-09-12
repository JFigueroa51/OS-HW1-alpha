#pragma once
#include "stdafx.h"
#include "Request.h"

using namespace std;

Request::Request(int track, int sector, int platter)
{
	if(track >= 0){
		this->track = track;
	}
	if(sector >= 0){
		this->sector = sector;
	}
	if(platter >= 0){
		this->platter = platter;
	}
	this->startTime = 0;

	this->endTime = 0;
}

int Request::getTrack()
{
	return this->track;
}

int Request::getSector()
{
	return this->sector;
}

int Request::getPlatter()
{
	return this->platter;
}

int Request::getStartTime()
{
	return this->startTime;
}

void Request::setStartTime(int time)
{
	if(time >= 0)
	{
		this->startTime = time;
	}
}

int Request::getEndTime()
{
	return this->endTime;
}

void Request::setEndTime(int time)
{
	if(time >= 0)
	{
		this->endTime = time;
	}
}

void Request::printRequest()
{
	cout<< "Request==> "<< " Track: "<< this->getTrack()<< " | Sector: "<< this->getSector()<< " | Platter: "<< this->getPlatter()<< "\n";
	cout<< "	Start time: "<< this->getStartTime()<< " | End time: "<< this->getEndTime()<< "\n\n";
}