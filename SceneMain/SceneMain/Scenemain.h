#pragma once
#include"GameL\SceneManager.h"

//使用ネームスペース
using namespace GameL;


//シーン：ゲームメイン
class  CScenemain:public CScene
{
public:
	 CScenemain ();
	~ CScenemain ();
	void InitScene();//初期化メソッド
	void Scene();//実行中メソッド


private:
	int m_time; //シーンのタイム(主に敵機出現に使用)

};

