//∞----------------------------------------------------∞
//∞*ファイル名：Player.cpp								∞
//∞*内容　　　：プレイヤークラス						∞
//∞*制作者　　：Ayaka Yamanaka							∞
//∞*制作日時　：2017.05.01								∞
//∞----------------------------------------------------∞

#include "pch.h"
#include "Player.h"


Player::Player()
{
}


Player::~Player()
{
}


//∞------------------------------------------------------------------∞
//∞*func：針の情報を取得する
//∞*arg：針の先端の座標（Vec2）
//∞*return：なし
//∞------------------------------------------------------------------∞
void Player::Needle(DirectX::SimpleMath::Vector2 needle)
{
	//一次関数の傾きの指定
	//y=ax+b(原点は固定なので、bは変動しない(仮値は０））
	a = (needle.y - 0) / needle.x;
}

//∞------------------------------------------------------------------∞
//∞*func：針の有無を確認する
//∞*arg：長針か短針か（長針：true、短針：false）
//∞*return：針があるか、ないか（ある：true、ない：false）
//∞------------------------------------------------------------------∞

bool Player::Existence(bool length)
{
	float needle_length = 0;	//針の長さ(三角関数のc2=a2+b2でいうc2の部分）

	switch (length)
	{
		//長針の場合
	case true:
		//針の長さを指定する（仮値）
		needle_length = 20;
		break;
		//短針の場合
	case false:
		//針の長さを指定する（仮値）
		needle_length = 10;
		break;
	}

	//プレイヤーの座標と、針の座標の当たり判定
	if ((pos_y > (a * pos_x + 0)) || (pos_y > (a * (pos_x + grp_w) + 0))
		|| (pos_y + grp_h > (a * pos_x + 0)) || (pos_y + grp_h > (a * (pos_x + grp_w) + 0)))
	{
		//プレイヤーの位置が、針の長さより小さいならtrue
		if (sqrtf((pos_x + pos_y)) < needle_length)
		{
			return true;
		}
		//プレイヤーの位置が、針の長さより大きいならfalse
		return false;

	}
	//針の座標上に居なかったらfalse
	return false;
}


