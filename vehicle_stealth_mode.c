#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_88(&uLocal_46))
	{
		while (!func_76())
		{
			func_64(&uLocal_46);
			if (func_54(&uLocal_46))
			{
			}
			else
			{
				func_14(&uLocal_46);
				WAIT(0);
			}
		}
	}
	func_1();
}

void func_1()
{
	func_13();
	if (func_10())
	{
		CLEAR_HELP(1);
	}
	if (func_8(&uLocal_46))
	{
		func_4(&uLocal_46);
	}
	SET_MAX_WANTED_LEVEL(5);
	func_3();
	unk_0xEE4EBDD2593BA844(PLAYER_ID(), 0);
	func_2();
}

void func_2()
{
	TERMINATE_THIS_THREAD();
}

void func_3()
{
	CLEAR_BIT(&(Global_1589819[PLAYER_ID() /*818*/].f_794), 3);
}

void func_4(var uParam0)
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(uParam0->f_6), 5);
}

void func_5(var uParam0, int iParam1)
{
	CLEAR_BIT(uParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if ((!IS_THREAD_ACTIVE(Global_2416063.f_1475) || Global_2416063.f_1475 == GET_ID_OF_THIS_THREAD()) || bParam2)
	{
		if (bParam0)
		{
			Global_2416063.f_1475 = GET_ID_OF_THIS_THREAD();
			Global_2416063.f_1476 = GET_NETWORK_TIME();
		}
		else
		{
			Global_2416063.f_1475 = -1;
		}
		Global_2416063.f_1478 = iParam1;
		Global_2416063.f_1480 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)
{
	if ((!IS_THREAD_ACTIVE(Global_2416063.f_1491) || Global_2416063.f_1491 == GET_ID_OF_THIS_THREAD()) || bParam1)
	{
		if (bParam0)
		{
			Global_2416063.f_1491 = GET_ID_OF_THIS_THREAD();
			SET_BIT(&(Global_2424047[PLAYER_ID() /*416*/].f_68.f_2), 23);
		}
		else
		{
			Global_2416063.f_1491 = -1;
			CLEAR_BIT(&(Global_2424047[PLAYER_ID() /*416*/].f_68.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(var uParam0)
{
	return func_9(&(uParam0->f_6), 5);
}

bool func_9(var uParam0, int iParam1)
{
	return IS_BIT_SET(*uParam0, iParam1);
}

bool func_10()
{
	return ((((func_12("STEALTH_ON") || func_12("STEALTH_OFF")) || func_12(func_11())) || func_12("STEALTH_ON_P")) || func_12("STEALTH_OFF_P"));
}

char* func_11()
{
	return "STEALTH_WARN";
}

var func_12(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_13()
{
	CLEAR_BIT(&(Global_1589819[PLAYER_ID() /*818*/].f_794), 1);
}

void func_14(var uParam0)
{
	func_51(uParam0);
	func_50(uParam0);
	if (func_49(uParam0))
	{
		if (((func_48(uParam0) && !func_47(uParam0)) && NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_1)) && !func_46())
		{
			func_45(uParam0, 1, 0);
			func_44(uParam0);
		}
		else if (func_9(&(uParam0->f_6), 6) && func_47(uParam0))
		{
			if (NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_1) && !func_46())
			{
				func_45(uParam0, 0, 0);
				func_5(&(uParam0->f_6), 6);
				func_5(&(uParam0->f_6), 2);
			}
		}
	}
	if (func_43(uParam0))
	{
		unk_0xEE4EBDD2593BA844(PLAYER_ID(), 1);
		func_42();
		func_41(uParam0);
	}
	else if (func_40(uParam0))
	{
		unk_0xEE4EBDD2593BA844(PLAYER_ID(), 0);
		func_13();
		func_41(uParam0);
		func_39(uParam0, 5);
	}
	if (func_47(uParam0) && !func_48(uParam0))
	{
		func_37(uParam0);
		func_36();
		func_39(uParam0, 2);
		if (func_33(uParam0))
		{
			func_32();
		}
	}
	else
	{
		func_15(uParam0);
	}
	func_3();
	CLEAR_BIT(&(Global_1589819[PLAYER_ID() /*818*/].f_794), 4);
}

void func_15(var uParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 2)) && !IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_31(uParam0)) && !func_30(0)) && !func_29()) && func_27()) && DOES_ENTITY_EXIST(GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, -1, 0)))
	{
		func_21(uParam0, 1);
		func_20(&(uParam0->f_6), 3);
		iVar0 = func_19(uParam0->f_6.f_2, 3333, 10000);
		uParam0->f_6.f_2 = 0;
		func_17(func_18(uParam0), iVar0);
		func_16(uParam0);
		func_20(&(uParam0->f_6), 0);
	}
}

