//**********************************//
//*	GameMain.cpp
//*	�g�ݗ���
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

	//�V�[���Ǘ�
	if (m_base->m_scene != m_base->m_NextScene)
	{
		m_scene = m_NextScene;
		//���̃V�[���𐧍삷��֐����Ăяo��
		//�V�[���U�蕪��
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
