#pragma once
#include "stdafx.h"
#include "MutableDiscHead.h"

MutableDiscHead::MutableDiscHead( DiscHead& head )
{
	this->sector = head.getSector();
	this->track = head.getTrack();
}

void MutableDiscHead::setTrack( int updatedTrack)
{
	this->track = updatedTrack;
}

void MutableDiscHead::setSector( int updatedSector)
{
	this->sector = updatedSector;
}

int MutableDiscHead::getSector()
{
	return sector;
}

int MutableDiscHead::getTrack()
{
	return track;
}