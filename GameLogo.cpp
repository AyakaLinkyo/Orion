//**********************************//
//*	GameLogo.cpp
//*	ÉçÉSÉVÅ[Éì
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#include "GameLogo.h"
#include "GameMain.h"
#include <d3d11.h>

#include "DirectXTK.h"
#include <SimpleMath.h>

using namespace DirectX::SimpleMath;

GameLogo::GameLogo()
{
	m_TimeCnt = 0;
}

GameLogo::~GameLogo()
{

}

void GameLogo::UpdateGame()
{
	m_TimeCnt++;
	if (m_TimeCnt > 120)
	{
		m_NextScene = TITLE;
	}
}

wchar_t* GameLogo::RenderGame()
{
	wchar_t* output = L"LOGO";

	return output;

}
