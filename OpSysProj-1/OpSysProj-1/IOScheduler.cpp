#pragma once
#include "stdafx.h"
#include "IOScheduler.h"
#include "FCFS.h"


IOScheduler::IOScheduler(string algType)
{
	this->requests = new queue<vector<Request*>>();

	this->initAlgorithm(algType);
}

//TODO: finish implementation when other algorithm classes are created
//initializes this->algorithm based on the string parameter
void IOScheduler::initAlgorithm(string algType)
{
	if(algType == "FCFS"){
		cout<< "algorithm is FCFS\n";
		this->algorithm = new FCFS();
	}
	else if(algType == "SSTF"){
		cout<< "algorithm is SSTF\n";
	}
	else if(algType == "SCAN"){
		cout<< "algorithm is SCAN\n";
	}
	else if(algType == "LOOK"){
		cout<< "algorithm is LOOK\n";
	}
	else if(algType == "C-SCAN"){
		cout<< "algorithm is C-SCAN\n";
	}
	else if(algType == "FSCAN"){
		cout<< "algorithm is FSCAN\n";
	}
	else if(algType == "N-step SCAN"){
		cout<< "algorithm is N-step SCAN\n";
	}
	else{
		cout<< "algorithm not found\n";
		//TODO: throw exception if algorithm is not matched
	}
}

//TODO: implement and remove test data
//this method reads the requests from the file and inserts them into the this->requests
	//data structure
//the data structure will hold them in the order that they were received in
	//i.e., the first line in the file will be first in the queue
//the algorithm will hold a pointer to the data structere and will pull Request objects from 
	//the queue on each call of this->serveNextRequest()
void IOScheduler::readRequests(int requestsFD)
{
	//read requests from file

	//for each line in the file, add the requests to a vector

	//for each vector, push to the queue to preserve order

	//TEMPORARY
	//sample data for testing
	vector<Request*> *v1 = new vector<Request*>();
	v1->push_back(new Request(1, 1, 1));
	v1->push_back(new Request(2, 2, 2));
	v1->push_back(new Request(3, 3, 3));

	vector<Request*> *v2 = new vector<Request*>();
	v2->push_back(new Request(4, 4, 4));
	v2->push_back(new Request(5, 5, 5));
	v2->push_back(new Request(6, 6, 6));

	this->requests->push(*v1);
	this->requests->push(*v2);
}


//prints all IO requests in order received
void IOScheduler::printRequests()
{
	int cnt = 0;
	while(this->requests->size() > 0){
		vector<Request*> v;
		v = this->requests->front();
		this->requests->pop();
		for(int i=0; i < v.size(); i++){
			cnt++;
			cout<< "Request #"<< cnt<< "\n";
			v.at(i)->printRequest();
		}
	}
}

//called by the DiscDrive class
Request IOScheduler::serveNextRequest()
{
	return this->algorithm->nextRequest();
}