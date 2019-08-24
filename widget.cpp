#include "widget.h"

extern "C"{
#include "libavutil/log.h"
};

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    av_log_set_level(AV_LOG_DEBUG);
    av_log(nullptr,AV_LOG_DEBUG,"hello world\n");

}

Widget::~Widget()
{

}
