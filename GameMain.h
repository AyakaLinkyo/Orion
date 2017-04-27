//**********************************//
//*	GameMain.h
//*	‘g‚Ý—§‚Ä
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#pragma once
#include "GameBase.h"
#include "GameLogo.h"
#include "GameTitle.h"
#include "GamePlay.h"
#include "GameClear.h"
#include "GameOver.h"

enum Scene
{
	LOGO,
	TITLE,
	PLAY,
	CLEAR,
	OVER
};

class GameMain:public GameBase
{
public:
	GameBase* m_base;
public:
	GameMain();
	~GameMain();
	void InitializeGame();
	void UpdateGame();
	wchar_t* RenderGame();//	•`‰æ‚·‚é
	void FinalizeGame();
};
