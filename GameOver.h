//**********************************//
//*	GameOver.h
//*	�I�[�o�[�V�[��
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#pragma once
#include "GameBase.h"

class GameOver :public GameBase
{
public:
	GameOver();	//	�R���X�g���N�^
	~GameOver();	//	�f�X�g���N�^
	void UpdateGame();	//	�f�[�^�̍X�V
	wchar_t* RenderGame();//	�`�悷��
};
