//使用ヘッダー
#include"GameHead.h"
#include"GameL\DrawTexture.h"

#include"ObjEnemy.h"
#include"GameL\HitBoxManager.h"



//使用ネームスペース
using namespace GameL;

//Init
void CObjEnemy::Init()
{
	m_x = 400;
	m_y = 600;
}

//Aciton
void CObjEnemy::Action()
{
	//HitBox(当たり判定)の内容の更新
	CHitBox* hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);
}

//Draw
void CObjEnemy::Draw()
{
	//描画カラー    R    G    B    A
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	//切り取り位置設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 0.0f;
	src.m_bottom = 0.0f;

	//表示位置の設定
	dst.m_top = 0.0f+m_y;//Initの変数でこれらの表示位置を変更している。
	dst.m_left = 0.0f+m_x;
	dst.m_right = 0.0f+m_x;
	dst.m_bottom = 0.0f+m_y;

	//0番目に登録したグラフィックをsrc,dst,c,の情報を元に描画
	Draw::Draw(0, &src, &dst, c, 0.0f);
}