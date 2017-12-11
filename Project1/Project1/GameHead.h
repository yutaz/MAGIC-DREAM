#pragma once

//オブジェクトネーム------------------------------
enum OBJ_NAME
{
	OBJ_NO_NAME,	//オブジェクト名無し(禁止)
	//ゲームで使うオブジェクトの名前
	//OBJ_○○と表記
	OBJ_HERO,
	OBJ_BULLET,
	OBJ_ENEMY,
	OBJ_ATTACK_ENEMY,
	OBJ_BULLET_ENEMY,
	OBJ_SIN_ENEMY,
	OBJ_DIFFUSION_ENEMY,
	OBJ_ANGLE_BULLET,
	OBJ_HOMING_ENEMY,
	OBJ_HOMING_BULLET,
	OBJ_BOSS_ENEMY,
	OBJ_BACKGROUND,

	OBJ_TITLE,
	OBJ_GAME_OVER,
	OBJ_CLEAR,
};
//------------------------------------------------

//当たり判定属性----------------------------------
enum HIT_ELEMENTS
{
	ELEMENT_NULL,//属性無し 全ての属性と当たり判定が実行される
	//以下　同じ属性同士では当たり判定は実行されない
	//属性は追加可能だが、デバック時の色は初期設定分しか無い
	ELEMENT_PLAYER,
	ELEMENT_ENEMY,
	ELEMENT_ITEM,
	ELEMENT_MAGIC,
	ELEMENT_FIELD,
	ELEMENT_RED,
	ELEMENT_GREEN,
	ELEMENT_BLUE,
	ELEMENT_BLACK,
	ELEMENT_WHITE,
};
//------------------------------------------------

//------------------------------------------------
//セーブ＆ロードとシーン間のやり取りするデータ
struct UserData
{
	int mSeveData;	//サンプルセーブデータ
	
};
//------------------------------------------------


//ゲーム内で使用されるグローバル変数・定数・列挙--



//------------------------------------------------
//ゲーム内で使用するクラスヘッダ------------------


//------------------------------------------------

//ゲームシーンオブジェクトヘッダ------------------
#include "OBJHero.h"
#include"CObjBullet.h"
#include"ObjEnemy.h"
#include"ObjAttackEnemy.h"
#include"CObjBullteEnemy.h"
#include"CObjSinEnemy.h"
#include"ObjDiffusionEnemy.h"
#include"CObjAngleBullet.h"
#include"CObjHomingEnemy.h"
#include"CObjHomingBullet.h"
#include"ObjEnemyBoss.h"
#include"ObjBackground.h"

#include"ObjTitle.h"
#include"ObjGameOver.h"
#include"ObjClear.h"
//------------------------------------------------

//ゲームシーンクラスヘッダ------------------------
#include "SceneMain.h"
#include"SceneTitle.h"
#include"SceneGameOver.h"
#include"SceneClear.h"
//-----------------------------------------------

//シーンスタートクラス---------------------------
//ゲーム開始時のシーンクラス登録
#define SET_GAME_START CSceneTitle
//#define SET_GAME_START  
//-----------------------------------------------