#include <iostream>
#include "myWindow.h"


int main(int argc,char** argv)
{

	QApplication app(argc,argv);
	myWindow m;
	m.show();
	
	return app.exec();
}