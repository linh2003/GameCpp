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
	void setWidth(int);
	int getWidth() const;
	void setHeight(int);
	int getHeight() const;
};

#endif //_SIZE_H

