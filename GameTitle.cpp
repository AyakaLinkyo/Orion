//**********************************//
//*	GameTitle.cpp
//*	タイトルシーン
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#include "GameTitle.h"
#include "GameMain.h"
#include <d3d11.h>

#include "DirectXTK.h"
#include <SimpleMath.h>

using namespace DirectX::SimpleMath;

GameTitle::GameTitle()
{
	m_TimeCnt = 0;
}

GameTitle::~GameTitle()
{

}

void GameTitle::UpdateGame()
{
	m_TimeCnt++;
	if (m_TimeCnt > 120)
	{
		m_NextScene = PLAY;
	}

}

wchar_t * GameTitle::RenderGame()
{
	wchar_t* output = L"Title";
	return output;
}

