#pragma once
#include "stdafx.h"

class DiscHead
{
private:
	int track;
	int sector;

public:
	DiscHead();
	DiscHead(int track, int sector);
	~DiscHead();
	int getTrack();
	int getSector();
};