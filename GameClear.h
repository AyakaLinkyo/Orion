//**********************************//
//*	GameClear.h
//*	クリアシーン
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#pragma once
#include "GameBase.h"

class GameClear :public GameBase
{
public:
	GameClear();	//	コンストラクタ
	~GameClear();	//	デストラクタ
	void UpdateGame();	//	データの更新
	wchar_t* RenderGame();//	描画する
};
