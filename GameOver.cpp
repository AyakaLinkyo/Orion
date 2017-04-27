//**********************************//
//*	GameOver.cpp
//*	オーバーシーン
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#include "GameOver.h"
#include <d3d11.h>

#include "DirectXTK.h"
#include <SimpleMath.h>

using namespace DirectX::SimpleMath;


GameOver::GameOver()
{

}

GameOver::~GameOver()
{

}

void GameOver::UpdateGame()
{

}

wchar_t * GameOver::RenderGame()
{
	wchar_t* output = L"Over";
	return output;
}
