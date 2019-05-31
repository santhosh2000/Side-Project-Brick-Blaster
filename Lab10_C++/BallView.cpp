//Implementation of ballView Class



#include "BallView.h"
#include "ST7735.h"
// Santhosh Saravanan and Yongye Zhu

BallView::BallView(): ball_num(0), x(0), y(0), in_hole(true), view(0){
}


BallView::BallView(int num, int x, int y, const unsigned short *view){
    this->ball_num = num;
    in_hole = false;
    this->x = x;
    this->y = y;
    this->view = view;
}

void BallView::draw(){
	if(this->in_hole == true)
		return;
	ST7735_DrawBitmap(x, y, view, 6, 6);
}

BallView& BallView::operator () (int num, int x, int y, const unsigned short *view){
	this->ball_num = num;
    in_hole = false;
    this->x = x;
    this->y = y;
    this->view = view;
	return *this;
}

void BallView::moveTo(int x, int y, int time){
    int x_dis = x - this->x;
    int y_dis = y - this->y;
    int cor_x_pers = x_dis / time;
    int cor_y_pers = y_dis / time;
    for(int i = 1; i <= time; i++) {
        this->x += cor_x_pers;
        this->y += cor_y_pers;
    }
}



