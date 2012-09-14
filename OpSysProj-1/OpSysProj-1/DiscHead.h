#ifndef __DISCHEAD__H
#define __DISCHEAD__H

#pragma once
#include "stdafx.h"

class DiscHead
{
protected:
	int track;
	int sector;

public:
	DiscHead();
	DiscHead(int track, int sector);
	~DiscHead();
	int getTrack();
	int getSector();
};

#endif