#include "GameManager.h"


/*static*/ GameManager* GameManager::m_pInstance = 0;

GameManager::GameManager()
{

}

/*virtual*/ GameManager::~GameManager()
{

}

/*static*/ GameManager* GameManager::GetInstance()
{
	if (m_pInstance == 0)
	{
		m_pInstance = new GameManager();
	}

	return m_pInstance;
}


/*static*/ void GameManager::Destroy()
{
	if (m_pInstance)
	{
		delete m_pInstance;
		m_pInstance = 0;
	}
}


void GameManager::Init(int nScreehWidth, int nScreenHeight)
{
	m_nScreenWidth = nScreehWidth;
	m_nScreenHeight = nScreenHeight;

}


void GameManager::Update(float fDt)
{

}


void GameManager::Render()
{
	BeginDrawing();

	ClearBackground(RAYWHITE);

	DrawRectangle(10, 10, m_nScreenWidth - 20, m_nScreenHeight - 20, SKYBLUE);

	EndDrawing();

}