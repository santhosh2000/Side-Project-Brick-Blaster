//View for the entire Game


#ifndef POOLVIEW_H
#define POOLVIEW_H

#include "BallView.h"

class PoolView {
	const unsigned short *tableView;
	const unsigned short *stickView;
	BallView ballset[15];
	BallView whiteCue;
	
	//static void Ball_Init(BallView* b, int num, int x, int y, const unsigned short *view);
	
	
public:
	PoolView();


	void draw();

};


#endif

