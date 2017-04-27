//**********************************//
//*	GameBase.h
//*	基本クラスのヘッダファイル
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#pragma once

class GameBase
{
protected:
	int m_TimeCnt = 0;
	int m_scene = 0;
	int m_NextScene = 0;

public:
	virtual ~GameBase() {}
	virtual void UpdateGame() = 0;
	virtual wchar_t* RenderGame() = 0;
};
