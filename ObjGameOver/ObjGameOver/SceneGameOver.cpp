//デバッグ機能をOFFにする
#define _SECURE_SCL (0)


//使用ヘッダー(GameL)
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"
#include"GameL\DrawTexture.h"
#include"GameL\Audio.h"

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
	//GameOver表示
	Draw::LoadImageA(0, L"");

	//音楽読み込み
	Audio::LoadAudio(0, L"", BACK_MUSIC);//ここに音楽データの名前を


	//ゲームオーバーオブジェクト作成
	CObjGameOver* obj = new CObjGameOver();
	Objs::InsertObj(obj, OBJ_GAME_OVER, 10);

	//マスターボリュームを1.0fに戻す
	float v = Audio::VolumeMaster(0);
	v = Audio::VolumeMaster((1.0 - v));


	//音楽スタート
	Audio::Start(0);

}

//実行中メソッド
void CSceneGameOver::Scene()
{
	//出力させる
}