//**********************************//
//*	GameLogo.h
//*	���S�V�[��
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#pragma once
#include "GameBase.h"

class GameLogo :public GameBase
{
public:
	GameLogo();	//	�R���X�g���N�^
	~GameLogo();	//	�f�X�g���N�^
	void UpdateGame();	//	�f�[�^�̍X�V
	wchar_t* RenderGame();//	�`�悷��
};
