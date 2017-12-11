//デバッグ機能をOFFにする
#define _SECURE_SCL (0)


//使用ヘッダー(GameL)
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"

//ネームスペース
using namespace GameL;

//ヘッダー
#include"SceneGameOver.h"
#include"GameHead.h"

//コンストラクタ
CSceneGameOver::CSceneGameOver()
{

}

//デストラクタ
CSceneGameOver::~CSceneGameOver()
{

}

//初期化メソッド
void CSceneGameOver::InitScene()
{


	//ゲームオーバーオブジェクト作成
	CObjGameOver* obj = new CObjGameOver();
	Objs::InsertObj(obj, OBJ_GAME_OVER, 10);
}

//実行中メソッド
void CSceneGameOver::Scene()
{
	//出力させる
}