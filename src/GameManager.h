#pragma once
#ifndef J_GAMEMANAGER_H
#define J_GAMEMANAGER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "raylib.h"

#ifdef __cplusplus
}
#endif


class GameManager
{
public:
	GameManager();
	virtual ~GameManager();

	static GameManager* GetInstance();
	static void Destroy();

	void Init(int nScreehWidth, int nScreenHeight);

	void Update(float fDt);
	void Render();


private:
	static GameManager* m_pInstance;

	int m_nScreenWidth;
	int m_nScreenHeight;


};

#endif
