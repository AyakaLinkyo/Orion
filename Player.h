//��----------------------------------------------------��
//��*�t�@�C�����FPlayer.cpp								��
//��*���e�@�@�@�F�v���C���[�N���X						��
//��*����ҁ@�@�FAyaka Yamanaka							��
//��*��������@�F2017.05.01								��
//��----------------------------------------------------��

#pragma once
#include "SimpleMath.h"
class Player
{
public:
	Player();
	~Player();

	//*�j�����擾����֐�
	void Needle(DirectX::SimpleMath::Vector2 needle);

	//*�j�̗L�����擾����֐�
	bool Existence(bool length);

private:
	float pos_x;
	float pos_y;
	int grp_w;
	int grp_h;
	float spd_x;
	float spd_y;
	float a;
};

