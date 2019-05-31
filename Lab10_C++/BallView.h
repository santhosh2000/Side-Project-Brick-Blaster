//View class of all ball within the table

#ifndef BALLVIEW_H
#define BALLVIEW_H

class BallView{

	
	static const int Total_num = 16;
	static const int radius = 3;
	int ball_num;
	int x, y;
	bool in_hole;
	const unsigned short *view;
	
public:
	

	BallView();

	BallView(int num, int x, int y, const unsigned short *view);

	BallView& operator () (int num, int x, int y, const unsigned short *view);
	
	void draw();


	void moveTo(int x, int y, int time);		//animation set the ball to certain location in certain time. 
																					//time will be calculate in physical stimulation
	
	

};

#endif



