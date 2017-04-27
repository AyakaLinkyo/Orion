//**********************************//
//*	GameMain.cpp
//*	組み立て
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#include "DirectXTK.h"
#include "GameMain.h"
#include "pch.h"


GameMain::GameMain()
{
	m_TimeCnt = 0;
	m_NextScene = LOGO;
	m_base = new GameLogo();
}

GameMain::~GameMain()
{
	delete m_base;
}

void GameMain::InitializeGame()
{
	
}

void GameMain::UpdateGame()
{	

	m_base->UpdateGame();

	//シーン管理
	if (m_base->m_scene != m_base->m_NextScene)
	{
		m_scene = m_NextScene;
		//次のシーンを制作する関数を呼び出す
		//シーン振り分け
		switch (m_scene)
		{
		case LOGO:
			m_base = new GameLogo();
			break;
		case TITLE:
			m_base = new GameTitle();
			break;
		case PLAY:
			m_base = new GamePlay();
			break;
		case CLEAR:
			m_base = new GameClear();
			break;
		case OVER:
			m_base = new GameOver();
			break;

		}

	}	

}

wchar_t* GameMain::RenderGame()
{
	return m_base->RenderGame();
}

void GameMain::FinalizeGame()
{
}
