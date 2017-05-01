//∞----------------------------------------------------∞
//∞*ファイル名：Player.cpp								∞
//∞*内容　　　：プレイヤークラス						∞
//∞*制作者　　：Ayaka Yamanaka							∞
//∞*制作日時　：2017.05.01								∞
//∞----------------------------------------------------∞

#pragma once
#include "SimpleMath.h"
class Player
{
public:
	Player();
	~Player();

	//*針情報を取得する関数
	void Needle(DirectX::SimpleMath::Vector2 needle);

	//*針の有無を取得する関数
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

