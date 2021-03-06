﻿/***********************************************************************************
**
** Party.h
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/
//----------------------------------------------------------------------------------
#ifndef PARTY_H
#define PARTY_H
//----------------------------------------------------------------------------------
class CParty
{
	//Серийник лидера пати
	SETGET(uint, Leader, 0);
	//Серийник пригласившего в пати
	SETGET(uint, Inviter, 0);
	//Может ли группа лутать труп игрока
	SETGET(bool, CanLoot, false);

public:
	CParty();
	~CParty();

	//Члены группы
	CPartyObject Member[10];

	//Обработка пакетов пати
	void ParsePacketData(WISP_DATASTREAM::CDataReader &reader);

	//Содержит ли пати игрока с данным серийником
	bool Contains(const uint &serial);

	//Очистить пати
	void Clear();
};
//----------------------------------------------------------------------------------
extern CParty g_Party;
//----------------------------------------------------------------------------------
#endif
//----------------------------------------------------------------------------------
