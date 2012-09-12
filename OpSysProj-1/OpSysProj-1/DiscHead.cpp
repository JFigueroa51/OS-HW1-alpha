#pragma once 
#include "stdafx.h"
#include "DiscHead.h"


// TODO: basically everything
// this was essentially a test
DiscHead::DiscHead()
{
	this->track = 0;
	this->sector = 0;
}

/*
 *	This is the parameterized constructer
 *	Please use this in implementation
 */
DiscHead::DiscHead( int track, int sector)
{
	this->track = track;
	this->sector = sector;
}

//destructor
DiscHead::~DiscHead()
{
	this->track = 0;
	this->sector = 0;
}

//getter methods
int DiscHead::getSector()
{
	return sector;
}

int DiscHead::getTrack()
{
	return track;
}