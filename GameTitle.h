//**********************************//
//*	GameTitle.h
//*	タイトルシーン
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#pragma once
#include "GameBase.h"

class GameTitle :public GameBase
{
public:
	GameTitle();	//	コンストラクタ
	~GameTitle();	//	デストラクタ
	void UpdateGame();	//	データの更新
	wchar_t* RenderGame();//	描画する
};
