//**********************************//
//*	GamePlay.h
//*	プレイシーン
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#pragma once
#include "GameBase.h"

class GamePlay :public GameBase
{
public:
	GamePlay();	//	コンストラクタ
	~GamePlay();	//	デストラクタ
	void UpdateGame();	//	データの更新
	wchar_t* RenderGame();//	描画する
};
