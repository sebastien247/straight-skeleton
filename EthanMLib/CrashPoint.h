#pragma once

enum PointType
{
	ReflexVertice, MovingVertice, ClashVertice, WallVertice, InfiniteVertice
};
struct MotorLines
{
	int start;
	int end;
	int id;	
};
class CrashPoint
{
public:
	QPointF p;
	float time;
	enum PointType type;
	int wallNo;
public:
	CrashPoint()
	{

	}
	CrashPoint(QPointF p, PointType type, int wallNo)
	{
		this->p = p;
		this->type = type;
		this->wallNo = wallNo;
	}

	friend bool operator < (CrashPoint a, CrashPoint b)
	{
		return a.time > b.time;
	}
};