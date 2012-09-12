#pragma once
#include "stdafx.h"
#include "DiscHead.h"
class MutableDiscHead: public DiscHead
{
private:
	int track;
	int sector;

public:
	MutableDiscHead(){}
	MutableDiscHead( DiscHead&);
	//setters
	void setTrack(int updatedTrack);
	void setSector(int updatedSector);
	int getTrack();
	int getSector();
};
