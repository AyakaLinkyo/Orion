//**********************************//
//*	GameOver.h
//*	オーバーシーン
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#pragma once
#include "GameBase.h"

class GameOver :public GameBase
{
public:
	GameOver();	//	コンストラクタ
	~GameOver();	//	デストラクタ
	void UpdateGame();	//	データの更新
	wchar_t* RenderGame();//	描画する
};
