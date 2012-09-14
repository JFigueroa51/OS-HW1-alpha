#ifndef __MUTABLEDISCHEAD__H
#define __MUTABLEDISCHEAD__H

#pragma once
#include "stdafx.h"
#include "DiscHead.h"
class MutableDiscHead: public DiscHead
{

public:
	MutableDiscHead(){}
	MutableDiscHead( DiscHead&);
	//setters
	void setTrack(int updatedTrack);
	void setSector(int updatedSector);
};
#endif