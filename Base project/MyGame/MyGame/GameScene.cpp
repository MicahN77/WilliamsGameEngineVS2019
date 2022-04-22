#include "GameScene.h"
#include "Ship.h"
#include "MeteorSpawner.h"

GameScene::GameScene()
{
	ShipPtr ship = std::make_shared<Ship>();
	addGameObject(ship);

	MeteorSpawnerPtr meteorSpawner = std::make_shared<MeteorSpawner>();
	addGameObject(meteorSpawner);

	/*int GameScene::getScore()
	{
		return score_;                      //what????? collisions+ hasn't worked. this was where I left off.
	}

	void GameScene::increaseScore()
	{
		++score_;
	}*/
}

