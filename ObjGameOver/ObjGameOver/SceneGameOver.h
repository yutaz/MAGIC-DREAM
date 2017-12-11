#pragma once
//ヘッダー
#include"GameL\SceneManager.h"

//ネームスペース
using namespace GameL;

//シーン：ゲームオーバー
class CSceneGameOver :public CScene
{
public:
	CSceneGameOver();
	~CSceneGameOver();
	void InitScene();
	void Scene();
private:
};