void func_16(var uParam0)
{
	func_20(&(uParam0->f_6), 2);
}

void func_17(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_18(var uParam0)
{
	if (func_49(uParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_19(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_20(var uParam0, int iParam1)
{
	SET_BIT(uParam0, iParam1);
}

void func_21(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_49(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				iVar0 = (func_24(19004, -1, -1) + iParam1);
				if (iVar0 >= 0)
				{
					func_22(19004, iVar0, -1, 1);
				}
				break;
			}
	}
}

var func_22(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - _0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - _0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - _0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - _0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - _0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - _0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - _0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - _0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - _0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - _0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - _0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - _0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - _0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - _0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - _0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - _0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - _0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - _0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - _0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - _0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - _0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_23()
{
	return Global_1312745;
}

int func_24(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	iVar1 = func_26(iParam0, iParam1);
	uVar2 = func_25(iParam0);
	if (0 != iVar1)
	{
		if (!STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - _0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - _0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - _0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - _0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - _0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - _0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - _0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - _0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - _0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - _0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - _0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - _0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - _0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - _0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - _0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - _0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - _0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - _0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - _0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - _0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - _0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	return iVar0;
}

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	return iVar0;
}

bool func_27()
{
	return (!IS_BIT_SET(Global_1589819[PLAYER_ID() /*818*/].f_794, 4) && !func_28());
}

bool func_28()
{
	return ((Global_4456448.f_55685 == 6 || Global_4456448.f_55685 == 7) && Global_4456448.f_2 == 20);
}

bool func_29()
{
	return Global_68807;
}

int func_30(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (IS_BIT_SET(Global_2423, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_31(var uParam0)
{
	if (func_49(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				return func_24(19004, -1, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_32()
{
	if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_17("STEALTH_WARN", 3000);
	}
}

int func_33(var uParam0)
{
	int iVar0;
	
	if (func_30(0) || func_29())
	{
		return 0;
	}
	iVar0 = func_34(uParam0);
	switch (iVar0)
	{
		case 1:
			if ((IS_DISABLED_CONTROL_JUST_PRESSED(0, 114) || IS_DISABLED_CONTROL_JUST_PRESSED(0, 99)) || IS_DISABLED_CONTROL_JUST_PRESSED(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (IS_DISABLED_CONTROL_JUST_PRESSED(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (IS_DISABLED_CONTROL_JUST_PRESSED(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (IS_DISABLED_CONTROL_JUST_PRESSED(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_34(var uParam0)
{
	if (!func_35(uParam0))
	{
		return 4;
	}
	switch (uParam0->f_2)
	{
		case joaat("akula"):
			switch (uParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
		
		default:
	}
	return 4;
}

bool func_35(var uParam0)
{
	return (DOES_ENTITY_EXIST(PLAYER_PED_ID()) && !IS_ENTITY_DEAD(PLAYER_PED_ID(), 0));
}

void func_36()
{
	DISABLE_CONTROL_ACTION(0, 24, 1);
	DISABLE_CONTROL_ACTION(0, 66, 1);
	DISABLE_CONTROL_ACTION(0, 67, 1);
	DISABLE_CONTROL_ACTION(0, 68, 1);
	DISABLE_CONTROL_ACTION(0, 114, 1);
	DISABLE_CONTROL_ACTION(0, 69, 1);
	DISABLE_CONTROL_ACTION(0, 70, 1);
	DISABLE_CONTROL_ACTION(0, 91, 1);
	DISABLE_CONTROL_ACTION(0, 92, 1);
	DISABLE_CONTROL_ACTION(0, 99, 1);
	DISABLE_CONTROL_ACTION(0, 100, 1);
	DISABLE_CONTROL_ACTION(0, 37, 1);
}

void func_37(var uParam0)
{
	var uVar0;
	
	if (((((((!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 1)) && !IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_9(&(uParam0->f_6), 3)) && !func_30(0)) && !func_29()) && func_27()) && DOES_ENTITY_EXIST(GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, -1, 0)))
	{
		uVar0 = func_19(uParam0->f_6.f_2, 3333, 10000);
		uParam0->f_6.f_2 = 0;
		func_17(func_38(uParam0), uVar0);
		func_44(uParam0);
		func_20(&(uParam0->f_6), 0);
	}
}

char* func_38(var uParam0)
{
	if (func_49(uParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_39(var uParam0, int iParam1)
{
	if (func_48(uParam0))
	{
		return;
	}
	if (GET_MAX_WANTED_LEVEL() != iParam1)
	{
		SET_MAX_WANTED_LEVEL(iParam1);
	}
	if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > iParam1)
	{
		SET_PLAYER_WANTED_LEVEL(PLAYER_ID(), iParam1, 0);
	}
}

bool func_40(var uParam0)
{
	return (!func_9(uParam0, 0) && func_9(uParam0, 1));
}

void func_41(var uParam0)
{
	func_5(&(uParam0->f_6), 0);
	if (func_10())
	{
		CLEAR_HELP(1);
	}
	if (!func_49(uParam0))
	{
		if (func_47(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
		}
	}
}

void func_42()
{
	SET_BIT(&(Global_1589819[PLAYER_ID() /*818*/].f_794), 1);
}

bool func_43(var uParam0)
{
	return (func_9(uParam0, 0) && !func_9(uParam0, 1));
}

void func_44(var uParam0)
{
	func_20(&(uParam0->f_6), 1);
}

void func_45(var uParam0, bool bParam1, int iParam2)
{
	switch (uParam0->f_2)
	{
		case joaat("akula"):
			unk_0xB251E0B33E58B424(uParam0->f_1, !bParam1, iParam2);
			break;
	}
}

bool func_46()
{
	return IS_BIT_SET(Global_1589819[PLAYER_ID() /*818*/].f_794, 3);
}

bool func_47(var uParam0)
{
	return func_9(uParam0, 0);
}

bool func_48(var uParam0)
{
	return func_9(uParam0, 2);
}

bool func_49(var uParam0)
{
	return ((func_35(uParam0) && uParam0->f_3 == PLAYER_PED_ID()) || GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, -1, 0) == PLAYER_PED_ID());
}

void func_50(var uParam0)
{
	if (func_10() && (func_30(0) || func_29()))
	{
		uParam0->f_6.f_2 = 1;
		CLEAR_HELP(1);
		func_5(&(uParam0->f_6), 0);
		if (func_47(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
			if (func_49(uParam0))
			{
				func_21(uParam0, -1);
			}
		}
	}
}

void func_51(var uParam0)
{
	if (func_47(uParam0))
	{
		if (func_8(uParam0))
		{
			if (func_53())
			{
				func_4(uParam0);
			}
		}
		else if (!func_53())
		{
			func_52(uParam0);
		}
	}
	else if (func_8(uParam0))
	{
		func_4(uParam0);
	}
	CLEAR_BIT(&(Global_1589819[PLAYER_ID() /*818*/].f_794), 2);
}

void func_52(var uParam0)
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_20(&(uParam0->f_6), 5);
}

bool func_53()
{
	return IS_BIT_SET(Global_1589819[PLAYER_ID() /*818*/].f_794, 2);
}

int func_54(var uParam0)
{
	if (!func_35(uParam0))
	{
		return 1;
	}
	if (!func_63(uParam0))
	{
		return 1;
	}
	if (!func_62(uParam0->f_2))
	{
		return 1;
	}
	if (func_61(PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (func_60(PLAYER_ID()))
	{
		return 1;
	}
	if (func_57(PLAYER_ID()))
	{
		return 1;
	}
	if (func_55(PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2424047[iParam0 /*416*/].f_236 > -1)
		{
			if (func_56(Global_2424047[iParam0 /*416*/].f_236) == 4)
			{
				return 1;
			}
		}
		if (IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

int func_57(int iParam0)
{
	if (iParam0 != func_59() && func_58(iParam0, 1, 1))
	{
		return IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 3);
	}
	return 0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_59()
{
	return -1;
}

int func_60(int iParam0)
{
	if (IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 14))
	{
		return 1;
	}
	if (IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 11))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_59())
	{
		return 0;
	}
	if (IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case joaat("akula"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_63(var uParam0)
{
	return (DOES_ENTITY_EXIST(uParam0->f_1) && IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0));
}

void func_64(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(uParam0, 4);
	bVar1 = func_9(uParam0, 0);
	func_75(uParam0);
	if (bVar0)
	{
		func_20(uParam0, 3);
	}
	else
	{
		func_5(uParam0, 3);
	}
	if (bVar1)
	{
		func_20(uParam0, 1);
	}
	else
	{
		func_5(uParam0, 1);
	}
	if (func_35(uParam0))
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			uParam0->f_1 = GET_VEHICLE_PED_IS_USING(PLAYER_PED_ID());
			if (func_63(uParam0))
			{
				uParam0->f_2 = GET_ENTITY_MODEL(uParam0->f_1);
				if (GET_IS_TASK_ACTIVE(PLAYER_PED_ID(), 2))
				{
					func_20(uParam0, 2);
				}
			}
		}
	}
	if (func_63(uParam0))
	{
		if (!IS_VEHICLE_SEAT_FREE(uParam0->f_1, -1, 0))
		{
			iVar2 = GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, -1, 0);
			if ((DOES_ENTITY_EXIST(iVar2) && !IS_ENTITY_DEAD(iVar2, 0)) && IS_PED_A_PLAYER(iVar2))
			{
				uParam0->f_3 = iVar2;
				if (iVar2 == PLAYER_PED_ID())
				{
					func_20(uParam0, 4);
					if (!func_9(uParam0, 3))
					{
						func_20(&(uParam0->f_6), 6);
					}
				}
			}
		}
		if (func_35(uParam0))
		{
			uParam0->f_4 = func_74(PLAYER_PED_ID(), 0);
		}
		if (func_49(uParam0))
		{
			if (func_73() && func_67(uParam0))
			{
				func_20(uParam0, 0);
			}
		}
		else
		{
			func_65(uParam0);
		}
	}
	if (func_43(uParam0))
	{
		uParam0->f_6.f_3 = GET_NETWORK_TIME();
	}
}

void func_65(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0->f_3) && func_66(NETWORK_GET_PLAYER_INDEX_FROM_PED(uParam0->f_3)))
	{
		func_20(uParam0, 0);
	}
	else
	{
		func_5(uParam0, 0);
	}
}

bool func_66(int iParam0)
{
	return (iParam0 != -1 && IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_794, 1));
}

bool func_67(var uParam0)
{
	bool bVar0;
	
	bVar0 = func_72();
	if (NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_1))
	{
		func_71(uParam0);
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				bVar0 = !unk_0xAEF12960FA943792(uParam0->f_1);
				break;
		}
	}
	else if (func_70(uParam0))
	{
		if (func_69(uParam0))
		{
			NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_1);
		}
	}
	else
	{
		func_68(uParam0);
	}
	return bVar0;
}

void func_68(var uParam0)
{
	func_20(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = GET_GAME_TIMER();
}

bool func_69(var uParam0)
{
	return (GET_GAME_TIMER() - uParam0->f_6.f_1) >= 200;
}

bool func_70(var uParam0)
{
	return func_9(&(uParam0->f_6), 4);
}

void func_71(var uParam0)
{
	func_5(&(uParam0->f_6), 4);
}

var func_72()
{
	return IS_BIT_SET(Global_1589819[PLAYER_ID() /*818*/].f_794, 1);
}

bool func_73()
{
	return !func_28();
}

int func_74(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!IS_PED_INJURED(iParam0))
	{
		if (IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			uVar0 = GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (DOES_ENTITY_EXIST(uVar0))
			{
				iVar1 = GET_VEHICLE_MODEL_NUMBER_OF_SEATS(GET_ENTITY_MODEL(uVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!IS_VEHICLE_SEAT_FREE(uVar0, iVar3, 0))
					{
						if (GET_PED_IN_VEHICLE_SEAT(uVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_75(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_76()
{
	if (func_77())
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	var uVar0;
	
	func_85(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_84())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_83())
	{
		return 1;
	}
	if (func_82(157))
	{
		if (!func_81())
		{
			return 1;
		}
	}
	if (func_82(155))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_78() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_78()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_78()
{
	switch (func_80())
	{
		case 0:
			return func_79();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_79()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_80()
{
	return Global_25765;
}

bool func_81()
{
	return Global_2448756.f_586;
}

int func_82(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_83()
{
	return Global_2458613;
}

bool func_84()
{
	return Global_2448756.f_581;
}

void func_85(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_86(iVar0);
					break;
				
				case -42615386:
					GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_86(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_58(vVar0.y, 1, 1))
		{
			uVar3 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(uVar3))
			{
				if (IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_87(uVar4, &bVar5))
						{
							REMOVE_VEHICLE_WINDOW(uVar4, vVar0.z);
						}
						if (bVar5)
						{
							SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_87(var uParam0, var uParam1)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (!IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				if (!IS_THIS_MODEL_A_TRAIN(GET_ENTITY_MODEL(uParam0)))
				{
					SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88(var uParam0)
{
	func_64(uParam0);
	if (func_63(uParam0))
	{
		if (func_49(uParam0))
		{
			if (NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_1))
			{
				if (!func_46())
				{
					func_45(uParam0, 0, 0);
				}
				else
				{
					func_20(&(uParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_20(&(uParam0->f_6), 3);
		}
	}
	return 1;
}

