#pragma once
#include "../lib/framework.hpp"

enum ITEM{
	NORMAL_BOMB = 0,

};

class Item {
public:
	void Select();              // アイテム選択処理

private:
	int slot[3];                      // 選択アイテムを格納する
	
};
