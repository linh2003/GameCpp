#ifndef _SIZE_H
#define _SIZE_H

class Size
{
private:
	int width;
	int height;
public:
	Size();
	Size(int,int);
	int getWidth() const;
	int getHeight() const;
};

#endif //_SIZE_H