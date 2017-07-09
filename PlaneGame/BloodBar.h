#pragma once
#include "GameObject.h"
#include "CommonFun.h"
#include "SurroundInterface.h"
class CBloodBar : CSurroundInterface
{
protected:
	int width;
	int height;
	CPoint point;
	int life;
	int HP;
public:
	CBloodBar(int width, int height, CPoint point, int life);
	virtual ~CBloodBar();
	// ͨ�� CGameObject �̳�
	virtual BOOL draw(CDC * pDC, int hp) = 0;

	// ͨ�� CSurroundInterface �̳�
	virtual void updatePosition(CPoint newpoint) override;
};

