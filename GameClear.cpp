//**********************************//
//*	GameClear.cpp
//*	クリアシーン
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#include "GameClear.h"
#include "GameMain.h"
#include <d3d11.h>
#include "DirectXTK.h"
#include <SimpleMath.h>

using namespace DirectX::SimpleMath;

GameClear::GameClear()
{
	m_TimeCnt = 0;
}

GameClear::~GameClear()
{

}

void GameClear::UpdateGame()
{
	m_TimeCnt++;
	if (m_TimeCnt > 120)
	{
		m_NextScene = TITLE;
	}
}

wchar_t * GameClear::RenderGame()
{
	return nullptr;
}

//
//void GameClear::RenderGame()
//{
//	wchar_t buf[256];
//	swprintf_s(buf, 256, L"CLEAR");
//
//	g_spriteFont->DrawString(g_spriteBatch.get(), buf, Vector2(100, 0));
//
//}
