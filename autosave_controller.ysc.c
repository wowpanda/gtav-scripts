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
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
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
	iLocal_17 = 4294967295;
	sLocal_18 = "NULL";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_383();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		switch (iLocal_21)
		{
			case 0:
				func_382();
				break;
			
			case 1:
				func_381();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				func_383();
				break;
		}
	}
}

void func_1()//Position - 0x8C
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	if (Global_16C57.f_4)
	{
		Global_16C57.f_1 = 0;
		Global_16C57.f_2 = 0;
		Global_16C57.f_3 = 0;
		Global_16C57.f_5 = 0;
		Global_16C57.f_4 = 0;
		Global_16C57.f_A = (Global_16C57.f_A - 1);
		func_380(0, 0);
		if (Global_16C57.f_A > 0)
		{
			iLocal_21 = 1;
		}
		else
		{
			Global_16C57 = 0;
			iLocal_21 = 3;
		}
		return;
	}
	if (!Global_16C57.f_2)
	{
		if (Global_11625)
		{
			Global_16C57.f_4 = 1;
			return;
		}
		if (!Global_19E56.f_2361 || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_2[27 /*3*/], 1))
		{
			Global_16C57.f_4 = 1;
			return;
		}
		iVar0 = func_379();
		if (!func_378(iVar0))
		{
			if (func_377(13))
			{
			}
			else if (func_377(14))
			{
			}
			else
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330());
				if (func_377(17))
				{
					return;
				}
			}
			Global_16C57.f_4 = 1;
			return;
		}
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (func_376(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), iVar0, 0) == 10)
			{
				Global_16C57.f_4 = 1;
				return;
			}
		}
		if (Global_16C57)
		{
			Global_16C57.f_4 = 1;
			return;
		}
		if (!Global_16C57.f_7)
		{
			Global_16C57.f_5 = 1;
		}
		if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			return;
		}
		if (MISC::IS_AUTO_SAVE_IN_PROGRESS())
		{
			return;
		}
		if (MISC::IS_MEMORY_CARD_IN_USE())
		{
			return;
		}
		if (Global_11732.f_1)
		{
			return;
		}
		if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			return;
		}
		if (func_375())
		{
			return;
		}
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_374())
		{
			return;
		}
		if (func_373(0) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) == 0)
		{
			return;
		}
		if (func_372())
		{
			return;
		}
		if (func_370())
		{
			Global_16C57.f_8 = 1;
			if (func_369(Global_19E56.f_61E0, 0f, 0f, 0f, 0))
			{
				Global_19E56.f_2704.f_18 = 1;
			}
		}
		if (!Global_16C57.f_8)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				return;
			}
			if (MISC::IS_FRONTEND_FADING())
			{
				return;
			}
			MISC::SET_FADE_IN_AFTER_LOAD(1);
			Global_19E56.f_2704.f_17 = 0;
			Global_19E56.f_2704.f_18 = 0;
		}
		else
		{
			MISC::SET_FADE_IN_AFTER_LOAD(0);
			Global_19E56.f_2704.f_17 = 1;
			if (func_369(Global_19E56.f_61E0, 0f, 0f, 0f, 0))
			{
				Global_19E56.f_2704.f_18 = 1;
			}
		}
		bVar3 = false;
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar4 = Global_19E56.f_2361.f_2[iVar2 /*3*/].f_1;
			if (iVar4 != 4294967295)
			{
				if (Global_11732.f_1AA9[iVar4 /*3*/] == 3426798032)
				{
					bVar5 = false;
					iVar6 = 0;
					while (iVar6 < Global_19E56.f_2704.f_14)
					{
						if (Global_19E56.f_2704[iVar6] == iVar2)
						{
							if (!Global_19E56.f_2704.f_10[iVar6])
							{
								bVar5 = true;
							}
						}
						iVar6++;
					}
					if (!bVar5)
					{
						MISC::SET_FADE_IN_AFTER_LOAD(0);
						Global_19E56.f_2704.f_17 = 1;
						Global_19E56.f_2704.f_18 = 0;
						bVar3 = true;
					}
				}
			}
			iVar2++;
		}
		func_11(1, 0, bVar3);
		MISC::CLEAR_REPLAY_STATS();
		MISC::DO_AUTO_SAVE();
		Global_16C57.f_2 = 1;
		if (!Global_16C57.f_6)
		{
		}
		if (!MISC::IS_AUTO_SAVE_IN_PROGRESS())
		{
			if (!Global_16C57.f_6)
			{
				func_8("SAVE_OFF", 2, 0, 4294967295, 10000, 7, 0, 0, 0);
			}
			return;
		}
		Global_16C57.f_3 = 1;
	}
	if (MISC::IS_AUTO_SAVE_IN_PROGRESS())
	{
		if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			func_3(0);
			func_2();
		}
		return;
	}
	if (Global_16C57.f_3)
	{
		if (MISC::_0x6E04F06094C87047())
		{
		}
	}
	if (Global_16C57.f_8)
	{
		if (Global_16C57.f_A == 0)
		{
			Global_16C57.f_8 = 0;
		}
	}
	Global_16C57.f_4 = 1;
	Global_16C57.f_6 = 1;
}

void func_2()//Position - 0x42F
{
	Global_434C.f_6 = 1;
}

void func_3(int iParam0)//Position - 0x43D
{
	if (func_7())
	{
		return;
	}
	if (!Global_38B1.f_1 == 1)
	{
		if (func_373(0))
		{
			func_4(iParam0);
		}
		MISC::SET_BIT(&Global_950, 2);
	}
}

void func_4(int iParam0)//Position - 0x470
{
	if (func_7())
	{
		return;
	}
	if (Global_3959)
	{
		func_6(0, 0);
	}
	if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
	{
		MISC::SET_BIT(&Global_950, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_3DCE = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_94F, 30);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 30);
	}
	if (!func_5())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_5()//Position - 0x4EA
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x511
{
	if (bParam0)
	{
		if (func_373(0))
		{
			Global_3959 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_3872);
			}
			Global_3869 = { Global_387B[Global_387A /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
		}
	}
	else if (Global_3959 == 1)
	{
		Global_3959 = 0;
		Global_3869 = { Global_3882[Global_387A /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3872);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
		}
	}
}

bool func_7()//Position - 0x585
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_8(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x597
{
	func_9(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_9(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x5B8
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != 4294967295)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != 4294967295)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_4F9E[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_19E56.f_4F9E.f_91 < 9)
	{
		StringCopy(&(Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_4), sParam1, 16);
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_9 = iParam5;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_B = iParam6;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_C = uParam2;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_D = iParam7;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_E = iParam8;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 4294967295)
		{
			Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_A = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_A = 4294967295;
		}
		Global_19E56.f_4F9E.f_91++;
		func_10();
	}
}

void func_10()//Position - 0x78B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_19E56.f_4F9E.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 0))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[0])
			{
				Global_19E56.f_4F9E.f_92[0] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 1))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[1])
			{
				Global_19E56.f_4F9E.f_92[1] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 2))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[2])
			{
				Global_19E56.f_4F9E.f_92[2] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_11(bool bParam0, int iParam1, bool bParam2)//Position - 0x8AB
{
	var uVar0;
	var uVar1;
	
	func_368();
	func_357();
	func_54();
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_19E56.f_2704.f_19), 4);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2704.f_19), 4);
	}
	Global_19E56.f_1DEC.f_39C = MISC::GET_GAME_TIMER();
	if (Global_1172B == 62 || Global_1172C == 62)
	{
		func_12(2, 1);
	}
	if (!bParam0)
	{
		Global_16C57.f_8 = 0;
		Global_19E56.f_2704.f_17 = 0;
		Global_19E56.f_2704.f_18 = 0;
	}
	MISC::OVERRIDE_SAVE_HOUSE(iParam1, Global_19E56.f_61E0, Global_19E56.f_61E0.f_3, bParam0, &uVar0, &uVar1);
}

void func_12(int iParam0, bool bParam1)//Position - 0x94E
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_19E56.f_1C21[iParam0]), 0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1C21[iParam0]), 0);
	}
	MISC::SET_SAVE_HOUSE(Global_1592D[iParam0 /*10*/].f_8, bParam1, 1);
	func_43(iParam0);
	func_41(iParam0, 0);
	func_39(iParam0);
	func_13(iParam0);
}

void func_13(int iParam0)//Position - 0x9B2
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_7CA0[(38 / 32)]), (38 % 32));
			func_14(38, 0);
			MISC::SET_BIT(&(Global_7CA0[(41 / 32)]), (41 % 32));
			func_14(41, 0);
			MISC::SET_BIT(&(Global_7CA0[(43 / 32)]), (43 % 32));
			func_14(43, 0);
			MISC::SET_BIT(&(Global_7CA0[(42 / 32)]), (42 % 32));
			func_14(42, 0);
			MISC::SET_BIT(&(Global_7CA0[(44 / 32)]), (44 % 32));
			func_14(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_7CA0[(51 / 32)]), (51 % 32));
			func_14(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_7CA0[(51 / 32)]), (51 % 32));
			func_14(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_7CA0[(53 / 32)]), (53 % 32));
			func_14(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_7CA0[(81 / 32)]), (81 % 32));
			func_14(81, 0);
			MISC::SET_BIT(&(Global_7CA0[(82 / 32)]), (82 % 32));
			func_14(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_7CA0[(47 / 32)]), (47 % 32));
			func_14(47, 0);
			MISC::SET_BIT(&(Global_7CA0[(50 / 32)]), (50 % 32));
			func_14(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_7CA0[(50 / 32)]), (50 % 32));
			func_14(50, 0);
			break;
	}
}

void func_14(int iParam0, int iParam1)//Position - 0xB42
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_11625)
		{
			iVar0 = Global_252F9E.f_4B[iParam0];
		}
		else
		{
			iVar0 = Global_19E56.f_1C41[iParam0];
		}
		if (iVar0 != iParam1 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA0[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_7CA9[(iParam0 / 32)]), (iParam0 % 32));
				Global_7E78[iParam0] = iParam1;
			}
			else if (Global_11625)
			{
				Global_252F9E.f_4B[iParam0] = iParam1;
			}
			else
			{
				Global_19E56.f_1C41[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_7CA0[(iParam0 / 32)]), (iParam0 % 32));
			func_16(iParam0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA0[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_15(iParam0);
			}
		}
	}
}

void func_15(int iParam0)//Position - 0xC3B
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_804F.f_E4[(iParam0 / 32)], (iParam0 % 23)))
	{
		MISC::SET_BIT(&(Global_804F.f_E4[(iParam0 / 32)]), (iParam0 % 23));
		Global_804F[Global_804F.f_E3] = iParam0;
		Global_804F.f_E3++;
	}
}

void func_16(int iParam0)//Position - 0xC89
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_36())
	{
		return;
	}
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return;
	}
	Var0 = { func_35(iParam0) };
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var0.f_4, 2))
	{
		func_21(iParam0, &Var0);
	}
	if (!OBJECT::_DOES_DOOR_EXIST(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), true);
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA9[(iParam0 / 32)], (iParam0 % 32)) && Global_7E78[iParam0] == 2) && fVar4 > 210f)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_7CA9[(iParam0 / 32)]), (iParam0 % 32));
		Global_7CB2[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7D95[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_16C64.f_145 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
					{
						Global_16C64.f_145 = INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330());
					}
				}
				iVar5 = Global_16C64.f_145;
				iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					MISC::SET_BIT(&(Global_7CA9[(iParam0 / 32)]), (iParam0 % 32));
					Global_7E78[iParam0] = 3;
					MISC::SET_BIT(&(Global_7CA0[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_7D95[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA9[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_7E78[iParam0];
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var0.f_4, 0))
	{
		if (Global_19E56.f_2361)
		{
			iVar3 = func_18(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_377(14))
		{
			iVar3 = 0;
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (func_17())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_19E56.f_1C41[iParam0];
	}
	if (Global_7F5B[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA0[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA9[(iParam0 / 32)], (iParam0 % 32)) || (Global_7CB2[iParam0] == 0 && Global_7E78[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_7C9F)
		{
		}
		else
		{
			if (!OBJECT::_DOES_DOOR_EXIST(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || MISC::ABSF(OBJECT::_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f)
					{
						iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330());
						iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_7CA0[(iParam0 / 32)]), (iParam0 % 32));
			Global_7F5B[iParam0] = iVar3;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA9[(iParam0 / 32)], (iParam0 % 32)) && Global_7E78[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_7CA0[(iParam0 / 32)]), (iParam0 % 32));
		func_15(iParam0);
		if (Global_7CB2[iParam0] < 2)
		{
			Global_7CB2[iParam0]++;
		}
	}
}

int func_17()//Position - 0x116C
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return 0;
	}
	switch (func_379())
	{
		case 0:
			if (Global_19E56.f_2361.f_63.f_3A[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_19E56.f_2361.f_63.f_3A[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_19E56.f_2361.f_63.f_3A[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x11EB
{
	int iVar0;
	
	iVar0 = func_379();
	if (func_19(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[5], 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[6], 0))
			{
				return 0;
			}
		}
		if (func_378(iVar0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[0], 0))
				{
					return 0;
				}
			}
			if (func_378(iVar0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[5], 0))
				{
					return 0;
				}
			}
			if (func_378(iVar0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[6], 0))
				{
					return 0;
				}
			}
			if (func_378(iVar0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[2], 0))
				{
					return 0;
				}
				if (func_378(iVar0))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[1], 0))
				{
					return 0;
				}
				if (func_378(iVar0))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[3], 0))
				{
					return 0;
				}
			}
			if (func_378(iVar0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_19(int iParam0)//Position - 0x1440
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_20(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1)));
				switch (iVar0)
				{
					case joaat("UTILLITRUCK"):
					case joaat("MONSTER"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_20(int iParam0)//Position - 0x14AC
{
	return iParam0;
}

void func_21(int iParam0, var uParam1)//Position - 0x14B6
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_24();
	iVar1 = func_23(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_22(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_19E56.f_1C41[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), *uParam1) >= 12f)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), *uParam1) >= 12f)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_22(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_19E56.f_1C41[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), *uParam1) >= 12f)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), *uParam1) >= 12f)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_22(iParam0))
			{
				if ((SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0) && !Global_19E56.f_2361.f_63.f_3A[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_19E56.f_1C41[iParam0] = 0;
							OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_19E56.f_2361.f_63.f_3A[4])
				{
					Global_19E56.f_1C41[iParam0] = 0;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else if (Global_19E56.f_2361.f_63.f_3A[4])
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), *uParam1) >= 18f)
					{
						Global_19E56.f_1C41[iParam0] = 1;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), *uParam1) >= 18f)
					{
						Global_19E56.f_1C41[iParam0] = 1;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_22(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_19E56.f_1C41[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), *uParam1) >= 40f)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), *uParam1) >= 40f)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_22(iParam0))
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_22(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 0)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) > 0)
			{
				Global_19E56.f_1C41[iParam0] = 0;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[70 /*34*/].f_6) == 0)
			{
				if (!func_22(iParam0))
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("omega2")) == 0)
			{
				if (!func_22(iParam0))
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_22(iParam0) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[26 /*34*/].f_6) == 0)
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_22(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[43 /*34*/].f_6) == 0)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_22(iParam0))
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_22(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[93 /*34*/].f_6) > 0)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_22(iParam0))
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_22(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[10 /*34*/].f_6) == 0)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_22(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[47 /*34*/].f_6) == 0)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[70 /*34*/].f_6) == 0)
			{
				if (!func_22(iParam0))
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[48 /*34*/].f_6) == 0)
			{
				if (!func_22(iParam0))
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[39 /*34*/].f_6) == 0)
			{
				if (!func_22(iParam0))
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_22(iParam0))
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_22(iParam0))
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_22(iParam0))
			{
				Global_19E56.f_1C41[iParam0] = 0;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
	}
}

bool func_22(int iParam0)//Position - 0x1E51
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_35(iParam0) };
	iVar1 = OBJECT::_0x160AA1B32F6139B8(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_23(int iParam0)//Position - 0x1E85
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

var func_24()//Position - 0x1E98
{
	var uVar0;
	
	func_34(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_33(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_32(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_27(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_26(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_25(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_25(var uParam0, int iParam1)//Position - 0x1EDE
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 = (*uParam0 || 2147483648);
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - (*uParam0 && 2147483648));
	}
}

void func_26(var uParam0, int iParam1)//Position - 0x1F64
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_27(var uParam0, int iParam1)//Position - 0x1F97
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(*uParam0);
	iVar1 = func_29(*uParam0);
	if (iParam1 < 1 || iParam1 > func_28(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_28(int iParam0, int iParam1)//Position - 0x1FE8
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_29(int iParam0)//Position - 0x208A
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_30(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_30(bool bParam0, int iParam1, int iParam2)//Position - 0x20AF
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_31(var uParam0)//Position - 0x20C6
{
	return uParam0 & 15;
}

void func_32(var uParam0, int iParam1)//Position - 0x20D3
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_33(var uParam0, int iParam1)//Position - 0x210D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_34(var uParam0, int iParam1)//Position - 0x2148
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

struct<7> func_35(int iParam0)//Position - 0x2184
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = 2263827800;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = 4013886342;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = 3225704655;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = 2151260995;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = 2891545474;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = 2344829626;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = 4126970749;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = 2359148733;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = 3728412843;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = 2171691430;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = 3699911635;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = 4029706399;
			break;
		
		case 33:
			Var0.f_3 = 3082015943;
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = 3010099808;
			break;
		
		case 34:
			Var0.f_3 = 3082015943;
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = 3613081281;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = 2208410796;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = 2798580600;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 2197927507;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 2167550640;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 2308383443;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 2316539780;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 2594591465;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 4022396662;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 3254291302;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 2933350250;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = 2423886370;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = 3256786569;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = 3835768287;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = 3867468406;
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = 4006203073;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = 4042683452;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = 3468894434;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = 3420115991;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = 2814147131;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = 3082015943;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = 3082015943;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = 4168492544;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = 3567974253;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = 3729941218;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = 4188492670;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = 2394729325;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = 2192888170;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = 2389174084;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = 2497934791;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = 4232732129;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = 2567779133;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = 3732218423;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = 2663500076;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = 2506494167;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = 2463679010;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = 2962865768;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = 2483203582;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = 2838918956;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = 4205901940;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = 3369475456;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = 3064524526;
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = 3332973110;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = 2522494448;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = 4248592646;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = 3936664535;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = 3057031255;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = 4095840997;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = 3397895433;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = 3430501521;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = 4086527816;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = 3293878491;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = 2731839567;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = 4210568117;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = 3833069237;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = 3410916080;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = 3110450777;
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = 3110450777;
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = 3328176348;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = 2226217164;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = 2578434112;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = 2329946445;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = 2551709571;
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = 2551709571;
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = 3863585245;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = 4000992086;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = 3509752007;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = 4072696575;
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = 3928823518;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = 3706472053;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = 3974076073;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = 2777245193;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = 3201767584;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = 3850198311;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = 2877494483;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = 2918882817;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = 2175943379;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = 2806476823;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = 3783779483;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = 4046397901;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = 2857586858;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = 3348630331;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = 2498252631;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = 3139720051;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = 3100496495;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = 2165269235;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = 2175943379;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = 3499548916;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = 2792509962;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = 2300778356;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = 3673197175;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = 2963414922;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = 4001826019;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = 2431888086;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = 2276055512;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = 4201033024;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = 2182110125;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = 3572168310;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = 3974826836;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = 3374939974;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = 4236535295;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = 2287588667;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = 3241211708;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = 4241521157;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = 4253180803;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = 2178851150;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = 4220884158;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = 2624881939;
			break;
	}
	return Var0;
}

int func_36()//Position - 0x4D8F
{
	if ((func_38() == 4294967295 || func_38() == 999) && !func_37() == 0)
	{
		return 1;
	}
	return 0;
}

int func_37()//Position - 0x4DBF
{
	return Global_6374;
}

int func_38()//Position - 0x4DCA
{
	return Global_6373;
}

void func_39(int iParam0)//Position - 0x4DD5
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
			if (func_40(1))
			{
				MISC::SET_SAVE_HOUSE(Global_1592D[1 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_1592D[0 /*10*/].f_8, func_40(0), 0);
			}
			else if (func_40(0))
			{
				MISC::SET_SAVE_HOUSE(Global_1592D[0 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_1592D[1 /*10*/].f_8, func_40(1), 0);
			}
			break;
		
		case 2:
		case 3:
		case 4:
			if (func_40(3))
			{
				MISC::SET_SAVE_HOUSE(Global_1592D[3 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_1592D[4 /*10*/].f_8, func_40(4), 0);
				MISC::SET_SAVE_HOUSE(Global_1592D[2 /*10*/].f_8, func_40(2), 0);
			}
			else if (func_40(4))
			{
				MISC::SET_SAVE_HOUSE(Global_1592D[4 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_1592D[3 /*10*/].f_8, func_40(3), 0);
				MISC::SET_SAVE_HOUSE(Global_1592D[2 /*10*/].f_8, func_40(2), 0);
			}
			else if (func_40(2))
			{
				MISC::SET_SAVE_HOUSE(Global_1592D[2 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_1592D[3 /*10*/].f_8, func_40(3), 0);
				MISC::SET_SAVE_HOUSE(Global_1592D[4 /*10*/].f_8, func_40(4), 0);
			}
			break;
		
		case 5:
		case 6:
			if (func_40(6))
			{
				MISC::SET_SAVE_HOUSE(Global_1592D[6 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_1592D[5 /*10*/].f_8, func_40(5), 0);
			}
			else if (func_40(5))
			{
				MISC::SET_SAVE_HOUSE(Global_1592D[5 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_1592D[6 /*10*/].f_8, func_40(6), 0);
			}
			break;
	}
}

bool func_40(int iParam0)//Position - 0x4F8C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[iParam0], 0);
}

void func_41(int iParam0, bool bParam1)//Position - 0x4FA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar4;
	
	if (iParam0 == 10)
	{
		return;
	}
	bVar4 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[iParam0], 0);
	if (iParam0 == 5 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[6], 0))
	{
		bVar4 = true;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		StringCopy(&Var3, "", 32);
		iVar2 = 10;
		while (func_42(iVar0, iVar1, &Var3, &iVar2))
		{
			if (iVar2 == iParam0)
			{
				if (bVar4)
				{
					if (bParam1)
					{
						unk_0x3AD300678E55647B(MISC::GET_HASH_KEY(&Var3), 0);
					}
				}
				OBJECT::_0xF2E1A7133DD356A6(MISC::GET_HASH_KEY(&Var3), bVar4);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_42(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x5049
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_43(int iParam0)//Position - 0x511A
{
	bool bVar0;
	
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_1592D[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[iParam0], 0))
	{
		if (Global_1592D[iParam0 /*10*/].f_9 != func_50())
		{
			bVar0 = true;
		}
		else if (!func_48(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_40(6))
		{
			bVar0 = false;
		}
	}
	if (func_45(14))
	{
		bVar0 = false;
	}
	func_44(Global_1592D[iParam0 /*10*/].f_7, bVar0, 0);
}

void func_44(int iParam0, bool bParam1, bool bParam2)//Position - 0x51A7
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 0))
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
		if (Global_64E7 == 1)
		{
			Global_64E8 = 1;
		}
		Global_64E7 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 0);
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 15);
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 15);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_64EA[iVar0 /*23*/].f_13))
		{
			unk_0xB5AD2E78802711D6(1);
			HUD::REMOVE_BLIP(&(Global_64EA[iVar0 /*23*/].f_13));
			unk_0xB5AD2E78802711D6(0);
		}
	}
}

int func_45(int iParam0)//Position - 0x52B0
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_46(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_46(int iParam0)//Position - 0x52D2
{
	return func_47(iParam0, Global_8D15);
}

int func_47(int iParam0, int iParam1)//Position - 0x52E3
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0)//Position - 0x54C4
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_16C64.f_145 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_48(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		func_49(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_1592D[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_16C64.f_145 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_49(int iParam0, char* sParam1)//Position - 0x5549
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

int func_50()//Position - 0x5620
{
	func_51();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_51()//Position - 0x5639
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_53(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_52(AUDIO::_0x0626A247D2405330());
			if (func_378(iVar0) && (!func_377(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_378(Global_19E56.f_933.f_21B.f_10CD))
				{
					Global_19E56.f_933.f_21B.f_10CE = Global_19E56.f_933.f_21B.f_10CD;
				}
				Global_19E56.f_933.f_21B.f_10CF = iVar0;
				Global_19E56.f_933.f_21B.f_10CD = iVar0;
				return;
			}
		}
		else
		{
			if (Global_19E56.f_933.f_21B.f_10CD != 145)
			{
				Global_19E56.f_933.f_21B.f_10CF = Global_19E56.f_933.f_21B.f_10CD;
			}
			return;
		}
	}
	Global_19E56.f_933.f_21B.f_10CD = 145;
}

int func_52(int iParam0)//Position - 0x5736
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_53(int iParam0)//Position - 0x5773
{
	if (func_378(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_54()//Position - 0x579D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<4> Var3;
	vector3 vVar4;
	int iVar5;
	
	func_343(AUDIO::_0x0626A247D2405330(), 1);
	func_56(AUDIO::_0x0626A247D2405330(), 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]))
		{
			bVar1 = false;
			iVar2 = 0;
			StringCopy(&Var3, "", 32);
			vVar4 = { 0f, 0f, 0f };
			iVar5 = func_376(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), Global_1622C[iVar0], 1);
			if ((((iVar5 != 10 && iVar5 != 3) && iVar5 != 2) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_16222[iVar0], 0)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Global_16222[iVar0]))
			{
				while (!bVar1 && func_42(Global_1622C[iVar0], iVar2, &Var3, &iVar5))
				{
					if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&Var3, Global_16222[iVar0]))
					{
						bVar1 = true;
						vVar4 = { unk_0x8000C77B5F336760(Global_16222[iVar0], 0) };
						func_55(Global_1622C[iVar0], iVar2, &vVar4);
					}
					iVar2++;
				}
			}
			if (bVar1)
			{
				if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_16236[iVar0]))
				{
					Global_19E56.f_933.f_21B.f_DF0[0 /*10*/][Global_1622C[iVar0] /*3*/] = { vVar4 };
					Global_19E56.f_933.f_21B.f_E05[0 /*4*/][Global_1622C[iVar0]] = ENTITY::GET_ENTITY_HEADING(Global_16222[iVar0]);
				}
				else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_16236[iVar0]))
				{
					Global_19E56.f_933.f_21B.f_DF0[1 /*10*/][Global_1622C[iVar0] /*3*/] = { vVar4 };
					Global_19E56.f_933.f_21B.f_E05[1 /*4*/][Global_1622C[iVar0]] = ENTITY::GET_ENTITY_HEADING(Global_16222[iVar0]);
				}
			}
			else if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_16236[iVar0]))
			{
				Global_19E56.f_933.f_21B.f_DF0[0 /*10*/][Global_1622C[iVar0] /*3*/] = { 0f, 0f, 0f };
				Global_19E56.f_933.f_21B.f_E05[0 /*4*/][Global_1622C[iVar0]] = 0f;
			}
			else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_16236[iVar0]))
			{
				Global_19E56.f_933.f_21B.f_DF0[1 /*10*/][Global_1622C[iVar0] /*3*/] = { 0f, 0f, 0f };
				Global_19E56.f_933.f_21B.f_E05[1 /*4*/][Global_1622C[iVar0]] = 0f;
			}
		}
		iVar0++;
	}
}

void func_55(int iParam0, int iParam1, var uParam2)//Position - 0x59E7
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				uParam2->f_2 = 71.47866f;
			}
			else if (iParam1 == 1)
			{
				uParam2->f_2 = 31.39692f;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				uParam2->f_2 = 29.65688f;
			}
			else if (iParam1 == 1)
			{
				uParam2->f_2 = 175.0277f;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				uParam2->f_2 = 31.39692f;
			}
			else if (iParam1 == 1)
			{
				uParam2->f_2 = 3.24864f;
			}
			else if (iParam1 == 2)
			{
			}
			break;
	}
}

void func_56(int iParam0, int iParam1)//Position - 0x5A7D
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_52(iParam0);
		if (func_378(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_342(iParam0, 4, 4294967295);
				if (iVar1 == 93)
				{
					func_341(iVar0);
					func_74(iParam0, &(Global_19E56.f_933.f_21B[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_D = 12;
			Var2.f_1A = 12;
			Var2.f_27 = 9;
			Var2.f_31 = 9;
			func_68(iParam0, &Var2, 1, 4294967295);
			Global_16B5E[iVar0 /*65*/] = { Var2 };
			if (iParam0 == AUDIO::_0x0626A247D2405330())
			{
				func_62();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_377(0) && !func_377(1)) && !func_377(2)) && !func_377(3)) && !func_377(4)) && !func_377(9)) && !func_377(10)))
				{
					Global_19E56.f_933.f_21B[iVar0 /*65*/] = { Var2 };
					Global_19E56.f_933.f_21B.f_943[iVar0] = func_61(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_19E56.f_933.f_21B.f_CC[iVar3 /*4*/][iVar0] = func_57(iParam0, func_60(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_19E56.f_933.f_21B.f_CC[iVar3 /*4*/][iVar0] = func_57(iParam0, func_60(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_19E56.f_2361.f_63.f_3A[121])
						{
							Global_19E56.f_2361.f_63.f_3A[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_57(int iParam0, int iParam1)//Position - 0x5C65
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return 4294967197;
	}
	iVar0 = func_59(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_58(iParam0, iVar1, iVar2, iParam1);
}

int func_58(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5CC5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_59(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return 4294967197;
}

int func_59(int iParam0)//Position - 0x5D49
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x5DF9
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x5EA9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_62()//Position - 0x5F3C
{
	struct<50> Var0;
	
	if ((PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) || !func_378(func_379())) || !func_65())
	{
		return;
	}
	Var0 = 12;
	Var0.f_D = 12;
	Var0.f_1A = 12;
	Var0.f_27 = 9;
	Var0.f_31 = 9;
	func_68(AUDIO::_0x0626A247D2405330(), &Var0, 1, 4294967295);
	func_63(1306, Var0[0], 4294967295, 1);
	func_63(1307, Var0[1], 4294967295, 1);
	func_63(1308, Var0[2], 4294967295, 1);
	func_63(1309, Var0[3], 4294967295, 1);
	func_63(1310, Var0[4], 4294967295, 1);
	func_63(1311, Var0[5], 4294967295, 1);
	func_63(1312, Var0[6], 4294967295, 1);
	func_63(1313, Var0[7], 4294967295, 1);
	func_63(1314, Var0[8], 4294967295, 1);
	func_63(1315, Var0[9], 4294967295, 1);
	func_63(1316, Var0[10], 4294967295, 1);
	func_63(1317, Var0[11], 4294967295, 1);
	func_63(1318, Var0.f_D[0], 4294967295, 1);
	func_63(1319, Var0.f_D[1], 4294967295, 1);
	func_63(1320, Var0.f_D[2], 4294967295, 1);
	func_63(1321, Var0.f_D[3], 4294967295, 1);
	func_63(1322, Var0.f_D[4], 4294967295, 1);
	func_63(1323, Var0.f_D[5], 4294967295, 1);
	func_63(1324, Var0.f_D[6], 4294967295, 1);
	func_63(1325, Var0.f_D[7], 4294967295, 1);
	func_63(1326, Var0.f_D[8], 4294967295, 1);
	func_63(1327, Var0.f_D[9], 4294967295, 1);
	func_63(1328, Var0.f_D[10], 4294967295, 1);
	func_63(1329, Var0.f_D[11], 4294967295, 1);
	func_63(1330, Var0.f_1A[0], 4294967295, 1);
	func_63(1331, Var0.f_1A[1], 4294967295, 1);
	func_63(1332, Var0.f_1A[2], 4294967295, 1);
	func_63(1333, Var0.f_1A[3], 4294967295, 1);
	func_63(1334, Var0.f_1A[4], 4294967295, 1);
	func_63(1335, Var0.f_1A[5], 4294967295, 1);
	func_63(1336, Var0.f_1A[6], 4294967295, 1);
	func_63(1337, Var0.f_1A[7], 4294967295, 1);
	func_63(1338, Var0.f_1A[8], 4294967295, 1);
	func_63(1339, Var0.f_1A[9], 4294967295, 1);
	func_63(1340, Var0.f_1A[10], 4294967295, 1);
	func_63(1341, Var0.f_1A[11], 4294967295, 1);
	func_63(1342, Var0.f_27[0], 4294967295, 1);
	func_63(1343, Var0.f_27[1], 4294967295, 1);
	func_63(1344, Var0.f_27[2], 4294967295, 1);
	func_63(1345, Var0.f_27[3], 4294967295, 1);
	func_63(1346, Var0.f_27[4], 4294967295, 1);
	func_63(1347, Var0.f_27[5], 4294967295, 1);
	func_63(1348, Var0.f_27[6], 4294967295, 1);
	func_63(1349, Var0.f_27[7], 4294967295, 1);
	func_63(1350, Var0.f_27[8], 4294967295, 1);
	func_63(1351, Var0.f_31[0], 4294967295, 1);
	func_63(1352, Var0.f_31[1], 4294967295, 1);
	func_63(1353, Var0.f_31[2], 4294967295, 1);
	func_63(1354, Var0.f_31[3], 4294967295, 1);
	func_63(1355, Var0.f_31[4], 4294967295, 1);
	func_63(1356, Var0.f_31[5], 4294967295, 1);
	func_63(1357, Var0.f_31[6], 4294967295, 1);
	func_63(1358, Var0.f_31[7], 4294967295, 1);
	func_63(1359, Var0.f_31[8], 4294967295, 1);
	func_63(1360, func_379(), 4294967295, 1);
	STATS::STAT_SET_BOOL(joaat("clo_stored_initial"), 1, 1);
	Global_19E56.f_933.f_21B.f_10C7 = 1;
}

var func_63(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6350
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_64();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_64()//Position - 0x688E
{
	return Global_1407E0;
}

int func_65()//Position - 0x689A
{
	if (func_67() && func_66(0))
	{
		return 1;
	}
	return 0;
}

var func_66(int iParam0)//Position - 0x68B8
{
	return Global_140675[iParam0];
}

var func_67()//Position - 0x68C8
{
	return func_66(func_64() + 1);
}

void func_68(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x68DA
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_52(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_73(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_72(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_378(iVar0))
		{
			uParam1->f_3B = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_40;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			if (func_71(161, iParam3))
			{
				uParam1->f_3B = func_69(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_3B = func_69(752, iParam3, 0);
			}
			uParam1->f_3C = func_69(753, iParam3, 0);
			uParam1->f_3D = func_69(754, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == AUDIO::_0x0626A247D2405330())
		{
			if (func_71(161, iParam3))
			{
				uParam1->f_3B = func_69(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_3B = func_69(752, iParam3, 0);
			}
		}
	}
}

int func_69(int iParam0, int iParam1, int iParam2)//Position - 0x6A7A
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_70(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_70(var uParam0)//Position - 0x6AAC
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_64();
		if (iVar1 > 4294967295)
		{
			Global_26AF40 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_26AF40 = 1;
		}
	}
	return iVar0;
}

int func_71(int iParam0, int iParam1)//Position - 0x6AE0
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_70(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_72(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x6B0C
{
	int iVar0;
	
	iVar0 = func_52(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::_0x451294E859ECC018(iParam0) != 4294967295)
				{
					*uParam2 = PED::_0x451294E859ECC018(iParam0);
					*uParam3 = PED::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
			}
			break;
	}
}

void func_73(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x7054
{
	int iVar0;
	
	iVar0 = func_52(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

void func_74(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x7295
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = func_52(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_D[iVar3] != 0 && uParam1->f_D[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_D[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_D[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_D[iVar3], (*uParam1)[iVar3], uParam1->f_1A[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_27[iVar3] != 4294967295 && uParam1->f_27[iVar3] != 255)
				{
					if (uParam1->f_27[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_27[iVar3] = 4294967295;
					}
					else if (uParam1->f_31[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_27[iVar3]))
					{
						uParam1->f_31[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_27[iVar3] != 4294967295 && uParam1->f_27[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_27[iVar3], uParam1->f_31[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_378(iVar0))
		{
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3B = uParam1->f_3B;
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3C = uParam1->f_3C;
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3D = uParam1->f_3D;
			if (func_340(iParam0, iVar1, &iVar2, 0))
			{
				func_326(iParam0, 2, iVar2, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
			}
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3E = uParam1->f_3E;
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3F = uParam1->f_3F;
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_40 = uParam1->f_40;
			if (func_267(iParam0, iVar1, &iVar2))
			{
				func_326(iParam0, 1, iVar2, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			bVar4 = func_264(iParam0);
			func_263(753, uParam1->f_3C, Global_11566, 1, 0);
			func_263(754, uParam1->f_3D, Global_11566, 1, 0);
			iVar5 = func_58(iParam0, uParam1->f_D[2], (*uParam1)[2], 2);
			if (iVar5 != 4294967197)
			{
				iVar6 = 4294967197;
				if (iVar1 == joaat("mp_m_freemode_01"))
				{
					iVar6 = func_261(iVar5);
				}
				else if (iVar1 == joaat("mp_f_freemode_01"))
				{
					iVar6 = func_259(iVar5);
				}
				if (iVar6 != 4294967197 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_83(iParam0, 2, iVar5, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, Global_11566, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_58(iParam0, uParam1->f_D[1], (*uParam1)[1], 1);
				func_83(iParam0, 1, iVar7, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, Global_11566, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_77(iParam0, uParam1->f_27[0], uParam1->f_31[0], 0);
				func_83(iParam0, 14, iVar8, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, Global_11566, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == AUDIO::_0x0626A247D2405330())
		{
			iVar9 = uParam1->f_3B;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_261(iVar9);
			}
			else
			{
				iVar9 = func_259(iVar9);
			}
			func_263(752, iVar9, Global_11566, 1, 0);
			func_263(2051, iVar9, Global_11566, 1, 0);
			func_75(161, 1, 4294967295, 1);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar10 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILE::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == 1551873674 || iVar10 == 1058287519)
			{
				if (!FILE::_0x341DE7ED1D2A1BFD(iVar11, 2191515025, 1))
				{
					FILE::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == 1551873674)
					{
						FILE::GET_SHOP_PED_QUERY_PROP(3776431392, &Var12);
					}
					else
					{
						FILE::GET_SHOP_PED_QUERY_PROP(530896308, &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar11, 2191515025, 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7720
{
	int iVar0;
	
	if (func_76())
	{
		iVar0 = Global_2727B6[iParam0 /*3*/][func_70(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_76()//Position - 0x7752
{
	return 1;
	return 0;
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x775F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == 4294967295)
	{
		return func_82(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILE::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != 4294967295 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_79(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_79(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_78(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_82(iParam3);
}

int func_78(int iParam0, int iParam1)//Position - 0x785B
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return 4294967197;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7999
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILE::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 1, 4294967295, 4294967295);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			FILE::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_81(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		FILE::INIT_SHOP_PED_COMPONENT(&Var4);
		iVar6 = 0;
		iVar7 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 0, 4294967295, func_59(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar5, &Var4);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_80(iParam0, func_59(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return 4294967197;
}

int func_80(int iParam0, int iParam1)//Position - 0x7A79
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return 4294967197;
}

int func_81(int iParam0)//Position - 0x7E20
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return 4294967197;
}

int func_82(int iParam0)//Position - 0x7E81
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_83(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x7F07
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	float fVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	var uVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	var uVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_140817 != 4 && Global_140817 != 5) && Global_140817 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == 4294967197)
	{
		return 0;
	}
	if (iParam0 == AUDIO::_0x0626A247D2405330() && Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_DE == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == 4294967295)
	{
		iParam10 = Global_11566;
	}
	Global_11567++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = 4294967197;
	iVar7 = 4294967197;
	iVar8 = 4294967295;
	iVar9 = 4294967197;
	iVar10 = 4294967197;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	if (iParam5 == 0)
	{
		Global_11569[1 /*14*/] = { func_218(iVar5, iParam1, iParam2, 4294967295) };
		if (!func_217(iParam3))
		{
			Global_11567 = (Global_11567 - 1);
			return 0;
		}
		func_212(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_280004;
		uVar14 = Global_280005;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_11594 };
		}
		else
		{
			uVar15 = { func_209(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != 4294967197)
			{
				if (iVar0 == 10 && uVar15.f_10)
				{
					Global_11569[1 /*14*/] = { func_218(iVar5, 10, 0, 4294967295) };
					if (iParam4 == 4294967295)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_59(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_59(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_59(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, iParam4);
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
					{
						func_212(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_11569[1 /*14*/] = { func_218(iVar5, iVar0, uVar15[iVar0], 4294967295) };
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar16 = 9;
							if (iParam5 == 1)
							{
								uVar16 = { Global_115A5 };
							}
							else
							{
								uVar16 = { func_206(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_11569[1 /*14*/] = { func_218(iVar5, 14, uVar16[iVar1], 4294967295) };
								func_205(iParam0, Global_11569[1 /*14*/].f_C, Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4);
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
								{
									func_212(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == 4294967295)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_59(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_59(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_59(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_83(iParam0, iVar0, uVar15[iVar0], 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
							{
								func_212(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_11569[1 /*14*/] = { func_218(iVar5, iVar0, func_203(iParam0, iVar0, 4294967295), 4294967295) };
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_209(iVar5, 0) };
					func_83(iParam0, iVar0, uVar17[iVar0], 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_280004 = uVar13;
		Global_280005 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_202();
			if (iVar18 != 4294967295)
			{
				func_199(iVar18, 0, iParam10);
			}
			func_197(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_206(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_11569[1 /*14*/] = { func_218(iVar5, 14, uVar19[iVar1], 4294967295) };
			func_205(iParam0, Global_11569[1 /*14*/].f_C, Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
			{
				func_212(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_11567 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_195(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != 4294967197)
						{
							func_83(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_205(iParam0, Global_11569[1 /*14*/].f_C, Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
		{
			func_212(iVar5, iParam1, iParam2, 1);
		}
		if (Global_11569[1 /*14*/].f_C == 0)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 6) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 537651880, 1))
			{
			}
			else
			{
				iVar20 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
				if (FILE::_0x341DE7ED1D2A1BFD(iVar20, 66092876, 0))
				{
					func_83(iParam0, 1, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					Global_11569[1 /*14*/] = { func_218(iVar5, iParam1, iParam2, 4294967295) };
				}
			}
		}
		if (Global_11569[1 /*14*/].f_C == 0)
		{
			func_190(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_11567 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_195(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != 4294967197)
					{
						func_83(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_195(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != 4294967197)
				{
					func_83(iParam0, 14, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar21 = 4294967295;
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 6) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 2298592124, 11))
				{
					PED::_0xCC9682B8951C5229(iParam0, Global_140CDE, Global_140CDF, Global_140CE0, 0);
					PED::_0xCC9682B8951C5229(iParam0, Global_140CDE, Global_140CDF, Global_140CE0, 1);
					PED::_0xCC9682B8951C5229(iParam0, Global_140CDE, Global_140CDF, Global_140CE0, 2);
					PED::_0xCC9682B8951C5229(iParam0, Global_140CDE, Global_140CDF, Global_140CE0, 3);
				}
				iVar22 = func_57(iParam0, 11);
				iVar23 = func_57(iParam0, 8);
				iVar24 = func_57(iParam0, 4);
				iVar8 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar21 = func_189(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar21 = func_189(iVar5, iParam2, 11, 4);
					}
					if ((((((FILE::_0x341DE7ED1D2A1BFD(iVar21, 320460654, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2439348822, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2874141894, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3995877949, 0))
					{
					}
					else
					{
						iVar9 = func_57(iParam0, 8);
					}
				}
				iVar25 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILE::_0x341DE7ED1D2A1BFD(iVar25, 3938320434, 0))
				{
					iVar26 = func_188(iVar5, iVar23, iVar22, iVar24);
					if (iVar26 == 4294967197)
					{
						iVar26 = func_195(iParam0, iVar5, 11, iVar22, 3, 0);
					}
					switch (iVar25)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar26 = 11;
							iVar21 = func_189(iVar5, iParam2, 11, 4);
							if (!FILE::_0x341DE7ED1D2A1BFD(iVar21, 3764877471, 0))
							{
								iVar26 = 4294967197;
							}
							break;
					}
					if (iVar26 != 4294967197)
					{
						iVar27 = 0;
						while (iVar27 < 17)
						{
							if (func_187(iVar5, iVar26, iVar27) == iVar25)
							{
								iVar11 = iVar27;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar27++;
						}
					}
				}
				iVar21 = 4294967295;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILE::_0x341DE7ED1D2A1BFD(func_189(iVar5, iParam2, 11, 4), 3094454078, 0))
				{
					iVar22 = func_57(iParam0, 11);
					if (iVar22 >= 256)
					{
						iVar21 = func_189(iVar5, iVar22, 11, 4);
					}
					if (iVar22 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar21, 1965569012, 0))
					{
						iVar28 = func_185(iVar5, iVar22, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar28 != 4294967197)
						{
							func_83(iParam0, 8, iVar28, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							Global_11569[1 /*14*/] = { func_218(iVar5, iParam1, iParam2, 4294967295) };
						}
					}
				}
				else if (func_184(iVar5, iParam2, 4294967295))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar22 >= 237)
						{
							iVar21 = func_189(iVar5, iVar22, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar22 >= 256)
						{
							iVar21 = func_189(iVar5, iVar22, 11, 4);
						}
					}
					iVar9 = 4294967197;
					if (!func_184(iVar5, iVar22, 4294967295))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && (FILE::_0x341DE7ED1D2A1BFD(iVar21, 3094454078, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 1965569012, 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && ((((((((FILE::_0x341DE7ED1D2A1BFD(iVar21, 684992453, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3474242399, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3422517591, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 700658917, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 1830529185, 0)))
						{
						}
						else
						{
							iVar29 = func_183(iParam0, iParam2);
							iVar30 = func_185(iVar5, iVar22, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar30 != 4294967197)
							{
								func_83(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
								Global_11569[1 /*14*/] = { func_218(iVar5, iParam1, iParam2, 4294967295) };
								iVar9 = 4294967197;
							}
							else if (iVar29 != 4294967197 && (iParam0 == AUDIO::_0x0626A247D2405330() || iParam0 == Global_411802))
							{
								func_83(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
								Global_11569[1 /*14*/] = { func_218(iVar5, iParam1, iParam2, 4294967295) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar31 = func_182(iVar5, 11, 4294967295);
									Global_11569[1 /*14*/] = { func_218(iVar5, 11, iVar31, 4294967295) };
									iVar30 = func_185(iVar5, iVar31, iParam2, Global_11569[1 /*14*/].f_4);
									if (iVar30 == 4294967197 || FILE::_0x341DE7ED1D2A1BFD(func_189(iVar5, iParam2, 11, 3), 3057068164, 0))
									{
										iVar30 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (FILE::_0x341DE7ED1D2A1BFD(func_189(iVar5, iParam2, 11, 4), 3057068164, 0))
									{
										iVar30 = 120;
									}
									else
									{
										iVar30 = 48;
									}
								}
								func_83(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
								Global_11569[1 /*14*/] = { func_218(iVar5, iParam1, iParam2, 4294967295) };
							}
						}
					}
					else
					{
						Global_11569[1 /*14*/] = { func_218(iVar5, 11, iVar22, 4294967295) };
						iVar32 = Global_11569[1 /*14*/].f_3;
						Global_11569[1 /*14*/] = { func_218(iVar5, 11, iParam2, 4294967295) };
						iVar33 = Global_11569[1 /*14*/].f_3;
						if (iVar32 != iVar33)
						{
							iVar35 = func_183(iParam0, iParam2);
							Global_11569[1 /*14*/] = { func_218(iVar5, 8, iVar23, 4294967295) };
							iVar34 = Global_11569[1 /*14*/].f_4;
							iVar36 = func_181(iVar5, iVar23, iVar34);
							if (iVar35 != 4294967197 && (iParam0 == AUDIO::_0x0626A247D2405330() || iParam0 == Global_411802))
							{
								iVar37 = iVar35;
							}
							else if (iVar36 == 4294967197)
							{
								iVar37 = iVar23;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar38 = func_189(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_180(iVar38) == 6) || FILE::_0x341DE7ED1D2A1BFD(iVar38, 3057068164, 0))
									{
										iVar36 = func_182(iVar5, 11, 4294967295);
										Global_11569[1 /*14*/] = { func_218(iVar5, 11, iVar36, 4294967295) };
										iVar37 = func_185(iVar5, iVar36, iParam2, Global_11569[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && (iVar23 == 32 || iVar23 == 33))
								{
									if (!FILE::_0x341DE7ED1D2A1BFD(func_189(iVar5, iParam2, 11, 4), 3803378421, 0))
									{
										iVar36 = func_182(iVar5, 11, 4294967295);
										Global_11569[1 /*14*/] = { func_218(iVar5, 11, iVar36, 4294967295) };
										iVar37 = func_185(iVar5, iVar36, iParam2, Global_11569[1 /*14*/].f_4);
									}
								}
								iVar39 = 4294967295;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar39 = func_189(iVar5, iVar23, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar39 = func_189(iVar5, iVar23, 8, 4);
								}
								if (FILE::_0x341DE7ED1D2A1BFD(iVar39, 3978471604, 0))
								{
									iVar36 = func_182(iVar5, 11, 4294967295);
									Global_11569[1 /*14*/] = { func_218(iVar5, 11, iVar36, 4294967295) };
									iVar37 = func_185(iVar5, iVar36, iParam2, Global_11569[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar37 = func_185(iVar5, iVar36, iParam2, iVar34);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (FILE::_0x341DE7ED1D2A1BFD(func_189(iVar5, iParam2, 11, 3), 2575628572, 0))
									{
										if (!func_179(iVar5, func_57(iParam0, 4), iVar36))
										{
											iVar37 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (FILE::_0x341DE7ED1D2A1BFD(func_189(iVar5, iParam2, 11, 4), 2575628572, 0))
									{
										if (!func_179(iVar5, func_57(iParam0, 4), iVar36))
										{
											iVar37 = 48;
										}
									}
								}
							}
							if (iVar37 != 4294967197)
							{
								func_83(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar36 = func_182(iVar5, 11, 4294967295);
								Global_11569[1 /*14*/] = { func_218(iVar5, 11, iVar36, 4294967295) };
								iVar37 = func_185(iVar5, iVar36, iParam2, Global_11569[1 /*14*/].f_4);
								if (iVar37 == 4294967197)
								{
									iVar37 = 240;
								}
								func_83(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_83(iParam0, 8, 48, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
							Global_11569[1 /*14*/] = { func_218(iVar5, iParam1, iParam2, 4294967295) };
						}
					}
				}
				func_176(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_197(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_188(iVar5, func_203(iParam0, 8, 4294967295), iParam2, func_203(iParam0, 4, 4294967295));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == 4294967295)
				{
					iParam8 = func_69(2151, iParam10, 0);
				}
				if (iParam9 == 4294967295)
				{
					iParam9 = func_69(2158, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != 4294967197)
				{
					iVar40 = 4294967197;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar40 = func_261(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar40 = func_259(iParam2);
					}
					if (iVar40 != 4294967197 && iParam2 != iVar40)
					{
						iParam2 = iVar40;
					}
				}
				func_131(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar41 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILE::_0x341DE7ED1D2A1BFD(iVar41, 3938320434, 0))
			{
				iVar42 = func_57(iParam0, 11);
				iVar43 = func_57(iParam0, 4);
				iVar44 = func_188(iVar5, iParam2, iVar42, iVar43);
				if (iVar44 == 4294967197)
				{
					iVar44 = func_195(iParam0, iVar5, 11, iVar42, 3, 0);
				}
				switch (iVar41)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar44 = 11;
						iVar45 = func_189(iVar5, iParam2, 11, 4);
						if (!FILE::_0x341DE7ED1D2A1BFD(iVar45, 3764877471, 0))
						{
							iVar44 = 4294967197;
						}
						break;
				}
				if (iVar44 != 4294967197)
				{
					iVar46 = 0;
					while (iVar46 < 17)
					{
						if (func_187(iVar5, iVar44, iVar46) == iVar41)
						{
							iVar11 = iVar46;
							iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar46++;
					}
				}
			}
			func_197(iParam0, iParam1, iParam2, iParam6, 0);
			iVar47 = func_57(iParam0, 11);
			if (func_184(iVar5, iVar47, 4294967295))
			{
				iVar48 = func_181(iVar5, iParam2, Global_11569[1 /*14*/].f_4);
				func_176(iVar5, iVar48);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_188(iVar5, iParam2, func_57(iParam0, 11), func_57(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar49 = func_57(iParam0, 7);
				if (!func_128(iVar5, iVar49, 9, 4294967197, 4294967197, 4294967197, iParam0, 0, iParam2, 4294967197, 4294967197, 4294967197))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, func_59(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3373257213, 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3373257213, 0)))
			{
				iVar50 = func_69(2098, iParam10, 0);
				iVar51 = func_69(2099, iParam10, 0);
				iVar52 = func_69(2100, iParam10, 0);
				fVar53 = func_127(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar50, iVar51, iVar52, 0f, fVar53, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar50, iVar51, iVar52, 0f, fVar53, 0f, false);
				}
				iVar54 = 0;
				while (iVar54 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar54, 0f);
					iVar54++;
				}
			}
			else
			{
				func_111(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar55 = func_57(iParam0, 11);
			iVar56 = func_57(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(func_189(iVar5, iVar55, 11, 3), 2575628572, 0))
				{
					if (!func_179(iVar5, iParam2, func_181(iVar5, iVar56, 0)))
					{
						func_83(iParam0, 8, 240, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						Global_11569[1 /*14*/] = { func_218(iVar5, iParam1, iParam2, 4294967295) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(func_189(iVar5, iVar55, 11, 4), 2575628572, 0))
				{
					if (!func_179(iVar5, iParam2, func_181(iVar5, iVar56, 0)))
					{
						func_83(iParam0, 8, 78, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						Global_11569[1 /*14*/] = { func_218(iVar5, iParam1, iParam2, 4294967295) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_188(iVar5, func_57(iParam0, 8), func_57(iParam0, 11), iParam2);
			}
			iVar57 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILE::_0x341DE7ED1D2A1BFD(iVar57, 3938320434, 0))
			{
				iVar58 = func_188(iVar5, iVar56, iVar55, iParam2);
				if (iVar58 == 4294967197)
				{
					iVar58 = func_195(iParam0, iVar5, 11, iVar55, 3, 0);
				}
				switch (iVar57)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar58 = 11;
						iVar59 = func_189(iVar5, iParam2, 11, 4);
						if (!FILE::_0x341DE7ED1D2A1BFD(iVar59, 3764877471, 0))
						{
							iVar58 = 4294967197;
						}
						break;
				}
				if (iVar58 != 4294967197)
				{
					iVar60 = 0;
					while (iVar60 < 17)
					{
						if (func_187(iVar5, iVar58, iVar60) == iVar57)
						{
							iVar11 = iVar60;
							iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar60++;
					}
				}
			}
		}
		if (iParam4 == 4294967295)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_59(iParam1), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_59(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_59(iParam1), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_11567 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_195(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != 4294967197)
					{
						func_83(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_280004)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = 4294967295;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != 4294967197)
							{
								iVar6 = func_188(iVar5, iVar3, func_57(iParam0, 11), func_57(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_195(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != 4294967197)
				{
					func_83(iParam0, 14, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_110(iParam0))
				{
					iVar61 = func_108(iParam0, iVar5, iParam1, iParam2);
					if (iVar61 > 0)
					{
						iVar61 = (iVar61 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_102(iParam0, 9, iVar61))
						{
							func_83(iParam0, 9, iVar61, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						}
					}
					else
					{
						func_83(iParam0, 9, 0, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
					iVar8 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
					{
						func_83(iParam0, 9, 0, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar62 = func_69(2040, 4294967295, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, func_96(iParam0, iVar62), func_95(iParam0, iVar62), func_94(iParam0, iVar62));
				}
				if (iParam0 == AUDIO::_0x0626A247D2405330())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(CAM::_0xDC9DA9E8789F5246(), 5, func_96(AUDIO::_0x0626A247D2405330(), iVar62), func_95(AUDIO::_0x0626A247D2405330(), iVar62), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_94(AUDIO::_0x0626A247D2405330(), iVar62));
					func_93(CAM::_0xDC9DA9E8789F5246(), iVar62);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3975398423, 0))
					{
						func_83(iParam0, 9, 0, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar63 = func_203(iParam0, 4, 4294967295);
					iVar64 = iParam2;
				}
				else
				{
					iVar63 = iParam2;
					iVar64 = func_203(iParam0, 11, 4294967295);
				}
				if (func_92(iVar5, 11, iVar64, 4294967295))
				{
					if (!func_91(iVar5, 4, iVar63, 4294967295))
					{
						if (func_90(iVar5, 4, iVar63, &uVar65))
						{
							func_83(iParam0, 4, uVar65, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						}
					}
				}
				else if (func_91(iVar5, 4, iVar63, 4294967295))
				{
					if (func_89(iVar5, 4, iVar63, &uVar65))
					{
						func_83(iParam0, 4, uVar65, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar66 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar67 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar68 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar66, iVar67);
				iVar69 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar70 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar71 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar69, iVar70);
				iVar72 = func_57(iParam0, 4);
				iVar73 = func_57(iParam0, 6);
				if (func_88(iVar5, iVar68))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar68, 1812005517, 0) != func_87(iVar5, iVar72, iVar68))
					{
						iVar74 = FILE::_0xC17AD0E5752BECDA(iVar68);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							FILE::GET_VARIANT_COMPONENT(iVar68, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 6)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar73 = func_79(iVar5, iVar76, 6, 3);
										iVar68 = iVar76;
										func_83(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar73 = func_79(iVar5, iVar76, 6, 4);
										iVar68 = iVar76;
										func_83(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar71, 2252324139, 0) != func_86(iVar5, iVar73, iVar71))
					{
						iVar74 = FILE::_0xC17AD0E5752BECDA(iVar71);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							FILE::GET_VARIANT_COMPONENT(iVar71, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 4)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar72 = func_79(iVar5, iVar76, 4, 3);
										iVar71 = iVar76;
										func_83(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_79(iVar5, iVar76, 4, 4);
										iVar71 = iVar76;
										func_83(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
				}
				if (func_88(iVar5, iVar71))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar71, 2252324139, 0) != func_86(iVar5, iVar73, iVar71))
					{
						iVar74 = FILE::_0xC17AD0E5752BECDA(iVar71);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							FILE::GET_VARIANT_COMPONENT(iVar71, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 4)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar72 = func_79(iVar5, iVar76, 4, 3);
										iVar71 = iVar76;
										func_83(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_79(iVar5, iVar76, 4, 4);
										iVar71 = iVar76;
										func_83(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar68, 1812005517, 0) != func_87(iVar5, iVar72, iVar68))
					{
						iVar74 = FILE::_0xC17AD0E5752BECDA(iVar68);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							FILE::GET_VARIANT_COMPONENT(iVar68, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 6)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar73 = func_79(iVar5, iVar76, 6, 3);
										iVar68 = iVar76;
										func_83(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar73 = func_79(iVar5, iVar76, 6, 4);
										iVar68 = iVar76;
										func_83(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_190(iParam0);
				iVar79 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar80 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar81 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar79, iVar80);
				if (FILE::_0x341DE7ED1D2A1BFD(iVar81, 838607662, 0))
				{
					iVar3 = func_195(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != 4294967197)
					{
						func_83(iParam0, 14, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
					iVar3 = func_195(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != 4294967197)
					{
						func_83(iParam0, 14, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_84(iParam0, &uVar4))
		{
			func_83(iParam0, 2, uVar4, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
		}
	}
	if (iVar6 != 4294967197 && !bParam13)
	{
		func_83(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
	}
	if (iVar9 != 4294967197)
	{
		func_83(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
	}
	if (iVar7 != 4294967197)
	{
		func_83(iParam0, 1, iVar7, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
	}
	if (iVar11 != 4294967295)
	{
		iVar82 = func_187(iVar5, func_203(iParam0, 3, 4294967295), iVar11);
		if (iVar82 != 4294967295)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_79(iVar5, iVar82, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_79(iVar5, iVar82, 3, 4);
			}
			if (iVar10 != 4294967197)
			{
				iVar10 = (iVar10 + iVar12);
				func_83(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
			}
		}
	}
	Global_11567 = (Global_11567 - 1);
	return 1;
}

int func_84(int iParam0, var uParam1)//Position - 0x9C99
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_203(AUDIO::_0x0626A247D2405330(), 2, 4294967295);
	if (func_69(753, Global_11566, 0) != 4294967197 && func_65())
	{
		if (func_85() == 4)
		{
			return 1;
		}
		if (func_69(753, Global_11566, 0) == 0 && func_69(754, Global_11566, 0) == 0)
		{
			if (func_71(161, Global_11566))
			{
				if (func_69(2051, Global_11566, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_69(752, Global_11566, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_69(753, Global_11566, 0);
		iVar1 = func_69(754, Global_11566, 0);
		if (!func_102(iParam0, iVar1, iVar0))
		{
			if (func_71(161, Global_11566))
			{
				*uParam1 = func_69(2051, Global_11566, 0);
			}
			else
			{
				*uParam1 = func_69(752, Global_11566, 0);
			}
			func_263(753, 4294967197, Global_11566, 1, 0);
			func_263(754, 2, Global_11566, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_85()//Position - 0x9DAD
{
	return Global_140817;
}

int func_86(int iParam0, int iParam1, int iParam2)//Position - 0x9DB9
{
	int iVar0;
	
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_189(iParam0, iParam1, 6, 3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 3930719226, 0))
			{
				if ((FILE::_0x341DE7ED1D2A1BFD(iParam2, 3214390491, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 2907508806, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 2874141894, 0))
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 4238699116, 0))
			{
				if ((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3581268889, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2848634098, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3930719226, 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_189(iParam0, iParam1, 6, 4);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 4238699116, 0))
			{
				if (((((((((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3581268889, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3985067549, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_87(int iParam0, int iParam1, int iParam2)//Position - 0x9FEA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_189(iParam0, iParam1, 4, 3);
				iVar1 = func_180(iVar0);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 4238699116, 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3609928037, 0)) || (FILE::_0x341DE7ED1D2A1BFD(iVar0, 3214390491, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0))) || (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2907508806, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0))) || (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case 3855202361:
					case 1858824227:
					case 4250699079:
					case 301706885:
					case 1283072893:
					case 2704788731:
					case 1995307108:
					case 1029014836:
					case 3929399030:
					case 4156520969:
					case 2260244477:
					case 3075454234:
					case 153704652:
					case 356276239:
					case 586511233:
					case 1558996842:
					case 1183988406:
					case 1000678684:
					case 761792674:
					case 4149288057:
					case 686423978:
					case 3531559638:
					case 74266289:
					case 987390769:
					case 1591372991:
					case 1834027448:
					case 913054691:
					case 1142372153:
					case 2596955306:
					case 2851865357:
					case 2133699953:
					case 2370455978:
					case 3819435620:
					case 4057830099:
					case 754461254:
					case 3139126914:
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case 4201984160:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case 3846861623:
					case 3683868617:
					case 3183879215:
					case 2888597756:
					case 2382808253:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case 2165873043:
					case 3873596709:
					case 3619604190:
						iVar2 = 0;
						break;
				}
				if (((FILE::_0x341DE7ED1D2A1BFD(iParam2, 1248753945, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 481861038, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 713391749, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 434101562, 0))
				{
					if ((((((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3214390491, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2907508806, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0))
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_189(iParam0, iParam1, 4, 4);
				iVar1 = func_180(iVar0);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 4238699116, 0))
			{
				if ((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3214390491, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2907508806, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0))
				{
					if ((((FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 3315498572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 2481756905, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 1248753945, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 481861038, 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3533503320, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 684992453, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3167131331, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3087683953, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2206820464, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2848634098, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3864636947, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3191922138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1055526375, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1052059919, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_88(int iParam0, int iParam1)//Position - 0xA6A3
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (FILE::_0x341DE7ED1D2A1BFD(iParam1, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam1, 4238699116, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (FILE::_0x341DE7ED1D2A1BFD(iParam1, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam1, 4238699116, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_89(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xA70F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_189(iParam0, iParam2, iParam1, 4);
						if (iVar0 != 4294967295)
						{
							iVar1 = FILE::_0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILE::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!FILE::_0x341DE7ED1D2A1BFD(iVar3, 3194159983, 0))
										{
											*uParam3 = func_79(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_90(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xA7B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_189(iParam0, iParam2, iParam1, 4);
						if (iVar0 != 4294967295)
						{
							iVar1 = FILE::_0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILE::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (FILE::_0x341DE7ED1D2A1BFD(iVar3, 3194159983, 0))
										{
											*uParam3 = func_79(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_91(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA860
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_189(iParam0, iParam2, 4, 4);
						}
						if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 3194159983, 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_92(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA8B6
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_189(iParam0, iParam2, 11, 4);
						}
						return FILE::_0x341DE7ED1D2A1BFD(iParam3, 3764877471, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_93(int iParam0, int iParam1)//Position - 0xA909
{
	if (iParam1 > 61)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 3746739837);
	}
	else if (iParam1 > 51)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else if (iParam1 > 46)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1766664132);
	}
	else if (iParam1 > 26)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1277738372);
	}
	else if (iParam1 > 0)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_94(int iParam0, int iParam1)//Position - 0xA97F
{
	return 0;
}

int func_95(int iParam0, int iParam1)//Position - 0xA988
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_96(int iParam0, int iParam1)//Position - 0xA9EA
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar1 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar2 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar3 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if ((((!bVar0 == Global_1160A || !iParam1 == Global_1160B) || !iVar1 == Global_1160C) || !iVar2 == Global_1160D) || !iVar3 == Global_1160E)
	{
		Global_1160A = bVar0;
		Global_1160B = iParam1;
		Global_1160C = iVar1;
		Global_1160D = iVar2;
		Global_1160E = iVar3;
		Global_1160F = func_97(iParam0, iParam1);
	}
	return Global_1160F;
}

int func_97(int iParam0, int iParam1)//Position - 0xAABA
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 240476421, 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2795734084, 8))
			{
				return (2 + iVar3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 350281921, 8))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3407826235, 8))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3109595566, 8))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2170337719, 8))
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2795734084, 8))
			{
				return (7 + iVar3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3407826235, 8))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3109595566, 8))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2170337719, 8))
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		return func_101(iParam0, iParam1);
	}
	if (func_100(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3764877471, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3581268889, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2412047274, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3977318242, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3315498572, 0))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3988198483, 0))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4236554734, 0))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1536649085, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			iVar6 = func_99(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_180(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_180(iVar5);
						break;
					}
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 248194463, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2947481270, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 396458410, 0))
		{
			iVar7 = func_98(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_180(iVar5);
					break;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3515131827, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3175734607, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2192107526, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1784133476, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2687017741, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1976716889, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2099109084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2806526264, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2575799735, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 1431529976, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3020868293, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2887353267, 0))
				{
					return func_101(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((FILE::_0x341DE7ED1D2A1BFD(iVar5, 3208708908, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 103539798, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 3300263412, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2044466679, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2274210138, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3230704479, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2875160829, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3241125037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2936078416, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3853675954, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3547384111, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_101(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2308552066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2206820464, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3509027759, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3422517591, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 700658917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1714969731, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 745826556, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1055526375, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 492620493, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3878346342, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4192142290, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3561175191, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 137011325, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3653355204, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2943480357, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2175211152, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2787434379, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2788596422, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 1927516484, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2508519779, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3284162009, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2969153612, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3745123536, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3466488725, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1690933245, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1360588936, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2136821028, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1830529185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4025701093, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 201427653, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 967829025, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3609928037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3028409363, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3315498572, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2481756905, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 263623295, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3985067549, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4205963378, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3547108821, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return func_101(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1208450825, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 297865853, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 602650322, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 905042630, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1204125293, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 310055897, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 606713654, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return func_101(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1831422288, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3456830450, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 655638019, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4195902460, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3597311137, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3896754259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_101(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3988198483, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4236554734, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2326391594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 245429010, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 15161247, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2044923487, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3379614369, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3756588945, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2155823279, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3859427410, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 695107163, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2795734084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2170337719, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2919088559, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2947481270, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3754530791, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1207461955, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return func_101(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3509027759, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3509027759, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3355441939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2308552066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_101(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2631096120, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return func_101(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3355441939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1);
			}
			else
			{
				return func_101(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 398019854, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_101(iParam0, iParam1) + 15;
			}
			else
			{
				return func_101(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2884070230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((FILE::_0x341DE7ED1D2A1BFD(iVar5, 2276967906, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 3468832093, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_180(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_98(int iParam0, int iParam1)//Position - 0xCCB7
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3533503320, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2355588846, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3167131331, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3474242399, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3622096127, iParam1))
	{
		iVar0 = 13;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 4098852308, iParam1))
	{
		iVar0 = 15;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_99(int iParam0, int iParam1)//Position - 0xCE57
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3424892835, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3120042828, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3426269137, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3117486850, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2947481270, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2639813129, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2189108303, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_100(int iParam0)//Position - 0xCF9B
{
	if (FILE::_0x341DE7ED1D2A1BFD(FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, int iParam1)//Position - 0xCFCA
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

int func_102(int iParam0, int iParam1, int iParam2)//Position - 0xD048
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_11569[1 /*14*/] = { func_218(iVar0, iParam1, iParam2, 4294967295) };
	uVar2 = Global_280004;
	uVar3 = Global_280005;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_209(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != 4294967197)
			{
				if (!func_102(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_280004 = uVar2;
					Global_280005 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_206(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_102(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_11569[2 /*14*/] = { func_218(iVar0, 14, iVar6, 4294967295) };
									if (Global_11569[2 /*14*/].f_C == iVar5)
									{
										if (func_102(iParam0, 14, iVar6))
										{
											if (!func_103(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_11569[2 /*14*/])))
											{
												Global_280004 = uVar2;
												Global_280005 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_57(iParam0, iVar4);
						Global_11569[2 /*14*/] = { func_218(iVar0, iVar4, iVar1, 4294967295) };
						if (!func_103(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_11569[2 /*14*/])))
						{
							Global_280004 = uVar2;
							Global_280005 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != 1849449579) && uVar8.f_10)
		{
			if (func_69(1757, Global_11566, 0) != uVar8[10])
			{
				Global_280004 = uVar2;
				Global_280005 = uVar3;
				return 0;
			}
		}
		Global_280004 = uVar2;
		Global_280005 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_206(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_102(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_11569[1 /*14*/].f_C) == Global_11569[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_11569[1 /*14*/].f_C) == Global_11569[1 /*14*/].f_4 || Global_11569[1 /*14*/].f_3 == 4294967295))
		{
			return 1;
		}
		if (((Global_11569[1 /*14*/].f_C == 0 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 6)) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3261533395, 1)) && unk_0x10B86AFFB106342E(Global_280004) > 0)
		{
			iVar16 = unk_0x10B86AFFB106342E(Global_280004);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				unk_0xB316418AA9C1867B(Global_280004, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != 1849449579)
				{
					FILE::INIT_SHOP_PED_PROP(&Var17);
					FILE::_0x5D5CAFF661DDF6FC(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_11569[1 /*14*/].f_C) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_11569[1 /*14*/].f_C))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_11569[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_59(iParam1)) && Global_11569[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_59(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_11568++;
			if (Global_11568 == 1)
			{
				if (func_92(iVar0, 11, func_57(iParam0, 11), 4294967295))
				{
					if (func_90(iVar0, 4, iParam2, &uVar18))
					{
						return func_102(iParam0, 4, uVar18);
					}
				}
				else if (func_89(iVar0, 4, iParam2, &uVar18))
				{
					return func_102(iParam0, 4, uVar18);
				}
			}
			Global_11568 = (Global_11568 - 1);
		}
	}
	return 0;
}

int func_103(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0xD4A8
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == 4294967197 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == 4294967197 || uParam5->f_1 == 4294967295)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_206(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_107(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_106(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_105(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_104(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_106(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_105(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_104(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_106(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_105(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_104(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_104(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDAAC
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_189(iParam0, iParam2, 14, 3);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 1) || FILE::_0x341DE7ED1D2A1BFD(func_189(iParam0, iParam2, 14, 3), 2452280943, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_189(iParam0, iParam2, 1, 3);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(func_189(iParam0, iParam2, 1, 3), 2452280943, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_189(iParam0, iParam2, 14, 4);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 1) || FILE::_0x341DE7ED1D2A1BFD(func_189(iParam0, iParam2, 14, 4), 2452280943, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_189(iParam0, iParam2, 1, 4);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(func_189(iParam0, iParam2, 1, 4), 2452280943, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDD29
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == 4294967295)
					{
						iParam3 = func_189(iParam0, iParam2, 1, 3);
					}
					if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == 4294967295)
					{
						iParam3 = func_189(iParam0, iParam2, 1, 4);
					}
					if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_106(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE14E
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == 4294967295)
					{
						iParam3 = func_189(iParam0, iParam2, 14, 3);
					}
					return FILE::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == 4294967295)
					{
						iParam3 = func_189(iParam0, iParam2, 14, 4);
					}
					return FILE::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_107(int iParam0, int iParam1, int iParam2)//Position - 0xE441
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE4DA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (func_100(iParam0))
	{
		return 4294967197;
	}
	if (func_109(iParam0))
	{
		return 4294967197;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_189(iParam1, iParam3, 11, 3);
				if (iVar0 != 4294967295)
				{
					iVar1 = FILE::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						FILE::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_79(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return 4294967197;
			}
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_189(iParam1, iParam3, 11, 4);
				if (iVar6 != 4294967295)
				{
					iVar7 = FILE::_0xC17AD0E5752BECDA(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						FILE::GET_VARIANT_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_79(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return 4294967197;
			}
		}
	}
	return 4294967197;
}

int func_109(int iParam0)//Position - 0xE8F9
{
	if (FILE::_0x341DE7ED1D2A1BFD(FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8)), 2170337719, 0))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)//Position - 0xE92B
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_111(int iParam0, int iParam1)//Position - 0xE97D
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	
	if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0))
	{
	}
	PED::_GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
	iVar1 = func_69(2095, iParam1, 0);
	iVar2 = func_69(2096, iParam1, 0);
	iVar3 = func_69(2097, iParam1, 0);
	iVar4 = func_69(2098, iParam1, 0);
	iVar5 = func_69(2099, iParam1, 0);
	iVar6 = func_69(2100, iParam1, 0);
	fVar7 = func_127(134, iParam1);
	fVar8 = func_127(135, iParam1);
	fVar9 = func_127(136, iParam1);
	bVar10 = func_71(160, iParam1);
	if (((((((((Var0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = func_69(2101, iParam1, 0);
		if (iVar11 > 0)
		{
			func_112(iParam0, iParam1, 0);
		}
	}
}

void func_112(int iParam0, int iParam1, bool bParam2)//Position - 0xEABD
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_126(iVar1);
		if (!bParam2)
		{
			fVar3 = func_127(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_125(iVar2, iParam1);
		}
		PED::_SET_PED_FACE_FEATURE(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_124(iVar4);
		iVar6 = func_123(iVar5);
		iVar7 = func_122(iVar5);
		if (iVar6 != 4294967295 && iVar7 != 4294967295)
		{
			if (!bParam2)
			{
				iVar10 = func_119(iVar6, iParam1, 4294967295);
				fVar11 = func_127(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_118(iVar6, iParam1);
				fVar11 = func_125(iVar7, iParam1);
			}
			PED::SET_PED_HEAD_OVERLAY(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_117(iVar5);
			iVar9 = func_116(iVar5);
			if (iVar8 != 4294967295)
			{
				if (!bParam2)
				{
					iVar13 = func_69(iVar8, iParam1, 0);
					iVar14 = func_69(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_115(iVar8, iParam1);
					iVar14 = func_115(iVar9, iParam1);
				}
				func_114(iVar13, &iVar12, &iVar15);
				PED::_SET_PED_HEAD_OVERLAY_COLOR(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_113(&iParam0, iParam1, bParam2);
}

void func_113(int iParam0, int iParam1, bool bParam2)//Position - 0xEBEF
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_127(157, iParam1);
	}
	else
	{
		fVar0 = func_125(157, iParam1);
	}
	if (*iParam0 == AUDIO::_0x0626A247D2405330())
	{
	}
	PED::_SET_PED_EYE_COLOR(*iParam0, SYSTEM::ROUND(fVar0));
}

void func_114(int iParam0, var uParam1, var uParam2)//Position - 0xEC2E
{
	int iVar0;
	
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_115(int iParam0, int iParam1)//Position - 0xEC4F
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_26B05F[iParam0 /*3*/][func_70(iParam1)];
	if (unk_0x4FB93AB9FE7E9240(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_116(int iParam0)//Position - 0xEC7A
{
	switch (iParam0)
	{
		case 2:
			return 2159;
		
		case 1:
			return 2160;
		
		case 5:
			return 2161;
		
		case 8:
			return 2162;
		
		case 10:
			return 2157;
		
		default:
	}
	return 4294967295;
}

int func_117(int iParam0)//Position - 0xECC6
{
	switch (iParam0)
	{
		case 2:
			return 2152;
		
		case 1:
			return 2153;
		
		case 5:
			return 2154;
		
		case 8:
			return 2155;
		
		case 10:
			return 2156;
		
		default:
	}
	return 4294967295;
}

int func_118(int iParam0, int iParam1)//Position - 0xED12
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_64();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	if (!HUD::_0x90A6526CF0381030(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_119(int iParam0, int iParam1, int iParam2)//Position - 0xF254
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_64();
	}
	iVar0 = 0;
	iVar1 = func_121(iParam0, iParam1);
	iVar2 = func_120(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_120(int iParam0)//Position - 0xF29A
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	return iVar0;
}

int func_121(int iParam0, int iParam1)//Position - 0xF63C
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_64();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	return iVar0;
}

int func_122(int iParam0)//Position - 0xF991
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return 4294967295;
}

int func_123(int iParam0)//Position - 0xFA30
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return 4294967295;
}

int func_124(int iParam0)//Position - 0xFADC
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return 4294967295;
}

float func_125(int iParam0, int iParam1)//Position - 0xFB73
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_272506[iParam0 /*3*/][func_70(iParam1)];
	if (HUD::_0x5FBD7095FE7AE57F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_126(int iParam0)//Position - 0xFB9E
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return 4294967295;
}

float func_127(int iParam0, int iParam1)//Position - 0xFC8A
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_272506[iParam0 /*3*/][func_70(iParam1)];
	if (STATS::STAT_GET_FLOAT(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0f;
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0xFCB6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<7> Var21;
	int iVar22;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = 4294967295;
		iVar2 = 4294967295;
		if (Global_4116E2 == iParam1)
		{
			iVar2 = Global_4116E1;
			iVar1 = Global_4116E0;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_189(iParam0, iParam1, 7, 3);
			iVar1 = func_180(iVar2);
			Global_4116E2 = iParam1;
			Global_4116E1 = iVar2;
			Global_4116E0 = iVar1;
		}
		iVar3 = 4294967295;
		iVar4 = 4294967295;
		if (Global_4116E5 == iParam3)
		{
			iVar4 = Global_4116E4;
			iVar3 = Global_4116E3;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_189(iParam0, iParam3, 11, 3);
			iVar3 = func_180(iVar4);
			Global_4116E5 = iParam3;
			Global_4116E4 = iVar4;
			Global_4116E3 = iVar3;
		}
		iVar5 = 4294967295;
		iVar6 = 4294967295;
		if (Global_4116E8 == iParam4)
		{
			iVar6 = Global_4116E7;
			iVar5 = Global_4116E6;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_189(iParam0, iParam4, 8, 3);
			iVar5 = func_180(iVar6);
			Global_4116E8 = iParam4;
			Global_4116E7 = iVar6;
			Global_4116E6 = iVar5;
		}
		iVar7 = 4294967295;
		iVar8 = 4294967295;
		if (Global_4116EB == iParam10)
		{
			iVar8 = Global_4116EA;
			iVar7 = Global_4116E9;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_189(iParam0, iParam10, 1, 3);
			iVar7 = func_180(iVar8);
			Global_4116EB = iParam10;
			Global_4116EA = iVar8;
			Global_4116E9 = iVar7;
		}
		if (iParam3 != 4294967197)
		{
			if ((FILE::_0x341DE7ED1D2A1BFD(iVar4, 2439348822, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 351511157, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2874141894, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar8, 3321753654, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3581268889, 0))
			{
				if (iParam1 != 0 && !(iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3581268889, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3922081864, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2191515025, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 531704825, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2191515025, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3922081864, 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 4174722810, 0))
		{
			if (iParam9 != 4294967197)
			{
				iVar9 = 4294967295;
				if (iParam9 >= 327)
				{
					iVar9 = func_189(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case 2322066652:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case 3412210475:
					case 3052341317:
					case 2936175212:
					case 2440153500:
					case 3037782224:
					case 4219301288:
					case 3843309782:
					case 2954974957:
					case 2307328441:
					case 1148780446:
					case 1379309694:
					case 491826867:
					case 1855607109:
					case 2332199449:
					case 2640850660:
					case 2809611010:
					case 3116754847:
					case 3528333487:
					case 665568109:
					case 4006662580:
					case 1772824957:
					case 1533381874:
					case 2282743366:
					case 2008237453:
					case 2990848683:
					case 2751536676:
					case 3440865360:
					case 3233863587:
					case 3678932145:
					case 1307111925:
					case 1759289928:
					case 3258386893:
					case 4091931946:
					case 917598912:
					case 682284723:
					case 481083063:
					case 114660105:
					case 1897981854:
					case 1601455173:
					case 1932815241:
					case 1626031863:
					case 926585800:
						return 0;
						break;
					}
			}
			if (iParam10 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2821155003, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1396865968, 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar4, 4231217130, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3424892835, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2460520549, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2192107526, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1784133476, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2575799735, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3020868293, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2875160829, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3853675954, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3509027759, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2848634098, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1830529185, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0))
					{
						return 0;
					}
					else if (func_130(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 4231217130, 0))
				{
					return 0;
				}
				else if (func_130(iParam0, iParam3))
				{
					return 0;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 4174722810, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3167131331, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0))
					{
						return 0;
					}
				}
				if (iParam10 != 4294967197)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3941896706, 0))
			{
				if (((FILE::_0x341DE7ED1D2A1BFD(iVar4, 3424892835, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2460520549, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2821155003, 0)) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3975398423, 0)))
		{
			if (iParam11 != 4294967197)
			{
				iVar10 = 4294967295;
				if (iParam11 >= 256)
				{
					iVar10 = func_189(iParam0, iParam11, 4, 3);
				}
				if (FILE::_0x341DE7ED1D2A1BFD(iVar10, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 654065530, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 4287858010, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3653355204, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 596326873, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3975398423, 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 974680318, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3581268889, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3515131827, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3208708908, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1021189127, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3167131331, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3622096127, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4098852308, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2639813129, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2687017741, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2575799735, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2875160829, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3509027759, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2943480357, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3803378421, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3466488725, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0))
				{
					return 0;
				}
				else if (!FILE::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 974680318, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3284162009, 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3975398423, 0))
		{
			if (iParam8 != 4294967197)
			{
				return 0;
			}
		}
		if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3581268889, 0))
		{
			if (iParam9 >= 327 && FILE::_0x341DE7ED1D2A1BFD(func_189(iParam0, iParam9, 14, 3), 3581268889, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && FILE::_0x341DE7ED1D2A1BFD(func_189(iParam0, iParam9, 14, 3), 3581268889, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3175960345, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 248194463, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 572350888, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2477611561, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3581268889, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 140732128, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1538937264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3853675954, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3509027759, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3466488725, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4195902460, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4146039002, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3859427410, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2919088559, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2516701414, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2380584066, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 1553766533, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != 4294967197)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != 4294967197)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2066241403, 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != 4294967197)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != 4294967197)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != 4294967197)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != 4294967197)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3374433204, 0)))
		{
			if (iParam3 != 4294967197)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_184(iParam0, iParam3, 4294967295)) || iVar3 == 13)
				{
					if (((FILE::_0x341DE7ED1D2A1BFD(iVar4, 2848634098, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2943480357, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4287858010, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2516701414, 0))) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)))
				{
				}
				else
				{
					iVar0 = func_57(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_180(func_189(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != 4294967197)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_184(iParam0, iParam3, 4294967295)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((FILE::_0x341DE7ED1D2A1BFD(iVar4, 2848634098, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4287858010, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2516701414, 0))) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0))) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0))) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0))) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3401840379, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
				}
				else
				{
					iVar0 = func_57(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_180(func_189(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!FILE::_0x341DE7ED1D2A1BFD(iVar6, 4287858010, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2344027589, 0))
		{
			if (iParam3 != 4294967197)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == 4267801282) || iVar4 == 4021738861) || iVar4 == 2176909583) || iVar4 == 2485888484) || iVar4 == 2772551696) || iVar4 == 3082382591) || iVar4 == 3408303065) || iVar4 == 3648467066) || iVar4 == 4004076254) || iVar4 == 15400801) || iVar4 == 3809553847) || iVar4 == 4040608066) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || iVar4 == 1343601766) || iVar4 == 567992305) || iVar4 == 4102260035) || iVar4 == 1156347903) || iVar4 == 1853344529) || iVar4 == 1597648022) || iVar4 == 2299297850)
				{
					if (!FILE::_0x341DE7ED1D2A1BFD(iVar4, 4287858010, 0))
					{
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
			else if (iParam4 != 4294967197)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0))) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3401840379, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!FILE::_0x341DE7ED1D2A1BFD(iVar6, 4287858010, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2923543492, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (((iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) && FILE::_0x341DE7ED1D2A1BFD(iVar2, 4017285990, 0)) || ((iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 4017285990, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 4186639197, 0))
		{
			if (iParam4 != 4294967197)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == 2403948617) || iVar6 == 2711026916) || iVar6 == 3601557260) || iVar6 == 2165554142) || iVar6 == 3014795546) || iVar6 == 3323774447) || iVar6 == 389965873) || iVar6 == 2843675828) || iVar6 == 4244353964) || iVar6 == 318070129) || iVar6 == 2443172568) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == 2989641374) || iVar6 == 242616108) || iVar6 == 1085565864) || iVar6 == 2326757277) || iVar6 == 2028002304) || iVar6 == 830393657) || iVar6 == 3821220287) || iVar6 == 240453350) || iVar6 == 1083927410) || iVar6 == 3920237998) || iVar6 == 399897093) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 1458930564, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2048281121, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 19149565, 0))
				{
					if (!FILE::_0x341DE7ED1D2A1BFD(iVar6, 4287858010, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!FILE::_0x341DE7ED1D2A1BFD(iVar6, 4287858010, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3916060468, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == 2403948617) || iVar6 == 2711026916) || iVar6 == 3601557260) || iVar6 == 2165554142) || iVar6 == 3014795546) || iVar6 == 3323774447) || iVar6 == 389965873) || iVar6 == 2843675828) || iVar6 == 4244353964) || iVar6 == 318070129) || iVar6 == 2443172568) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == 3920237998) || iVar6 == 399897093) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0))
				{
					if (!FILE::_0x341DE7ED1D2A1BFD(iVar6, 4287858010, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!FILE::_0x341DE7ED1D2A1BFD(iVar6, 4287858010, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3599263835, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_129(iVar6)) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 310957510, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2821155003, 0))
		{
			if (iParam3 != 4294967197)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)))
				{
					return 0;
				}
				else if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3581268889, 0))
				{
					return 0;
				}
			}
			if (iParam8 != 4294967197)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar11 = 4294967295;
		iVar12 = 4294967295;
		if (Global_4116E2 == iParam1)
		{
			iVar12 = Global_4116E1;
			iVar11 = Global_4116E0;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_189(iParam0, iParam1, 7, 4);
			iVar11 = func_180(iVar12);
			Global_4116E2 = iParam1;
			Global_4116E1 = iVar12;
			Global_4116E0 = iVar11;
		}
		iVar13 = 4294967295;
		iVar14 = 4294967295;
		if (Global_4116E5 == iParam3)
		{
			iVar14 = Global_4116E4;
			iVar13 = Global_4116E3;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_189(iParam0, iParam3, 11, 4);
			iVar13 = func_180(iVar14);
			Global_4116E5 = iParam3;
			Global_4116E4 = iVar14;
			Global_4116E3 = iVar13;
		}
		iVar15 = 4294967295;
		iVar16 = 4294967295;
		if (Global_4116E8 == iParam4)
		{
			iVar16 = Global_4116E7;
			iVar15 = Global_4116E6;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_189(iParam0, iParam4, 8, 4);
			iVar15 = func_180(iVar16);
			Global_4116E8 = iParam4;
			Global_4116E7 = iVar16;
			Global_4116E6 = iVar15;
		}
		iVar17 = 4294967295;
		iVar18 = 4294967295;
		if (Global_4116EB == iParam10)
		{
			iVar18 = Global_4116EA;
			iVar17 = Global_4116E9;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_189(iParam0, iParam10, 1, 4);
			iVar17 = func_180(iVar18);
			Global_4116EB = iParam10;
			Global_4116EA = iVar18;
			Global_4116E9 = iVar17;
		}
		iVar19 = 4294967295;
		if (iParam9 >= 327)
		{
			iVar19 = func_189(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != 4294967197)
		{
			if (((FILE::_0x341DE7ED1D2A1BFD(iVar14, 2439348822, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 351511157, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3995877949, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2874141894, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar18, 3321753654, 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2974827720, 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 3581268889, 0))
			{
				if (iParam1 != 0 && !(iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 3581268889, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 3922081864, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 2191515025, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 531704825, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 2191515025, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 3922081864, 0))
			{
				if (iParam4 == 66)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar12 == 281786684 || iVar12 == 653911448) || iVar12 == 2775409281)
		{
			if (iParam9 != 4294967197)
			{
				switch (iVar19)
				{
					case 1446628467:
					case 2356918518:
					case 2041418586:
					case 2952069096:
					case 2026483804:
					case 2317439755:
					case 2624518054:
					case 2909936092:
					case 3206856001:
					case 2764048460:
					case 3073551665:
					case 3665097653:
					case 530255864:
					case 38181873:
					case 319110510:
					case 482562282:
					case 3116796654:
					case 3414240867:
					case 3595191285:
					case 3893094264:
					case 3594470363:
					case 3890538278:
					case 2160728306:
					case 2158591042:
					case 1861212367:
					case 3505822975:
					case 4071874681:
					case 763352592:
					case 3745069444:
					case 2318077801:
					case 2884391659:
					case 3865987054:
					case 2563484842:
					case 2904609816:
					case 2529150874:
					case 2761646929:
					case 939297301:
					case 1186965403:
					case 1575507436:
					case 1783131820:
					case 2059866009:
					case 2297277414:
					case 2677758273:
					case 2903012379:
					case 2461997424:
						return 0;
						break;
					}
			}
			if (iParam10 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 240476421, 0))
			{
				return 0;
			}
		}
		if (iParam3 != 4294967197)
		{
			if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2821155003, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 1396865968, 0))
				{
					if ((((((((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar14, 4231217130, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3547384111, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3561175191, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1830529185, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0))
					{
						return 0;
					}
					else if (func_130(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_130(iParam0, iParam3) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4231217130, 0))
				{
					return 0;
				}
				if (iParam10 != 4294967197)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 3941896706, 0))
			{
				if ((((FILE::_0x341DE7ED1D2A1BFD(iVar14, 3424892835, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3120042828, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1769225721, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2460520549, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2821155003, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 4231217130, 0))
			{
				return 0;
			}
		}
		else if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 596326873, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 974680318, 0))
			{
				return 0;
			}
		}
		if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 3581268889, 0))
		{
			if (iParam9 >= 327 && FILE::_0x341DE7ED1D2A1BFD(func_189(iParam0, iParam9, 14, 4), 3581268889, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && FILE::_0x341DE7ED1D2A1BFD(func_189(iParam0, iParam9, 14, 4), 3581268889, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2821155003, 0)) || (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 3975398423, 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != 4294967197)
			{
				iVar20 = 4294967295;
				if (iParam11 >= 256)
				{
					iVar20 = func_189(iParam0, iParam11, 4, 4);
				}
				if (FILE::_0x341DE7ED1D2A1BFD(iVar20, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != 4294967295 && (FILE::_0x341DE7ED1D2A1BFD(iVar12, 3374433204, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar12, 1537081084, 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar14, 684992453, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3474242399, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3422517591, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1714969731, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1055526375, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 947651647, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1830529185, 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((FILE::_0x341DE7ED1D2A1BFD(iVar14, 700658917, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 745826556, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 144417099, 0))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 1537081084, 0))
					{
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
			else if (iParam2 == 8)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 1553766533, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2380584066, 0))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 3374433204, 0))
					{
						if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 441715397, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 264959411, 0))
						{
							if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 1828206051, 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 1828206051, 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != 4294967197)
		{
			if ((iVar19 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar19, 1406402954, 1)) || (iVar19 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar19, 499051427, 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 596326873, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (((((((FILE::_0x341DE7ED1D2A1BFD(iVar14, 2936078416, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3561175191, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3466488725, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (func_184(iParam0, iParam3, 4294967295))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3533503320, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2947481270, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3355441939, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2192107526, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1784133476, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3864636947, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2943480357, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2030343924, 0)) || iVar14 == 998321559) || iVar14 == 619380843) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4239416730, 0))
				{
					if (!FILE::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3764877471, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1965569012, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3094454078, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3581268889, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1843965488, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4239863004, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3515131827, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3208708908, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 140732128, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2106216756, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1627756587, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3167131331, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3622096127, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 572416369, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4098852308, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2687017741, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1976716889, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2099109084, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3853675954, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3547384111, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1407863332, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2308552066, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3509027759, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3191922138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0))
				{
					return 0;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1455992833, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3424892835, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3120042828, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3117486850, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2947481270, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2639813129, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2189108303, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1893564692, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1710451520, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1416808511, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1641506460, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 699233865, 0)) || iVar16 == 3729670221) || iVar16 == 262349558) || iVar16 == 3377163241) || iVar16 == 3138899842) || iVar16 == 2170215433) || iVar16 == 1812836719) || iVar16 == 1582116924) || iVar16 == 877452376) || iVar16 == 1117419763) || iVar16 == 732885188) || iVar16 == 3257146800) || iVar16 == 4215869433) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2192107526, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1784133476, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2687017741, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1976716889, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2099109084, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2875160829, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2206820464, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3942519903, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3652415946, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3475397808, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2274898971, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3315498572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 4236554734, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3859427410, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 974680318, 0))
				{
					if (!FILE::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((FILE::_0x341DE7ED1D2A1BFD(iVar16, 1965569012, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 684992453, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1353777856, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3087683953, 0))
				{
					return 0;
				}
				else if (func_181(iParam0, iParam4, 0) != 4294967197)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != 4294967197)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 654065530, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 2943480357, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2974827720, 0)))
		{
			if (iParam3 != 4294967197)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2412047274, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (iParam4 >= 136 && FILE::_0x341DE7ED1D2A1BFD(func_189(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != 4294967197)
			{
				if (iVar19 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar19, 2974827720, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != 4294967197)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2412047274, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (iParam4 >= 136 && FILE::_0x341DE7ED1D2A1BFD(func_189(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != 4294967197)
			{
				if (iVar19 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar19, 2974827720, 1))
				{
					FILE::_0x5D5CAFF661DDF6FC(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != 4294967197)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2412047274, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (iParam4 >= 136 && FILE::_0x341DE7ED1D2A1BFD(func_189(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != 4294967197)
			{
				if (iVar19 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar19, 2974827720, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != 4294967197)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1965569012, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2412047274, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 396458410, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3533503320, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 103539798, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2947481270, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3300263412, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3175734607, 0))) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3853675954, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3547384111, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2308552066, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3864636947, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3561175191, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2943480357, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2030343924, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3466488725, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 602650322, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 905042630, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1204125293, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2439348822, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2919088559, 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2083259958, 0)))
		{
			if (iParam3 != 4294967197)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2412047274, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 396458410, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3533503320, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 821147517, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 103539798, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2947481270, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3300263412, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3175734607, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2687017741, 0))) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1965569012, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3853675954, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3547384111, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2308552066, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3864636947, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3561175191, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2943480357, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2030343924, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3466488725, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1831422288, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3094454078, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2412047274, 0))) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3547384111, 0))
				{
					if (iParam1 >= 55 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 1965569012, 0))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
				else if (((FILE::_0x341DE7ED1D2A1BFD(iVar16, 2508519779, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3745123536, 0))
				{
					return 0;
				}
				else if ((FILE::_0x341DE7ED1D2A1BFD(iVar16, 2591763688, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2879967043, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 4126630879, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != 4294967197)
			{
				if (iVar19 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar19, 2974827720, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != 4294967197)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3094454078, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3764877471, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 103539798, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3300263412, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != 4294967197)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3094454078, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3764877471, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 4287858010, 0))
				{
					return 0;
				}
				else if (((FILE::_0x341DE7ED1D2A1BFD(iVar16, 2508519779, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3745123536, 0))
				{
					return 0;
				}
			}
			if (iParam8 != 4294967197)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 1716958480, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (iVar14 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3547384111, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != 4294967197)
			{
				iVar22 = 4294967295;
				if (iParam11 >= 256)
				{
					iVar22 = func_189(iParam0, iParam11, 4, 4);
				}
				if (FILE::_0x341DE7ED1D2A1BFD(iVar22, 4261935729, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_129(int iParam0)//Position - 0x14B72
{
	if (iParam0 != 4294967295)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 3511317604:
		case 691352495:
		case 1313566316:
		case 451909412:
		case 1552550633:
		case 4088416422:
		case 860928119:
		case 3849169953:
		case 1107219923:
		case 4121250964:
		case 2277826910:
		case 3756663070:
		case 3059367564:
		case 3702725296:
		case 1815489089:
		case 3463872055:
		case 2062043045:
		case 3202866970:
		case 3229635276:
		case 2828972680:
		case 2778430579:
		case 507503642:
		case 2824569335:
		case 2902884777:
		case 264425668:
		case 4206107907:
		case 560755735:
		case 157858412:
		case 3701402237:
		case 3781814895:
		case 4008021770:
		case 2004948615:
			return 1;
			break;
	}
	return 0;
}

int func_130(int iParam0, int iParam1)//Position - 0x14C53
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_189(iParam0, iParam1, 11, 3);
		if (iVar0 != 4294967295)
		{
			if (((((((((((((((((((((((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3175734607, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2192107526, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1784133476, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1976716889, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2099109084, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2575799735, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3020868293, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1431529976, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1723403459, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2875160829, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3853675954, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3509027759, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2848634098, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 492620493, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1690933245, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1927516484, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2691772368, 0))
			{
				return 1;
			}
		}
		if (iVar0 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2276967906, 0))
			{
				return 1;
			}
		}
		return func_184(iParam0, iParam1, 4294967295);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_189(iParam0, iParam1, 11, 4);
		iVar2 = 4294967295;
		if (iVar1 != 4294967295)
		{
			iVar2 = func_180(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2901811106, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 1843965488, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 3547384111, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 3561175191, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 1690933245, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 1927516484, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_131(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x15181
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_175(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = func_174(iVar0, iParam1);
	if (iVar1 != 4294967295)
	{
		if (iParam2 == 4294967295)
		{
			iParam2 = Global_11566;
		}
		func_199(iVar1, 1, iParam2);
	}
	func_132(iParam0, bParam3, 0);
}

void func_132(int iParam0, bool bParam1, bool bParam2)//Position - 0x151CD
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_11566;
		PED::_CLEAR_PED_FACIAL_DECORATIONS(iParam0);
		iVar2 = func_173(iParam0);
		bVar3 = func_166(iParam0, 0);
		bVar4 = func_162(iParam0);
		bVar5 = func_161(iParam0);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (func_158(iVar6, iVar0))
			{
				if (func_151(&Var1, iVar6, iVar2, iParam0, 4294967295))
				{
					if (func_148(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::_SET_PED_DECORATION(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (func_158(123, iVar0))
		{
			if (PED::_GET_TATTOO_ZONE(2575696819, 2470940806) != 7)
			{
				PED::_SET_PED_DECORATION(iParam0, 2575696819, 2470940806);
			}
		}
		iVar8 = FILE::_GET_NUM_DECORATIONS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILE::_GET_TATTOO_COLLECTION_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILE::_IS_DLC_DATA_EMPTY(Var9))
				{
					iVar10 = (129 + iVar7);
					if (func_158(iVar10, iVar0))
					{
						if (func_148(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!func_134(Var9.f_2, Var9.f_3))
							{
								PED::_SET_PED_DECORATION(iParam0, Var9.f_2, Var9.f_3);
								func_133(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

void func_133(int iParam0, int iParam1, int iParam2)//Position - 0x15331
{
	switch (iParam1)
	{
		case 202420620:
			switch (iParam2)
			{
				case 1495413374:
					PED::_SET_PED_DECORATION(iParam0, 202420620, 3793820136);
					break;
			}
			switch (iParam2)
			{
				case 3080744829:
					PED::_SET_PED_DECORATION(iParam0, 202420620, 2555545128);
					break;
			}
			break;
		
		case 3278445300:
			switch (iParam2)
			{
				case 1321477520:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 5866095);
					break;
				
				case 3624132081:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 1257645214);
					break;
				
				case 4262651638:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2356089588);
					break;
				
				case 3579465656:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 177616986);
					break;
				
				case 812138662:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3857326654);
					break;
				
				case 2344457391:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 460297451);
					break;
				
				case 1850969667:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3705068271);
					break;
				
				case 997671095:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 342543493);
					break;
				
				case 2768500028:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3344833108);
					break;
				
				case 3413114517:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2043701187);
					break;
				
				case 3723975078:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 794519137);
					break;
				
				case 3219467157:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 90598123);
					break;
				
				case 3503278242:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 4143671092);
					break;
				
				case 699980662:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 386731882);
					break;
				
				case 3711737208:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3165949897);
					break;
				
				case 1922201848:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3119890044);
					break;
				
				case 3527264388:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2584384061);
					break;
				
				case 1979813112:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 900966291);
					break;
				
				case 2238694704:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 4141212614);
					break;
			}
			switch (iParam2)
			{
				case 371389080:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 580372087);
					break;
				
				case 3773762709:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3968395205);
					break;
				
				case 1685732560:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2744434991);
					break;
				
				case 2908523918:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2381561611);
					break;
				
				case 2588319015:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3338626153);
					break;
				
				case 3775009430:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2063062018);
					break;
				
				case 653935582:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 605481338);
					break;
				
				case 2111779395:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2586040309);
					break;
				
				case 428988289:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 264383347);
					break;
				
				case 2391004474:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 1101363062);
					break;
				
				case 1365770911:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2331712927);
					break;
				
				case 42029862:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 390663856);
					break;
				
				case 438631811:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 916481637);
					break;
				
				case 2816251405:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 1930151778);
					break;
				
				case 2899436067:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2563950594);
					break;
				
				case 30333135:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2379769414);
					break;
				
				case 1783341339:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 4269431579);
					break;
				
				case 4278890170:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 1193200233);
					break;
				
				case 3461324112:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 1031663893);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam2)
			{
				case 2976164949:
					PED::_SET_PED_DECORATION(iParam0, 1616273011, 3479260505);
					break;
				
				case 2928217253:
					PED::_SET_PED_DECORATION(iParam0, 1616273011, 3228839791);
					break;
			}
			break;
		
		case 3100036948:
			switch (iParam2)
			{
				case 3453728753:
					PED::_SET_PED_DECORATION(iParam0, 3100036948, 3853547334);
					break;
				
				case 2889112351:
					PED::_SET_PED_DECORATION(iParam0, 3100036948, 1647997020);
					break;
			}
			break;
		
		case 3517691514:
			switch (iParam2)
			{
				case 671171671:
					PED::_SET_PED_DECORATION(iParam0, 3517691514, 904519720);
					break;
				
				case 1911627074:
					PED::_SET_PED_DECORATION(iParam0, 3517691514, 3687575798);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam2)
			{
				case 266230635:
					PED::_SET_PED_DECORATION(iParam0, 484754152, 3706417613);
					PED::_SET_PED_DECORATION(iParam0, 484754152, 464027076);
					break;
				
				case 3033179461:
					PED::_SET_PED_DECORATION(iParam0, 484754152, 3329475802);
					PED::_SET_PED_DECORATION(iParam0, 484754152, 939374190);
					break;
			}
			break;
	}
}

int func_134(int iParam0, int iParam1)//Position - 0x1587D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	switch (iParam0)
	{
		case 2149853087:
			switch (iParam1)
			{
				case 3279574649:
				case 1817749559:
					if (func_145(25032, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3279574649)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1742471685:
				case 1403640225:
					if (func_145(25033, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1742471685)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 408116861:
				case 1306937694:
					if (func_145(25034, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 408116861)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2439639698:
				case 4199433301:
					if (func_145(25035, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2439639698)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1578402908:
				case 2423515410:
					if (func_145(25036, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1578402908)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2871600622:
				case 3174124050:
					if (func_145(25037, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2871600622)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1611107047:
				case 2081997561:
					if (func_145(25038, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1611107047)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 742927305:
				case 2955752373:
					if (func_145(25039, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 742927305)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2716133631:
				case 9807447:
					if (func_145(25040, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2716133631)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 773738667:
				case 4058961977:
					if (func_145(25041, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 773738667)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 213007702:
				case 2824172702:
					if (func_145(25042, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 213007702)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 432208089:
				case 2194098912:
					if (func_145(25043, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 432208089)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 35817542:
				case 805626890:
					if (func_145(25044, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 35817542)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2508887203:
				case 3856479567:
					if (func_145(25045, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2508887203)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4079043990:
				case 1258452311:
					if (func_145(25046, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4079043990)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1275581512:
				case 2907379409:
					if (func_145(25047, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1275581512)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3080958277:
				case 390131826:
					if (func_145(25048, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3080958277)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1639713863:
				case 3361102206:
					if (func_145(25049, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1639713863)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 529311368:
				case 42888304:
					if (func_145(25050, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 529311368)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3261071432:
				case 2782349107:
					if (func_145(25051, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3261071432)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 924043677:
				case 1805955770:
					if (func_145(25052, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 924043677)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3720218030:
				case 2040741242:
					if (func_145(25053, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3720218030)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 519463901:
				case 2722851469:
					if (func_145(25054, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 519463901)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3651614109:
				case 2193688522:
					if (func_145(25055, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3651614109)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1571011017:
				case 2288750428:
					if (func_145(25056, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1571011017)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4200426360:
				case 1445470992:
					if (func_145(25057, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4200426360)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1884218662:
				case 31459402:
					if (func_145(25058, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1884218662)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3949705427:
				case 850282323:
					if (func_145(25059, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3949705427)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3272108238:
				case 1518409673:
					if (func_145(25060, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3272108238)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2508644372:
				case 576453072:
					if (func_145(25061, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2508644372)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2085269022:
				case 1343575520:
					if (func_145(25062, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2085269022)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1511882653:
				case 3050911507:
					if (func_145(25063, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1511882653)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3787980911:
				case 1650491806:
					if (func_145(25064, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3787980911)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3420885708:
				case 507754313:
					if (func_145(25065, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3420885708)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2251561359:
				case 3126231503:
					if (func_145(25066, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2251561359)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 59038842:
				case 539301314:
					if (func_145(25067, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 59038842)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1101237057:
				case 485114319:
					if (func_145(25068, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1101237057)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3637431619:
				case 1397146165:
					if (func_145(25069, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3637431619)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2201382271:
				case 3372054796:
					if (func_145(25070, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2201382271)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 908383468:
				case 898093918:
					if (func_145(25071, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 908383468)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2686206897:
				case 3781150267:
					if (func_145(25072, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2686206897)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1373660540:
				case 134762953:
					if (func_145(25073, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1373660540)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1854316713:
				case 252404144:
					if (func_145(25074, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1854316713)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4175016100:
				case 168579849:
					if (func_145(25075, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4175016100)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2645125068:
				case 1888095634:
					if (func_145(25076, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2645125068)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2654202371:
				case 3248730510:
					if (func_145(25077, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2654202371)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1787927716:
				case 33901453:
					if (func_145(25078, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1787927716)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 104283481:
				case 2251734358:
					if (func_145(25079, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 104283481)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 378263500:
				case 1113927554:
					if (func_145(25080, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 378263500)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3233751987:
				case 2692407995:
					if (func_145(25081, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3233751987)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1034166199:
				case 3127154998:
					if (func_145(25082, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1034166199)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1828057305:
				case 1912961832:
					if (func_145(25083, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1828057305)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2808669915:
				case 647456058:
					if (func_145(25084, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2808669915)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3754200137:
				case 3577444135:
					if (func_145(25085, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3754200137)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3059006604:
				case 2653097029:
					if (func_145(25086, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3059006604)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3965650301:
				case 1857030685:
					if (func_145(25087, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3965650301)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3713087024:
				case 3220044650:
					if (func_145(25088, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3713087024)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2487621862:
				case 2750658625:
					if (func_145(25089, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2487621862)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3276557861:
				case 3814592076:
					if (func_145(25090, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3276557861)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4158955398:
				case 3136660877:
					if (func_145(25091, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4158955398)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2225472569:
				case 808115088:
					if (func_145(25092, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2225472569)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3652080291:
				case 1544542048:
					if (func_145(25093, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3652080291)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2484129658:
				case 212713658:
					if (func_145(25094, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2484129658)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1034484576:
				case 3757490169:
					if (func_145(25095, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1034484576)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1979445594:
				case 2227834618:
					if (func_145(25096, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1979445594)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2761089960:
				case 1060051174:
					if (func_145(25097, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2761089960)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3402712309:
				case 2038375002:
					if (func_145(25098, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3402712309)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3640745036:
				case 4038592993:
					if (func_145(25099, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3640745036)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 450544862:
				case 3330546742:
					if (iParam1 == 450544862)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 202420620:
			switch (iParam1)
			{
				case 1495413374:
				case 3080744829:
					if (func_145(22108, 4294967295, 4294967295) || func_145(25006, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1495413374)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 370906922:
				case 3215190484:
					if (func_145(9481, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 370906922)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 531742637:
				case 3345977130:
					if (func_145(9470, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 531742637)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4069161506:
				case 1382201813:
					if (func_145(9475, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4069161506)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3670380344:
				case 1576375706:
					if (func_145(9472, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3670380344)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 915144902:
				case 2938466779:
					if (func_145(9465, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 915144902)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4052221253:
				case 1838019927:
					if (func_145(9463, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4052221253)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1620048835:
				case 618955885:
					if (func_145(9464, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1620048835)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3197364028:
				case 909858453:
					if (func_145(9468, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3197364028)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3634294757:
				case 1809389163:
					if (func_145(9469, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3634294757)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4290325108:
				case 3912596849:
					if (func_145(9479, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4290325108)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1855977539:
				case 4004018258:
					if (func_145(9473, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1855977539)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1537270222:
				case 381474823:
					if (func_145(9480, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1537270222)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3068397526:
				case 570088958:
					if (func_145(9476, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3068397526)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1641457991:
				case 1093167087:
					if (func_145(9477, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1641457991)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1366312361:
				case 2967569550:
					if (func_145(9471, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1366312361)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2737854075:
				case 655777349:
					if (func_145(9474, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2737854075)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2604396882:
				case 2798061676:
					if (func_145(9467, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2604396882)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3787763041:
				case 3251957114:
					if (func_145(9478, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3787763041)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2490069657:
				case 2968890285:
					if (func_145(9462, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2490069657)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2919733873:
				case 3174643924:
					if (func_145(9466, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2919733873)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 490066935:
				case 2711346369:
					if (func_145(22126, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 490066935)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1193725595:
				case 1407674396:
					if (func_145(22127, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1193725595)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 628493116:
				case 4050887464:
					if (func_145(22128, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 628493116)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2182811778:
				case 1055951410:
					if (func_145(22124, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2182811778)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1511337702:
				case 1092910333:
					if (func_145(22130, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1511337702)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3667300768:
				case 2420112636:
					if (func_145(22125, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3667300768)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 768324163:
				case 2915775040:
					if (func_145(22129, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 768324163)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2846205483:
				case 1435106801:
					if (func_145(22131, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2846205483)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 868551738:
				case 3042283349:
					if (func_145(22132, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 868551738)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
			}
			switch (iParam1)
			{
				case 3273704435:
				case 2914359593:
					if (func_145(22147, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3273704435)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4030519365:
				case 1010167914:
					if (func_145(22148, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4030519365)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3642839861:
				case 1059266367:
					if (func_145(22149, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3642839861)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3684952697:
				case 1869746711:
					if (func_145(22150, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3684952697)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 848073973:
				case 167494616:
					if (func_145(22151, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 848073973)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1561087717:
				case 231256171:
					if (func_145(22152, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1561087717)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2067249852:
				case 2253771008:
					if (func_145(22153, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2067249852)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1963924398:
				case 4063172076:
					if (func_145(22154, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1963924398)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3396417020:
				case 3087503657:
					if (func_145(22155, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3396417020)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3220788605:
				case 2023442158:
					if (func_145(22156, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3220788605)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3926350552:
				case 3001773213:
					if (func_145(22157, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3926350552)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4216400795:
				case 767365246:
					if (func_145(22158, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4216400795)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1623651387:
				case 3976924357:
					if (func_145(22159, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1623651387)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3064987056:
				case 3554359290:
					if (func_145(22160, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3064987056)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2736645870:
				case 126660566:
					if (func_145(22161, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2736645870)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 518190097:
				case 4042233903:
					if (func_145(22162, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 518190097)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2298924002:
				case 3250830683:
					if (func_145(22163, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2298924002)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1720844546:
				case 3403205002:
					if (func_145(22164, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1720844546)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4274257317:
				case 1410738248:
					if (func_145(22165, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4274257317)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2677583717:
				case 2316239806:
					if (func_145(22166, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2677583717)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3769832231:
				case 1684642458:
					if (func_145(22167, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3769832231)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1796039054:
				case 4147476956:
					if (func_145(22168, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1796039054)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1250030109:
				case 2872849300:
					if (func_145(22169, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1250030109)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3099091001:
				case 3981035871:
					if (func_145(22170, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3099091001)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 672890092:
				case 211076563:
					if (func_145(22171, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 672890092)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 413298313:
				case 355035035:
					if (func_145(22172, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 413298313)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1157302328:
				case 2847658428:
					if (func_145(22173, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1157302328)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2730509825:
				case 1802655618:
					if (func_145(22174, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2730509825)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1152621988:
				case 3231225140:
					if (func_145(22175, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1152621988)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2333675947:
				case 1988028531:
					if (func_145(22176, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2333675947)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2382376222:
				case 73898487:
					if (func_145(22177, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2382376222)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1049766626:
				case 3253154178:
					if (func_145(22178, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1049766626)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam1)
			{
				case 2171481858:
				case 1457900554:
					if (func_145(15426, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2171481858)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3479260505:
				case 3228839791:
					if (func_145(15422, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3479260505)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2976164949:
				case 2928217253:
					if (func_145(15423, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2976164949)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 306110040:
				case 1944822196:
					if (func_145(15421, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 306110040)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1828101251:
				case 2655677837:
					if (func_145(15427, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1828101251)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3375652548:
				case 1282565442:
					if (func_145(15419, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3375652548)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1971111649:
				case 3410686596:
					if (func_145(15420, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1971111649)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
			}
			switch (iParam1)
			{
				case 1029334921:
				case 3972875916:
					if (func_145(15394, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1029334921)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3760111810:
				case 3126392231:
					if (func_71(209, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3760111810)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3778634034:
				case 756873456:
					if (func_145(15406, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3778634034)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 485135095:
				case 3564929588:
					if (func_145(15395, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 485135095)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1713551997:
				case 3324508810:
					if (func_71(209, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1713551997)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2804308795:
				case 975601953:
					if (func_145(15410, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2804308795)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2559332058:
				case 1614208560:
					if (func_145(15407, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2559332058)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1931303956:
				case 3568934735:
					if (func_71(209, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1931303956)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2363349808:
				case 2469980134:
					if (func_71(209, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2363349808)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2568634995:
				case 417579524:
					if (func_145(15414, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2568634995)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2912044766:
				case 734151492:
					if (func_145(15415, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2912044766)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 452778672:
				case 2528104976:
					if (func_145(15399, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 452778672)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2518176946:
				case 579562906:
					if (func_145(15404, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2518176946)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2306910001:
				case 3675212365:
					if (func_71(209, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2306910001)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 816707921:
				case 1424441799:
					if (func_145(15392, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 816707921)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 744446190:
				case 2889930927:
					if (func_145(15390, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 744446190)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 917772807:
				case 1929056908:
					if (func_145(15402, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 917772807)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4002044941:
				case 4260428506:
					if (func_145(15416, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4002044941)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2799534611:
				case 1898518287:
					if (func_71(209, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2799534611)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 4054732749:
			switch (iParam1)
			{
				case 769964545:
				case 1916093085:
					if (func_145(9366, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 769964545)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1424500982:
				case 3593481096:
					if (func_145(9367, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1424500982)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2484182111:
				case 1951718630:
					if (func_145(9369, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2484182111)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 837990279:
				case 2312988435:
					if (func_145(9368, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 837990279)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1752551314:
				case 468661890:
					if (func_145(9365, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1752551314)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 735155845:
				case 1907925586:
					if (func_145(9364, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 735155845)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1863251462:
				case 646243571:
					if (func_145(9363, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1863251462)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2152908533:
				case 1953935161:
					if (func_145(9362, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2152908533)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4087376191:
				case 874867224:
					if (func_145(9370, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4087376191)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3362153409:
				case 1344008898:
					if (func_145(9371, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3362153409)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3981464097:
				case 1297781304:
					if (func_145(9372, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3981464097)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 718936417:
				case 1977233252:
					if (func_145(9373, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 718936417)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3187317691:
				case 4100556952:
					if (func_145(9374, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3187317691)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 39090475:
				case 392012609:
					if (func_145(9384, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 39090475)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1628251208:
				case 705148450:
					if (func_145(9385, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1628251208)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 3100036948:
			switch (iParam1)
			{
				case 3673611693:
				case 4248445491:
					if (func_145(7551, 4294967295, 4294967295) || func_69(3789, 4294967295, 0) >= Global_40001.f_3F35)
					{
						return 0;
					}
					if (iParam1 == 3673611693)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3288764775:
				case 2745749676:
					if (func_145(7467, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3288764775)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2460917757:
				case 1674429052:
					if (func_145(7468, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2460917757)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2234594716:
				case 4040297700:
					if (func_145(7469, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2234594716)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1057304170:
				case 1802602254:
					if (func_145(7470, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1057304170)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1421572640:
				case 3353895036:
					if (func_145(7471, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1421572640)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 481259621:
				case 2450217779:
					if (func_145(7472, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 481259621)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1227497670:
				case 82745424:
					if (func_145(7473, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1227497670)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 319276780:
				case 3621507213:
					if (func_145(7474, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 319276780)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2070827921:
				case 4195012800:
					if (func_145(7475, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2070827921)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1433629991:
				case 2078163456:
					if (func_145(7476, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1433629991)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2581972646:
				case 1362343227:
					if (func_145(7477, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2581972646)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2125094286:
				case 1176005743:
					if (func_145(7478, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2125094286)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 712298404:
				case 2790410077:
					if (func_145(7479, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 712298404)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1998072324:
				case 367912881:
					if (func_145(7480, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1998072324)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1249206960:
				case 3458624016:
					if (func_145(7481, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1249206960)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 2387134446:
			switch (iParam1)
			{
				case 2062186390:
				case 283190173:
					if (func_145(4260, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 283190173)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 4234099516:
				case 1528527015:
					if (func_145(4257, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1528527015)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 926967912:
				case 2604937330:
					if (func_145(4269, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2604937330)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2408688706:
				case 2608972830:
					if (func_145(4261, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2608972830)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2980007588:
				case 255166927:
					if (func_145(4259, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 255166927)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2598192767:
				case 4023709809:
					if (func_145(4268, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4023709809)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3938520812:
				case 1885215284:
					if (func_145(4265, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1885215284)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 857810380:
				case 2359810308:
					if (func_145(4258, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2359810308)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3665290650:
				case 1061465906:
					if (func_145(4264, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1061465906)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 2415436815:
				case 3423935567:
					if (func_145(4267, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3423935567)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 3029119985:
				case 4193795811:
					if (func_145(4262, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4193795811)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 32094424:
				case 2704668526:
					if (func_145(4263, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2704668526)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
				
				case 1969286744:
				case 303441856:
					if (func_145(4266, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 303441856)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 62137527:
			switch (iParam1)
			{
				case 386581472:
				case 1466454525:
					if (func_69(2931, 4294967295, 0) > 0)
					{
						return 0;
					}
					return !func_137(func_142(iParam1, 3), 4294967295);
					break;
				
				case 979307144:
				case 3821234857:
					if (func_69(2931, 4294967295, 0) > 0)
					{
						return 0;
					}
					return !func_137(func_142(iParam1, 4), 4294967295);
					break;
			}
			break;
		
		case 2752777702:
			switch (iParam1)
			{
				case 2245277646:
				case 560620683:
					if (func_145(113, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2245277646)
					{
						return !func_137(func_142(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_137(func_142(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 3517691514:
			switch (iParam1)
			{
				case 3666968031:
				case 1682346315:
				case 1021952654:
				case 1319396867:
				case 560794517:
				case 858697496:
				case 4263986066:
				case 3966935081:
				case 2843286071:
				case 267904819:
					if (iParam1 == 3666968031)
					{
						if (func_145(3770, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 1682346315)
					{
						if (func_145(3771, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 1021952654)
					{
						if (func_145(3772, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 1319396867)
					{
						if (func_145(3773, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 560794517)
					{
						if (func_145(3774, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 858697496)
					{
						if (func_145(3775, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 4263986066)
					{
						if (func_145(3776, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 3966935081)
					{
						if (func_145(3777, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 2843286071)
					{
						if (func_145(3778, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 267904819)
					{
						if (func_145(3779, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					return !func_137(func_142(iParam1, 3), 4294967295);
					break;
				
				case 2429969072:
				case 2154152399:
				case 223468453:
				case 4210996991:
				case 3888124034:
				case 3340226354:
				case 2619440442:
				case 2111717556:
				case 3879572293:
				case 427521984:
					if (iParam1 == 2429969072)
					{
						if (func_145(3770, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 2154152399)
					{
						if (func_145(3771, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 223468453)
					{
						if (func_145(3772, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 4210996991)
					{
						if (func_145(3773, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 3888124034)
					{
						if (func_145(3774, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 3340226354)
					{
						if (func_145(3775, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 2619440442)
					{
						if (func_145(3776, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 2111717556)
					{
						if (func_145(3777, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 3879572293)
					{
						if (func_145(3778, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 427521984)
					{
						if (func_145(3779, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					return !func_137(func_142(iParam1, 4), 4294967295);
					break;
				
				case 3431576112:
				case 671171671:
				case 1675446188:
				case 1911627074:
					if ((((func_145(3765, 4294967295, 4294967295) && func_145(3766, 4294967295, 4294967295)) && func_145(3767, 4294967295, 4294967295)) && func_145(3768, 4294967295, 4294967295)) && func_145(3769, 4294967295, 4294967295))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		
		case 243848076:
			switch (iParam1)
			{
				case 632918673:
				case 1525246127:
					return !func_145(3593, 4294967295, 4294967295);
					break;
			}
			break;
		
		case 2896097998:
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case 2629545179:
				case 1100930183:
				case 2699959038:
				case 94055115:
				case 3667070535:
				case 1873477305:
					return 1;
					break;
				
				case 196632624:
				case 2650539189:
				case 1108198688:
				case 810099095:
					return 1;
					break;
				
				case 300677115:
				case 262692161:
				case 2610826077:
				case 390655118:
				case 3815524672:
				case 3752042985:
				case 1696910411:
				case 3035909259:
					return 1;
					break;
				
				case 1980445908:
				case 2412537942:
				case 3059625407:
				case 2750449892:
					return 1;
					break;
				
				case 2844560976:
				case 1412653072:
					return (!func_71(152, 4294967295) && !func_145(9440, 4294967295, 4294967295));
					break;
				
				case 210195800:
				case 7463306:
					return (!func_71(151, 4294967295) && !func_145(9430, 4294967295, 4294967295));
					break;
				
				case 953986562:
					return (!func_137(func_142(iParam1, 3), 4294967295) && !func_145(9426, 4294967295, 4294967295));
					break;
				
				case 585335312:
					return (!func_137(func_142(iParam1, 3), 4294967295) && !func_145(9427, 4294967295, 4294967295));
					break;
				
				case 489617063:
					return (!func_137(func_142(iParam1, 3), 4294967295) && !func_145(9428, 4294967295, 4294967295));
					break;
				
				case 1843402776:
					return (!func_137(func_142(iParam1, 3), 4294967295) && !func_145(9431, 4294967295, 4294967295));
					break;
				
				case 2694446475:
					return (!func_137(func_142(iParam1, 3), 4294967295) && !func_145(9432, 4294967295, 4294967295));
					break;
				
				case 1399087889:
					return (!func_137(func_142(iParam1, 3), 4294967295) && !func_145(9433, 4294967295, 4294967295));
					break;
				
				case 1169344430:
					return (!func_137(func_142(iParam1, 3), 4294967295) && !func_145(9439, 4294967295, 4294967295));
					break;
				
				case 2266319478:
					return (!func_137(func_142(iParam1, 3), 4294967295) && !func_145(9434, 4294967295, 4294967295));
					break;
				
				case 2959121676:
					return (!func_137(func_142(iParam1, 3), 4294967295) && !func_145(9435, 4294967295, 4294967295));
					break;
				
				case 3085118205:
					return (!func_137(func_142(iParam1, 3), 4294967295) && !func_145(9436, 4294967295, 4294967295));
					break;
				
				case 2065609077:
					return (!func_137(func_142(iParam1, 3), 4294967295) && !func_145(9429, 4294967295, 4294967295));
					break;
				
				case 3630722055:
					return (!func_137(func_142(iParam1, 3), 4294967295) && !func_145(9437, 4294967295, 4294967295));
					break;
				
				case 1531057961:
					return (!func_137(func_142(iParam1, 4), 4294967295) && !func_145(9426, 4294967295, 4294967295));
					break;
				
				case 1986678137:
					return (!func_137(func_142(iParam1, 4), 4294967295) && !func_145(9427, 4294967295, 4294967295));
					break;
				
				case 2142789653:
					return (!func_137(func_142(iParam1, 4), 4294967295) && !func_145(9428, 4294967295, 4294967295));
					break;
				
				case 308053343:
					return (!func_137(func_142(iParam1, 4), 4294967295) && !func_145(9431, 4294967295, 4294967295));
					break;
				
				case 753842819:
					return (!func_137(func_142(iParam1, 4), 4294967295) && !func_145(9432, 4294967295, 4294967295));
					break;
				
				case 1052794406:
					return (!func_137(func_142(iParam1, 4), 4294967295) && !func_145(9433, 4294967295, 4294967295));
					break;
				
				case 3599240635:
					return (!func_137(func_142(iParam1, 4), 4294967295) && !func_145(9439, 4294967295, 4294967295));
					break;
				
				case 3293145406:
					return (!func_137(func_142(iParam1, 4), 4294967295) && !func_145(9434, 4294967295, 4294967295));
					break;
				
				case 2869507774:
					return (!func_137(func_142(iParam1, 4), 4294967295) && !func_145(9435, 4294967295, 4294967295));
					break;
				
				case 1163510365:
					return (!func_137(func_142(iParam1, 4), 4294967295) && !func_145(9436, 4294967295, 4294967295));
					break;
				
				case 933242602:
					return (!func_137(func_142(iParam1, 4), 4294967295) && !func_145(9429, 4294967295, 4294967295));
					break;
				
				case 2947946180:
					return (!func_137(func_142(iParam1, 4), 4294967295) && !func_145(9437, 4294967295, 4294967295));
					break;
				
				case 1676130538:
				case 2564432594:
				case 2527534700:
				case 1297354841:
				case 3455160722:
				case 3752867087:
					return !func_136();
					break;
			}
			break;
		
		case 2610615559:
			switch (iParam1)
			{
				case 4104927148:
				case 4283626145:
					return !func_145(3608, 4294967295, 4294967295);
					break;
			}
			break;
		
		case 2617495721:
			switch (iParam1)
			{
				case 42936837:
				case 516055815:
					return (!func_145(3615, 4294967295, 4294967295) && !func_145(9438, 4294967295, 4294967295));
					break;
			}
			break;
		
		case 3238631853:
			if (iParam1 == 3331802784)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 670952414:
				case 2750342078:
					return !func_145(3783, 4294967295, 4294967295);
					break;
				
				case 4012091971:
				case 1185175875:
					return !func_145(3784, 4294967295, 4294967295);
					break;
				
				case 2079623104:
				case 155591269:
					return !func_145(3785, 4294967295, 4294967295);
					break;
				
				case 1088443427:
				case 3237008450:
					return !func_145(3786, 4294967295, 4294967295);
					break;
				
				case 200001600:
				case 2441171801:
					return !func_145(3787, 4294967295, 4294967295);
					break;
				
				case 1620729159:
				case 2434481736:
					return !func_145(3788, 4294967295, 4294967295);
					break;
				
				case 2581693058:
				case 499288642:
					return !func_145(3789, 4294967295, 4294967295);
					break;
				
				case 2723376327:
				case 4287080242:
					return !func_145(3790, 4294967295, 4294967295);
					break;
				
				case 3837327922:
				case 2741925794:
					return !func_145(3791, 4294967295, 4294967295);
					break;
				
				case 64160805:
				case 3214375851:
					return !func_145(3792, 4294967295, 4294967295);
					break;
				
				case 776078819:
				case 2991394291:
					if (iParam1 == 776078819)
					{
						iVar0 = func_69(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == 2991394291)
					{
						iVar1 = func_69(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_145(3793, 4294967295, 4294967295);
					break;
				
				case 3225502814:
				case 2085207152:
					if (iParam1 == 3225502814)
					{
						iVar2 = func_69(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2085207152)
					{
						iVar3 = func_69(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_145(3794, 4294967295, 4294967295);
					break;
				
				case 2952092057:
				case 857137150:
					if (iParam1 == 2952092057)
					{
						iVar4 = func_69(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == 857137150)
					{
						iVar5 = func_69(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_145(3795, 4294967295, 4294967295);
					break;
				
				case 1967892405:
				case 535952639:
					if (iParam1 == 1967892405)
					{
						iVar6 = func_69(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == 535952639)
					{
						iVar7 = func_69(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_145(3796, 4294967295, 4294967295);
					break;
				
				case 642864781:
				case 2320309895:
					if (iParam1 == 642864781)
					{
						iVar8 = func_69(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == 2320309895)
					{
						iVar9 = func_69(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_145(3797, 4294967295, 4294967295);
					break;
				
				case 1270860039:
				case 129909013:
					if (iParam1 == 1270860039)
					{
						iVar10 = func_69(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == 129909013)
					{
						iVar11 = func_69(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_145(3798, 4294967295, 4294967295);
					break;
				
				case 3004186890:
				case 2795907126:
					if (iParam1 == 3004186890)
					{
						iVar12 = func_69(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == 2795907126)
					{
						iVar13 = func_69(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_145(3799, 4294967295, 4294967295);
					break;
				
				case 1127641545:
				case 412032123:
					if (iParam1 == 1127641545)
					{
						iVar14 = func_69(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == 412032123)
					{
						iVar15 = func_69(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_145(3800, 4294967295, 4294967295);
					break;
				
				case 3073018766:
				case 915049044:
					if (iParam1 == 3073018766)
					{
						iVar16 = func_69(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == 915049044)
					{
						iVar17 = func_69(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_145(3801, 4294967295, 4294967295);
					break;
				
				case 1954153055:
				case 456478679:
					if (iParam1 == 1954153055)
					{
						iVar18 = func_69(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == 456478679)
					{
						iVar19 = func_69(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_145(3802, 4294967295, 4294967295);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam1)
			{
				case 3706417613:
				case 464027076:
					return 1;
					break;
				
				case 3329475802:
				case 939374190:
					return 1;
					break;
			}
			break;
		
		case 598190139:
			switch (iParam1)
			{
				case 2836425320:
				case 3688952543:
				case 3681590925:
				case 3848675795:
				case 3260325256:
				case 1022637316:
				case 2617810878:
				case 3164753996:
					return !func_135();
					break;
			}
			break;
	}
	return 0;
}

int func_135()//Position - 0x1A42B
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_19, 2);
				MISC::SET_BIT(&Global_19, 4);
				MISC::SET_BIT(&Global_19, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_2357D == 2)
	{
		return 1;
	}
	else if (Global_2357D == 3)
	{
		return 0;
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_136()//Position - 0x1A4E6
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

bool func_137(int iParam0, int iParam1)//Position - 0x1A4F7
{
	int iVar0;
	int iVar1;
	
	if (func_140(iParam0) == 9954)
	{
		return 0;
	}
	iVar0 = func_139(iParam0, iParam1);
	iVar1 = iParam0;
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_138(iVar1));
}

int func_138(int iParam0)//Position - 0x1A529
{
	return (iParam0 % 32);
}

int func_139(var uParam0, int iParam1)//Position - 0x1A536
{
	int iVar0;
	
	iVar0 = func_69(func_140(uParam0), iParam1, 0);
	return iVar0;
}

int func_140(var uParam0)//Position - 0x1A54F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_141(iVar0);
	if ((func_38() == 0 || func_37() == 0) || (func_38() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1756;
				break;
			
			case 7:
				return 1950;
				break;
			
			case 8:
				return 1951;
				break;
			
			case 9:
				return 1952;
				break;
			
			case 10:
				return 1953;
				break;
			
			case 11:
				return 1954;
				break;
			
			case 12:
				return 1955;
				break;
			
			case 13:
				return 2422;
				break;
			
			case 14:
				return 2442;
				break;
			
			case 15:
				return 2445;
				break;
			
			case 16:
				return 2448;
				break;
			
			case 17:
				return 2611;
				break;
			
			case 18:
				return 2614;
				break;
			
			case 19:
				return 2617;
				break;
			
			case 20:
				return 3783;
				break;
			
			case 21:
				return 3786;
				break;
			
			case 22:
				return 3861;
				break;
			
			case 23:
				return 3864;
				break;
			
			case 24:
				return 3867;
				break;
			
			case 25:
				return 3870;
				break;
			
			case 26:
				return 5361;
				break;
			
			case 27:
				return 5364;
				break;
			
			case 28:
				return 5466;
				break;
			
			case 29:
				return 5469;
				break;
			
			case 30:
				return 6428;
				break;
			
			case 31:
				return 6431;
				break;
			
			case 32:
				return 7252;
				break;
			
			case 33:
				return 7255;
				break;
			
			case 34:
				return 7258;
				break;
			
			case 35:
				return 7967;
				break;
			
			case 36:
				return 7970;
				break;
			
			case 37:
				return 7973;
				break;
			
			case 38:
				return 7976;
				break;
			}
	}
	return 9954;
}

int func_141(int iParam0)//Position - 0x1A7E6
{
	return (iParam0 / 32);
}

int func_142(int iParam0, int iParam1)//Position - 0x1A7F3
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 3)
	{
		if (func_144(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_143(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = FILE::_GET_NUM_DECORATIONS(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (FILE::_GET_TATTOO_COLLECTION_DATA(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return 4294967295;
}

int func_143(int iParam0, var uParam1)//Position - 0x1A864
{
	int iVar0;
	
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 497719213:
			iVar0 = 0;
			break;
		
		case 2719306513:
			iVar0 = 1;
			break;
		
		case 3574336209:
			iVar0 = 2;
			break;
		
		case 2143620721:
			iVar0 = 3;
			break;
		
		case 2049754822:
			iVar0 = 4;
			break;
		
		case 3001218220:
			iVar0 = 5;
			break;
		
		case 2723563697:
			iVar0 = 6;
			break;
		
		case 3583843390:
			iVar0 = 7;
			break;
		
		case 152801037:
			iVar0 = 8;
			break;
		
		case 2970948711:
			iVar0 = 9;
			break;
		
		case 3813898467:
			iVar0 = 10;
			break;
		
		case 2808226100:
			iVar0 = 11;
			break;
		
		case 939412564:
			iVar0 = 12;
			break;
		
		case 1187637739:
			iVar0 = 13;
			break;
		
		case 3202297851:
			iVar0 = 14;
			break;
		
		case 1659530389:
			iVar0 = 15;
			break;
		
		case 996857777:
			iVar0 = 16;
			break;
		
		case 817476859:
			iVar0 = 17;
			break;
		
		case 4277916028:
			iVar0 = 18;
			break;
		
		case 1293774274:
			iVar0 = 19;
			break;
		
		case 567121699:
			iVar0 = 20;
			break;
		
		case 3115665136:
			iVar0 = 21;
			break;
		
		case 3345801823:
			iVar0 = 22;
			break;
		
		case 354975189:
			iVar0 = 23;
			break;
		
		case 3805845814:
			iVar0 = 24;
			break;
		
		case 2658013278:
			iVar0 = 25;
			break;
		
		case 3017227056:
			iVar0 = 26;
			break;
		
		case 3247527588:
			iVar0 = 27;
			break;
		
		case 3480941175:
			iVar0 = 28;
			break;
		
		case 1732157956:
			iVar0 = 29;
			break;
		
		case 1024282018:
			iVar0 = 30;
			break;
		
		case 2195282233:
			iVar0 = 31;
			break;
		
		case 1483932781:
			iVar0 = 32;
			break;
		
		case 1406925627:
			iVar0 = 33;
			break;
		
		case 698590923:
			iVar0 = 34;
			break;
		
		case 1869001296:
			iVar0 = 35;
			break;
		
		case 1169907450:
			iVar0 = 36;
			break;
		
		case 717727185:
			iVar0 = 37;
			break;
		
		case 1058197095:
			iVar0 = 38;
			break;
		
		case 434115743:
			iVar0 = 39;
			break;
		
		case 665432114:
			iVar0 = 40;
			break;
		
		case 1198780358:
			iVar0 = 41;
			break;
		
		case 2166093439:
			iVar0 = 42;
			break;
		
		case 4146419516:
			iVar0 = 43;
			break;
		
		case 1819096318:
			iVar0 = 44;
			break;
		
		case 1051122042:
			iVar0 = 45;
			break;
		
		case 2944471331:
			iVar0 = 46;
			break;
		
		case 4144108005:
			iVar0 = 47;
			break;
		
		case 3108774251:
			iVar0 = 48;
			break;
		
		case 3088129781:
			iVar0 = 49;
			break;
		
		case 2781313634:
			iVar0 = 50;
			break;
		
		case 3751018965:
			iVar0 = 51;
			break;
		
		case 4119408063:
			iVar0 = 52;
			break;
		
		case 4163436466:
			iVar0 = 53;
			break;
		
		case 2478880483:
			iVar0 = 54;
			break;
		
		case 2181960574:
			iVar0 = 55;
			break;
		
		case 3193080838:
			iVar0 = 56;
			break;
		
		case 2896226467:
			iVar0 = 57;
			break;
		
		case 1939258347:
			iVar0 = 58;
			break;
		
		case 3290815752:
			iVar0 = 59;
			break;
		
		case 3472093860:
			iVar0 = 60;
			break;
		
		case 2849745012:
			iVar0 = 61;
			break;
		
		case 4231056673:
			iVar0 = 62;
			break;
		
		case 101834979:
			iVar0 = 63;
			break;
		
		case 3621454966:
			iVar0 = 64;
			break;
		
		case 3871121977:
			iVar0 = 65;
			break;
		
		case 963561372:
			iVar0 = 66;
			break;
		
		case 1384839636:
			iVar0 = 67;
			break;
		
		case 2582087468:
			iVar0 = 68;
			break;
		
		case 3343278569:
			iVar0 = 69;
			break;
		
		case 3162328151:
			iVar0 = 70;
			break;
		
		case 3781334565:
			iVar0 = 71;
			break;
		
		case 263680718:
			iVar0 = 72;
			break;
		
		case 36296627:
			iVar0 = 73;
			break;
		
		case 800240324:
			iVar0 = 74;
			break;
		
		case 614243480:
			iVar0 = 75;
			break;
		
		case 1408138043:
			iVar0 = 76;
			break;
		
		case 957564293:
			iVar0 = 77;
			break;
		
		case 2680687897:
			iVar0 = 78;
			break;
		
		case 2843680903:
			iVar0 = 79;
			break;
		
		case 2536897525:
			iVar0 = 80;
			break;
		
		case 3069492074:
			iVar0 = 81;
			break;
		
		case 2302074863:
			iVar0 = 82;
			break;
		
		case 2456810081:
			iVar0 = 83;
			break;
		
		case 1688803028:
			iVar0 = 84;
			break;
		
		case 1844259164:
			iVar0 = 85;
			break;
		
		case 1070943545:
			iVar0 = 86;
			break;
		
		case 1234460855:
			iVar0 = 87;
			break;
		
		case 3541168836:
			iVar0 = 88;
			break;
		
		case 2841616224:
			iVar0 = 89;
			break;
		
		case 2986913970:
			iVar0 = 90;
			break;
		
		case 2211107895:
			iVar0 = 91;
			break;
		
		case 1586137527:
			iVar0 = 92;
			break;
		
		case 1884564810:
			iVar0 = 93;
			break;
		
		case 1092964089:
			iVar0 = 94;
			break;
		
		case 1264280421:
			iVar0 = 95;
			break;
		
		case 496601058:
			iVar0 = 96;
			break;
		
		case 861352797:
			iVar0 = 97;
			break;
		
		case 1418328330:
			iVar0 = 98;
			break;
		
		case 1784554566:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 2081736627:
			iVar0 = 100;
			break;
		
		case 2397695325:
			iVar0 = 101;
			break;
		
		case 2628225240:
			iVar0 = 102;
			break;
		
		case 3012802224:
			iVar0 = 103;
			break;
		
		case 3242086917:
			iVar0 = 104;
			break;
		
		case 3549492906:
			iVar0 = 105;
			break;
		
		case 3779170831:
			iVar0 = 106;
			break;
		
		case 3483761071:
			iVar0 = 107;
			break;
		
		case 2708151610:
			iVar0 = 108;
			break;
		
		case 2871537844:
			iVar0 = 109;
			break;
		
		case 2597097481:
			iVar0 = 110;
			break;
		
		case 2824121113:
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case 4159129068:
			iVar0 = 116;
			break;
		
		case 121616864:
			iVar0 = 117;
			break;
		
		case 3460450294:
			iVar0 = 118;
			break;
		
		case 3891034954:
			iVar0 = 119;
			break;
		
		case 3115228879:
			iVar0 = 120;
			break;
		
		case 3272716693:
			iVar0 = 121;
			break;
		
		case 558694786:
			iVar0 = 122;
			break;
		
		case 569279177:
			iVar0 = 123;
			break;
		
		case 544309199:
			iVar0 = 124;
			break;
		
		case 1190448341:
			iVar0 = 125;
			break;
		
		case 885139568:
			iVar0 = 126;
			break;
		
		case 2449283690:
			iVar0 = 127;
			break;
		
		case 2739649799:
			iVar0 = 128;
			break;
		
		case 1704673699:
			iVar0 = 129;
			break;
		
		case 1993401358:
			iVar0 = 130;
			break;
		
		case 1227065524:
			iVar0 = 131;
			break;
		
		case 3761739506:
			iVar0 = 132;
			break;
		
		case 309459814:
			iVar0 = 133;
			break;
		
		case 77815753:
			iVar0 = 134;
			break;
		
		case 4014028093:
			iVar0 = 135;
			break;
		
		case 1246882601:
			iVar0 = 136;
			break;
		
		case 314833986:
			iVar0 = 137;
			break;
		
		case 4269331372:
			iVar0 = 138;
			break;
		
		case 351567983:
			iVar0 = 139;
			break;
		
		case 2267538644:
			iVar0 = 140;
			break;
		
		case 962677064:
			iVar0 = 141;
			break;
		
		case 4189491799:
			iVar0 = 142;
			break;
		
		case 766835283:
			iVar0 = 143;
			break;
		
		case 471979821:
			iVar0 = 144;
			break;
		
		case 1122542778:
			iVar0 = 145;
			break;
		
		case 815530017:
			iVar0 = 146;
			break;
		
		case 1157900525:
			iVar0 = 147;
			break;
		
		case 859243859:
			iVar0 = 148;
			break;
		
		case 2032013608:
			iVar0 = 149;
			break;
		
		case 1471663700:
			iVar0 = 150;
			break;
		
		case 2615760574:
			iVar0 = 151;
			break;
		
		case 3985569448:
			iVar0 = 152;
			break;
		
		case 534666054:
			iVar0 = 153;
			break;
		
		case 3525590995:
			iVar0 = 154;
			break;
		
		case 1531057961:
			iVar0 = 155;
			break;
		
		case 1986678137:
			iVar0 = 156;
			break;
		
		case 2142789653:
			iVar0 = 157;
			break;
		
		case 7463306:
			iVar0 = 158;
			break;
		
		case 308053343:
			iVar0 = 159;
			break;
		
		case 753842819:
			iVar0 = 160;
			break;
		
		case 1052794406:
			iVar0 = 161;
			break;
		
		case 3599240635:
			iVar0 = 162;
			break;
		
		case 3293145406:
			iVar0 = 163;
			break;
		
		case 2869507774:
			iVar0 = 164;
			break;
		
		case 1412653072:
			iVar0 = 165;
			break;
		
		case 1163510365:
			iVar0 = 166;
			break;
		
		case 933242602:
			iVar0 = 167;
			break;
		
		case 2947946180:
			iVar0 = 168;
			break;
		
		case 1297354841:
			iVar0 = 169;
			break;
		
		case 3455160722:
			iVar0 = 170;
			break;
		
		case 3752867087:
			iVar0 = 171;
			break;
		
		case 1472218269:
			iVar0 = 172;
			break;
		
		case 1783196079:
			iVar0 = 173;
			break;
		
		case 1007062314:
			iVar0 = 174;
			break;
		
		case 3424234774:
			iVar0 = 175;
			break;
		
		case 547542627:
			iVar0 = 176;
			break;
		
		case 863894553:
			iVar0 = 177;
			break;
		
		case 2195724964:
			iVar0 = 178;
			break;
		
		case 2434938664:
			iVar0 = 179;
			break;
		
		case 3734000131:
			iVar0 = 180;
			break;
		
		case 4235529392:
			iVar0 = 181;
			break;
		
		case 757067269:
			iVar0 = 182;
			break;
		
		case 455625238:
			iVar0 = 183;
			break;
		
		case 2544452382:
			iVar0 = 184;
			break;
		
		case 3310984830:
			iVar0 = 185;
			break;
		
		case 4062738459:
			iVar0 = 186;
			break;
		
		case 1558269323:
			iVar0 = 187;
			break;
		
		case 2070579873:
			iVar0 = 188;
			break;
		
		case 3091785380:
			iVar0 = 189;
			break;
		
		case 2182380092:
			iVar0 = 190;
			break;
		
		case 1942412705:
			iVar0 = 191;
			break;
		
		case 2448529910:
			iVar0 = 192;
			break;
		
		case 61799795:
			iVar0 = 193;
			break;
		
		case 2906476685:
			iVar0 = 194;
			break;
		
		case 2667754520:
			iVar0 = 195;
			break;
		
		case 1525246127:
			iVar0 = 196;
			break;
		
		case 4283626145:
			iVar0 = 197;
			break;
		
		case 516055815:
			iVar0 = 198;
			break;
		
		case 3260325256:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1022637316:
			iVar0 = 200;
			break;
		
		case 2617810878:
			iVar0 = 201;
			break;
		
		case 3164753996:
			iVar0 = 202;
			break;
		
		case 104062694:
			iVar0 = 203;
			break;
		
		case 869579299:
			iVar0 = 204;
			break;
		
		case 1201332655:
			iVar0 = 205;
			break;
		
		case 1028967715:
			iVar0 = 206;
			break;
		
		case 2643332496:
			iVar0 = 207;
			break;
		
		case 3402688533:
			iVar0 = 208;
			break;
		
		case 3262961517:
			iVar0 = 209;
			break;
		
		case 4039291896:
			iVar0 = 210;
			break;
		
		case 1890137027:
			iVar0 = 211;
			break;
		
		case 3888161488:
			iVar0 = 212;
			break;
		
		case 3702426796:
			iVar0 = 213;
			break;
		
		case 205417419:
			iVar0 = 214;
			break;
		
		case 2167690677:
			iVar0 = 215;
			break;
		
		case 2932289758:
			iVar0 = 216;
			break;
		
		case 2745244306:
			iVar0 = 217;
			break;
		
		case 3495990:
			iVar0 = 218;
			break;
		
		case 4009440706:
			iVar0 = 219;
			break;
		
		case 1907377338:
			iVar0 = 220;
			break;
		
		case 2136399879:
			iVar0 = 221;
			break;
		
		case 1568410532:
			iVar0 = 222;
			break;
		
		case 1068879892:
			iVar0 = 223;
			break;
		
		case 2702216367:
			iVar0 = 224;
			break;
		
		case 772896404:
			iVar0 = 225;
			break;
		
		case 2295737380:
			iVar0 = 226;
			break;
		
		case 3550265776:
			iVar0 = 227;
			break;
		
		case 3869927371:
			iVar0 = 228;
			break;
		
		case 3496557385:
			iVar0 = 229;
			break;
		
		case 1379974898:
			iVar0 = 230;
			break;
		
		case 2613531142:
			iVar0 = 231;
			break;
		
		case 2808047926:
			iVar0 = 232;
			break;
		
		case 2014677667:
			iVar0 = 233;
			break;
		
		case 325697857:
			iVar0 = 234;
			break;
		
		case 3106147795:
			iVar0 = 235;
			break;
		
		case 2529773858:
			iVar0 = 236;
			break;
		
		case 2878698170:
			iVar0 = 237;
			break;
		
		case 2183602142:
			iVar0 = 238;
			break;
		
		case 2414394209:
			iVar0 = 239;
			break;
		
		case 1421296887:
			iVar0 = 240;
			break;
		
		case 1655562468:
			iVar0 = 241;
			break;
		
		case 946048080:
			iVar0 = 242;
			break;
		
		case 1188768063:
			iVar0 = 243;
			break;
		
		case 498456313:
			iVar0 = 244;
			break;
		
		case 323007907:
			iVar0 = 245;
			break;
		
		case 2969596196:
			iVar0 = 246;
			break;
		
		case 3465653318:
			iVar0 = 247;
			break;
		
		case 3764342753:
			iVar0 = 248;
			break;
		
		case 3995921276:
			iVar0 = 249;
			break;
		
		case 1812260650:
			iVar0 = 250;
			break;
		
		case 2043511487:
			iVar0 = 251;
			break;
		
		case 2541731363:
			iVar0 = 252;
			break;
		
		case 2769377606:
			iVar0 = 253;
			break;
		
		case 31003408:
			iVar0 = 254;
			break;
		
		case 2429969072:
			iVar0 = 255;
			break;
		
		case 2154152399:
			iVar0 = 256;
			break;
		
		case 223468453:
			iVar0 = 257;
			break;
		
		case 4210996991:
			iVar0 = 258;
			break;
		
		case 3888124034:
			iVar0 = 259;
			break;
		
		case 3340226354:
			iVar0 = 260;
			break;
		
		case 2619440442:
			iVar0 = 261;
			break;
		
		case 2111717556:
			iVar0 = 262;
			break;
		
		case 3879572293:
			iVar0 = 263;
			break;
		
		case 427521984:
			iVar0 = 264;
			break;
		
		case 1570178485:
			iVar0 = 265;
			break;
		
		case 2675116380:
			iVar0 = 266;
			break;
		
		case 3581900148:
			iVar0 = 267;
			break;
		
		case 946477614:
			iVar0 = 268;
			break;
		
		case 2871623595:
			iVar0 = 269;
			break;
		
		case 445931457:
			iVar0 = 270;
			break;
		
		case 678558588:
			iVar0 = 271;
			break;
		
		case 3440335309:
			iVar0 = 272;
			break;
		
		case 2587096087:
			iVar0 = 273;
			break;
		
		case 1675446188:
			iVar0 = 274;
			break;
		
		case 1911627074:
			iVar0 = 275;
			break;
		
		case 3687575798:
			iVar0 = 276;
			break;
		
		case 2750342078:
			iVar0 = 277;
			break;
		
		case 1185175875:
			iVar0 = 278;
			break;
		
		case 155591269:
			iVar0 = 279;
			break;
		
		case 3237008450:
			iVar0 = 280;
			break;
		
		case 2441171801:
			iVar0 = 281;
			break;
		
		case 2434481736:
			iVar0 = 282;
			break;
		
		case 499288642:
			iVar0 = 283;
			break;
		
		case 4287080242:
			iVar0 = 284;
			break;
		
		case 2741925794:
			iVar0 = 285;
			break;
		
		case 3214375851:
			iVar0 = 286;
			break;
		
		case 3553906860:
			iVar0 = 287;
			break;
		
		case 645634644:
			iVar0 = 288;
			break;
		
		case 3198238525:
			iVar0 = 289;
			break;
		
		case 503268386:
			iVar0 = 290;
			break;
		
		case 109804153:
			iVar0 = 291;
			break;
		
		case 1410910279:
			iVar0 = 292;
			break;
		
		case 1501700194:
			iVar0 = 293;
			break;
		
		case 2501768080:
			iVar0 = 294;
			break;
		
		case 1405944575:
			iVar0 = 295;
			break;
		
		case 1731382556:
			iVar0 = 296;
			break;
		
		case 1743809026:
			iVar0 = 297;
			break;
		
		case 1589237530:
			iVar0 = 298;
			break;
		
		case 2736526188:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 793815980:
			iVar0 = 303;
			break;
		
		case 87277824:
			iVar0 = 304;
			break;
		
		case 1305470790:
			iVar0 = 305;
			break;
		
		case 252924758:
			iVar0 = 306;
			break;
		
		case 1043745875:
			iVar0 = 307;
			break;
		
		case 24304530:
			iVar0 = 308;
			break;
		
		case 582246031:
			iVar0 = 309;
			break;
		
		case 1840225396:
			iVar0 = 310;
			break;
		
		case 4247103781:
			iVar0 = 311;
			break;
		
		case 26968202:
			iVar0 = 312;
			break;
		
		case 1720638120:
			iVar0 = 313;
			break;
		
		case 1372737856:
			iVar0 = 314;
			break;
		
		case 3619247380:
			iVar0 = 315;
			break;
		
		case 3684079028:
			iVar0 = 316;
			break;
		
		case 4165269048:
			iVar0 = 317;
			break;
		
		case 1060644905:
			iVar0 = 318;
			break;
		
		case 776078819:
			iVar0 = 319;
			break;
		
		case 3225502814:
			iVar0 = 320;
			break;
		
		case 2952092057:
			iVar0 = 321;
			break;
		
		case 1967892405:
			iVar0 = 322;
			break;
		
		case 642864781:
			iVar0 = 323;
			break;
		
		case 1270860039:
			iVar0 = 324;
			break;
		
		case 3004186890:
			iVar0 = 325;
			break;
		
		case 1127641545:
			iVar0 = 326;
			break;
		
		case 3073018766:
			iVar0 = 327;
			break;
		
		case 1954153055:
			iVar0 = 328;
			break;
		
		case 543727307:
			iVar0 = 329;
			break;
		
		case 2488340653:
			iVar0 = 330;
			break;
		
		case 1146362323:
			iVar0 = 331;
			break;
		
		case 2376809245:
			iVar0 = 332;
			break;
		
		case 2459884565:
			iVar0 = 333;
			break;
		
		case 1935907419:
			iVar0 = 334;
			break;
		
		case 961997868:
			iVar0 = 335;
			break;
		
		case 3879721272:
			iVar0 = 336;
			break;
		
		case 2291438259:
			iVar0 = 337;
			break;
		
		case 3022015970:
			iVar0 = 338;
			break;
		
		case 837851491:
			iVar0 = 339;
			break;
		
		case 4230317643:
			iVar0 = 340;
			break;
		
		case 1997623301:
			iVar0 = 341;
			break;
		
		case 1177835340:
			iVar0 = 342;
			break;
		
		case 3033179461:
			iVar0 = 343;
			break;
		
		case 3329475802:
			iVar0 = 344;
			break;
		
		case 939374190:
			iVar0 = 345;
			break;
		
		case 149461503:
			iVar0 = 346;
			break;
		
		case 3177468311:
			iVar0 = 347;
			break;
		
		case 1184468662:
			iVar0 = 348;
			break;
		
		case 3522478648:
			iVar0 = 349;
			break;
		
		case 2895795962:
			iVar0 = 350;
			break;
		
		case 3331802784:
			iVar0 = 351;
			break;
		
		case 3010449627:
			iVar0 = 352;
			break;
		
		case 1613773443:
			iVar0 = 353;
			break;
		
		case 1963092516:
			iVar0 = 354;
			break;
		
		case 3416324628:
			iVar0 = 355;
			break;
		
		case 2676422371:
			iVar0 = 356;
			break;
		
		case 1185417232:
			iVar0 = 357;
			break;
		
		case 2645923143:
			iVar0 = 358;
			break;
		
		case 3001010771:
			iVar0 = 359;
			break;
		
		case 4210881926:
			iVar0 = 360;
			break;
		
		case 3351105817:
			iVar0 = 361;
			break;
		
		case 2939511462:
			iVar0 = 362;
			break;
		
		case 711764191:
			iVar0 = 363;
			break;
		
		case 41616632:
			iVar0 = 364;
			break;
		
		case 2240983032:
			iVar0 = 365;
			break;
		
		case 3772134555:
			iVar0 = 366;
			break;
		
		case 711940316:
			iVar0 = 367;
			break;
		
		case 2782860292:
			iVar0 = 368;
			break;
		
		case 4021661791:
			iVar0 = 369;
			break;
		
		case 3515844366:
			iVar0 = 370;
			break;
		
		case 565678099:
			iVar0 = 371;
			break;
		
		case 2130135469:
			iVar0 = 372;
			break;
		
		case 2142072717:
			iVar0 = 373;
			break;
		
		case 3658329143:
			iVar0 = 374;
			break;
		
		case 289539239:
			iVar0 = 375;
			break;
		
		case 3254144735:
			iVar0 = 376;
			break;
		
		case 217486581:
			iVar0 = 377;
			break;
		
		case 2147722994:
			iVar0 = 378;
			break;
		
		case 830186237:
			iVar0 = 379;
			break;
		
		case 2392582730:
			iVar0 = 380;
			break;
		
		case 1471583453:
			iVar0 = 381;
			break;
		
		case 2007332931:
			iVar0 = 382;
			break;
		
		case 1104156493:
			iVar0 = 383;
			break;
		
		case 616400258:
			iVar0 = 384;
			break;
		
		case 511243162:
			iVar0 = 385;
			break;
		
		case 3817515616:
			iVar0 = 386;
			break;
		
		case 743616295:
			iVar0 = 387;
			break;
		
		case 712215816:
			iVar0 = 388;
			break;
		
		case 1475570942:
			iVar0 = 389;
			break;
		
		case 2525988880:
			iVar0 = 390;
			break;
		
		case 2155255474:
			iVar0 = 391;
			break;
		
		case 2785731033:
			iVar0 = 392;
			break;
		
		case 3151583837:
			iVar0 = 393;
			break;
		
		case 2604760515:
			iVar0 = 394;
			break;
		
		case 1947095236:
			iVar0 = 395;
			break;
		
		case 300333876:
			iVar0 = 396;
			break;
		
		case 37732721:
			iVar0 = 397;
			break;
		
		case 959183706:
			iVar0 = 398;
			break;
		
		case 2752574072:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 874488242:
			iVar0 = 400;
			break;
		
		case 1389335000:
			iVar0 = 401;
			break;
		
		case 3928891749:
			iVar0 = 402;
			break;
		
		case 3169535712:
			iVar0 = 403;
			break;
		
		case 2294898333:
			iVar0 = 404;
			break;
		
		case 1497445248:
			iVar0 = 405;
			break;
		
		case 1989766704:
			iVar0 = 406;
			break;
		
		case 2208565317:
			iVar0 = 407;
			break;
		
		case 2448499935:
			iVar0 = 408;
			break;
		
		case 2969508819:
			iVar0 = 409;
			break;
		
		case 3728242245:
			iVar0 = 410;
			break;
		
		case 3507117033:
			iVar0 = 411;
			break;
		
		case 2409946211:
			iVar0 = 412;
			break;
		
		case 979307144:
			iVar0 = 413;
			break;
		
		case 3821234857:
			iVar0 = 414;
			break;
		
		case 2062186390:
			iVar0 = 415;
			break;
		
		case 4234099516:
			iVar0 = 416;
			break;
		
		case 926967912:
			iVar0 = 417;
			break;
		
		case 2408688706:
			iVar0 = 418;
			break;
		
		case 2980007588:
			iVar0 = 419;
			break;
		
		case 2598192767:
			iVar0 = 420;
			break;
		
		case 3938520812:
			iVar0 = 421;
			break;
		
		case 857810380:
			iVar0 = 422;
			break;
		
		case 3665290650:
			iVar0 = 423;
			break;
		
		case 2415436815:
			iVar0 = 424;
			break;
		
		case 3029119985:
			iVar0 = 425;
			break;
		
		case 32094424:
			iVar0 = 426;
			break;
		
		case 1969286744:
			iVar0 = 427;
			break;
		
		case 560620683:
			iVar0 = 428;
			break;
		
		case 4146654654:
			iVar0 = 429;
			break;
		
		case 3716689868:
			iVar0 = 430;
			break;
		
		case 3576057326:
			iVar0 = 431;
			break;
		
		case 3435940437:
			iVar0 = 432;
			break;
		
		case 3455069491:
			iVar0 = 433;
			break;
		
		case 1676439910:
			iVar0 = 434;
			break;
		
		case 4000810112:
			iVar0 = 435;
			break;
		
		case 3072767075:
			iVar0 = 436;
			break;
		
		case 874532672:
			iVar0 = 437;
			break;
		
		case 4159038241:
			iVar0 = 438;
			break;
		
		case 1654917353:
			iVar0 = 439;
			break;
		
		case 4281835905:
			iVar0 = 440;
			break;
		
		case 154845196:
			iVar0 = 441;
			break;
		
		case 3147082974:
			iVar0 = 442;
			break;
		
		case 291693311:
			iVar0 = 443;
			break;
		
		case 2893033765:
			iVar0 = 444;
			break;
		
		case 1820267020:
			iVar0 = 445;
			break;
		
		case 2134488961:
			iVar0 = 446;
			break;
		
		case 2433014551:
			iVar0 = 447;
			break;
		
		case 994458405:
			iVar0 = 448;
			break;
		
		case 2363252288:
			iVar0 = 449;
			break;
		
		case 1308745884:
			iVar0 = 450;
			break;
		
		case 2972012212:
			iVar0 = 451;
			break;
		
		case 3478309113:
			iVar0 = 452;
			break;
		
		case 3306659598:
			iVar0 = 453;
			break;
		
		case 2953555988:
			iVar0 = 454;
			break;
		
		case 1865570599:
			iVar0 = 455;
			break;
		
		case 3745509286:
			iVar0 = 456;
			break;
		
		case 2966422119:
			iVar0 = 457;
			break;
		
		case 2933613677:
			iVar0 = 458;
			break;
		
		case 1103253806:
			iVar0 = 459;
			break;
		
		case 4270783840:
			iVar0 = 460;
			break;
		
		case 436214104:
			iVar0 = 461;
			break;
		
		case 2072615278:
			iVar0 = 462;
			break;
		
		case 3163075870:
			iVar0 = 463;
			break;
		
		case 1392085456:
			iVar0 = 464;
			break;
		
		case 2035895234:
			iVar0 = 465;
			break;
		
		case 368784798:
			iVar0 = 466;
			break;
		
		case 1398938833:
			iVar0 = 467;
			break;
		
		case 1250040566:
			iVar0 = 468;
			break;
		
		case 2133228190:
			iVar0 = 469;
			break;
		
		case 675551540:
			iVar0 = 470;
			break;
		
		case 2468829448:
			iVar0 = 471;
			break;
		
		case 4150861695:
			iVar0 = 472;
			break;
		
		case 3545983646:
			iVar0 = 473;
			break;
		
		case 630291027:
			iVar0 = 474;
			break;
		
		case 293950434:
			iVar0 = 475;
			break;
		
		case 1857352111:
			iVar0 = 476;
			break;
		
		case 3517296165:
			iVar0 = 477;
			break;
		
		case 221602924:
			iVar0 = 478;
			break;
		
		case 2039295216:
			iVar0 = 479;
			break;
		
		case 1800147054:
			iVar0 = 480;
			break;
		
		case 2275461399:
			iVar0 = 481;
			break;
		
		case 1647997020:
			iVar0 = 482;
			break;
		
		case 2889112351:
			iVar0 = 483;
			break;
		
		case 3123672299:
			iVar0 = 484;
			break;
		
		case 4217890946:
			iVar0 = 485;
			break;
		
		case 775569873:
			iVar0 = 486;
			break;
		
		case 330569485:
			iVar0 = 487;
			break;
		
		case 2745749676:
			iVar0 = 488;
			break;
		
		case 1674429052:
			iVar0 = 489;
			break;
		
		case 4040297700:
			iVar0 = 490;
			break;
		
		case 1802602254:
			iVar0 = 491;
			break;
		
		case 3353895036:
			iVar0 = 492;
			break;
		
		case 2450217779:
			iVar0 = 493;
			break;
		
		case 82745424:
			iVar0 = 494;
			break;
		
		case 3621507213:
			iVar0 = 495;
			break;
		
		case 4195012800:
			iVar0 = 496;
			break;
		
		case 2078163456:
			iVar0 = 497;
			break;
		
		case 1362343227:
			iVar0 = 498;
			break;
		
		case 1176005743:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case 2790410077:
			iVar0 = 500;
			break;
		
		case 367912881:
			iVar0 = 501;
			break;
		
		case 3458624016:
			iVar0 = 502;
			break;
		
		case 4248445491:
			iVar0 = 503;
			break;
		
		case 3551918516:
			iVar0 = 504;
			break;
		
		case 1294865118:
			iVar0 = 505;
			break;
		
		case 2815280922:
			iVar0 = 506;
			break;
		
		case 256017193:
			iVar0 = 507;
			break;
		
		case 1232443120:
			iVar0 = 508;
			break;
		
		case 3491685025:
			iVar0 = 509;
			break;
		
		case 1788600442:
			iVar0 = 510;
			break;
		
		case 1439605343:
			iVar0 = 511;
			break;
		
		case 3200288032:
			iVar0 = 512;
			break;
		
		case 1230482241:
			iVar0 = 513;
			break;
		
		case 2054714291:
			iVar0 = 514;
			break;
		
		case 192117676:
			iVar0 = 515;
			break;
		
		case 2223762891:
			iVar0 = 516;
			break;
		
		case 2676785820:
			iVar0 = 517;
			break;
		
		case 2886713631:
			iVar0 = 518;
			break;
		
		case 4160781905:
			iVar0 = 519;
			break;
		
		case 3509183885:
			iVar0 = 520;
			break;
		
		case 3661500586:
			iVar0 = 521;
			break;
		
		case 2222479924:
			iVar0 = 522;
			break;
		
		case 1211025296:
			iVar0 = 523;
			break;
		
		case 742659337:
			iVar0 = 524;
			break;
		
		case 1365533160:
			iVar0 = 525;
			break;
		
		case 1213205618:
			iVar0 = 526;
			break;
		
		case 4130915193:
			iVar0 = 527;
			break;
		
		case 2988476999:
			iVar0 = 528;
			break;
		
		case 3300164651:
			iVar0 = 529;
			break;
		
		case 637406209:
			iVar0 = 530;
			break;
		
		case 4124112265:
			iVar0 = 531;
			break;
		
		case 1333098305:
			iVar0 = 532;
			break;
		
		case 119103934:
			iVar0 = 533;
			break;
		
		case 4153598245:
			iVar0 = 534;
			break;
		
		case 3701612078:
			iVar0 = 535;
			break;
		
		case 316832763:
			iVar0 = 536;
			break;
		
		case 3901253752:
			iVar0 = 537;
			break;
		
		case 2418732671:
			iVar0 = 538;
			break;
		
		case 2841884962:
			iVar0 = 539;
			break;
		
		case 2897261313:
			iVar0 = 540;
			break;
		
		case 3016881125:
			iVar0 = 541;
			break;
		
		case 2784075028:
			iVar0 = 542;
			break;
		
		case 204876084:
			iVar0 = 543;
			break;
		
		case 3306607804:
			iVar0 = 544;
			break;
		
		case 975745281:
			iVar0 = 545;
			break;
		
		case 591099372:
			iVar0 = 546;
			break;
		
		case 3280018990:
			iVar0 = 547;
			break;
		
		case 2428527508:
			iVar0 = 548;
			break;
		
		case 3029200110:
			iVar0 = 549;
			break;
		
		case 2070931859:
			iVar0 = 550;
			break;
		
		case 413611416:
			iVar0 = 551;
			break;
		
		case 765001063:
			iVar0 = 552;
			break;
		
		case 3608342674:
			iVar0 = 553;
			break;
		
		case 3357418947:
			iVar0 = 554;
			break;
		
		case 212584159:
			iVar0 = 555;
			break;
		
		case 3966627234:
			iVar0 = 556;
			break;
		
		case 1657725123:
			iVar0 = 557;
			break;
		
		case 2777002960:
			iVar0 = 558;
			break;
		
		case 3509477057:
			iVar0 = 559;
			break;
		
		case 4283198067:
			iVar0 = 560;
			break;
		
		case 745912106:
			iVar0 = 561;
			break;
		
		case 2230702198:
			iVar0 = 562;
			break;
		
		case 2779074421:
			iVar0 = 563;
			break;
		
		case 1368234729:
			iVar0 = 564;
			break;
		
		case 1960230923:
			iVar0 = 565;
			break;
		
		case 3434797486:
			iVar0 = 566;
			break;
		
		case 4117085182:
			iVar0 = 567;
			break;
		
		case 661384509:
			iVar0 = 568;
			break;
		
		case 1221860095:
			iVar0 = 569;
			break;
		
		case 698192473:
			iVar0 = 570;
			break;
		
		case 3477716213:
			iVar0 = 571;
			break;
		
		case 3186090973:
			iVar0 = 572;
			break;
		
		case 1274482696:
			iVar0 = 573;
			break;
		
		case 468009056:
			iVar0 = 574;
			break;
		
		case 2063732427:
			iVar0 = 575;
			break;
		
		case 3530950885:
			iVar0 = 576;
			break;
		
		case 2764151147:
			iVar0 = 577;
			break;
		
		case 1189996018:
			iVar0 = 578;
			break;
		
		case 4084857181:
			iVar0 = 579;
			break;
		
		case 4087857040:
			iVar0 = 580;
			break;
		
		case 1801308144:
			iVar0 = 581;
			break;
		
		case 320631086:
			iVar0 = 582;
			break;
		
		case 1022560466:
			iVar0 = 583;
			break;
		
		case 3342021255:
			iVar0 = 584;
			break;
		
		case 1321460664:
			iVar0 = 585;
			break;
		
		case 3513341382:
			iVar0 = 586;
			break;
		
		case 2772719461:
			iVar0 = 587;
			break;
		
		case 2763722065:
			iVar0 = 588;
			break;
		
		case 3224494302:
			iVar0 = 589;
			break;
		
		case 2181626236:
			iVar0 = 590;
			break;
		
		case 965047293:
			iVar0 = 591;
			break;
		
		case 2114285045:
			iVar0 = 592;
			break;
		
		case 2659935083:
			iVar0 = 593;
			break;
		
		case 1310864345:
			iVar0 = 594;
			break;
		
		case 3320989663:
			iVar0 = 595;
			break;
		
		case 2855323967:
			iVar0 = 596;
			break;
		
		case 434150104:
			iVar0 = 597;
			break;
		
		case 1243301688:
			iVar0 = 598;
			break;
		
		case 3061399314:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case 1262886680:
			iVar0 = 600;
			break;
		
		case 283135569:
			iVar0 = 601;
			break;
		
		case 3746049327:
			iVar0 = 602;
			break;
		
		case 153465812:
			iVar0 = 603;
			break;
		
		case 1916093085:
			iVar0 = 604;
			break;
		
		case 3593481096:
			iVar0 = 605;
			break;
		
		case 1951718630:
			iVar0 = 606;
			break;
		
		case 2312988435:
			iVar0 = 607;
			break;
		
		case 2296873029:
			iVar0 = 608;
			break;
		
		case 3576521667:
			iVar0 = 609;
			break;
		
		case 4259269897:
			iVar0 = 610;
			break;
		
		case 3395885947:
			iVar0 = 611;
			break;
		
		case 1123547916:
			iVar0 = 612;
			break;
		
		case 3155073514:
			iVar0 = 613;
			break;
		
		case 1446511785:
			iVar0 = 614;
			break;
		
		case 1234256191:
			iVar0 = 615;
			break;
		
		case 413901048:
			iVar0 = 616;
			break;
		
		case 1527450164:
			iVar0 = 617;
			break;
		
		case 2508441820:
			iVar0 = 618;
			break;
		
		case 1439516635:
			iVar0 = 619;
			break;
		
		case 733800794:
			iVar0 = 620;
			break;
		
		case 3895743756:
			iVar0 = 621;
			break;
		
		case 2400575066:
			iVar0 = 622;
			break;
		
		case 229993415:
			iVar0 = 623;
			break;
		
		case 3674777613:
			iVar0 = 624;
			break;
		
		case 1846617794:
			iVar0 = 625;
			break;
		
		case 3152487949:
			iVar0 = 626;
			break;
		
		case 3782007271:
			iVar0 = 627;
			break;
		
		case 3535154739:
			iVar0 = 628;
			break;
		
		case 468661890:
			iVar0 = 629;
			break;
		
		case 1907925586:
			iVar0 = 630;
			break;
		
		case 646243571:
			iVar0 = 631;
			break;
		
		case 1953935161:
			iVar0 = 632;
			break;
		
		case 874867224:
			iVar0 = 633;
			break;
		
		case 1344008898:
			iVar0 = 634;
			break;
		
		case 1297781304:
			iVar0 = 635;
			break;
		
		case 1977233252:
			iVar0 = 636;
			break;
		
		case 4100556952:
			iVar0 = 637;
			break;
		
		case 392012609:
			iVar0 = 638;
			break;
		
		case 705148450:
			iVar0 = 639;
			break;
		
		case 1677522529:
			iVar0 = 640;
			break;
		
		case 2932289758:
			iVar0 = 641;
			break;
		
		case 863458948:
			iVar0 = 642;
			break;
		
		case 9874621:
			iVar0 = 643;
			break;
		
		case 1809338990:
			iVar0 = 644;
			break;
		
		case 3948027337:
			iVar0 = 645;
			break;
		
		case 3360213752:
			iVar0 = 646;
			break;
		
		case 1604986209:
			iVar0 = 647;
			break;
		
		case 2780266875:
			iVar0 = 648;
			break;
		
		case 1177361060:
			iVar0 = 649;
			break;
		
		case 3357438008:
			iVar0 = 650;
			break;
		
		case 547723644:
			iVar0 = 651;
			break;
		
		case 1750314531:
			iVar0 = 652;
			break;
		
		case 3306634683:
			iVar0 = 653;
			break;
		
		case 80720443:
			iVar0 = 654;
			break;
		
		case 3074772662:
			iVar0 = 655;
			break;
		
		case 3369232143:
			iVar0 = 656;
			break;
		
		case 2891221850:
			iVar0 = 657;
			break;
		
		case 3210341268:
			iVar0 = 658;
			break;
		
		case 2060572320:
			iVar0 = 659;
			break;
		
		case 1064377095:
			iVar0 = 660;
			break;
		
		case 2309369720:
			iVar0 = 661;
			break;
		
		case 2291778192:
			iVar0 = 662;
			break;
		
		case 1452329956:
			iVar0 = 663;
			break;
		
		case 1928573506:
			iVar0 = 664;
			break;
		
		case 4109213574:
			iVar0 = 665;
			break;
		
		case 2714051187:
			iVar0 = 666;
			break;
		
		case 3217907323:
			iVar0 = 667;
			break;
		
		case 131755133:
			iVar0 = 668;
			break;
		
		case 4041616258:
			iVar0 = 669;
			break;
		
		case 1332845224:
			iVar0 = 670;
			break;
		
		case 3609915426:
			iVar0 = 671;
			break;
		
		case 2122847199:
			iVar0 = 672;
			break;
		
		case 4145026552:
			iVar0 = 673;
			break;
		
		case 4147226166:
			iVar0 = 674;
			break;
		
		case 302211868:
			iVar0 = 675;
			break;
		
		case 2933398704:
			iVar0 = 676;
			break;
		
		case 4138367078:
			iVar0 = 677;
			break;
		
		case 1592739450:
			iVar0 = 678;
			break;
		
		case 3661223292:
			iVar0 = 679;
			break;
		
		case 2827221344:
			iVar0 = 680;
			break;
		
		case 1129961041:
			iVar0 = 681;
			break;
		
		case 3073786524:
			iVar0 = 682;
			break;
		
		case 1957517559:
			iVar0 = 683;
			break;
		
		case 3959733919:
			iVar0 = 684;
			break;
		
		case 2146762380:
			iVar0 = 685;
			break;
		
		case 427236107:
			iVar0 = 686;
			break;
		
		case 4245330869:
			iVar0 = 687;
			break;
		
		case 1988133312:
			iVar0 = 688;
			break;
		
		case 40044091:
			iVar0 = 689;
			break;
		
		case 3105073487:
			iVar0 = 690;
			break;
		
		case 1182549017:
			iVar0 = 691;
			break;
		
		case 1403255481:
			iVar0 = 692;
			break;
		
		case 821579887:
			iVar0 = 693;
			break;
		
		case 1975948161:
			iVar0 = 694;
			break;
		
		case 3341605062:
			iVar0 = 695;
			break;
		
		case 1521494915:
			iVar0 = 696;
			break;
		
		case 84635211:
			iVar0 = 697;
			break;
		
		case 2074655231:
			iVar0 = 698;
			break;
		
		case 1742494019:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case 1841934566:
			iVar0 = 700;
			break;
		
		case 1648222412:
			iVar0 = 701;
			break;
		
		case 1019312748:
			iVar0 = 702;
			break;
		
		case 3076236755:
			iVar0 = 703;
			break;
		
		case 4206780412:
			iVar0 = 704;
			break;
		
		case 1428588096:
			iVar0 = 705;
			break;
		
		case 2506473623:
			iVar0 = 706;
			break;
		
		case 4053072768:
			iVar0 = 707;
			break;
		
		case 2869552723:
			iVar0 = 708;
			break;
		
		case 1797163947:
			iVar0 = 709;
			break;
		
		case 823191231:
			iVar0 = 710;
			break;
		
		case 894133321:
			iVar0 = 711;
			break;
		
		case 1889485313:
			iVar0 = 712;
			break;
		
		case 687338866:
			iVar0 = 713;
			break;
		
		case 1827923343:
			iVar0 = 714;
			break;
		
		case 2401215563:
			iVar0 = 715;
			break;
		
		case 1739151647:
			iVar0 = 716;
			break;
		
		case 1361186211:
			iVar0 = 717;
			break;
		
		case 4106342356:
			iVar0 = 718;
			break;
		
		case 3197892653:
			iVar0 = 719;
			break;
		
		case 3685259111:
			iVar0 = 720;
			break;
		
		case 1295911115:
			iVar0 = 721;
			break;
		
		case 2600238467:
			iVar0 = 722;
			break;
		
		case 3972875916:
			iVar0 = 723;
			break;
		
		case 3126392231:
			iVar0 = 724;
			break;
		
		case 756873456:
			iVar0 = 725;
			break;
		
		case 3564929588:
			iVar0 = 726;
			break;
		
		case 3324508810:
			iVar0 = 727;
			break;
		
		case 975601953:
			iVar0 = 728;
			break;
		
		case 1614208560:
			iVar0 = 729;
			break;
		
		case 3568934735:
			iVar0 = 730;
			break;
		
		case 2469980134:
			iVar0 = 731;
			break;
		
		case 417579524:
			iVar0 = 732;
			break;
		
		case 734151492:
			iVar0 = 733;
			break;
		
		case 2528104976:
			iVar0 = 734;
			break;
		
		case 579562906:
			iVar0 = 735;
			break;
		
		case 3675212365:
			iVar0 = 736;
			break;
		
		case 1424441799:
			iVar0 = 737;
			break;
		
		case 2889930927:
			iVar0 = 738;
			break;
		
		case 1929056908:
			iVar0 = 739;
			break;
		
		case 4260428506:
			iVar0 = 740;
			break;
		
		case 1898518287:
			iVar0 = 741;
			break;
		
		case 3401862646:
			iVar0 = 742;
			break;
		
		case 3741152872:
			iVar0 = 743;
			break;
		
		case 201431212:
			iVar0 = 744;
			break;
		
		case 528695215:
			iVar0 = 745;
			break;
		
		case 3028531907:
			iVar0 = 746;
			break;
		
		case 980213248:
			iVar0 = 747;
			break;
		
		case 1019119277:
			iVar0 = 748;
			break;
		
		case 1187710323:
			iVar0 = 749;
			break;
		
		case 382848971:
			iVar0 = 750;
			break;
		
		case 2727135053:
			iVar0 = 751;
			break;
		
		case 2049506430:
			iVar0 = 752;
			break;
		
		case 92806870:
			iVar0 = 753;
			break;
		
		case 3666763872:
			iVar0 = 754;
			break;
		
		case 2125178682:
			iVar0 = 755;
			break;
		
		case 399660858:
			iVar0 = 756;
			break;
		
		case 3670125203:
			iVar0 = 757;
			break;
		
		case 282885412:
			iVar0 = 758;
			break;
		
		case 1599917585:
			iVar0 = 759;
			break;
		
		case 3591426333:
			iVar0 = 760;
			break;
		
		case 904358018:
			iVar0 = 761;
			break;
		
		case 560877895:
			iVar0 = 762;
			break;
		
		case 2145953489:
			iVar0 = 763;
			break;
		
		case 4207529945:
			iVar0 = 764;
			break;
		
		case 4107728081:
			iVar0 = 765;
			break;
		
		case 1481255878:
			iVar0 = 766;
			break;
		
		case 1805700785:
			iVar0 = 767;
			break;
		
		case 3926187128:
			iVar0 = 768;
			break;
		
		case 1457900554:
			iVar0 = 769;
			break;
		
		case 3228839791:
			iVar0 = 770;
			break;
		
		case 2928217253:
			iVar0 = 771;
			break;
		
		case 1944822196:
			iVar0 = 772;
			break;
		
		case 2655677837:
			iVar0 = 773;
			break;
		
		case 1282565442:
			iVar0 = 774;
			break;
		
		case 3410686596:
			iVar0 = 775;
			break;
		
		case 3247654217:
			iVar0 = 776;
			break;
		
		case 1849315700:
			iVar0 = 777;
			break;
		
		case 2165113505:
			iVar0 = 778;
			break;
		
		case 3650992788:
			iVar0 = 779;
			break;
		
		case 614424236:
			iVar0 = 780;
			break;
		
		case 2059836334:
			iVar0 = 781;
			break;
		
		case 221447729:
			iVar0 = 782;
			break;
		
		case 1965910391:
			iVar0 = 783;
			break;
		
		case 1822250244:
			iVar0 = 784;
			break;
		
		case 2144765713:
			iVar0 = 785;
			break;
		
		case 280971002:
			iVar0 = 786;
			break;
		
		case 2425672918:
			iVar0 = 787;
			break;
		
		case 3425794962:
			iVar0 = 788;
			break;
		
		case 3266468187:
			iVar0 = 789;
			break;
		
		case 1076096084:
			iVar0 = 790;
			break;
		
		case 3658187169:
			iVar0 = 791;
			break;
		
		case 603013184:
			iVar0 = 792;
			break;
		
		case 1351256035:
			iVar0 = 793;
			break;
		
		case 49108481:
			iVar0 = 794;
			break;
		
		case 354124980:
			iVar0 = 795;
			break;
		
		case 3332073289:
			iVar0 = 796;
			break;
		
		case 1617075313:
			iVar0 = 797;
			break;
		
		case 3659218018:
			iVar0 = 798;
			break;
		
		case 3086063092:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 414914435:
			iVar0 = 800;
			break;
		
		case 2194961047:
			iVar0 = 801;
			break;
		
		case 424018111:
			iVar0 = 802;
			break;
		
		case 849119336:
			iVar0 = 803;
			break;
		
		case 1807228945:
			iVar0 = 804;
			break;
		
		case 3175896049:
			iVar0 = 805;
			break;
		
		case 3148252592:
			iVar0 = 806;
			break;
		
		case 4006114311:
			iVar0 = 807;
			break;
		
		case 3732937789:
			iVar0 = 808;
			break;
		
		case 3824432681:
			iVar0 = 809;
			break;
		
		case 371389080:
			iVar0 = 810;
			break;
		
		case 3773762709:
			iVar0 = 811;
			break;
		
		case 1685732560:
			iVar0 = 812;
			break;
		
		case 2908523918:
			iVar0 = 813;
			break;
		
		case 2588319015:
			iVar0 = 814;
			break;
		
		case 3775009430:
			iVar0 = 815;
			break;
		
		case 653935582:
			iVar0 = 816;
			break;
		
		case 2111779395:
			iVar0 = 817;
			break;
		
		case 428988289:
			iVar0 = 818;
			break;
		
		case 2391004474:
			iVar0 = 819;
			break;
		
		case 1365770911:
			iVar0 = 820;
			break;
		
		case 42029862:
			iVar0 = 821;
			break;
		
		case 438631811:
			iVar0 = 822;
			break;
		
		case 2816251405:
			iVar0 = 823;
			break;
		
		case 2899436067:
			iVar0 = 824;
			break;
		
		case 30333135:
			iVar0 = 825;
			break;
		
		case 1783341339:
			iVar0 = 826;
			break;
		
		case 4278890170:
			iVar0 = 827;
			break;
		
		case 3461324112:
			iVar0 = 828;
			break;
		
		case 163330499:
			iVar0 = 829;
			break;
		
		case 667415171:
			iVar0 = 830;
			break;
		
		case 242101919:
			iVar0 = 831;
			break;
		
		case 163238890:
			iVar0 = 832;
			break;
		
		case 1859431148:
			iVar0 = 833;
			break;
		
		case 2558002985:
			iVar0 = 834;
			break;
		
		case 843062770:
			iVar0 = 835;
			break;
		
		case 3061170228:
			iVar0 = 836;
			break;
		
		case 1480738976:
			iVar0 = 837;
			break;
		
		case 3334946457:
			iVar0 = 838;
			break;
		
		case 444195464:
			iVar0 = 839;
			break;
		
		case 1370108117:
			iVar0 = 840;
			break;
		
		case 4206739474:
			iVar0 = 841;
			break;
		
		case 239540513:
			iVar0 = 842;
			break;
		
		case 1420328020:
			iVar0 = 843;
			break;
		
		case 621404024:
			iVar0 = 844;
			break;
		
		case 2376344836:
			iVar0 = 845;
			break;
		
		case 3347619771:
			iVar0 = 846;
			break;
		
		case 292920241:
			iVar0 = 847;
			break;
		
		case 720930282:
			iVar0 = 848;
			break;
		
		case 143213281:
			iVar0 = 849;
			break;
		
		case 4130924804:
			iVar0 = 850;
			break;
		
		case 2924945301:
			iVar0 = 851;
			break;
		
		case 1397178481:
			iVar0 = 852;
			break;
		
		case 3578137776:
			iVar0 = 853;
			break;
		
		case 3816509344:
			iVar0 = 854;
			break;
		
		case 1825323565:
			iVar0 = 855;
			break;
		
		case 3172311579:
			iVar0 = 856;
			break;
		
		case 3938332799:
			iVar0 = 857;
			break;
		
		case 2948625878:
			iVar0 = 858;
			break;
		
		case 3080744829:
			iVar0 = 859;
			break;
		
		case 3215190484:
			iVar0 = 860;
			break;
		
		case 3345977130:
			iVar0 = 861;
			break;
		
		case 1382201813:
			iVar0 = 862;
			break;
		
		case 1576375706:
			iVar0 = 863;
			break;
		
		case 2938466779:
			iVar0 = 864;
			break;
		
		case 1838019927:
			iVar0 = 865;
			break;
		
		case 618955885:
			iVar0 = 866;
			break;
		
		case 909858453:
			iVar0 = 867;
			break;
		
		case 1809389163:
			iVar0 = 868;
			break;
		
		case 3912596849:
			iVar0 = 869;
			break;
		
		case 4004018258:
			iVar0 = 870;
			break;
		
		case 381474823:
			iVar0 = 871;
			break;
		
		case 570088958:
			iVar0 = 872;
			break;
		
		case 1093167087:
			iVar0 = 873;
			break;
		
		case 2967569550:
			iVar0 = 874;
			break;
		
		case 655777349:
			iVar0 = 875;
			break;
		
		case 2798061676:
			iVar0 = 876;
			break;
		
		case 3251957114:
			iVar0 = 877;
			break;
		
		case 2968890285:
			iVar0 = 878;
			break;
		
		case 3174643924:
			iVar0 = 879;
			break;
		
		case 2711346369:
			iVar0 = 880;
			break;
		
		case 1407674396:
			iVar0 = 881;
			break;
		
		case 4050887464:
			iVar0 = 882;
			break;
		
		case 1055951410:
			iVar0 = 883;
			break;
		
		case 1092910333:
			iVar0 = 884;
			break;
		
		case 2420112636:
			iVar0 = 885;
			break;
		
		case 2915775040:
			iVar0 = 886;
			break;
		
		case 1435106801:
			iVar0 = 887;
			break;
		
		case 3042283349:
			iVar0 = 888;
			break;
		
		case 2914359593:
			iVar0 = 889;
			break;
		
		case 1010167914:
			iVar0 = 890;
			break;
		
		case 1059266367:
			iVar0 = 891;
			break;
		
		case 1869746711:
			iVar0 = 892;
			break;
		
		case 167494616:
			iVar0 = 893;
			break;
		
		case 231256171:
			iVar0 = 894;
			break;
		
		case 2253771008:
			iVar0 = 895;
			break;
		
		case 4063172076:
			iVar0 = 896;
			break;
		
		case 3087503657:
			iVar0 = 897;
			break;
		
		case 2023442158:
			iVar0 = 898;
			break;
		
		case 3001773213:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 767365246:
			iVar0 = 900;
			break;
		
		case 3976924357:
			iVar0 = 901;
			break;
		
		case 3554359290:
			iVar0 = 902;
			break;
		
		case 126660566:
			iVar0 = 903;
			break;
		
		case 4042233903:
			iVar0 = 904;
			break;
		
		case 3250830683:
			iVar0 = 905;
			break;
		
		case 3403205002:
			iVar0 = 906;
			break;
		
		case 1410738248:
			iVar0 = 907;
			break;
		
		case 2316239806:
			iVar0 = 908;
			break;
		
		case 1684642458:
			iVar0 = 909;
			break;
		
		case 4147476956:
			iVar0 = 910;
			break;
		
		case 2872849300:
			iVar0 = 911;
			break;
		
		case 3981035871:
			iVar0 = 912;
			break;
		
		case 211076563:
			iVar0 = 913;
			break;
		
		case 355035035:
			iVar0 = 914;
			break;
		
		case 2847658428:
			iVar0 = 915;
			break;
		
		case 1802655618:
			iVar0 = 916;
			break;
		
		case 3231225140:
			iVar0 = 917;
			break;
		
		case 1988028531:
			iVar0 = 918;
			break;
		
		case 73898487:
			iVar0 = 919;
			break;
		
		case 3253154178:
			iVar0 = 920;
			break;
		
		case 3330546742:
			iVar0 = 921;
			break;
		
		case 1817749559:
			iVar0 = 922;
			break;
		
		case 1403640225:
			iVar0 = 923;
			break;
		
		case 1306937694:
			iVar0 = 924;
			break;
		
		case 4199433301:
			iVar0 = 925;
			break;
		
		case 2423515410:
			iVar0 = 926;
			break;
		
		case 3174124050:
			iVar0 = 927;
			break;
		
		case 2081997561:
			iVar0 = 928;
			break;
		
		case 2955752373:
			iVar0 = 929;
			break;
		
		case 9807447:
			iVar0 = 930;
			break;
		
		case 4058961977:
			iVar0 = 931;
			break;
		
		case 2824172702:
			iVar0 = 932;
			break;
		
		case 2194098912:
			iVar0 = 933;
			break;
		
		case 805626890:
			iVar0 = 934;
			break;
		
		case 3856479567:
			iVar0 = 935;
			break;
		
		case 1258452311:
			iVar0 = 936;
			break;
		
		case 2907379409:
			iVar0 = 937;
			break;
		
		case 390131826:
			iVar0 = 938;
			break;
		
		case 3361102206:
			iVar0 = 939;
			break;
		
		case 42888304:
			iVar0 = 940;
			break;
		
		case 2782349107:
			iVar0 = 941;
			break;
		
		case 1805955770:
			iVar0 = 942;
			break;
		
		case 2040741242:
			iVar0 = 943;
			break;
		
		case 2722851469:
			iVar0 = 944;
			break;
		
		case 2193688522:
			iVar0 = 945;
			break;
		
		case 2288750428:
			iVar0 = 946;
			break;
		
		case 1445470992:
			iVar0 = 947;
			break;
		
		case 31459402:
			iVar0 = 948;
			break;
		
		case 850282323:
			iVar0 = 949;
			break;
		
		case 1518409673:
			iVar0 = 950;
			break;
		
		case 576453072:
			iVar0 = 951;
			break;
		
		case 1343575520:
			iVar0 = 952;
			break;
		
		case 3050911507:
			iVar0 = 953;
			break;
		
		case 1650491806:
			iVar0 = 954;
			break;
		
		case 507754313:
			iVar0 = 955;
			break;
		
		case 3126231503:
			iVar0 = 956;
			break;
		
		case 539301314:
			iVar0 = 957;
			break;
		
		case 485114319:
			iVar0 = 958;
			break;
		
		case 1397146165:
			iVar0 = 959;
			break;
		
		case 3372054796:
			iVar0 = 960;
			break;
		
		case 898093918:
			iVar0 = 961;
			break;
		
		case 3781150267:
			iVar0 = 962;
			break;
		
		case 134762953:
			iVar0 = 963;
			break;
		
		case 252404144:
			iVar0 = 964;
			break;
		
		case 168579849:
			iVar0 = 965;
			break;
		
		case 1888095634:
			iVar0 = 966;
			break;
		
		case 3248730510:
			iVar0 = 967;
			break;
		
		case 33901453:
			iVar0 = 968;
			break;
		
		case 2251734358:
			iVar0 = 969;
			break;
		
		case 1113927554:
			iVar0 = 970;
			break;
		
		case 2692407995:
			iVar0 = 971;
			break;
		
		case 3127154998:
			iVar0 = 972;
			break;
		
		case 1912961832:
			iVar0 = 973;
			break;
		
		case 647456058:
			iVar0 = 974;
			break;
		
		case 3577444135:
			iVar0 = 975;
			break;
		
		case 2653097029:
			iVar0 = 976;
			break;
		
		case 1857030685:
			iVar0 = 977;
			break;
		
		case 3220044650:
			iVar0 = 978;
			break;
		
		case 2750658625:
			iVar0 = 979;
			break;
		
		case 3814592076:
			iVar0 = 980;
			break;
		
		case 3136660877:
			iVar0 = 981;
			break;
		
		case 808115088:
			iVar0 = 982;
			break;
		
		case 1544542048:
			iVar0 = 983;
			break;
		
		case 212713658:
			iVar0 = 984;
			break;
		
		case 3757490169:
			iVar0 = 985;
			break;
		
		case 2227834618:
			iVar0 = 986;
			break;
		
		case 1060051174:
			iVar0 = 987;
			break;
		
		case 2038375002:
			iVar0 = 988;
			break;
		
		case 4038592993:
			iVar0 = 989;
			break;
		
		case 2206007286:
			iVar0 = 990;
			break;
		
		case 53750878:
			iVar0 = 991;
			break;
		
		case 4132540682:
			iVar0 = 992;
			break;
		
		case 764954331:
			iVar0 = 993;
			break;
		
		case 4183115074:
			iVar0 = 994;
			break;
		
		case 2162071476:
			iVar0 = 995;
			break;
		
		case 2601745922:
			iVar0 = 996;
			break;
		
		case 1413331587:
			iVar0 = 997;
			break;
		
		case 3339094562:
			iVar0 = 998;
			break;
		
		case 3436910274:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case 848913252:
			iVar0 = 1000;
			break;
		
		case 3857235586:
			iVar0 = 1001;
			break;
		
		case 2740148174:
			iVar0 = 1002;
			break;
		
		case 160748074:
			iVar0 = 1003;
			break;
		
		case 2300900741:
			iVar0 = 1004;
			break;
		
		case 1529932499:
			iVar0 = 1005;
			break;
		
		case 3526647457:
			iVar0 = 1006;
			break;
		
		case 514923246:
			iVar0 = 1007;
			break;
		
		case 2095668450:
			iVar0 = 1008;
			break;
		
		case 2934115835:
			iVar0 = 1009;
			break;
		
		case 3090672386:
			iVar0 = 1010;
			break;
		
		case 825438363:
			iVar0 = 1011;
			break;
		
		case 1442163504:
			iVar0 = 1012;
			break;
		
		case 3776928327:
			iVar0 = 1013;
			break;
		
		case 2732608579:
			iVar0 = 1014;
			break;
		
		case 2352732915:
			iVar0 = 1015;
			break;
		
		case 1848637041:
			iVar0 = 1016;
			break;
		
		case 2570652720:
			iVar0 = 1017;
			break;
		
		case 1610788609:
			iVar0 = 1018;
			break;
		
		case 438240239:
			iVar0 = 1019;
			break;
		
		case 3762782423:
			iVar0 = 1020;
			break;
		
		case 4118548380:
			iVar0 = 1021;
			break;
		
		case 4039712335:
			iVar0 = 1022;
			break;
		
		case 2719310071:
			iVar0 = 1023;
			break;
		
		case 712387083:
			iVar0 = 1024;
			break;
		
		case 1409023355:
			iVar0 = 1025;
			break;
		
		case 1855924338:
			iVar0 = 1026;
			break;
		
		case 3443157429:
			iVar0 = 1027;
			break;
		
		case 3584645279:
			iVar0 = 1028;
			break;
		
		case 1830521267:
			iVar0 = 1029;
			break;
		
		case 171269136:
			iVar0 = 1030;
			break;
		
		case 13553741:
			iVar0 = 1031;
			break;
		
		case 798116039:
			iVar0 = 1032;
			break;
		
		case 899953426:
			iVar0 = 1033;
			break;
		
		case 2513882371:
			iVar0 = 1034;
			break;
		
		case 3293247315:
			iVar0 = 1035;
			break;
		
		case 3445478258:
			iVar0 = 1036;
			break;
		
		case 789088101:
			iVar0 = 1037;
			break;
		
		case 3395834459:
			iVar0 = 1038;
			break;
		
		case 2449967341:
			iVar0 = 1039;
			break;
		
		case 701640495:
			iVar0 = 1040;
			break;
		
		case 2712077458:
			iVar0 = 1041;
			break;
		
		case 4051998793:
			iVar0 = 1042;
			break;
		
		case 914325248:
			iVar0 = 1043;
			break;
		
		case 1925867880:
			iVar0 = 1044;
			break;
		
		case 1100261909:
			iVar0 = 1045;
			break;
		
		case 3605174800:
			iVar0 = 1046;
			break;
	}
	if (iVar0 != 4294967295)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_144(int iParam0, var uParam1)//Position - 0x1E0E2
{
	int iVar0;
	
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 2377643231:
			iVar0 = 0;
			break;
		
		case 1056297333:
			iVar0 = 1;
			break;
		
		case 494620709:
			iVar0 = 2;
			break;
		
		case 800453786:
			iVar0 = 3;
			break;
		
		case 3212230321:
			iVar0 = 4;
			break;
		
		case 3539985859:
			iVar0 = 5;
			break;
		
		case 2493111758:
			iVar0 = 6;
			break;
		
		case 459313194:
			iVar0 = 7;
			break;
		
		case 2007087579:
			iVar0 = 8;
			break;
		
		case 1987172386:
			iVar0 = 9;
			break;
		
		case 1801787829:
			iVar0 = 10;
			break;
		
		case 4073342808:
			iVar0 = 11;
			break;
		
		case 25158851:
			iVar0 = 12;
			break;
		
		case 472458130:
			iVar0 = 13;
			break;
		
		case 164352862:
			iVar0 = 14;
			break;
		
		case 3390818517:
			iVar0 = 15;
			break;
		
		case 3600527525:
			iVar0 = 16;
			break;
		
		case 2825376830:
			iVar0 = 17;
			break;
		
		case 2783760196:
			iVar0 = 18;
			break;
		
		case 2942296618:
			iVar0 = 19;
			break;
		
		case 2334693820:
			iVar0 = 20;
			break;
		
		case 2637577687:
			iVar0 = 21;
			break;
		
		case 1826839858:
			iVar0 = 22;
			break;
		
		case 1989701788:
			iVar0 = 23;
			break;
		
		case 1213109257:
			iVar0 = 24;
			break;
		
		case 607407061:
			iVar0 = 25;
			break;
		
		case 875031480:
			iVar0 = 26;
			break;
		
		case 1487418552:
			iVar0 = 27;
			break;
		
		case 264053475:
			iVar0 = 28;
			break;
		
		case 99094329:
			iVar0 = 29;
			break;
		
		case 4050773581:
			iVar0 = 30;
			break;
		
		case 3754181362:
			iVar0 = 31;
			break;
		
		case 3600134293:
			iVar0 = 32;
			break;
		
		case 3442908631:
			iVar0 = 33;
			break;
		
		case 2782318356:
			iVar0 = 34;
			break;
		
		case 3533613219:
			iVar0 = 35;
			break;
		
		case 1560551467:
			iVar0 = 36;
			break;
		
		case 827974775:
			iVar0 = 37;
			break;
		
		case 1595162603:
			iVar0 = 38;
			break;
		
		case 709663738:
			iVar0 = 39;
			break;
		
		case 990002533:
			iVar0 = 40;
			break;
		
		case 1860213958:
			iVar0 = 41;
			break;
		
		case 2119318441:
			iVar0 = 42;
			break;
		
		case 2341230109:
			iVar0 = 43;
			break;
		
		case 193320466:
			iVar0 = 44;
			break;
		
		case 1936646403:
			iVar0 = 45;
			break;
		
		case 3168924648:
			iVar0 = 46;
			break;
		
		case 3169944784:
			iVar0 = 47;
			break;
		
		case 2990598279:
			iVar0 = 48;
			break;
		
		case 2276823921:
			iVar0 = 49;
			break;
		
		case 224730392:
			iVar0 = 50;
			break;
		
		case 439629494:
			iVar0 = 51;
			break;
		
		case 736778786:
			iVar0 = 52;
			break;
		
		case 1048444745:
			iVar0 = 53;
			break;
		
		case 1988816738:
			iVar0 = 54;
			break;
		
		case 2140603469:
			iVar0 = 55;
			break;
		
		case 214245031:
			iVar0 = 56;
			break;
		
		case 1006238992:
			iVar0 = 57;
			break;
		
		case 689952604:
			iVar0 = 58;
			break;
		
		case 3613438943:
			iVar0 = 59;
			break;
		
		case 1157448359:
			iVar0 = 60;
			break;
		
		case 43105745:
			iVar0 = 61;
			break;
		
		case 4024572018:
			iVar0 = 62;
			break;
		
		case 505181414:
			iVar0 = 63;
			break;
		
		case 254662409:
			iVar0 = 64;
			break;
		
		case 3312042882:
			iVar0 = 65;
			break;
		
		case 3138957024:
			iVar0 = 66;
			break;
		
		case 1885313391:
			iVar0 = 67;
			break;
		
		case 3600180699:
			iVar0 = 68;
			break;
		
		case 2344767540:
			iVar0 = 69;
			break;
		
		case 384168721:
			iVar0 = 70;
			break;
		
		case 3925514555:
			iVar0 = 71;
			break;
		
		case 4205853350:
			iVar0 = 72;
			break;
		
		case 1836261422:
			iVar0 = 73;
			break;
		
		case 3290549642:
			iVar0 = 74;
			break;
		
		case 3540872033:
			iVar0 = 75;
			break;
		
		case 3084268787:
			iVar0 = 76;
			break;
		
		case 1332405298:
			iVar0 = 77;
			break;
		
		case 552929095:
			iVar0 = 78;
			break;
		
		case 861154309:
			iVar0 = 79;
			break;
		
		case 2641166089:
			iVar0 = 80;
			break;
		
		case 4207753672:
			iVar0 = 81;
			break;
		
		case 1285643631:
			iVar0 = 82;
			break;
		
		case 523240077:
			iVar0 = 83;
			break;
		
		case 823174734:
			iVar0 = 84;
			break;
		
		case 3046354774:
			iVar0 = 85;
			break;
		
		case 123359970:
			iVar0 = 86;
			break;
		
		case 369684543:
			iVar0 = 87;
			break;
		
		case 3957824509:
			iVar0 = 88;
			break;
		
		case 1395583642:
			iVar0 = 89;
			break;
		
		case 1782520810:
			iVar0 = 90;
			break;
		
		case 3634460845:
			iVar0 = 91;
			break;
		
		case 3202106659:
			iVar0 = 92;
			break;
		
		case 524387820:
			iVar0 = 93;
			break;
		
		case 2465787273:
			iVar0 = 94;
			break;
		
		case 2091368679:
			iVar0 = 95;
			break;
		
		case 1851597906:
			iVar0 = 96;
			break;
		
		case 3860337562:
			iVar0 = 97;
			break;
		
		case 1415278623:
			iVar0 = 98;
			break;
		
		case 1252285617:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 893595891:
			iVar0 = 100;
			break;
		
		case 423819507:
			iVar0 = 101;
			break;
		
		case 2861079424:
			iVar0 = 102;
			break;
		
		case 3830353675:
			iVar0 = 103;
			break;
		
		case 3993739909:
			iVar0 = 104;
			break;
		
		case 3593204390:
			iVar0 = 105;
			break;
		
		case 3404684333:
			iVar0 = 106;
			break;
		
		case 3106715816:
			iVar0 = 107;
			break;
		
		case 258827560:
			iVar0 = 108;
			break;
		
		case 965649655:
			iVar0 = 109;
			break;
		
		case 718800778:
			iVar0 = 110;
			break;
		
		case 1959959422:
			iVar0 = 111;
			break;
		
		case 1200177388:
			iVar0 = 112;
			break;
		
		case 2420527717:
			iVar0 = 113;
			break;
		
		case 2615461403:
			iVar0 = 114;
			break;
		
		case 2318738108:
			iVar0 = 115;
			break;
		
		case 2037875009:
			iVar0 = 116;
			break;
		
		case 4059820632:
			iVar0 = 117;
			break;
		
		case 3853113780:
			iVar0 = 118;
			break;
		
		case 3630745853:
			iVar0 = 119;
			break;
		
		case 3923340254:
			iVar0 = 120;
			break;
		
		case 3028746554:
			iVar0 = 121;
			break;
		
		case 3326911685:
			iVar0 = 122;
			break;
		
		case 248100286:
			iVar0 = 123;
			break;
		
		case 551606764:
			iVar0 = 124;
			break;
		
		case 1805971315:
			iVar0 = 125;
			break;
		
		case 4251325175:
			iVar0 = 126;
			break;
		
		case 1172251624:
			iVar0 = 127;
			break;
		
		case 1471989667:
			iVar0 = 128;
			break;
		
		case 2170264508:
			iVar0 = 129;
			break;
		
		case 2468233025:
			iVar0 = 130;
			break;
		
		case 3394514356:
			iVar0 = 131;
			break;
		
		case 4002772534:
			iVar0 = 132;
			break;
		
		case 637166847:
			iVar0 = 133;
			break;
		
		case 3090123115:
			iVar0 = 134;
			break;
		
		case 324779970:
			iVar0 = 135;
			break;
		
		case 329039940:
			iVar0 = 136;
			break;
		
		case 1854928425:
			iVar0 = 137;
			break;
		
		case 13179549:
			iVar0 = 138;
			break;
		
		case 1899823455:
			iVar0 = 139;
			break;
		
		case 2204476848:
			iVar0 = 140;
			break;
		
		case 2493499428:
			iVar0 = 141;
			break;
		
		case 953986562:
			iVar0 = 142;
			break;
		
		case 585335312:
			iVar0 = 143;
			break;
		
		case 489617063:
			iVar0 = 144;
			break;
		
		case 210195800:
			iVar0 = 145;
			break;
		
		case 1843402776:
			iVar0 = 146;
			break;
		
		case 2694446475:
			iVar0 = 147;
			break;
		
		case 1399087889:
			iVar0 = 148;
			break;
		
		case 1169344430:
			iVar0 = 149;
			break;
		
		case 2266319478:
			iVar0 = 150;
			break;
		
		case 2959121676:
			iVar0 = 151;
			break;
		
		case 2844560976:
			iVar0 = 152;
			break;
		
		case 3085118205:
			iVar0 = 153;
			break;
		
		case 2065609077:
			iVar0 = 154;
			break;
		
		case 3630722055:
			iVar0 = 155;
			break;
		
		case 1676130538:
			iVar0 = 156;
			break;
		
		case 2564432594:
			iVar0 = 157;
			break;
		
		case 2527534700:
			iVar0 = 158;
			break;
		
		case 2278861692:
			iVar0 = 159;
			break;
		
		case 1971947238:
			iVar0 = 160;
			break;
		
		case 3932156049:
			iVar0 = 161;
			break;
		
		case 3626880045:
			iVar0 = 162;
			break;
		
		case 3473684970:
			iVar0 = 163;
			break;
		
		case 3211500201:
			iVar0 = 164;
			break;
		
		case 550067555:
			iVar0 = 165;
			break;
		
		case 1439221609:
			iVar0 = 166;
			break;
		
		case 67412954:
			iVar0 = 167;
			break;
		
		case 2295606939:
			iVar0 = 168;
			break;
		
		case 1461537582:
			iVar0 = 169;
			break;
		
		case 2466693888:
			iVar0 = 170;
			break;
		
		case 2975727534:
			iVar0 = 171;
			break;
		
		case 3060566475:
			iVar0 = 172;
			break;
		
		case 3302663847:
			iVar0 = 173;
			break;
		
		case 3656569047:
			iVar0 = 174;
			break;
		
		case 4253423613:
			iVar0 = 175;
			break;
		
		case 2360064278:
			iVar0 = 176;
			break;
		
		case 2132090345:
			iVar0 = 177;
			break;
		
		case 1751052413:
			iVar0 = 178;
			break;
		
		case 1519604966:
			iVar0 = 179;
			break;
		
		case 2330342771:
			iVar0 = 180;
			break;
		
		case 2006191823:
			iVar0 = 181;
			break;
		
		case 1633280603:
			iVar0 = 182;
			break;
		
		case 632918673:
			iVar0 = 183;
			break;
		
		case 4104927148:
			iVar0 = 184;
			break;
		
		case 42936837:
			iVar0 = 185;
			break;
		
		case 2836425320:
			iVar0 = 186;
			break;
		
		case 3688952543:
			iVar0 = 187;
			break;
		
		case 3681590925:
			iVar0 = 188;
			break;
		
		case 3848675795:
			iVar0 = 189;
			break;
		
		case 739308497:
			iVar0 = 190;
			break;
		
		case 495343292:
			iVar0 = 191;
			break;
		
		case 2608255643:
			iVar0 = 192;
			break;
		
		case 1187457341:
			iVar0 = 193;
			break;
		
		case 956403122:
			iVar0 = 194;
			break;
		
		case 1647042566:
			iVar0 = 195;
			break;
		
		case 3833488553:
			iVar0 = 196;
			break;
		
		case 2411641643:
			iVar0 = 197;
			break;
		
		case 2180718500:
			iVar0 = 198;
			break;
		
		case 314228205:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1503775674:
			iVar0 = 200;
			break;
		
		case 1862399610:
			iVar0 = 201;
			break;
		
		case 708472048:
			iVar0 = 202;
			break;
		
		case 3087599751:
			iVar0 = 203;
			break;
		
		case 111650251:
			iVar0 = 204;
			break;
		
		case 4266025802:
			iVar0 = 205;
			break;
		
		case 2467794158:
			iVar0 = 206;
			break;
		
		case 3774285873:
			iVar0 = 207;
			break;
		
		case 4085624142:
			iVar0 = 208;
			break;
		
		case 4001387825:
			iVar0 = 209;
			break;
		
		case 20871853:
			iVar0 = 210;
			break;
		
		case 4205143952:
			iVar0 = 211;
			break;
		
		case 2474775961:
			iVar0 = 212;
			break;
		
		case 2706420022:
			iVar0 = 213;
			break;
		
		case 3070680226:
			iVar0 = 214;
			break;
		
		case 3300816913:
			iVar0 = 215;
			break;
		
		case 3425142503:
			iVar0 = 216;
			break;
		
		case 3661636376:
			iVar0 = 217;
			break;
		
		case 3986835932:
			iVar0 = 218;
			break;
		
		case 4256688647:
			iVar0 = 219;
			break;
		
		case 555692245:
			iVar0 = 220;
			break;
		
		case 929455459:
			iVar0 = 221;
			break;
		
		case 2202530885:
			iVar0 = 222;
			break;
		
		case 1904300216:
			iVar0 = 223;
			break;
		
		case 2695606028:
			iVar0 = 224;
			break;
		
		case 2397965201:
			iVar0 = 225;
			break;
		
		case 3283154198:
			iVar0 = 226;
			break;
		
		case 2978173115:
			iVar0 = 227;
			break;
		
		case 3878861853:
			iVar0 = 228;
			break;
		
		case 4246988799:
			iVar0 = 229;
			break;
		
		case 3936764676:
			iVar0 = 230;
			break;
		
		case 547139312:
			iVar0 = 231;
			break;
		
		case 1124688073:
			iVar0 = 232;
			break;
		
		case 888521890:
			iVar0 = 233;
			break;
		
		case 665823766:
			iVar0 = 234;
			break;
		
		case 427888057:
			iVar0 = 235;
			break;
		
		case 1121411181:
			iVar0 = 236;
			break;
		
		case 890225886:
			iVar0 = 237;
			break;
		
		case 651012186:
			iVar0 = 238;
			break;
		
		case 422776101:
			iVar0 = 239;
			break;
		
		case 1630543134:
			iVar0 = 240;
			break;
		
		case 2349298380:
			iVar0 = 241;
			break;
		
		case 3666968031:
			iVar0 = 242;
			break;
		
		case 1682346315:
			iVar0 = 243;
			break;
		
		case 1021952654:
			iVar0 = 244;
			break;
		
		case 1319396867:
			iVar0 = 245;
			break;
		
		case 560794517:
			iVar0 = 246;
			break;
		
		case 858697496:
			iVar0 = 247;
			break;
		
		case 4263986066:
			iVar0 = 248;
			break;
		
		case 3966935081:
			iVar0 = 249;
			break;
		
		case 2843286071:
			iVar0 = 250;
			break;
		
		case 267904819:
			iVar0 = 251;
			break;
		
		case 1570178485:
			iVar0 = 252;
			break;
		
		case 2675116380:
			iVar0 = 253;
			break;
		
		case 3581900148:
			iVar0 = 254;
			break;
		
		case 946477614:
			iVar0 = 255;
			break;
		
		case 2871623595:
			iVar0 = 256;
			break;
		
		case 445931457:
			iVar0 = 257;
			break;
		
		case 678558588:
			iVar0 = 258;
			break;
		
		case 3440335309:
			iVar0 = 259;
			break;
		
		case 2587096087:
			iVar0 = 260;
			break;
		
		case 3431576112:
			iVar0 = 261;
			break;
		
		case 671171671:
			iVar0 = 262;
			break;
		
		case 904519720:
			iVar0 = 263;
			break;
		
		case 670952414:
			iVar0 = 264;
			break;
		
		case 4012091971:
			iVar0 = 265;
			break;
		
		case 2079623104:
			iVar0 = 266;
			break;
		
		case 1088443427:
			iVar0 = 267;
			break;
		
		case 200001600:
			iVar0 = 268;
			break;
		
		case 1620729159:
			iVar0 = 269;
			break;
		
		case 2581693058:
			iVar0 = 270;
			break;
		
		case 2723376327:
			iVar0 = 271;
			break;
		
		case 3837327922:
			iVar0 = 272;
			break;
		
		case 64160805:
			iVar0 = 273;
			break;
		
		case 1015325203:
			iVar0 = 274;
			break;
		
		case 2343188329:
			iVar0 = 275;
			break;
		
		case 1836042304:
			iVar0 = 276;
			break;
		
		case 3873872675:
			iVar0 = 277;
			break;
		
		case 641062099:
			iVar0 = 278;
			break;
		
		case 597454468:
			iVar0 = 279;
			break;
		
		case 713758205:
			iVar0 = 280;
			break;
		
		case 1042267708:
			iVar0 = 281;
			break;
		
		case 3657015635:
			iVar0 = 282;
			break;
		
		case 195911857:
			iVar0 = 283;
			break;
		
		case 903988957:
			iVar0 = 284;
			break;
		
		case 1068170761:
			iVar0 = 285;
			break;
		
		case 3675901912:
			iVar0 = 286;
			break;
		
		case 3797881341:
			iVar0 = 287;
			break;
		
		case 1138369002:
			iVar0 = 288;
			break;
		
		case 2337235988:
			iVar0 = 289;
			break;
		
		case 2231255171:
			iVar0 = 290;
			break;
		
		case 1773674262:
			iVar0 = 291;
			break;
		
		case 1027059614:
			iVar0 = 292;
			break;
		
		case 1366782677:
			iVar0 = 293;
			break;
		
		case 216134256:
			iVar0 = 294;
			break;
		
		case 810154442:
			iVar0 = 295;
			break;
		
		case 77285961:
			iVar0 = 296;
			break;
		
		case 1617489838:
			iVar0 = 297;
			break;
		
		case 1697138602:
			iVar0 = 298;
			break;
		
		case 711811694:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 3399860945:
			iVar0 = 300;
			break;
		
		case 875367934:
			iVar0 = 301;
			break;
		
		case 3315100136:
			iVar0 = 302;
			break;
		
		case 3061150354:
			iVar0 = 303;
			break;
		
		case 3428008581:
			iVar0 = 304;
			break;
		
		case 2991394291:
			iVar0 = 305;
			break;
		
		case 2085207152:
			iVar0 = 306;
			break;
		
		case 857137150:
			iVar0 = 307;
			break;
		
		case 535952639:
			iVar0 = 308;
			break;
		
		case 2320309895:
			iVar0 = 309;
			break;
		
		case 129909013:
			iVar0 = 310;
			break;
		
		case 2795907126:
			iVar0 = 311;
			break;
		
		case 412032123:
			iVar0 = 312;
			break;
		
		case 915049044:
			iVar0 = 313;
			break;
		
		case 456478679:
			iVar0 = 314;
			break;
		
		case 907364848:
			iVar0 = 315;
			break;
		
		case 2511246236:
			iVar0 = 316;
			break;
		
		case 3286604016:
			iVar0 = 317;
			break;
		
		case 1429817922:
			iVar0 = 318;
			break;
		
		case 3356641015:
			iVar0 = 319;
			break;
		
		case 3221042061:
			iVar0 = 320;
			break;
		
		case 1498524677:
			iVar0 = 321;
			break;
		
		case 1525596308:
			iVar0 = 322;
			break;
		
		case 1232639216:
			iVar0 = 323;
			break;
		
		case 956061600:
			iVar0 = 324;
			break;
		
		case 816551665:
			iVar0 = 325;
			break;
		
		case 2049704410:
			iVar0 = 326;
			break;
		
		case 3498148572:
			iVar0 = 327;
			break;
		
		case 1775476370:
			iVar0 = 328;
			break;
		
		case 266230635:
			iVar0 = 329;
			break;
		
		case 3706417613:
			iVar0 = 330;
			break;
		
		case 464027076:
			iVar0 = 331;
			break;
		
		case 2122049260:
			iVar0 = 332;
			break;
		
		case 1049130700:
			iVar0 = 333;
			break;
		
		case 4178014736:
			iVar0 = 334;
			break;
		
		case 1424723115:
			iVar0 = 335;
			break;
		
		case 3287695293:
			iVar0 = 336;
			break;
		
		case 3650137595:
			iVar0 = 337;
			break;
		
		case 2191744799:
			iVar0 = 338;
			break;
		
		case 2705172223:
			iVar0 = 339;
			break;
		
		case 2605299229:
			iVar0 = 340;
			break;
		
		case 4105153188:
			iVar0 = 341;
			break;
		
		case 2699675155:
			iVar0 = 342;
			break;
		
		case 2754026582:
			iVar0 = 343;
			break;
		
		case 2158496124:
			iVar0 = 344;
			break;
		
		case 3628074862:
			iVar0 = 345;
			break;
		
		case 3293841973:
			iVar0 = 346;
			break;
		
		case 904104464:
			iVar0 = 347;
			break;
		
		case 690016265:
			iVar0 = 348;
			break;
		
		case 38190590:
			iVar0 = 349;
			break;
		
		case 2119761078:
			iVar0 = 350;
			break;
		
		case 3081835584:
			iVar0 = 351;
			break;
		
		case 990079224:
			iVar0 = 352;
			break;
		
		case 3389921303:
			iVar0 = 353;
			break;
		
		case 2104378143:
			iVar0 = 354;
			break;
		
		case 3628335496:
			iVar0 = 355;
			break;
		
		case 549954933:
			iVar0 = 356;
			break;
		
		case 1830069972:
			iVar0 = 357;
			break;
		
		case 859320876:
			iVar0 = 358;
			break;
		
		case 3742608980:
			iVar0 = 359;
			break;
		
		case 1522216340:
			iVar0 = 360;
			break;
		
		case 2511670695:
			iVar0 = 361;
			break;
		
		case 283995288:
			iVar0 = 362;
			break;
		
		case 3319432886:
			iVar0 = 363;
			break;
		
		case 2206772672:
			iVar0 = 364;
			break;
		
		case 1744801848:
			iVar0 = 365;
			break;
		
		case 3813577650:
			iVar0 = 366;
			break;
		
		case 2513604260:
			iVar0 = 367;
			break;
		
		case 496009839:
			iVar0 = 368;
			break;
		
		case 3627358476:
			iVar0 = 369;
			break;
		
		case 460475899:
			iVar0 = 370;
			break;
		
		case 1491168919:
			iVar0 = 371;
			break;
		
		case 2683488490:
			iVar0 = 372;
			break;
		
		case 523495612:
			iVar0 = 373;
			break;
		
		case 4216959023:
			iVar0 = 374;
			break;
		
		case 3532591449:
			iVar0 = 375;
			break;
		
		case 331482129:
			iVar0 = 376;
			break;
		
		case 2211339246:
			iVar0 = 377;
			break;
		
		case 3826167179:
			iVar0 = 378;
			break;
		
		case 724819757:
			iVar0 = 379;
			break;
		
		case 3236205948:
			iVar0 = 380;
			break;
		
		case 3748789084:
			iVar0 = 381;
			break;
		
		case 4176914562:
			iVar0 = 382;
			break;
		
		case 1654466691:
			iVar0 = 383;
			break;
		
		case 3217413647:
			iVar0 = 384;
			break;
		
		case 3408875137:
			iVar0 = 385;
			break;
		
		case 2888635760:
			iVar0 = 386;
			break;
		
		case 2326032446:
			iVar0 = 387;
			break;
		
		case 3741245:
			iVar0 = 388;
			break;
		
		case 1387838298:
			iVar0 = 389;
			break;
		
		case 2353909077:
			iVar0 = 390;
			break;
		
		case 955033120:
			iVar0 = 391;
			break;
		
		case 677119231:
			iVar0 = 392;
			break;
		
		case 2678752380:
			iVar0 = 393;
			break;
		
		case 3453771999:
			iVar0 = 394;
			break;
		
		case 3385678017:
			iVar0 = 395;
			break;
		
		case 4055399955:
			iVar0 = 396;
			break;
		
		case 3681374589:
			iVar0 = 397;
			break;
		
		case 3306398922:
			iVar0 = 398;
			break;
		
		case 3204159642:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 534771589:
			iVar0 = 400;
			break;
		
		case 2954827777:
			iVar0 = 401;
			break;
		
		case 3444986535:
			iVar0 = 402;
			break;
		
		case 3743413818:
			iVar0 = 403;
			break;
		
		case 386581472:
			iVar0 = 404;
			break;
		
		case 1466454525:
			iVar0 = 405;
			break;
		
		case 283190173:
			iVar0 = 406;
			break;
		
		case 1528527015:
			iVar0 = 407;
			break;
		
		case 2604937330:
			iVar0 = 408;
			break;
		
		case 2608972830:
			iVar0 = 409;
			break;
		
		case 255166927:
			iVar0 = 410;
			break;
		
		case 4023709809:
			iVar0 = 411;
			break;
		
		case 1885215284:
			iVar0 = 412;
			break;
		
		case 2359810308:
			iVar0 = 413;
			break;
		
		case 1061465906:
			iVar0 = 414;
			break;
		
		case 3423935567:
			iVar0 = 415;
			break;
		
		case 4193795811:
			iVar0 = 416;
			break;
		
		case 2704668526:
			iVar0 = 417;
			break;
		
		case 303441856:
			iVar0 = 418;
			break;
		
		case 2245277646:
			iVar0 = 419;
			break;
		
		case 788520303:
			iVar0 = 420;
			break;
		
		case 3435105851:
			iVar0 = 421;
			break;
		
		case 1045897298:
			iVar0 = 422;
			break;
		
		case 116964921:
			iVar0 = 423;
			break;
		
		case 2792709690:
			iVar0 = 424;
			break;
		
		case 3748817012:
			iVar0 = 425;
			break;
		
		case 3937500408:
			iVar0 = 426;
			break;
		
		case 718674880:
			iVar0 = 427;
			break;
		
		case 2765566124:
			iVar0 = 428;
			break;
		
		case 2088037441:
			iVar0 = 429;
			break;
		
		case 2048866271:
			iVar0 = 430;
			break;
		
		case 2729535606:
			iVar0 = 431;
			break;
		
		case 2766501723:
			iVar0 = 432;
			break;
		
		case 401532197:
			iVar0 = 433;
			break;
		
		case 826974918:
			iVar0 = 434;
			break;
		
		case 3618899888:
			iVar0 = 435;
			break;
		
		case 1877289089:
			iVar0 = 436;
			break;
		
		case 859380017:
			iVar0 = 437;
			break;
		
		case 233098354:
			iVar0 = 438;
			break;
		
		case 566101858:
			iVar0 = 439;
			break;
		
		case 529460830:
			iVar0 = 440;
			break;
		
		case 2461849155:
			iVar0 = 441;
			break;
		
		case 422823598:
			iVar0 = 442;
			break;
		
		case 1450358661:
			iVar0 = 443;
			break;
		
		case 741089893:
			iVar0 = 444;
			break;
		
		case 1289848370:
			iVar0 = 445;
			break;
		
		case 616166430:
			iVar0 = 446;
			break;
		
		case 1489225316:
			iVar0 = 447;
			break;
		
		case 753969632:
			iVar0 = 448;
			break;
		
		case 3112136128:
			iVar0 = 449;
			break;
		
		case 1545103753:
			iVar0 = 450;
			break;
		
		case 2090080808:
			iVar0 = 451;
			break;
		
		case 903606896:
			iVar0 = 452;
			break;
		
		case 26759391:
			iVar0 = 453;
			break;
		
		case 1651885364:
			iVar0 = 454;
			break;
		
		case 729529407:
			iVar0 = 455;
			break;
		
		case 528802126:
			iVar0 = 456;
			break;
		
		case 2826964225:
			iVar0 = 457;
			break;
		
		case 1683696787:
			iVar0 = 458;
			break;
		
		case 3568108136:
			iVar0 = 459;
			break;
		
		case 1209899578:
			iVar0 = 460;
			break;
		
		case 930604285:
			iVar0 = 461;
			break;
		
		case 3986383110:
			iVar0 = 462;
			break;
		
		case 4230837422:
			iVar0 = 463;
			break;
		
		case 2863762782:
			iVar0 = 464;
			break;
		
		case 3161632992:
			iVar0 = 465;
			break;
		
		case 2485182525:
			iVar0 = 466;
			break;
		
		case 2718032298:
			iVar0 = 467;
			break;
		
		case 2724037612:
			iVar0 = 468;
			break;
		
		case 1976578151:
			iVar0 = 469;
			break;
		
		case 3853547334:
			iVar0 = 470;
			break;
		
		case 3453728753:
			iVar0 = 471;
			break;
		
		case 1644315794:
			iVar0 = 472;
			break;
		
		case 1964334039:
			iVar0 = 473;
			break;
		
		case 3126352371:
			iVar0 = 474;
			break;
		
		case 4238207201:
			iVar0 = 475;
			break;
		
		case 3288764775:
			iVar0 = 476;
			break;
		
		case 2460917757:
			iVar0 = 477;
			break;
		
		case 2234594716:
			iVar0 = 478;
			break;
		
		case 1057304170:
			iVar0 = 479;
			break;
		
		case 1421572640:
			iVar0 = 480;
			break;
		
		case 481259621:
			iVar0 = 481;
			break;
		
		case 1227497670:
			iVar0 = 482;
			break;
		
		case 319276780:
			iVar0 = 483;
			break;
		
		case 2070827921:
			iVar0 = 484;
			break;
		
		case 1433629991:
			iVar0 = 485;
			break;
		
		case 2581972646:
			iVar0 = 486;
			break;
		
		case 2125094286:
			iVar0 = 487;
			break;
		
		case 712298404:
			iVar0 = 488;
			break;
		
		case 1998072324:
			iVar0 = 489;
			break;
		
		case 1249206960:
			iVar0 = 490;
			break;
		
		case 3673611693:
			iVar0 = 491;
			break;
		
		case 1570835960:
			iVar0 = 492;
			break;
		
		case 3040764753:
			iVar0 = 493;
			break;
		
		case 3338831235:
			iVar0 = 494;
			break;
		
		case 2369486613:
			iVar0 = 495;
			break;
		
		case 220143168:
			iVar0 = 496;
			break;
		
		case 3273115719:
			iVar0 = 497;
			break;
		
		case 3521621780:
			iVar0 = 498;
			break;
		
		case 1091795205:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case 3135143256:
			iVar0 = 500;
			break;
		
		case 1448723789:
			iVar0 = 501;
			break;
		
		case 3806839956:
			iVar0 = 502;
			break;
		
		case 2330000013:
			iVar0 = 503;
			break;
		
		case 2659787169:
			iVar0 = 504;
			break;
		
		case 4284465733:
			iVar0 = 505;
			break;
		
		case 933419071:
			iVar0 = 506;
			break;
		
		case 1362374839:
			iVar0 = 507;
			break;
		
		case 488078687:
			iVar0 = 508;
			break;
		
		case 2425912672:
			iVar0 = 509;
			break;
		
		case 2477324465:
			iVar0 = 510;
			break;
		
		case 482472119:
			iVar0 = 511;
			break;
		
		case 2558127479:
			iVar0 = 512;
			break;
		
		case 415527077:
			iVar0 = 513;
			break;
		
		case 3387527107:
			iVar0 = 514;
			break;
		
		case 2195512507:
			iVar0 = 515;
			break;
		
		case 2575423754:
			iVar0 = 516;
			break;
		
		case 1848661824:
			iVar0 = 517;
			break;
		
		case 2276937590:
			iVar0 = 518;
			break;
		
		case 3577754752:
			iVar0 = 519;
			break;
		
		case 3700756846:
			iVar0 = 520;
			break;
		
		case 1520437442:
			iVar0 = 521;
			break;
		
		case 374349467:
			iVar0 = 522;
			break;
		
		case 1533123503:
			iVar0 = 523;
			break;
		
		case 2462186424:
			iVar0 = 524;
			break;
		
		case 130721536:
			iVar0 = 525;
			break;
		
		case 195356001:
			iVar0 = 526;
			break;
		
		case 3738051574:
			iVar0 = 527;
			break;
		
		case 2364404600:
			iVar0 = 528;
			break;
		
		case 941227127:
			iVar0 = 529;
			break;
		
		case 3452267707:
			iVar0 = 530;
			break;
		
		case 1654019571:
			iVar0 = 531;
			break;
		
		case 224191803:
			iVar0 = 532;
			break;
		
		case 2298171041:
			iVar0 = 533;
			break;
		
		case 2444251856:
			iVar0 = 534;
			break;
		
		case 1603163718:
			iVar0 = 535;
			break;
		
		case 1567227108:
			iVar0 = 536;
			break;
		
		case 2664317299:
			iVar0 = 537;
			break;
		
		case 4269240224:
			iVar0 = 538;
			break;
		
		case 2931548643:
			iVar0 = 539;
			break;
		
		case 1878229535:
			iVar0 = 540;
			break;
		
		case 1531050226:
			iVar0 = 541;
			break;
		
		case 1246243345:
			iVar0 = 542;
			break;
		
		case 463561930:
			iVar0 = 543;
			break;
		
		case 1431846777:
			iVar0 = 544;
			break;
		
		case 3834799180:
			iVar0 = 545;
			break;
		
		case 2279623714:
			iVar0 = 546;
			break;
		
		case 2051301469:
			iVar0 = 547;
			break;
		
		case 1887452986:
			iVar0 = 548;
			break;
		
		case 2743635327:
			iVar0 = 549;
			break;
		
		case 682382693:
			iVar0 = 550;
			break;
		
		case 765481743:
			iVar0 = 551;
			break;
		
		case 1094179010:
			iVar0 = 552;
			break;
		
		case 1906582382:
			iVar0 = 553;
			break;
		
		case 1923135102:
			iVar0 = 554;
			break;
		
		case 3330059108:
			iVar0 = 555;
			break;
		
		case 3149070523:
			iVar0 = 556;
			break;
		
		case 3518718614:
			iVar0 = 557;
			break;
		
		case 872613482:
			iVar0 = 558;
			break;
		
		case 1049060638:
			iVar0 = 559;
			break;
		
		case 3367831962:
			iVar0 = 560;
			break;
		
		case 3849147253:
			iVar0 = 561;
			break;
		
		case 1610045630:
			iVar0 = 562;
			break;
		
		case 3224167131:
			iVar0 = 563;
			break;
		
		case 3705375134:
			iVar0 = 564;
			break;
		
		case 1723966869:
			iVar0 = 565;
			break;
		
		case 402539085:
			iVar0 = 566;
			break;
		
		case 873283678:
			iVar0 = 567;
			break;
		
		case 3411806187:
			iVar0 = 568;
			break;
		
		case 2530048142:
			iVar0 = 569;
			break;
		
		case 2244614783:
			iVar0 = 570;
			break;
		
		case 1114188021:
			iVar0 = 571;
			break;
		
		case 1798282399:
			iVar0 = 572;
			break;
		
		case 1944820428:
			iVar0 = 573;
			break;
		
		case 100210893:
			iVar0 = 574;
			break;
		
		case 2595944785:
			iVar0 = 575;
			break;
		
		case 466917406:
			iVar0 = 576;
			break;
		
		case 3945221051:
			iVar0 = 577;
			break;
		
		case 715904570:
			iVar0 = 578;
			break;
		
		case 281777035:
			iVar0 = 579;
			break;
		
		case 1511283406:
			iVar0 = 580;
			break;
		
		case 4053629649:
			iVar0 = 581;
			break;
		
		case 748393780:
			iVar0 = 582;
			break;
		
		case 709511536:
			iVar0 = 583;
			break;
		
		case 3642431830:
			iVar0 = 584;
			break;
		
		case 3146066454:
			iVar0 = 585;
			break;
		
		case 4023103986:
			iVar0 = 586;
			break;
		
		case 35654857:
			iVar0 = 587;
			break;
		
		case 1894813304:
			iVar0 = 588;
			break;
		
		case 1184660438:
			iVar0 = 589;
			break;
		
		case 2833216333:
			iVar0 = 590;
			break;
		
		case 769964545:
			iVar0 = 591;
			break;
		
		case 1424500982:
			iVar0 = 592;
			break;
		
		case 2484182111:
			iVar0 = 593;
			break;
		
		case 837990279:
			iVar0 = 594;
			break;
		
		case 2937179293:
			iVar0 = 595;
			break;
		
		case 4286756969:
			iVar0 = 596;
			break;
		
		case 1186553524:
			iVar0 = 597;
			break;
		
		case 1174934203:
			iVar0 = 598;
			break;
		
		case 3310518207:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case 4245396459:
			iVar0 = 600;
			break;
		
		case 2614595511:
			iVar0 = 601;
			break;
		
		case 2444054906:
			iVar0 = 602;
			break;
		
		case 2554929209:
			iVar0 = 603;
			break;
		
		case 3675425349:
			iVar0 = 604;
			break;
		
		case 294240494:
			iVar0 = 605;
			break;
		
		case 3529425100:
			iVar0 = 606;
			break;
		
		case 2874304651:
			iVar0 = 607;
			break;
		
		case 331918356:
			iVar0 = 608;
			break;
		
		case 204953755:
			iVar0 = 609;
			break;
		
		case 1764172461:
			iVar0 = 610;
			break;
		
		case 1462870109:
			iVar0 = 611;
			break;
		
		case 2223952829:
			iVar0 = 612;
			break;
		
		case 478439238:
			iVar0 = 613;
			break;
		
		case 796489219:
			iVar0 = 614;
			break;
		
		case 843279688:
			iVar0 = 615;
			break;
		
		case 1752551314:
			iVar0 = 616;
			break;
		
		case 735155845:
			iVar0 = 617;
			break;
		
		case 1863251462:
			iVar0 = 618;
			break;
		
		case 2152908533:
			iVar0 = 619;
			break;
		
		case 4087376191:
			iVar0 = 620;
			break;
		
		case 3362153409:
			iVar0 = 621;
			break;
		
		case 3981464097:
			iVar0 = 622;
			break;
		
		case 718936417:
			iVar0 = 623;
			break;
		
		case 3187317691:
			iVar0 = 624;
			break;
		
		case 39090475:
			iVar0 = 625;
			break;
		
		case 1628251208:
			iVar0 = 626;
			break;
		
		case 3983721389:
			iVar0 = 627;
			break;
		
		case 3352935961:
			iVar0 = 628;
			break;
		
		case 3009926759:
			iVar0 = 629;
			break;
		
		case 3688260405:
			iVar0 = 630;
			break;
		
		case 2575871438:
			iVar0 = 631;
			break;
		
		case 1725502681:
			iVar0 = 632;
			break;
		
		case 609583888:
			iVar0 = 633;
			break;
		
		case 3122584141:
			iVar0 = 634;
			break;
		
		case 4291474892:
			iVar0 = 635;
			break;
		
		case 3288962651:
			iVar0 = 636;
			break;
		
		case 2357655814:
			iVar0 = 637;
			break;
		
		case 2229363202:
			iVar0 = 638;
			break;
		
		case 2028818254:
			iVar0 = 639;
			break;
		
		case 1624012067:
			iVar0 = 640;
			break;
		
		case 2417150155:
			iVar0 = 641;
			break;
		
		case 3383391104:
			iVar0 = 642;
			break;
		
		case 2256954020:
			iVar0 = 643;
			break;
		
		case 3392980754:
			iVar0 = 644;
			break;
		
		case 1792492176:
			iVar0 = 645;
			break;
		
		case 4208481967:
			iVar0 = 646;
			break;
		
		case 3211533028:
			iVar0 = 647;
			break;
		
		case 613606704:
			iVar0 = 648;
			break;
		
		case 3900113481:
			iVar0 = 649;
			break;
		
		case 3191839676:
			iVar0 = 650;
			break;
		
		case 2729316790:
			iVar0 = 651;
			break;
		
		case 1845793118:
			iVar0 = 652;
			break;
		
		case 105835401:
			iVar0 = 653;
			break;
		
		case 874268443:
			iVar0 = 654;
			break;
		
		case 2088424900:
			iVar0 = 655;
			break;
		
		case 3508235245:
			iVar0 = 656;
			break;
		
		case 2054090970:
			iVar0 = 657;
			break;
		
		case 1878368697:
			iVar0 = 658;
			break;
		
		case 569662133:
			iVar0 = 659;
			break;
		
		case 3502164338:
			iVar0 = 660;
			break;
		
		case 2006001399:
			iVar0 = 661;
			break;
		
		case 1785762805:
			iVar0 = 662;
			break;
		
		case 737220320:
			iVar0 = 663;
			break;
		
		case 1396060544:
			iVar0 = 664;
			break;
		
		case 2330238560:
			iVar0 = 665;
			break;
		
		case 1593302778:
			iVar0 = 666;
			break;
		
		case 84849272:
			iVar0 = 667;
			break;
		
		case 3892191131:
			iVar0 = 668;
			break;
		
		case 4073306562:
			iVar0 = 669;
			break;
		
		case 1648112645:
			iVar0 = 670;
			break;
		
		case 2066668749:
			iVar0 = 671;
			break;
		
		case 4290543133:
			iVar0 = 672;
			break;
		
		case 4121678705:
			iVar0 = 673;
			break;
		
		case 253771760:
			iVar0 = 674;
			break;
		
		case 2863393274:
			iVar0 = 675;
			break;
		
		case 959314664:
			iVar0 = 676;
			break;
		
		case 1670479428:
			iVar0 = 677;
			break;
		
		case 1779534675:
			iVar0 = 678;
			break;
		
		case 3026762825:
			iVar0 = 679;
			break;
		
		case 2357299044:
			iVar0 = 680;
			break;
		
		case 4102164726:
			iVar0 = 681;
			break;
		
		case 1200380295:
			iVar0 = 682;
			break;
		
		case 3650464080:
			iVar0 = 683;
			break;
		
		case 496410473:
			iVar0 = 684;
			break;
		
		case 462780886:
			iVar0 = 685;
			break;
		
		case 211198653:
			iVar0 = 686;
			break;
		
		case 3790954557:
			iVar0 = 687;
			break;
		
		case 34276608:
			iVar0 = 688;
			break;
		
		case 2206744097:
			iVar0 = 689;
			break;
		
		case 2056773549:
			iVar0 = 690;
			break;
		
		case 962023066:
			iVar0 = 691;
			break;
		
		case 893288510:
			iVar0 = 692;
			break;
		
		case 1963590204:
			iVar0 = 693;
			break;
		
		case 919272855:
			iVar0 = 694;
			break;
		
		case 413754974:
			iVar0 = 695;
			break;
		
		case 2432050824:
			iVar0 = 696;
			break;
		
		case 3110235257:
			iVar0 = 697;
			break;
		
		case 4151463841:
			iVar0 = 698;
			break;
		
		case 3175745814:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case 2652767338:
			iVar0 = 700;
			break;
		
		case 133895676:
			iVar0 = 701;
			break;
		
		case 2254739093:
			iVar0 = 702;
			break;
		
		case 3511324146:
			iVar0 = 703;
			break;
		
		case 291473683:
			iVar0 = 704;
			break;
		
		case 3749493234:
			iVar0 = 705;
			break;
		
		case 1013405919:
			iVar0 = 706;
			break;
		
		case 673922718:
			iVar0 = 707;
			break;
		
		case 2587589773:
			iVar0 = 708;
			break;
		
		case 1029334921:
			iVar0 = 709;
			break;
		
		case 3760111810:
			iVar0 = 710;
			break;
		
		case 3778634034:
			iVar0 = 711;
			break;
		
		case 485135095:
			iVar0 = 712;
			break;
		
		case 1713551997:
			iVar0 = 713;
			break;
		
		case 2804308795:
			iVar0 = 714;
			break;
		
		case 2559332058:
			iVar0 = 715;
			break;
		
		case 1931303956:
			iVar0 = 716;
			break;
		
		case 2363349808:
			iVar0 = 717;
			break;
		
		case 2568634995:
			iVar0 = 718;
			break;
		
		case 2912044766:
			iVar0 = 719;
			break;
		
		case 452778672:
			iVar0 = 720;
			break;
		
		case 2518176946:
			iVar0 = 721;
			break;
		
		case 2306910001:
			iVar0 = 722;
			break;
		
		case 816707921:
			iVar0 = 723;
			break;
		
		case 744446190:
			iVar0 = 724;
			break;
		
		case 917772807:
			iVar0 = 725;
			break;
		
		case 4002044941:
			iVar0 = 726;
			break;
		
		case 2799534611:
			iVar0 = 727;
			break;
		
		case 3483819579:
			iVar0 = 728;
			break;
		
		case 3443856147:
			iVar0 = 729;
			break;
		
		case 1404205290:
			iVar0 = 730;
			break;
		
		case 2929051212:
			iVar0 = 731;
			break;
		
		case 3872053927:
			iVar0 = 732;
			break;
		
		case 3402173809:
			iVar0 = 733;
			break;
		
		case 2499759140:
			iVar0 = 734;
			break;
		
		case 573261452:
			iVar0 = 735;
			break;
		
		case 2111374302:
			iVar0 = 736;
			break;
		
		case 1832021545:
			iVar0 = 737;
			break;
		
		case 209273925:
			iVar0 = 738;
			break;
		
		case 4240712565:
			iVar0 = 739;
			break;
		
		case 112211142:
			iVar0 = 740;
			break;
		
		case 1306824915:
			iVar0 = 741;
			break;
		
		case 2453340107:
			iVar0 = 742;
			break;
		
		case 2480813839:
			iVar0 = 743;
			break;
		
		case 4248706915:
			iVar0 = 744;
			break;
		
		case 3991558277:
			iVar0 = 745;
			break;
		
		case 2773834007:
			iVar0 = 746;
			break;
		
		case 3646773689:
			iVar0 = 747;
			break;
		
		case 820296726:
			iVar0 = 748;
			break;
		
		case 2025651359:
			iVar0 = 749;
			break;
		
		case 1082588124:
			iVar0 = 750;
			break;
		
		case 3837214976:
			iVar0 = 751;
			break;
		
		case 1173525590:
			iVar0 = 752;
			break;
		
		case 2171481858:
			iVar0 = 753;
			break;
		
		case 3479260505:
			iVar0 = 754;
			break;
		
		case 2976164949:
			iVar0 = 755;
			break;
		
		case 306110040:
			iVar0 = 756;
			break;
		
		case 1828101251:
			iVar0 = 757;
			break;
		
		case 3375652548:
			iVar0 = 758;
			break;
		
		case 1971111649:
			iVar0 = 759;
			break;
		
		case 2817495570:
			iVar0 = 760;
			break;
		
		case 3644041061:
			iVar0 = 761;
			break;
		
		case 3676649172:
			iVar0 = 762;
			break;
		
		case 2474028615:
			iVar0 = 763;
			break;
		
		case 2762333887:
			iVar0 = 764;
			break;
		
		case 1605199232:
			iVar0 = 765;
			break;
		
		case 113768799:
			iVar0 = 766;
			break;
		
		case 4027309874:
			iVar0 = 767;
			break;
		
		case 3751426808:
			iVar0 = 768;
			break;
		
		case 146774245:
			iVar0 = 769;
			break;
		
		case 3855904941:
			iVar0 = 770;
			break;
		
		case 4107181384:
			iVar0 = 771;
			break;
		
		case 654127400:
			iVar0 = 772;
			break;
		
		case 2263409101:
			iVar0 = 773;
			break;
		
		case 3223088199:
			iVar0 = 774;
			break;
		
		case 2048147896:
			iVar0 = 775;
			break;
		
		case 2749415457:
			iVar0 = 776;
			break;
		
		case 2483818209:
			iVar0 = 777;
			break;
		
		case 4038930773:
			iVar0 = 778;
			break;
		
		case 4047781074:
			iVar0 = 779;
			break;
		
		case 3939020719:
			iVar0 = 780;
			break;
		
		case 181399885:
			iVar0 = 781;
			break;
		
		case 3075536586:
			iVar0 = 782;
			break;
		
		case 928781515:
			iVar0 = 783;
			break;
		
		case 2537526450:
			iVar0 = 784;
			break;
		
		case 3407610657:
			iVar0 = 785;
			break;
		
		case 4132551387:
			iVar0 = 786;
			break;
		
		case 2472790513:
			iVar0 = 787;
			break;
		
		case 4163385587:
			iVar0 = 788;
			break;
		
		case 3325552056:
			iVar0 = 789;
			break;
		
		case 1482211094:
			iVar0 = 790;
			break;
		
		case 1942093304:
			iVar0 = 791;
			break;
		
		case 1376322385:
			iVar0 = 792;
			break;
		
		case 1678423640:
			iVar0 = 793;
			break;
		
		case 1321477520:
			iVar0 = 794;
			break;
		
		case 3624132081:
			iVar0 = 795;
			break;
		
		case 4262651638:
			iVar0 = 796;
			break;
		
		case 3579465656:
			iVar0 = 797;
			break;
		
		case 812138662:
			iVar0 = 798;
			break;
		
		case 2344457391:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 1850969667:
			iVar0 = 800;
			break;
		
		case 997671095:
			iVar0 = 801;
			break;
		
		case 2768500028:
			iVar0 = 802;
			break;
		
		case 3413114517:
			iVar0 = 803;
			break;
		
		case 3723975078:
			iVar0 = 804;
			break;
		
		case 3219467157:
			iVar0 = 805;
			break;
		
		case 3503278242:
			iVar0 = 806;
			break;
		
		case 699980662:
			iVar0 = 807;
			break;
		
		case 3711737208:
			iVar0 = 808;
			break;
		
		case 1922201848:
			iVar0 = 809;
			break;
		
		case 3527264388:
			iVar0 = 810;
			break;
		
		case 1979813112:
			iVar0 = 811;
			break;
		
		case 2238694704:
			iVar0 = 812;
			break;
		
		case 909368414:
			iVar0 = 813;
			break;
		
		case 3354646051:
			iVar0 = 814;
			break;
		
		case 2276445447:
			iVar0 = 815;
			break;
		
		case 1113883376:
			iVar0 = 816;
			break;
		
		case 296940654:
			iVar0 = 817;
			break;
		
		case 388715677:
			iVar0 = 818;
			break;
		
		case 2121965551:
			iVar0 = 819;
			break;
		
		case 3061120706:
			iVar0 = 820;
			break;
		
		case 2846397379:
			iVar0 = 821;
			break;
		
		case 257911811:
			iVar0 = 822;
			break;
		
		case 1945550351:
			iVar0 = 823;
			break;
		
		case 1745422723:
			iVar0 = 824;
			break;
		
		case 1031130678:
			iVar0 = 825;
			break;
		
		case 3878250084:
			iVar0 = 826;
			break;
		
		case 3066797730:
			iVar0 = 827;
			break;
		
		case 1472355612:
			iVar0 = 828;
			break;
		
		case 19369937:
			iVar0 = 829;
			break;
		
		case 662247816:
			iVar0 = 830;
			break;
		
		case 2722775333:
			iVar0 = 831;
			break;
		
		case 3503125668:
			iVar0 = 832;
			break;
		
		case 2763611865:
			iVar0 = 833;
			break;
		
		case 2040691909:
			iVar0 = 834;
			break;
		
		case 2180650139:
			iVar0 = 835;
			break;
		
		case 2209775669:
			iVar0 = 836;
			break;
		
		case 946610385:
			iVar0 = 837;
			break;
		
		case 1384666834:
			iVar0 = 838;
			break;
		
		case 2444468219:
			iVar0 = 839;
			break;
		
		case 1599340952:
			iVar0 = 840;
			break;
		
		case 3383962959:
			iVar0 = 841;
			break;
		
		case 1896039464:
			iVar0 = 842;
			break;
		
		case 1588676114:
			iVar0 = 843;
			break;
		
		case 3433822703:
			iVar0 = 844;
			break;
		
		case 4265059418:
			iVar0 = 845;
			break;
		
		case 1886796781:
			iVar0 = 846;
			break;
		
		case 3432492940:
			iVar0 = 847;
			break;
		
		case 1495413374:
			iVar0 = 848;
			break;
		
		case 370906922:
			iVar0 = 849;
			break;
		
		case 531742637:
			iVar0 = 850;
			break;
		
		case 4069161506:
			iVar0 = 851;
			break;
		
		case 3670380344:
			iVar0 = 852;
			break;
		
		case 915144902:
			iVar0 = 853;
			break;
		
		case 4052221253:
			iVar0 = 854;
			break;
		
		case 1620048835:
			iVar0 = 855;
			break;
		
		case 3197364028:
			iVar0 = 856;
			break;
		
		case 3634294757:
			iVar0 = 857;
			break;
		
		case 4290325108:
			iVar0 = 858;
			break;
		
		case 1855977539:
			iVar0 = 859;
			break;
		
		case 1537270222:
			iVar0 = 860;
			break;
		
		case 3068397526:
			iVar0 = 861;
			break;
		
		case 1641457991:
			iVar0 = 862;
			break;
		
		case 1366312361:
			iVar0 = 863;
			break;
		
		case 2737854075:
			iVar0 = 864;
			break;
		
		case 2604396882:
			iVar0 = 865;
			break;
		
		case 3787763041:
			iVar0 = 866;
			break;
		
		case 2490069657:
			iVar0 = 867;
			break;
		
		case 2919733873:
			iVar0 = 868;
			break;
		
		case 490066935:
			iVar0 = 869;
			break;
		
		case 1193725595:
			iVar0 = 870;
			break;
		
		case 628493116:
			iVar0 = 871;
			break;
		
		case 2182811778:
			iVar0 = 872;
			break;
		
		case 1511337702:
			iVar0 = 873;
			break;
		
		case 3667300768:
			iVar0 = 874;
			break;
		
		case 768324163:
			iVar0 = 875;
			break;
		
		case 2846205483:
			iVar0 = 876;
			break;
		
		case 868551738:
			iVar0 = 877;
			break;
		
		case 3273704435:
			iVar0 = 878;
			break;
		
		case 4030519365:
			iVar0 = 879;
			break;
		
		case 3642839861:
			iVar0 = 880;
			break;
		
		case 3684952697:
			iVar0 = 881;
			break;
		
		case 848073973:
			iVar0 = 882;
			break;
		
		case 1561087717:
			iVar0 = 883;
			break;
		
		case 2067249852:
			iVar0 = 884;
			break;
		
		case 1963924398:
			iVar0 = 885;
			break;
		
		case 3396417020:
			iVar0 = 886;
			break;
		
		case 3220788605:
			iVar0 = 887;
			break;
		
		case 3926350552:
			iVar0 = 888;
			break;
		
		case 4216400795:
			iVar0 = 889;
			break;
		
		case 1623651387:
			iVar0 = 890;
			break;
		
		case 3064987056:
			iVar0 = 891;
			break;
		
		case 2736645870:
			iVar0 = 892;
			break;
		
		case 518190097:
			iVar0 = 893;
			break;
		
		case 2298924002:
			iVar0 = 894;
			break;
		
		case 1720844546:
			iVar0 = 895;
			break;
		
		case 4274257317:
			iVar0 = 896;
			break;
		
		case 2677583717:
			iVar0 = 897;
			break;
		
		case 3769832231:
			iVar0 = 898;
			break;
		
		case 1796039054:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 1250030109:
			iVar0 = 900;
			break;
		
		case 3099091001:
			iVar0 = 901;
			break;
		
		case 672890092:
			iVar0 = 902;
			break;
		
		case 413298313:
			iVar0 = 903;
			break;
		
		case 1157302328:
			iVar0 = 904;
			break;
		
		case 2730509825:
			iVar0 = 905;
			break;
		
		case 1152621988:
			iVar0 = 906;
			break;
		
		case 2333675947:
			iVar0 = 907;
			break;
		
		case 2382376222:
			iVar0 = 908;
			break;
		
		case 1049766626:
			iVar0 = 909;
			break;
		
		case 450544862:
			iVar0 = 910;
			break;
		
		case 3279574649:
			iVar0 = 911;
			break;
		
		case 1742471685:
			iVar0 = 912;
			break;
		
		case 408116861:
			iVar0 = 913;
			break;
		
		case 2439639698:
			iVar0 = 914;
			break;
		
		case 1578402908:
			iVar0 = 915;
			break;
		
		case 2871600622:
			iVar0 = 916;
			break;
		
		case 1611107047:
			iVar0 = 917;
			break;
		
		case 742927305:
			iVar0 = 918;
			break;
		
		case 2716133631:
			iVar0 = 919;
			break;
		
		case 773738667:
			iVar0 = 920;
			break;
		
		case 213007702:
			iVar0 = 921;
			break;
		
		case 432208089:
			iVar0 = 922;
			break;
		
		case 35817542:
			iVar0 = 923;
			break;
		
		case 2508887203:
			iVar0 = 924;
			break;
		
		case 4079043990:
			iVar0 = 925;
			break;
		
		case 1275581512:
			iVar0 = 926;
			break;
		
		case 3080958277:
			iVar0 = 927;
			break;
		
		case 1639713863:
			iVar0 = 928;
			break;
		
		case 529311368:
			iVar0 = 929;
			break;
		
		case 3261071432:
			iVar0 = 930;
			break;
		
		case 924043677:
			iVar0 = 931;
			break;
		
		case 3720218030:
			iVar0 = 932;
			break;
		
		case 519463901:
			iVar0 = 933;
			break;
		
		case 3651614109:
			iVar0 = 934;
			break;
		
		case 1571011017:
			iVar0 = 935;
			break;
		
		case 4200426360:
			iVar0 = 936;
			break;
		
		case 1884218662:
			iVar0 = 937;
			break;
		
		case 3949705427:
			iVar0 = 938;
			break;
		
		case 3272108238:
			iVar0 = 939;
			break;
		
		case 2508644372:
			iVar0 = 940;
			break;
		
		case 2085269022:
			iVar0 = 941;
			break;
		
		case 1511882653:
			iVar0 = 942;
			break;
		
		case 3787980911:
			iVar0 = 943;
			break;
		
		case 3420885708:
			iVar0 = 944;
			break;
		
		case 2251561359:
			iVar0 = 945;
			break;
		
		case 59038842:
			iVar0 = 946;
			break;
		
		case 1101237057:
			iVar0 = 947;
			break;
		
		case 3637431619:
			iVar0 = 948;
			break;
		
		case 2201382271:
			iVar0 = 949;
			break;
		
		case 908383468:
			iVar0 = 950;
			break;
		
		case 2686206897:
			iVar0 = 951;
			break;
		
		case 1373660540:
			iVar0 = 952;
			break;
		
		case 1854316713:
			iVar0 = 953;
			break;
		
		case 4175016100:
			iVar0 = 954;
			break;
		
		case 2645125068:
			iVar0 = 955;
			break;
		
		case 2654202371:
			iVar0 = 956;
			break;
		
		case 1787927716:
			iVar0 = 957;
			break;
		
		case 104283481:
			iVar0 = 958;
			break;
		
		case 378263500:
			iVar0 = 959;
			break;
		
		case 3233751987:
			iVar0 = 960;
			break;
		
		case 1034166199:
			iVar0 = 961;
			break;
		
		case 1828057305:
			iVar0 = 962;
			break;
		
		case 2808669915:
			iVar0 = 963;
			break;
		
		case 3754200137:
			iVar0 = 964;
			break;
		
		case 3059006604:
			iVar0 = 965;
			break;
		
		case 3965650301:
			iVar0 = 966;
			break;
		
		case 3713087024:
			iVar0 = 967;
			break;
		
		case 2487621862:
			iVar0 = 968;
			break;
		
		case 3276557861:
			iVar0 = 969;
			break;
		
		case 4158955398:
			iVar0 = 970;
			break;
		
		case 2225472569:
			iVar0 = 971;
			break;
		
		case 3652080291:
			iVar0 = 972;
			break;
		
		case 2484129658:
			iVar0 = 973;
			break;
		
		case 1034484576:
			iVar0 = 974;
			break;
		
		case 1979445594:
			iVar0 = 975;
			break;
		
		case 2761089960:
			iVar0 = 976;
			break;
		
		case 3402712309:
			iVar0 = 977;
			break;
		
		case 3640745036:
			iVar0 = 978;
			break;
		
		case 4142360269:
			iVar0 = 979;
			break;
		
		case 1211414106:
			iVar0 = 980;
			break;
		
		case 3116603395:
			iVar0 = 981;
			break;
		
		case 4124137286:
			iVar0 = 982;
			break;
		
		case 1571032538:
			iVar0 = 983;
			break;
		
		case 3319865784:
			iVar0 = 984;
			break;
		
		case 1710494656:
			iVar0 = 985;
			break;
		
		case 1298803936:
			iVar0 = 986;
			break;
		
		case 669174749:
			iVar0 = 987;
			break;
		
		case 1344478544:
			iVar0 = 988;
			break;
		
		case 3557762637:
			iVar0 = 989;
			break;
		
		case 1519364050:
			iVar0 = 990;
			break;
		
		case 2824004057:
			iVar0 = 991;
			break;
		
		case 1768755677:
			iVar0 = 992;
			break;
		
		case 3866636330:
			iVar0 = 993;
			break;
		
		case 3762812163:
			iVar0 = 994;
			break;
		
		case 717197242:
			iVar0 = 995;
			break;
		
		case 3191724549:
			iVar0 = 996;
			break;
		
		case 95120204:
			iVar0 = 997;
			break;
		
		case 1478647927:
			iVar0 = 998;
			break;
		
		case 2298645612:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case 3062152000:
			iVar0 = 1000;
			break;
		
		case 3352366821:
			iVar0 = 1001;
			break;
		
		case 4137518403:
			iVar0 = 1002;
			break;
		
		case 1273306186:
			iVar0 = 1003;
			break;
		
		case 3901133707:
			iVar0 = 1004;
			break;
		
		case 1108909619:
			iVar0 = 1005;
			break;
		
		case 2747474244:
			iVar0 = 1006;
			break;
		
		case 3736743022:
			iVar0 = 1007;
			break;
		
		case 2039104212:
			iVar0 = 1008;
			break;
		
		case 269443194:
			iVar0 = 1009;
			break;
		
		case 2959508846:
			iVar0 = 1010;
			break;
		
		case 3756358800:
			iVar0 = 1011;
			break;
		
		case 760412020:
			iVar0 = 1012;
			break;
		
		case 2871372644:
			iVar0 = 1013;
			break;
		
		case 3545660474:
			iVar0 = 1014;
			break;
		
		case 2937465171:
			iVar0 = 1015;
			break;
		
		case 2597782779:
			iVar0 = 1016;
			break;
		
		case 2069079025:
			iVar0 = 1017;
			break;
		
		case 165790469:
			iVar0 = 1018;
			break;
		
		case 2298632616:
			iVar0 = 1019;
			break;
		
		case 2576515526:
			iVar0 = 1020;
			break;
		
		case 2943076500:
			iVar0 = 1021;
			break;
		
		case 3586650971:
			iVar0 = 1022;
			break;
		
		case 343427644:
			iVar0 = 1023;
			break;
		
		case 997385641:
			iVar0 = 1024;
			break;
		
		case 829594522:
			iVar0 = 1025;
			break;
		
		case 3539390271:
			iVar0 = 1026;
			break;
		
		case 1130349640:
			iVar0 = 1027;
			break;
		
		case 235241707:
			iVar0 = 1028;
			break;
		
		case 177991867:
			iVar0 = 1029;
			break;
		
		case 632622256:
			iVar0 = 1030;
			break;
		
		case 1897109337:
			iVar0 = 1031;
			break;
		
		case 3017800131:
			iVar0 = 1032;
			break;
		
		case 2254278838:
			iVar0 = 1033;
			break;
		
		case 2053577657:
			iVar0 = 1034;
			break;
		
		case 1475157023:
			iVar0 = 1035;
			break;
	}
	if (iVar0 != 4294967295)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_145(int iParam0, int iParam1, int iParam2)//Position - 0x218EE
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_64();
	}
	iVar1 = func_147(iParam0, iParam1);
	uVar2 = func_146(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_146(int iParam0)//Position - 0x2192B
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_147(int iParam0, int iParam1)//Position - 0x21C43
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_64();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_148(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x21F3B
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = func_150(iVar0, sParam1, iParam4);
		iParam4 = MISC::GET_HASH_KEY(func_149(iVar1));
	}
	if (iParam3 == 449512698)
	{
		return 0;
	}
	switch (iParam4)
	{
		case 3501471526:
		case 3531050223:
		case 2885905500:
		case 2228801020:
		case 849089063:
		case 1192230427:
		case 3840694265:
		case 2834999838:
		case 1548327796:
		case 3056887983:
		case 129912816:
		case 2825216337:
		case 1586504577:
		case 1753976524:
		case 1361645381:
		case 3906699200:
			if (bParam5)
			{
				return 0;
			}
			if ((((iParam4 == 3501471526 || (iParam4 == 2885905500 && iVar0 == joaat("mp_f_freemode_01"))) || iParam4 == 2228801020) || iParam4 == 849089063) || iParam4 == 1192230427)
			{
				if (!bParam6)
				{
					if (Global_411B37 == 4294967295)
					{
						if (!Global_16C64.f_5D1)
						{
							if (func_158(13, 4294967295))
							{
								return 0;
							}
							else if (func_158(14, 4294967295))
							{
								return 0;
							}
							else if (func_158(15, 4294967295))
							{
								return 0;
							}
							else if (func_158(16, 4294967295))
							{
								return 0;
							}
							else if (func_158(71, 4294967295))
							{
								return 0;
							}
							else if (func_158(72, 4294967295))
							{
							}
						}
					}
					else if (Global_411B37 == 13)
					{
						return 0;
					}
					else if (Global_411B37 == 14)
					{
						return 0;
					}
					else if (Global_411B37 == 15)
					{
						return 0;
					}
					else if (Global_411B37 == 16)
					{
						return 0;
					}
					else if (Global_411B37 == 71)
					{
						return 0;
					}
					else if (Global_411B37 == 72)
					{
					}
				}
			}
			else if (iParam4 == 3531050223)
			{
				if (!bParam6)
				{
					if (Global_411B37 == 4294967295)
					{
						if (!Global_16C64.f_5D1)
						{
							if (func_158(13, 4294967295))
							{
								return 0;
							}
							else if (func_158(14, 4294967295))
							{
								return 0;
							}
							else if (func_158(15, 4294967295))
							{
								return 0;
							}
							else if (func_158(16, 4294967295))
							{
								return 0;
							}
							else if (func_158(71, 4294967295))
							{
								return 0;
							}
							else if (func_158(72, 4294967295))
							{
							}
						}
					}
					else if (Global_411B37 == 13)
					{
						return 0;
					}
					else if (Global_411B37 == 14)
					{
						return 0;
					}
					else if (Global_411B37 == 15)
					{
						return 0;
					}
					else if (Global_411B37 == 16)
					{
						return 0;
					}
					else if (Global_411B37 == 71)
					{
						return 0;
					}
					else if (Global_411B37 == 72)
					{
					}
				}
			}
			else if ((iParam4 == 129912816 || iParam4 == 1361645381) || iParam4 == 2825216337)
			{
				if (!bParam6)
				{
					if (Global_411B37 == 4294967295)
					{
						if (!Global_16C64.f_5D1)
						{
							if (func_158(13, 4294967295))
							{
							}
							else if (func_158(14, 4294967295))
							{
								return 0;
							}
							else if (func_158(15, 4294967295))
							{
								return 0;
							}
							else if (func_158(16, 4294967295))
							{
							}
							else if (func_158(71, 4294967295))
							{
								return 0;
							}
							else if (func_158(72, 4294967295))
							{
							}
						}
					}
					else if (Global_411B37 == 13)
					{
					}
					else if (Global_411B37 == 14)
					{
						return 0;
					}
					else if (Global_411B37 == 15)
					{
						return 0;
					}
					else if (Global_411B37 == 16)
					{
					}
					else if (Global_411B37 == 71)
					{
						return 0;
					}
					else if (Global_411B37 == 72)
					{
					}
				}
			}
			else if (iParam4 == 1928884106)
			{
				if (!bParam6)
				{
					if (Global_411B37 == 4294967295)
					{
						if (!Global_16C64.f_5D1)
						{
							if (func_158(13, 4294967295))
							{
							}
							else if (func_158(14, 4294967295))
							{
							}
							else if (func_158(15, 4294967295))
							{
							}
							else if (func_158(16, 4294967295))
							{
							}
							else if (func_158(71, 4294967295))
							{
							}
							else if (func_158(72, 4294967295))
							{
							}
						}
					}
					else if (Global_411B37 == 13)
					{
					}
					else if (Global_411B37 == 14)
					{
					}
					else if (Global_411B37 == 15)
					{
					}
					else if (Global_411B37 == 16)
					{
					}
					else if (Global_411B37 == 71)
					{
					}
					else if (Global_411B37 == 72)
					{
					}
				}
			}
			break;
		
		case 1484379715:
		case 711089605:
		case 1206993109:
		case 32564956:
		case 1618133209:
		case 314326195:
		case 1928884106:
		case 1565386395:
		case 2107621060:
			if (bParam8)
			{
				return 0;
			}
			if (!bParam6)
			{
				if (Global_411B37 == 4294967295)
				{
					if (!Global_16C64.f_5D1)
					{
						if (func_158(13, 4294967295))
						{
						}
						else if (func_158(14, 4294967295))
						{
						}
						else if (func_158(15, 4294967295))
						{
							return 0;
						}
						else if (func_158(16, 4294967295))
						{
						}
						else if (func_158(71, 4294967295))
						{
						}
						else if (func_158(72, 4294967295))
						{
							return 0;
						}
					}
				}
				else if (Global_411B37 == 13)
				{
				}
				else if (Global_411B37 == 14)
				{
				}
				else if (Global_411B37 == 15)
				{
					return 0;
				}
				else if (Global_411B37 == 16)
				{
				}
				else if (Global_411B37 == 71)
				{
				}
				else if (Global_411B37 == 72)
				{
					return 0;
				}
			}
			break;
		
		case 1019352240:
			if (bParam8)
			{
				if (iVar0 == joaat("mp_m_freemode_01"))
				{
					if (Global_411B37 == 4294967295)
					{
						if (!Global_16C64.f_5D1)
						{
							if (func_158(15, 4294967295))
							{
								return 0;
							}
						}
					}
					else if (Global_411B37 == 15)
					{
						return 0;
					}
				}
			}
			if (bParam6)
			{
				return 0;
			}
			if (bParam5)
			{
				if (Global_411B37 == 4294967295)
				{
					if (!Global_16C64.f_5D1)
					{
						if (func_158(13, 4294967295))
						{
							return 0;
						}
						else if (func_158(14, 4294967295))
						{
							return 0;
						}
						else if (func_158(15, 4294967295))
						{
							if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB"))
							{
								return 0;
							}
						}
						else if (func_158(16, 4294967295))
						{
						}
						else if (func_158(71, 4294967295))
						{
						}
						else if (func_158(72, 4294967295))
						{
						}
					}
				}
				else if (Global_411B37 == 13)
				{
					return 0;
				}
				else if (Global_411B37 == 14)
				{
					return 0;
				}
				else if (Global_411B37 == 15)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB"))
					{
						return 0;
					}
				}
				else if (Global_411B37 == 16)
				{
				}
				else if (Global_411B37 == 71)
				{
				}
				else if (Global_411B37 == 72)
				{
				}
			}
			break;
		
		case 0:
		case 2:
		case 3776492670:
			if (bParam5)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					switch (MISC::GET_HASH_KEY(sParam1))
					{
						case 1774176944:
						case 1363941829:
						case 3966652427:
						case 2391184201:
						case 2620042897:
						case 4188181426:
						case 3950311255:
						case 1480281490:
						case 2197594896:
						case 118598456:
						case 2908290528:
						case 1464947154:
						case 3012463179:
						case 2417673060:
						case 736950162:
							return 0;
							break;
						}
					}
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				if (!bParam6)
				{
					if (Global_411B37 == 4294967295)
					{
						if (!Global_16C64.f_5D1)
						{
							if (func_158(13, 4294967295))
							{
							}
							else if (func_158(14, 4294967295))
							{
							}
							else if (func_158(15, 4294967295))
							{
							}
							else if (func_158(16, 4294967295))
							{
							}
							else if (func_158(71, 4294967295))
							{
							}
							else if (func_158(72, 4294967295))
							{
							}
						}
					}
					else if (Global_411B37 == 13)
					{
						return 0;
					}
					else if (Global_411B37 == 14)
					{
					}
					else if (Global_411B37 == 15)
					{
						return 0;
					}
					else if (Global_411B37 == 16)
					{
					}
					else if (Global_411B37 == 71)
					{
					}
					else if (Global_411B37 == 72)
					{
					}
				}
			}
			break;
		
		case 277073536:
			if (bParam7)
			{
				return 0;
			}
			break;
	}
	return 1;
}

char* func_149(int iParam0)//Position - 0x22763
{
	switch (iParam0)
	{
		case 0:
			return "ARM_LEFT_FULL_SLEEVE";
			break;
		
		case 1:
			return "ARM_LEFT_SHORT_SLEEVE";
			break;
		
		case 2:
			return "ARM_LEFT_LOWER_SLEEVE";
			break;
		
		case 3:
			return "ARM_LEFT_LOWER_INNER";
			break;
		
		case 4:
			return "ARM_LEFT_LOWER_OUTER";
			break;
		
		case 5:
			return "ARM_LEFT_WRIST";
			break;
		
		case 6:
			return "ARM_LEFT_UPPER_SLEEVE";
			break;
		
		case 7:
			return "ARM_LEFT_UPPER_TRICEP";
			break;
		
		case 8:
			return "ARM_LEFT_UPPER_SIDE";
			break;
		
		case 9:
			return "ARM_LEFT_UPPER_BICEP";
			break;
		
		case 10:
			return "ARM_LEFT_SHOULDER";
			break;
		
		case 11:
			return "ARM_LEFT_ELBOW";
			break;
		
		case 12:
			return "ARM_RIGHT_FULL_SLEEVE";
			break;
		
		case 13:
			return "ARM_RIGHT_SHORT_SLEEVE";
			break;
		
		case 14:
			return "ARM_RIGHT_LOWER_SLEEVE";
			break;
		
		case 15:
			return "ARM_RIGHT_LOWER_INNER";
			break;
		
		case 16:
			return "ARM_RIGHT_LOWER_OUTER";
			break;
		
		case 17:
			return "ARM_RIGHT_WRIST";
			break;
		
		case 18:
			return "ARM_RIGHT_UPPER_SLEEVE";
			break;
		
		case 19:
			return "ARM_RIGHT_UPPER_TRICEP";
			break;
		
		case 20:
			return "ARM_RIGHT_UPPER_SIDE";
			break;
		
		case 21:
			return "ARM_RIGHT_UPPER_BICEP";
			break;
		
		case 22:
			return "ARM_RIGHT_SHOULDER";
			break;
		
		case 23:
			return "ARM_RIGHT_ELBOW";
			break;
		
		case 24:
			return "HAND_LEFT";
			break;
		
		case 25:
			return "HAND_RIGHT";
			break;
		
		case 26:
			return "BACK_FULL";
			break;
		
		case 27:
			return "BACK_FULL_ARMS_FULL_BACK";
			break;
		
		case 28:
			return "BACK_FULL_SHORT";
			break;
		
		case 29:
			return "BACK_MID";
			break;
		
		case 30:
			return "BACK_UPPER";
			break;
		
		case 31:
			return "BACK_UPPER_LEFT";
			break;
		
		case 32:
			return "BACK_UPPER_RIGHT";
			break;
		
		case 33:
			return "BACK_LOWER";
			break;
		
		case 34:
			return "BACK_LOWER_LEFT";
			break;
		
		case 35:
			return "BACK_LOWER_MID";
			break;
		
		case 36:
			return "BACK_LOWER_RIGHT";
			break;
		
		case 37:
			return "CHEST_FULL";
			break;
		
		case 38:
			return "CHEST_STOM";
			break;
		
		case 39:
			return "CHEST_STOM_FULL";
			break;
		
		case 40:
			return "CHEST_LEFT";
			break;
		
		case 41:
			return "CHEST_UPPER_LEFT";
			break;
		
		case 42:
			return "CHEST_RIGHT";
			break;
		
		case 43:
			return "CHEST_UPPER_RIGHT";
			break;
		
		case 44:
			return "CHEST_MID";
			break;
		
		case 45:
			return "TORSO_SIDE_RIGHT";
			break;
		
		case 46:
			return "TORSO_SIDE_LEFT";
			break;
		
		case 47:
			return "STOMACH_FULL";
			break;
		
		case 48:
			return "STOMACH_UPPER";
			break;
		
		case 49:
			return "STOMACH_UPPER_LEFT";
			break;
		
		case 50:
			return "STOMACH_UPPER_RIGHT";
			break;
		
		case 51:
			return "STOMACH_LOWER";
			break;
		
		case 52:
			return "STOMACH_LOWER_LEFT";
			break;
		
		case 53:
			return "STOMACH_LOWER_RIGHT";
			break;
		
		case 54:
			return "STOMACH_LEFT";
			break;
		
		case 55:
			return "STOMACH_RIGHT";
			break;
		
		case 56:
			return "FACE";
			break;
		
		case 57:
			return "HEAD_LEFT";
			break;
		
		case 58:
			return "HEAD_RIGHT";
			break;
		
		case 59:
			return "NECK_FRONT";
			break;
		
		case 60:
			return "NECK_BACK";
			break;
		
		case 61:
			return "NECK_LEFT_FULL";
			break;
		
		case 62:
			return "NECK_LEFT_BACK";
			break;
		
		case 63:
			return "NECK_RIGHT_FULL";
			break;
		
		case 64:
			return "NECK_RIGHT_BACK";
			break;
		
		case 65:
			return "LEG_LEFT_FULL_SLEEVE";
			break;
		
		case 66:
			return "LEG_LEFT_FULL_FRONT";
			break;
		
		case 67:
			return "LEG_LEFT_FULL_BACK";
			break;
		
		case 68:
			return "LEG_LEFT_UPPER_SLEEVE";
			break;
		
		case 69:
			return "LEG_LEFT_UPPER_FRONT";
			break;
		
		case 70:
			return "LEG_LEFT_UPPER_BACK";
			break;
		
		case 71:
			return "LEG_LEFT_UPPER_OUTER";
			break;
		
		case 72:
			return "LEG_LEFT_UPPER_INNER";
			break;
		
		case 73:
			return "LEG_LEFT_LOWER_SLEEVE";
			break;
		
		case 74:
			return "LEG_LEFT_LOWER_FRONT";
			break;
		
		case 75:
			return "LEG_LEFT_LOWER_BACK";
			break;
		
		case 76:
			return "LEG_LEFT_LOWER_OUTER";
			break;
		
		case 77:
			return "LEG_LEFT_LOWER_INNER";
			break;
		
		case 78:
			return "LEG_LEFT_KNEE";
			break;
		
		case 79:
			return "LEG_LEFT_ANKLE";
			break;
		
		case 80:
			return "LEG_LEFT_CALF";
			break;
		
		case 81:
			return "LEG_RIGHT_FULL_SLEEVE";
			break;
		
		case 82:
			return "LEG_RIGHT_FULL_FRONT";
			break;
		
		case 83:
			return "LEG_RIGHT_FULL_BACK";
			break;
		
		case 84:
			return "LEG_RIGHT_UPPER_SLEEVE";
			break;
		
		case 85:
			return "LEG_RIGHT_UPPER_FRONT";
			break;
		
		case 86:
			return "LEG_RIGHT_UPPER_BACK";
			break;
		
		case 87:
			return "LEG_RIGHT_UPPER_OUTER";
			break;
		
		case 88:
			return "LEG_RIGHT_UPPER_INNER";
			break;
		
		case 89:
			return "LEG_RIGHT_LOWER_SLEEVE";
			break;
		
		case 90:
			return "LEG_RIGHT_LOWER_FRONT";
			break;
		
		case 91:
			return "LEG_RIGHT_LOWER_BACK";
			break;
		
		case 92:
			return "LEG_RIGHT_LOWER_OUTER";
			break;
		
		case 93:
			return "LEG_RIGHT_LOWER_INNER";
			break;
		
		case 94:
			return "LEG_RIGHT_KNEE";
			break;
		
		case 95:
			return "LEG_RIGHT_ANKLE";
			break;
		
		case 96:
			return "LEG_RIGHT_CALF";
			break;
		
		case 97:
			return "FOOT_LEFT";
			break;
		
		case 98:
			return "FOOT_RIGHT";
			break;
	}
	return "";
}

int func_150(int iParam0, char* sParam1, int iParam2)//Position - 0x22DA5
{
	switch (iParam2)
	{
		case 1019352240:
		case 2140335355:
		case 277073536:
			return 4294967295;
			break;
	}
	switch (iParam2)
	{
		case 2519943691:
			return 0;
			break;
		
		case 917950949:
			return 1;
			break;
		
		case 2610652999:
			return 2;
			break;
		
		case 2748303472:
			return 3;
			break;
		
		case 2175713528:
			return 4;
			break;
		
		case 1639951086:
			return 5;
			break;
		
		case 1372660034:
			return 6;
			break;
		
		case 2770739509:
			return 7;
			break;
		
		case 3983224926:
			return 8;
			break;
		
		case 2237776637:
			return 9;
			break;
		
		case 3608421651:
			return 10;
			break;
		
		case 4214589622:
			return 11;
			break;
		
		case 3238990745:
			return 12;
			break;
		
		case 1963750528:
			return 13;
			break;
		
		case 796226384:
			return 14;
			break;
		
		case 123428314:
			return 15;
			break;
		
		case 1944550961:
			return 16;
			break;
		
		case 2136911405:
			return 17;
			break;
		
		case 2985371305:
			return 18;
			break;
		
		case 1470319061:
			return 19;
			break;
		
		case 2578404720:
			return 20;
			break;
		
		case 2354385240:
			return 21;
			break;
		
		case 1089807219:
			return 22;
			break;
		
		case 3221136717:
			return 23;
			break;
		
		case 1071134407:
			return 24;
			break;
		
		case 1455567330:
			return 25;
			break;
		
		case 711089605:
			return 26;
			break;
		
		case 1206993109:
			return 27;
			break;
		
		case 32564956:
			return 28;
			break;
		
		case 314326195:
			return 29;
			break;
		
		case 1928884106:
			return 30;
			break;
		
		case 1565386395:
			return 31;
			break;
		
		case 2107621060:
			return 32;
			break;
		
		case 1618133209:
			return 33;
			break;
		
		case 3343067826:
			return 34;
			break;
		
		case 2048696626:
			return 35;
			break;
		
		case 74017048:
			return 36;
			break;
		
		case 3501471526:
			return 37;
			break;
		
		case 849089063:
			return 38;
			break;
		
		case 1192230427:
			return 39;
			break;
		
		case 3531050223:
			return 40;
			break;
		
		case 337552605:
			return 41;
			break;
		
		case 2228801020:
			return 42;
			break;
		
		case 100935796:
			return 43;
			break;
		
		case 2885905500:
			return 44;
			break;
		
		case 1548327796:
			return 45;
			break;
		
		case 2834999838:
			return 46;
			break;
		
		case 129912816:
			return 47;
			break;
		
		case 1387715942:
			return 48;
			break;
		
		case 2423163054:
			return 49;
			break;
		
		case 1603728616:
			return 50;
			break;
		
		case 3552914052:
			return 51;
			break;
		
		case 1586504577:
			return 52;
			break;
		
		case 1753976524:
			return 53;
			break;
		
		case 2825216337:
			return 54;
			break;
		
		case 3906699200:
			return 55;
			break;
		
		case 2756285864:
			return 56;
			break;
		
		case 3557110916:
			return 57;
			break;
		
		case 1261643197:
			return 58;
			break;
		
		case 436139458:
			return 59;
			break;
		
		case 1012782925:
			return 60;
			break;
		
		case 4017753284:
			return 61;
			break;
		
		case 3810703098:
			return 62;
			break;
		
		case 1708200656:
			return 63;
			break;
		
		case 758827473:
			return 64;
			break;
		
		case 1039283199:
			return 65;
			break;
		
		case 325801797:
			return 66;
			break;
		
		case 2348532263:
			return 67;
			break;
		
		case 2377621179:
			return 68;
			break;
		
		case 3912827528:
			return 69;
			break;
		
		case 1725561361:
			return 70;
			break;
		
		case 4028053927:
			return 71;
			break;
		
		case 511433871:
			return 72;
			break;
		
		case 2895310695:
			return 73;
			break;
		
		case 2734526213:
			return 74;
			break;
		
		case 1034503747:
			return 75;
			break;
		
		case 3124285995:
			return 76;
			break;
		
		case 660577126:
			return 77;
			break;
		
		case 3476877956:
			return 78;
			break;
		
		case 1052642087:
			return 79;
			break;
		
		case 134497037:
			return 80;
			break;
		
		case 3670699923:
			return 81;
			break;
		
		case 3116119329:
			return 82;
			break;
		
		case 4097674435:
			return 83;
			break;
		
		case 730193962:
			return 84;
			break;
		
		case 1469472731:
			return 85;
			break;
		
		case 2376082602:
			return 86;
			break;
		
		case 2624239668:
			return 87;
			break;
		
		case 2905670828:
			return 88;
			break;
		
		case 3889704923:
			return 89;
			break;
		
		case 2675357463:
			return 90;
			break;
		
		case 2060550302:
			return 91;
			break;
		
		case 3092320276:
			return 92;
			break;
		
		case 12584588:
			return 93;
			break;
		
		case 2735361552:
			return 94;
			break;
		
		case 4206592398:
			return 95;
			break;
		
		case 4002748170:
			return 96;
			break;
		
		case 3660734312:
			return 97;
			break;
		
		case 3035212698:
			return 98;
			break;
	}
	switch (MISC::GET_HASH_KEY(sParam1))
	{
		case 1948764112:
			return 4294967295;
			break;
		
		case 1099734529:
			return 12;
			break;
		
		case 1875475066:
			return 12;
			break;
		
		case 2267851076:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 75;
			}
			else
			{
				return 65;
			}
			break;
		
		case 973279522:
			return 26;
			break;
		
		case 3950311255:
			return 47;
			break;
		
		case 437243648:
			return 1;
			break;
		
		case 2657999346:
			return 75;
			break;
		
		case 2535541033:
			return 1;
			break;
		
		case 1702259548:
			return 89;
			break;
		
		case 1471205329:
			return 73;
			break;
		
		case 4261813165:
			return 22;
			break;
		
		case 2930342505:
			return 91;
			break;
		
		case 2048169112:
			return 26;
			break;
		
		case 2162859756:
			return 73;
			break;
		
		case 2197594896:
			return 38;
			break;
		
		case 4188181426:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case 1116120433:
			return 31;
			break;
		
		case 118598456:
			return 42;
			break;
		
		case 1480281490:
			return 47;
			break;
		
		case 3642675027:
			return 75;
			break;
		
		case 3115683969:
			return 20;
			break;
		
		case 860620540:
			return 32;
			break;
		
		case 3414963246:
			return 14;
			break;
		
		case 2908290528:
			return 52;
			break;
		
		case 2104696341:
			return 30;
			break;
		
		case 2342238822:
			return 6;
			break;
		
		case 1464947154:
			return 80;
			break;
		
		case 3160249253:
			return 13;
			break;
		
		case 3854593710:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 67;
			}
			else
			{
				return 75;
			}
			break;
		
		case 3012463179:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case 3259082673:
			return 73;
			break;
		
		case 2417673060:
			return 47;
			break;
		
		case 1289632992:
			return 73;
			break;
		
		case 1152623695:
			return 10;
			break;
		
		case 1705208746:
			return 26;
			break;
		
		case 1774176944:
			return 42;
			break;
		
		case 2278764565:
			return 89;
			break;
		
		case 474241973:
			return 16;
			break;
		
		case 1549424756:
			return 91;
			break;
		
		case 1915520024:
			return 82;
			break;
		
		case 3640052951:
			return 13;
			break;
		
		case 2549851943:
			return 75;
			break;
		
		case 1466027815:
			return 26;
			break;
		
		case 4133194864:
			return 10;
			break;
		
		case 74131599:
			return 90;
			break;
		
		case 363383562:
			return 89;
			break;
		
		case 736950162:
			return 38;
			break;
		
		case 1291882802:
			return 20;
			break;
		
		case 4013194762:
			return 26;
			break;
		
		case 3457169162:
			return 18;
			break;
		
		case 62456:
			return 56;
			break;
		
		case 3494646927:
			return 3;
			break;
		
		case 1363941829:
			return 47;
			break;
		
		case 1586377801:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 2780709548:
			return 89;
			break;
		
		case 3271130402:
			return 6;
			break;
		
		case 2320862171:
			return 33;
			break;
		
		case 3736581278:
			return 16;
			break;
		
		case 3966652427:
			return 40;
			break;
		
		case 2391184201:
			return 40;
			break;
		
		case 2620042897:
			return 40;
			break;
		
		case 4042643494:
			return 33;
			break;
		
		case 11466648:
			return 6;
			break;
		
		case 927130819:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 3316023688:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 452144164:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 691194019:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 2778101725:
			return 44;
			break;
		
		case 2130586285:
			return 32;
			break;
		
		case 386521802:
			return 3;
			break;
		
		case 579924440:
			return 33;
			break;
		
		case 741770527:
			return 31;
			break;
		
		case 1173403795:
			return 33;
			break;
		
		case 3725879520:
			return 45;
			break;
		
		case 2950007907:
			return 89;
			break;
		
		case 4083749769:
			return 64;
			break;
		
		case 86488838:
			return 53;
			break;
		
		case 705494964:
			return 52;
			break;
		
		case 4157283121:
			return 30;
			break;
		
		case 3315578587:
			return 41;
			break;
		
		case 324653646:
			return 43;
			break;
		
		case 3776146882:
			return 52;
			break;
		
		case 2933229895:
			return 20;
			break;
		
		case 2010946386:
			return 8;
			break;
		
		case 3400155376:
			return 10;
			break;
		
		case 165068612:
			return 28;
			break;
		
		case 1549427782:
			return 40;
			break;
		
		case 3367353383:
			return 42;
			break;
		
		case 385144996:
			return 56;
			break;
		
		case 3480340895:
			return 57;
			break;
		
		case 3046741487:
			return 52;
			break;
		
		case 1910378101:
			return 8;
			break;
		
		case 2170465654:
			return 91;
			break;
		
		case 2351219458:
			return 20;
			break;
		
		case 2724851596:
			return 75;
			break;
		
		case 931699147:
			return 62;
			break;
		
		case 1019520067:
			return 63;
			break;
		
		case 3435608482:
			return 20;
			break;
		
		case 3137148430:
			return 58;
			break;
		
		case 4047110791:
			return 47;
			break;
		
		case 2666432333:
			return 37;
			break;
		
		case 3243068426:
			return 33;
			break;
		
		case 1334929540:
			return 80;
			break;
		
		case 1097124907:
			return 64;
			break;
		
		case 747545215:
			return 62;
			break;
		
		case 61892743:
			return 96;
			break;
		
		case 501548332:
			return 15;
			break;
		
		case 4050797579:
			return 48;
			break;
		
		case 421886905:
			return 37;
			break;
		
		case 2896175792:
			return 33;
			break;
		
		case 4188814535:
			return 3;
			break;
		
		case 125491300:
			return 41;
			break;
		
		case 2718016739:
			return 52;
			break;
		
		case 2479851647:
			return 53;
			break;
		
		case 3251570426:
			return 59;
			break;
		
		case 2906349011:
			return 3;
			break;
		
		case 3346482658:
			return 48;
			break;
		
		case 643387405:
			return 33;
			break;
		
		case 979630098:
			return 64;
			break;
		
		case 211688583:
			return 62;
			break;
		
		case 1343791995:
			return 60;
			break;
		
		case 576309246:
			return 20;
			break;
		
		case 949154944:
			return 40;
			break;
		
		case 3672455462:
			return 42;
			break;
		
		case 4019315327:
			return 11;
			break;
		
		case 3038683441:
			return 15;
			break;
		
		case 955525350:
			return 40;
			break;
		
		case 1252641873:
			return 22;
			break;
		
		case 2260201032:
			return 40;
			break;
		
		case 1748021562:
			return 22;
			break;
		
		case 3637821246:
			return 30;
			break;
		
		case 3339131811:
			return 19;
			break;
		
		case 3025008177:
			return 40;
			break;
		
		case 2816204109:
			return 4;
			break;
		
		case 2413374792:
			return 15;
			break;
		
		case 2115996117:
			return 62;
			break;
		
		case 1824417551:
			return 45;
			break;
		
		case 1502068898:
			return 24;
			break;
		
		case 2275679554:
			return 22;
			break;
		
		case 2514139567:
			return 80;
			break;
		
		case 2328470089:
			return 25;
			break;
		
		case 2167967527:
			return 30;
			break;
		
		case 2014772448:
			return 30;
			break;
		
		case 1705760778:
			return 44;
			break;
		
		case 497993745:
			return 15;
			break;
		
		case 1142887665:
			return 9;
			break;
		
		case 22777707:
			return 3;
			break;
		
		case 799173624:
			return 16;
			break;
		
		case 3884669895:
			return 17;
			break;
		
		case 214410819:
			return 75;
			break;
		
		case 2196624304:
			return 23;
			break;
		
		case 3014047013:
			return 64;
			break;
		
		case 2793511643:
			return 16;
			break;
		
		case 2117454408:
			return 25;
			break;
		
		case 2349262314:
			return 32;
			break;
		
		case 2713096525:
			return 31;
			break;
		
		case 2944445665:
			return 10;
			break;
		
		case 3340459030:
			return 5;
			break;
		
		case 3578722429:
			return 4;
			break;
		
		case 185361399:
			return 52;
			break;
		
		case 3086860083:
			return 35;
			break;
		
		case 3482545758:
			return 30;
			break;
		
		case 3728870331:
			return 32;
			break;
		
		case 3978209652:
			return 38;
			break;
		
		case 4191470304:
			return 24;
			break;
		
		case 391708136:
			return 52;
			break;
		
		case 616667309:
			return 20;
			break;
		
		case 870102755:
			return 10;
			break;
		
		case 1093030262:
			return 92;
			break;
		
		case 1378218869:
			return 0;
			break;
		
		case 332555747:
			return 80;
			break;
		
		case 1077526193:
			return 34;
			break;
		
		case 1332632858:
			return 91;
			break;
		
		case 1556379590:
			return 10;
			break;
		
		case 1780093553:
			return 22;
			break;
		
		case 2001284303:
			return 14;
			break;
		
		case 2235025580:
			return 30;
			break;
		
		case 2535091313:
			return 40;
			break;
		
		case 2773813478:
			return 24;
			break;
	}
	if (iParam2 == 0 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 4294967295;
	}
	switch (iParam2)
	{
		case 3776492670:
			return 4294967295;
			break;
	}
	return 4294967295;
}

bool func_151(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x23DD7
{
	int iVar0;
	int iVar1;
	
	func_157(sParam0, 4294967295, 0, "", "", "", "", iParam2, 4294967295, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_156() || func_155())
					{
						iVar1 = 400;
						if (func_135() && (func_154() || func_153()))
						{
							iVar1 = 0;
						}
						func_157(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_157(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_152(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_156() || func_155())
					{
						iVar1 = 450;
						if (func_135() && (func_154() || func_153()))
						{
							iVar1 = 0;
						}
						func_157(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_157(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_152(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_156() || func_155())
					{
						iVar1 = 380;
						if (func_135() && (func_154() || func_153()))
						{
							iVar1 = 0;
						}
						func_157(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_157(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_152(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_40001.f_B5A)), 0);
					break;
				
				case 1:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1400) * Global_40001.f_B5B)), 2);
					break;
				
				case 2:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(9750) * Global_40001.f_B5C)), 3);
					break;
				
				case 3:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2150) * Global_40001.f_B5D)), 0);
					break;
				
				case 4:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B5E)), 0);
					break;
				
				case 54:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12400) * Global_40001.f_B5F)), 1);
					break;
				
				case 5:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_40001.f_B60)), 0);
					break;
				
				case 6:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B61)), 2);
					break;
				
				case 55:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1350) * Global_40001.f_B62)), 1);
					break;
				
				case 7:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1450) * Global_40001.f_B63)), 0);
					break;
				
				case 8:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2700) * Global_40001.f_B64)), 7);
					break;
				
				case 9:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200) * Global_40001.f_B65)), 0);
					break;
				
				case 10:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1500) * Global_40001.f_B66)), 0);
					break;
				
				case 11:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2650) * Global_40001.f_B67)), 0);
					break;
				
				case 56:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_40001.f_B68)), 1);
					break;
				
				case 12:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B69)), 2);
					break;
				
				case 57:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_40001.f_B6A)), 1);
					break;
				
				case 58:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B6B)), 1);
					break;
				
				case 59:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7400) * Global_40001.f_B6C)), 1);
					break;
				
				case 60:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B6D)), 1);
					break;
				
				case 17:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_40001.f_B72)), 2);
					break;
				
				case 18:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B73)), 2);
					break;
				
				case 19:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600) * Global_40001.f_B74)), 2);
					break;
				
				case 20:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B75)), 3);
					break;
				
				case 21:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12500) * Global_40001.f_B76)), 3);
					break;
				
				case 22:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B77)), 3);
					break;
				
				case 23:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B78)), 3);
					break;
				
				case 24:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B79)), 3);
					break;
				
				case 25:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_40001.f_B7A)), 2);
					break;
				
				case 26:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_40001.f_B7B)), 3);
					break;
				
				case 27:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4800) * Global_40001.f_B7C)), 3);
					break;
				
				case 28:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_40001.f_B7D)), 3);
					break;
				
				case 61:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12350) * Global_40001.f_B7E)), 1);
					break;
				
				case 62:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_40001.f_B7F)), 1);
					break;
				
				case 63:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4500) * Global_40001.f_B80)), 1);
					break;
				
				case 64:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_40001.f_B81)), 1);
					break;
				
				case 65:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12300) * Global_40001.f_B82)), 1);
					break;
				
				case 29:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B83)), 0);
					break;
				
				case 30:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B84)), 0);
					break;
				
				case 31:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B85)), 0);
					break;
				
				case 66:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B86)), 1);
					break;
				
				case 32:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B87)), 2);
					break;
				
				case 33:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_40001.f_B88)), 3);
					break;
				
				case 34:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7250) * Global_40001.f_B89)), 2);
					break;
				
				case 35:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(11900) * Global_40001.f_B8A)), 0);
					break;
				
				case 36:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750) * Global_40001.f_B8B)), 0);
					break;
				
				case 37:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1750) * Global_40001.f_B8C)), 0);
					break;
				
				case 38:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_40001.f_B8D)), 3);
					break;
				
				case 39:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3250) * Global_40001.f_B8E)), 2);
					break;
				
				case 40:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_40001.f_B8F)), 0);
					break;
				
				case 67:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B90)), 1);
					break;
				
				case 41:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B91)), 2);
					break;
				
				case 68:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B92)), 1);
					break;
				
				case 42:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5050) * Global_40001.f_B93)), 0);
					break;
				
				case 43:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2450) * Global_40001.f_B94)), 2);
					break;
				
				case 44:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B95)), 0);
					break;
				
				case 45:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B96)), 0);
					break;
				
				case 46:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_40001.f_B97)), 0);
					break;
				
				case 47:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_40001.f_B98)), 3);
					break;
				
				case 48:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B99)), 3);
					break;
				
				case 49:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7600) * Global_40001.f_B9A)), 3);
					break;
				
				case 50:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2600) * Global_40001.f_B9B)), 2);
					break;
				
				case 51:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B9C)), 3);
					break;
				
				case 52:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7450) * Global_40001.f_B9D)), 3);
					break;
				
				case 53:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B9E)), 0);
					break;
				
				case 69:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B9F)), 1);
					break;
				
				case 70:
					func_157(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_BA0)), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_BA1)), 0);
						break;
					
					case 88:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_BA2)), 0);
						break;
					
					case 89:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_BA3)), 0);
						break;
					
					case 93:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_157(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B6E)), 0);
						break;
					
					case 14:
						func_157(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B6F)), 0);
						break;
					
					case 15:
						func_157(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B70)), 2);
						break;
					
					case 16:
						func_157(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B71)), 0);
						break;
					
					case 71:
						func_157(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B71)), 0);
						break;
					
					case 72:
						func_157(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B71)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_BA1)), 0);
						break;
					
					case 88:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_BA2)), 0);
						break;
					
					case 89:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_BA3)), 0);
						break;
					
					case 93:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_157(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_157(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B6E)), 0);
						break;
					
					case 14:
						func_157(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B6F)), 0);
						break;
					
					case 15:
						func_157(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B70)), 2);
						break;
					
					case 16:
						func_157(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B71)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_152(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_B != 4294967295;
}

void func_152(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x26E22
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	
	iVar0 = (iParam2 - iParam3);
	iVar1 = FILE::_GET_NUM_DECORATIONS(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (FILE::_GET_TATTOO_COLLECTION_DATA(iParam1, iVar0, &Var2))
		{
			if (!FILE::_IS_DLC_DATA_EMPTY(Var2))
			{
				sParam0->f_B = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_A = (iParam2 % 32);
				sParam0->f_C = Var2.f_5;
			}
		}
	}
}

int func_153()//Position - 0x26EB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 5))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 5))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_2357E.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, 4294967295))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, 4294967295);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_19, 1);
				MISC::SET_BIT(&Global_19, 3);
				MISC::SET_BIT(&Global_19, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_0xDAC073C7901F9E15(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_154()//Position - 0x27008
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 6))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 2) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 6))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 2) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_2357E.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, 4294967295))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 2) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_155()//Position - 0x270D9
{
	return 1;
}

int func_156()//Position - 0x270E2
{
	return 1;
}

void func_157(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)//Position - 0x270EB
{
	char cVar0[32];
	
	sParam0->f_B = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = MISC::GET_HASH_KEY(sParam4);
	sParam0->f_5 = MISC::GET_HASH_KEY(sParam5);
	sParam0->f_8 = MISC::GET_HASH_KEY(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_A = (iParam1 % 32);
	sParam0->f_C = iParam9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_B == 13 || sParam0->f_B == 14) || sParam0->f_B == 15) || sParam0->f_B == 16) || sParam0->f_B == 71) || sParam0->f_B == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01"))
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((sParam0->f_B == 0 || sParam0->f_B == 1) || sParam0->f_B == 2) || sParam0->f_B == 4) || sParam0->f_B == 3) || sParam0->f_B == 54) || sParam0->f_B == 5) || sParam0->f_B == 6) || sParam0->f_B == 55) || sParam0->f_B == 7) || sParam0->f_B == 8) || sParam0->f_B == 9) || sParam0->f_B == 10) || sParam0->f_B == 11) || sParam0->f_B == 56) || sParam0->f_B == 12) || sParam0->f_B == 57) || sParam0->f_B == 58) || sParam0->f_B == 59) || sParam0->f_B == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01") || sParam0->f_B == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			sParam0->f_5 = MISC::GET_HASH_KEY(&cVar0);
			if (PED::_GET_TATTOO_ZONE(sParam0->f_4, sParam0->f_5) == 7)
			{
				sParam0->f_B = 4294967295;
			}
		}
	}
}

bool func_158(int iParam0, int iParam1)//Position - 0x273A1
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	iVar0 = func_159(iParam0, iParam1);
	iVar1 = func_138(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iVar1);
}

int func_159(int iParam0, int iParam1)//Position - 0x273E3
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_160(iParam0);
	if (iVar0 == 9954)
	{
		return 0;
	}
	iVar1 = func_69(iVar0, iParam1, 0);
	return iVar1;
}

int func_160(int iParam0)//Position - 0x2740F
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_141(iVar0);
	if ((func_38() == 0 || func_37() == 0) || (func_38() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1048;
				break;
			
			case 1:
				return 1049;
				break;
			
			case 2:
				return 1050;
				break;
			
			case 3:
				return 1051;
				break;
			
			case 4:
				return 1052;
				break;
			
			case 5:
				return 1053;
				break;
			
			case 6:
				return 1487;
				break;
			
			case 7:
				return 1488;
				break;
			
			case 8:
				return 1489;
				break;
			
			case 9:
				return 1490;
				break;
			
			case 10:
				return 1947;
				break;
			
			case 11:
				return 1948;
				break;
			
			case 12:
				return 1949;
				break;
			
			case 13:
				return 2423;
				break;
			
			case 14:
				return 2443;
				break;
			
			case 15:
				return 2446;
				break;
			
			case 16:
				return 2449;
				break;
			
			case 17:
				return 2612;
				break;
			
			case 18:
				return 2615;
				break;
			
			case 19:
				return 2618;
				break;
			
			case 20:
				return 3784;
				break;
			
			case 21:
				return 3787;
				break;
			
			case 22:
				return 3862;
				break;
			
			case 23:
				return 3865;
				break;
			
			case 24:
				return 3868;
				break;
			
			case 25:
				return 3871;
				break;
			
			case 26:
				return 5362;
			
			case 27:
				return 5365;
				break;
			
			case 28:
				return 5467;
				break;
			
			case 29:
				return 5470;
				break;
			
			case 30:
				return 6429;
				break;
			
			case 31:
				return 6432;
				break;
			
			case 32:
				return 7253;
				break;
			
			case 33:
				return 7256;
				break;
			
			case 34:
				return 7259;
				break;
			
			case 35:
				return 7968;
				break;
			
			case 36:
				return 7971;
				break;
			
			case 37:
				return 7974;
				break;
			
			case 38:
				return 7977;
				break;
		}
		return 9954;
	}
	return 9954;
}

int func_161(int iParam0)//Position - 0x276A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = func_69(1757, 4294967295, 0);
			if (iVar0 > 15)
			{
				iVar3 = func_203(iParam0, 11, 4294967295);
				if (iVar3 >= 237)
				{
					iVar4 = func_189(joaat("mp_m_freemode_01"), iVar3, 11, 3);
					if ((FILE::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2827284307, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0))
					{
						if (iVar2 == 671171671)
						{
							return 1;
						}
						if (iVar2 == 1495413374)
						{
							return 1;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2901811106, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar4, 3057068164, 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = func_69(1757, 4294967295, 0);
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_203(iParam0, 11, 4294967295);
				if (iVar5 >= 256)
				{
					iVar6 = func_189(joaat("mp_f_freemode_01"), iVar5, 11, 4);
					if ((FILE::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2827284307, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0))
					{
						if (iVar2 == 1911627074)
						{
							return 1;
						}
						if (iVar2 == 3080744829)
						{
							return 1;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2901811106, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar6, 3057068164, 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_162(int iParam0)//Position - 0x27877
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iVar0 = Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_63.f_1C;
		if (iVar0 != 4294967295 && iVar0 < 4)
		{
			if (func_163(iVar0) != 4294967295 && func_163(iVar0) != 0)
			{
				return 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) == 15)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_163(int iParam0)//Position - 0x278F3
{
	if (func_164(1))
	{
		return Global_150B1F;
	}
	if (iParam0 <= 4294967295 || iParam0 >= 4)
	{
		return 4294967295;
	}
	return Global_255F11.f_17BD[iParam0];
}

bool func_164(bool bParam0)//Position - 0x2792A
{
	if (bParam0)
	{
		return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12) && func_165());
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_165()//Position - 0x27966
{
	if (Global_440000.f_2033E == 1 || Global_440000.f_2033E == 2)
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0, bool bParam1)//Position - 0x27994
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						
						case 1:
						case 7:
						case 12:
							iVar2 = func_172(joaat("mp_m_freemode_01"), 11, func_203(iParam0, 11, 4294967295), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				case 5:
					if (!bParam1)
					{
						if (func_158(13, 4294967295))
						{
							return 1;
						}
						else if (func_158(14, 4294967295))
						{
							return 1;
						}
						else if (func_158(15, 4294967295))
						{
							return 1;
						}
						else if (func_158(16, 4294967295))
						{
							return 1;
						}
						else if (func_158(71, 4294967295))
						{
							return 1;
						}
						else if (func_158(72, 4294967295))
						{
						}
						else if (func_168(CAM::_0xDC9DA9E8789F5246(), 1) && Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_46.f_15 != 0)
						{
							return 1;
						}
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_203(iParam0, 11, 4294967295);
						if (iVar3 >= 237)
						{
							iVar4 = func_189(joaat("mp_m_freemode_01"), iVar3, 11, 3);
							if (((FILE::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2827284307, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_203(iParam0, 8, 4294967295);
						if (iVar5 >= 241)
						{
							iVar6 = func_189(joaat("mp_m_freemode_01"), iVar5, 8, 3);
							if (((FILE::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2827284307, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar7 = func_172(joaat("mp_f_freemode_01"), 11, func_203(iParam0, 11, 4294967295), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_203(iParam0, 11, 4294967295);
						if (iVar8 >= 256)
						{
							iVar9 = func_189(joaat("mp_f_freemode_01"), iVar8, 11, 4);
							if (((FILE::_0x341DE7ED1D2A1BFD(iVar9, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar9, 2827284307, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar9, 362493804, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar9, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar10 = func_172(joaat("mp_f_freemode_01"), 11, func_203(iParam0, 11, 4294967295), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar11 = func_172(joaat("mp_f_freemode_01"), 11, func_203(iParam0, 11, 4294967295), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_203(iParam0, 8, 4294967295);
						if (iVar12 >= 136)
						{
							iVar13 = func_189(joaat("mp_f_freemode_01"), iVar12, 8, 4);
							if (((FILE::_0x341DE7ED1D2A1BFD(iVar13, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar13, 2827284307, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar13, 362493804, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar13, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (func_167(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_167(int iParam0)//Position - 0x281B8
{
	struct<5> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar1 = ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01");
	iVar2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	if (bVar1)
	{
		FILE::GET_SHOP_PED_COMPONENT(103980309, &Var0);
	}
	else
	{
		FILE::GET_SHOP_PED_COMPONENT(4263891622, &Var0);
	}
	if (iVar2 == Var0.f_3 && iVar3 == Var0.f_4)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0, bool bParam1)//Position - 0x2821B
{
	return func_169(iParam0, bParam1, 1);
}

int func_169(int iParam0, bool bParam1, int iParam2)//Position - 0x2822C
{
	int iVar0;
	
	if (iParam0 == func_171())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_170(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_171() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0, int iParam1)//Position - 0x28288
{
	if (iParam0 != func_171())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_171())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_171()//Position - 0x282D7
{
	return 4294967295;
}

int func_172(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x282E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (func_137(89, 4294967295))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_137(87, 4294967295))
				{
					return 87;
				}
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_189(iParam0, iParam2, 11, 3);
				if (iVar0 != 4294967295)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 362493804, 0))
					{
						iVar1 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							FILE::_0x017568A8182D98A6(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10)
							{
								if (iVar3 != 0 && iVar3 != 1849449579)
								{
									return func_142(iVar3, 3);
								}
								else
								{
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2827284307, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_69(1757, 4294967295, 0);
						}
						return func_142(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (func_137(89, 4294967295))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_137(87, 4294967295))
				{
					return 87;
				}
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (func_137(89, 4294967295))
				{
					return 89;
				}
			}
			else if (iParam2 == 225)
			{
				return 88;
			}
			else if (iParam2 == 236)
			{
				if (func_137(87, 4294967295))
				{
					return 87;
				}
			}
			else if (iParam2 >= 241)
			{
				iVar6 = func_189(iParam0, iParam2, 8, 3);
				if (iVar6 != 4294967295)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0))
					{
						iVar7 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							FILE::_0x017568A8182D98A6(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10)
							{
								if (iVar9 != 0 && iVar9 != 1849449579)
								{
									return func_142(iVar9, 3);
								}
								else
								{
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2827284307, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_69(1757, 4294967295, 0);
						}
						return func_142(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_137(89, 4294967295))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_137(87, 4294967295))
				{
					return 87;
				}
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				iVar12 = func_189(iParam0, iParam2, 11, 4);
				if (iVar12 != 4294967295)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar12, 362493804, 0))
					{
						iVar13 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13)
						{
							FILE::_0x017568A8182D98A6(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10)
							{
								if (iVar15 != 0 && iVar15 != 1849449579)
								{
									return func_142(iVar15, 4);
								}
								else
								{
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 2827284307, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_69(1757, 4294967295, 0);
						}
						return func_142(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_137(89, 4294967295))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_137(87, 4294967295))
				{
					return 87;
				}
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (func_137(89, 4294967295))
				{
					return 89;
				}
			}
			else if (iParam2 == 23)
			{
				return 88;
			}
			else if (iParam2 == 25)
			{
				if (func_137(87, 4294967295))
				{
					return 87;
				}
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				iVar18 = func_189(iParam0, iParam2, 8, 4);
				if (iVar18 != 4294967295)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar18, 362493804, 0))
					{
						iVar19 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19)
						{
							FILE::_0x017568A8182D98A6(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10)
							{
								if (iVar21 != 0 && iVar21 != 1849449579)
								{
									return func_142(iVar21, 4);
								}
								else
								{
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 2827284307, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_69(1757, 4294967295, 0);
						}
						return func_142(iParam3, 4);
					}
				}
			}
		}
	}
	return 4294967295;
}

int func_173(int iParam0)//Position - 0x28B04
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		case joaat("mp_m_freemode_01"):
			return 3;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 4;
			break;
	}
	return 0;
}

int func_174(int iParam0, int iParam1)//Position - 0x28B59
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return 4294967295;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 95;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 96;
		}
		else if (iParam1 == 25)
		{
			return 96;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 97;
		}
		else if (iParam1 == 31)
		{
			return 97;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 98;
		}
		else if (iParam1 == 36)
		{
			return 98;
		}
		else if (iParam1 == 37)
		{
			return 98;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 99;
		}
		else if (iParam1 == 42)
		{
			return 99;
		}
		else if (iParam1 == 43)
		{
			return 99;
		}
		else if (iParam1 == 44)
		{
			return 99;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 100;
		}
		else if (iParam1 == 48)
		{
			return 100;
		}
		else if (iParam1 == 49)
		{
			return 100;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 101;
		}
		else if (iParam1 == 54)
		{
			return 101;
		}
		else if (iParam1 == 55)
		{
			return 101;
		}
		else if (iParam1 == 56)
		{
			return 101;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 102;
		}
		else if (iParam1 == 61)
		{
			return 102;
		}
		else if (iParam1 == 62)
		{
			return 102;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 103;
		}
		else if (iParam1 == 68)
		{
			return 103;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 104;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return 105;
		}
		else if (iParam1 == 80)
		{
			return 106;
		}
		else if (iParam1 == 81)
		{
			return 106;
		}
		else if (iParam1 == 82)
		{
			return 106;
		}
		else if (iParam1 == 83)
		{
			return 106;
		}
		else if (iParam1 == 84)
		{
			return 106;
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 >= 91)
		{
			iVar0 = func_189(iParam0, iParam1, 2, 3);
			if (iVar0 != 4294967295)
			{
				switch (iVar0)
				{
					case 2311537468:
					case 228608740:
					case 600995656:
					case 850728205:
					case 1093513726:
					case 1732051928:
						return 108;
						break;
					
					case 3837327646:
					case 4200014942:
					case 144031963:
					case 533262145:
					case 2749298539:
					case 3389916813:
						return 109;
						break;
					
					case 2669474085:
					case 3182243397:
					case 2862516264:
					case 3647464890:
					case 3369485463:
						return 110;
						break;
					
					case 3126638701:
					case 2872973872:
					case 3718512379:
					case 3856568172:
					case 271967258:
						return 111;
						break;
					
					case 2391720360:
					case 1155542604:
					case 2048071857:
					case 2689492263:
					case 100085859:
						return 112;
						break;
					
					case 745771948:
					case 2675669434:
					case 2416040647:
					case 3809116379:
					case 558628189:
						return 113;
						break;
					
					case 1577121865:
					case 884057515:
					case 2055188806:
					case 1362452146:
					case 2533124671:
						return 114;
						break;
				}
				iVar1 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar0);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					FILE::_0x017568A8182D98A6(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
					if (iVar5 == 10)
					{
						if (iVar3 != 0 && iVar3 != 1849449579)
						{
							return func_142(iVar3, 3);
						}
						else
						{
							return uVar4;
						}
					}
					iVar2++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return 4294967295;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 96;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 97;
		}
		else if (iParam1 == 25)
		{
			return 97;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 98;
		}
		else if (iParam1 == 31)
		{
			return 98;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 99;
		}
		else if (iParam1 == 36)
		{
			return 99;
		}
		else if (iParam1 == 37)
		{
			return 99;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 100;
		}
		else if (iParam1 == 42)
		{
			return 100;
		}
		else if (iParam1 == 43)
		{
			return 100;
		}
		else if (iParam1 == 44)
		{
			return 100;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 101;
		}
		else if (iParam1 == 48)
		{
			return 101;
		}
		else if (iParam1 == 49)
		{
			return 101;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 102;
		}
		else if (iParam1 == 54)
		{
			return 102;
		}
		else if (iParam1 == 55)
		{
			return 102;
		}
		else if (iParam1 == 56)
		{
			return 102;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 103;
		}
		else if (iParam1 == 61)
		{
			return 103;
		}
		else if (iParam1 == 62)
		{
			return 103;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 104;
		}
		else if (iParam1 == 68)
		{
			return 104;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 105;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return func_142(3033246535, 4);
		}
		else if (iParam1 == 80)
		{
			return func_142(3033246535, 4);
		}
		else if (iParam1 == 81)
		{
			return func_142(3033246535, 4);
		}
		else if (iParam1 == 82)
		{
			return func_142(3033246535, 4);
		}
		else if (iParam1 == 83)
		{
			return func_142(3033246535, 4);
		}
		else if (iParam1 == 84)
		{
			return func_142(3033246535, 4);
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 == 91)
		{
			return 107;
		}
		else if (iParam1 >= 92)
		{
			iVar6 = func_189(iParam0, iParam1, 2, 4);
			if (iVar6 != 4294967295)
			{
				switch (iVar6)
				{
					case 3055974561:
					case 2347705395:
					case 3523948654:
					case 2808797994:
					case 1159796376:
					case 256274500:
						return 108;
						break;
					
					case 1389867525:
					case 1622396349:
					case 1851615504:
					case 2242353044:
					case 2476356473:
					case 2495546540:
						return 109;
						break;
					
					case 1855226196:
					case 271139943:
					case 3195937042:
					case 3987242854:
					case 3657095179:
						return 110;
						break;
					
					case 3631169795:
					case 2088667427:
					case 1779786837:
					case 2685030458:
					case 2414489594:
						return 111;
						break;
					
					case 1052499595:
					case 142438919:
					case 458495932:
					case 3593244006:
					case 4175745750:
						return 112;
						break;
					
					case 1245050198:
					case 1481937299:
					case 1754870300:
					case 2261937806:
					case 62318681:
						return 112;
						break;
					
					case 665775322:
					case 618391324:
					case 497473714:
					case 123808807:
					case 4063429067:
						return 114;
						break;
				}
				iVar7 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar6);
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					FILE::_0x017568A8182D98A6(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
					if (iVar11 == 10)
					{
						if (iVar9 != 0 && iVar9 != 1849449579)
						{
							return func_142(iVar9, 4);
						}
						else
						{
							return uVar10;
						}
					}
					iVar8++;
				}
			}
		}
	}
	return 4294967295;
}

void func_175(int iParam0, int iParam1)//Position - 0x29972
{
	struct<12> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<7> Var4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	int iVar8;
	int iVar9;
	struct<7> Var10;
	int iVar11;
	int iVar12;
	struct<7> Var13;
	int iVar14;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		iVar1 = func_173(iParam1);
		if (iParam0 != 0)
		{
			if (iVar1 == 3 || iVar1 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_199(13, 0, Global_11566);
					func_199(14, 0, Global_11566);
					func_199(15, 0, Global_11566);
					func_199(16, 0, Global_11566);
					func_199(71, 0, Global_11566);
					func_199(72, 0, Global_11566);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar1 == 3)
					{
						func_199(73, 0, Global_11566);
						func_199(74, 0, Global_11566);
						func_199(75, 0, Global_11566);
						func_199(76, 0, Global_11566);
						func_199(77, 0, Global_11566);
						func_199(78, 0, Global_11566);
						func_199(79, 0, Global_11566);
						func_199(80, 0, Global_11566);
						func_199(81, 0, Global_11566);
						func_199(82, 0, Global_11566);
						func_199(83, 0, Global_11566);
						func_199(84, 0, Global_11566);
						func_199(85, 0, Global_11566);
						func_199(86, 0, Global_11566);
						func_199(90, 0, Global_11566);
						func_199(91, 0, Global_11566);
						func_199(124, 0, Global_11566);
						func_199(125, 0, Global_11566);
						func_199(87, 0, Global_11566);
						func_199(88, 0, Global_11566);
						func_199(89, 0, Global_11566);
						iVar3 = FILE::_GET_NUM_DECORATIONS(3);
						iVar2 = 0;
						while (iVar2 < iVar3)
						{
							if (FILE::_GET_TATTOO_COLLECTION_DATA(3, iVar2, &Var4))
							{
								if (Var4.f_6 == 277073536)
								{
									func_199((129 + iVar2), 0, Global_11566);
								}
							}
							iVar2++;
						}
					}
					else
					{
						func_199(73, 0, Global_11566);
						func_199(74, 0, Global_11566);
						func_199(75, 0, Global_11566);
						func_199(76, 0, Global_11566);
						func_199(77, 0, Global_11566);
						func_199(78, 0, Global_11566);
						func_199(79, 0, Global_11566);
						func_199(80, 0, Global_11566);
						func_199(81, 0, Global_11566);
						func_199(82, 0, Global_11566);
						func_199(83, 0, Global_11566);
						func_199(84, 0, Global_11566);
						func_199(85, 0, Global_11566);
						func_199(92, 0, Global_11566);
						func_199(87, 0, Global_11566);
						func_199(88, 0, Global_11566);
						func_199(89, 0, Global_11566);
						iVar6 = FILE::_GET_NUM_DECORATIONS(4);
						iVar5 = 0;
						while (iVar5 < iVar6)
						{
							if (FILE::_GET_TATTOO_COLLECTION_DATA(4, iVar5, &Var7))
							{
								if (Var7.f_6 == 277073536)
								{
									func_199((129 + iVar5), 0, Global_11566);
								}
							}
							iVar5++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar1 == 3)
					{
						func_199(93, 0, Global_11566);
						func_199(94, 0, Global_11566);
						func_199(95, 0, Global_11566);
						func_199(96, 0, Global_11566);
						func_199(97, 0, Global_11566);
						func_199(98, 0, Global_11566);
						func_199(99, 0, Global_11566);
						func_199(100, 0, Global_11566);
						func_199(101, 0, Global_11566);
						func_199(102, 0, Global_11566);
						func_199(103, 0, Global_11566);
						func_199(104, 0, Global_11566);
						func_199(105, 0, Global_11566);
						func_199(106, 0, Global_11566);
						func_199(107, 0, Global_11566);
						func_199(108, 0, Global_11566);
						func_199(109, 0, Global_11566);
						func_199(110, 0, Global_11566);
						func_199(111, 0, Global_11566);
						func_199(112, 0, Global_11566);
						func_199(113, 0, Global_11566);
						func_199(114, 0, Global_11566);
						func_199(115, 0, Global_11566);
						func_199(116, 0, Global_11566);
						func_199(117, 0, Global_11566);
						func_199(123, 0, Global_11566);
						iVar9 = FILE::_GET_NUM_DECORATIONS(3);
						iVar8 = 0;
						while (iVar8 < iVar9)
						{
							if (FILE::_GET_TATTOO_COLLECTION_DATA(3, iVar8, &Var10))
							{
								if (Var10.f_6 == 2140335355)
								{
									func_199((129 + iVar8), 0, Global_11566);
								}
							}
							iVar8++;
						}
					}
					else
					{
						func_199(93, 0, Global_11566);
						func_199(94, 0, Global_11566);
						func_199(95, 0, Global_11566);
						func_199(96, 0, Global_11566);
						func_199(97, 0, Global_11566);
						func_199(98, 0, Global_11566);
						func_199(99, 0, Global_11566);
						func_199(100, 0, Global_11566);
						func_199(101, 0, Global_11566);
						func_199(102, 0, Global_11566);
						func_199(103, 0, Global_11566);
						func_199(104, 0, Global_11566);
						func_199(105, 0, Global_11566);
						func_199(106, 0, Global_11566);
						func_199(107, 0, Global_11566);
						func_199(108, 0, Global_11566);
						func_199(109, 0, Global_11566);
						func_199(110, 0, Global_11566);
						func_199(111, 0, Global_11566);
						func_199(112, 0, Global_11566);
						func_199(113, 0, Global_11566);
						func_199(114, 0, Global_11566);
						func_199(115, 0, Global_11566);
						func_199(116, 0, Global_11566);
						func_199(117, 0, Global_11566);
						func_199(118, 0, Global_11566);
						func_199(119, 0, Global_11566);
						func_199(120, 0, Global_11566);
						func_199(121, 0, Global_11566);
						func_199(122, 0, Global_11566);
						func_199(123, 0, Global_11566);
						iVar12 = FILE::_GET_NUM_DECORATIONS(4);
						iVar11 = 0;
						while (iVar11 < iVar12)
						{
							if (FILE::_GET_TATTOO_COLLECTION_DATA(4, iVar11, &Var13))
							{
								if (Var13.f_6 == 2140335355)
								{
									func_199((129 + iVar11), 0, Global_11566);
								}
							}
							iVar11++;
						}
					}
					return;
				}
			}
			iVar14 = 0;
			while (iVar14 < 127)
			{
				if (func_151(&Var0, iVar14, iVar1, iParam1, 4294967295))
				{
					if (Var0.f_8 == iParam0)
					{
						func_199(Var0.f_B, 0, Global_11566);
					}
				}
				iVar14++;
			}
		}
	}
}

int func_176(int iParam0, int iParam1)//Position - 0x29F6F
{
	int iVar0;
	
	iVar0 = func_202();
	if (iVar0 != 4294967295)
	{
		if (!func_177(iParam0, iParam1, iVar0))
		{
			func_199(iVar0, 0, Global_11566);
			return 1;
		}
	}
	return 0;
}

int func_177(int iParam0, int iParam1, int iParam2)//Position - 0x29FA1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_184(iParam0, iParam1, 4294967295))
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 4294967295;
			iVar1 = 4294967295;
			if (iParam1 >= 237)
			{
				iVar1 = func_189(iParam0, iParam1, 11, 3);
				iVar0 = func_180(iVar1);
			}
			if (iVar1 != 4294967295 && func_99(iVar1, 0) != 4294967295)
			{
				return 0;
			}
			if (iVar1 != 4294967295 && func_178(iVar1, 0) != 4294967295)
			{
				return 0;
			}
			if (iVar1 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar1, 3797526821, 0))
			{
				return 0;
			}
			if ((iVar1 == 3096588460 || iVar1 == 968798999) || iVar1 == 1283250323)
			{
				return 0;
			}
			if ((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 124 && iParam1 <= 139)) || iVar0 == 0) || iVar0 == 1) || iVar0 == 8)
			{
				if (iParam2 == 15)
				{
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14)
				{
					if (func_172(iParam0, 11, iParam1, 0) == 4294967295)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar0 == 5)
			{
				if ((iParam2 == 16 || iParam2 == 71) || iParam2 == 72)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 140 && iParam1 <= 155) || iVar0 == 9)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			iVar2 = 4294967295;
			iVar3 = 4294967295;
			if (iParam1 >= 256)
			{
				iVar3 = func_189(iParam0, iParam1, 11, 4);
				iVar2 = func_180(iVar3);
			}
			if (iVar3 != 4294967295 && func_99(iVar3, 0) != 4294967295)
			{
				return 0;
			}
			if (iVar3 != 4294967295 && func_178(iVar3, 0) != 4294967295)
			{
				return 0;
			}
			if (iVar3 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar3, 3797526821, 0))
			{
				return 0;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (func_172(iParam0, 11, iParam1, 0) == 4294967295)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (func_172(iParam0, 11, iParam1, 0) == 4294967295)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 64 && iParam1 <= 79) || iVar2 == 4)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
				if (iParam2 == 15)
				{
					if (iVar2 != 4 || !FILE::_0x341DE7ED1D2A1BFD(iVar3, 1113995558, 0))
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar2 == 5)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 144 && iParam1 <= 159) || iVar2 == 9)
			{
				if (iParam2 == 14)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_178(int iParam0, int iParam1)//Position - 0x2A313
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1769225721, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2460520549, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3355441939, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 38465448, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2825075674, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3792645937, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3502607518, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 997614074, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 748799057, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 653048039, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2372230965, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2609838984, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1892460036, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3998228749, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_179(int iParam0, int iParam1, int iParam2)//Position - 0x2A457
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 4294967295;
		iVar1 = 4294967295;
		if (iParam1 >= 256)
		{
			iVar0 = func_189(iParam0, iParam1, 4, 3);
			iVar1 = func_180(iVar0);
		}
		iVar2 = 4294967295;
		iVar3 = 4294967295;
		if (iParam2 >= 237)
		{
			iVar2 = func_189(iParam0, iParam2, 11, 3);
			iVar3 = func_180(iVar2);
		}
		if (iVar2 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3468832093, 0))
			{
				if (iVar0 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar0, 3468832093, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 3468832093, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3468832093, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2439348822, 0))
			{
				if (iVar0 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar0, 2439348822, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2439348822, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2439348822, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2874141894, 0))
			{
				if (iVar0 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2874141894, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				if (iVar0 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2276967906, 0))
			{
				if (iVar0 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar0, 2276967906, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2276967906, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2276967906, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0))
			{
				if (iVar0 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0))
			{
				return 1;
			}
		}
		else if (iVar0 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0))
			{
				return 1;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 3468832093, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3468832093, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2439348822, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2439348822, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2874141894, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2276967906, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2276967906, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0))
		{
			if (((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 112 && iParam1 <= 127)) || (iParam1 >= 128 && iParam1 <= 143)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 224 && iParam1 <= 239)) || iVar1 == 0) || iVar1 == 3) || iVar1 == 4) || iVar1 == 7) || iVar1 == 8) || iVar1 == 11) || iVar1 == 14) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1627756587, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		switch (iVar0)
		{
			case 3855202361:
			case 312004063:
			case 6695290:
			case 1724446270:
			case 3846861623:
			case 3683868617:
			case 3183879215:
			case 2888597756:
			case 2382808253:
			case 2076516410:
			case 1919618438:
			case 45227112:
			case 2165873043:
			case 3873596709:
			case 3619604190:
				if (((((((((((((((iParam2 >= 204 && iParam2 <= 219) || iVar3 == 13) || iVar2 == 1844077094) || iVar2 == 1672760762) || iVar2 == 339848918) || iVar2 == 3669277629) || iVar2 == 3370063890) || iVar2 == 4145640582) || iVar2 == 3851211117) || iVar2 == 2477469099) || iVar2 == 2184678084) || iVar2 == 2961041232) || iVar2 == 2391329018) || iVar2 == 1018832222) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2206820464, 0))
				{
					return 0;
				}
				break;
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1021189127, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2969153612, 0))
			{
				return 0;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar4 = 4294967295;
		iVar5 = 4294967295;
		if (iParam1 >= 256)
		{
			iVar4 = func_189(iParam0, iParam1, 4, 4);
			iVar5 = func_180(iVar4);
		}
		iVar6 = 4294967295;
		if (iParam2 >= 256)
		{
			iVar6 = func_189(iParam0, iParam2, 11, 4);
		}
		if (iVar6 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 3468832093, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3468832093, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3468832093, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3468832093, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2439348822, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2439348822, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2439348822, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2439348822, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 3995877949, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3995877949, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3995877949, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3995877949, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2874141894, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2874141894, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2874141894, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2874141894, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2276967906, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2276967906, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2276967906, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2276967906, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 3764877471, 0))
			{
				if ((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3764877471, 0)) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3071453855, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3764877471, 0))
			{
				if ((iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3764877471, 0)) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3071453855, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar6, 3094454078, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3515131827, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3208708908, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2206820464, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2848634098, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2943480357, 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3071453855, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == 4084062188) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == 2609031191) || iVar4 == 2915585186) || iVar4 == 3506344718) || iVar4 == 3813226403) || iVar4 == 4028224108) || iVar4 == 573421207) || iVar4 == 3555298657) || iVar4 == 3168919394) || iVar4 == 3340170188) || iVar4 == 2436728858) || iVar4 == 2743676081) || iVar4 == 3305094513) || iVar4 == 2073733812) || iVar4 == 2698769718) || iVar4 == 3352609563) || iVar4 == 4254019215) || iVar4 == 3032095974) || iVar4 == 3799578723) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == 3981676056) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 821147517, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar6, 4239416730, 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3071453855, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == 4084062188) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == 2609031191) || iVar4 == 2915585186) || iVar4 == 3506344718) || iVar4 == 3813226403) || iVar4 == 4028224108) || iVar4 == 573421207) || iVar4 == 3555298657) || iVar4 == 3168919394) || iVar4 == 3340170188) || iVar4 == 2436728858) || iVar4 == 2743676081) || iVar4 == 3305094513) || iVar4 == 2073733812) || iVar4 == 2698769718) || iVar4 == 3352609563) || iVar4 == 4254019215) || iVar4 == 3032095974) || iVar4 == 3799578723) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == 3981676056) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return 0;
				}
			}
		}
		if (iVar4 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3468832093, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3468832093, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2439348822, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2439348822, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3995877949, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3995877949, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2874141894, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2874141894, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2276967906, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2276967906, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3764877471, 0))
			{
				if ((iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3764877471, 0)) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3071453855, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 4261935729, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2192107526, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3547384111, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 3547384111, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 4261935729, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2969153612, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2026620439, 0))
			{
				return 0;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2175211152, 0))
		{
			if (((((((((((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 140732128, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2206820464, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1055526375, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2412047274, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3214390491, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2907508806, 0))
			{
				return 0;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 947651647, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 4236554734, 0))
		{
			if ((((((((((((((((((((((((((((((((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3071453855, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == 4084062188) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == 2609031191) || iVar4 == 2915585186) || iVar4 == 3506344718) || iVar4 == 3813226403) || iVar4 == 4028224108) || iVar4 == 573421207) || iVar4 == 3555298657) || iVar4 == 3168919394) || iVar4 == 3340170188) || iVar4 == 2436728858) || iVar4 == 2743676081) || iVar4 == 3305094513) || iVar4 == 2073733812) || iVar4 == 2698769718) || iVar4 == 3352609563) || iVar4 == 4254019215) || iVar4 == 3032095974) || iVar4 == 3799578723) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == 3981676056) || iVar4 == 495041640) || iVar4 == 749492925)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_180(int iParam0)//Position - 0x2B744
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2302404624, 0))
	{
		iVar0 = 2;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3248380212, 0))
	{
		iVar0 = 4;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2295097229, 0))
	{
		iVar0 = 6;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 4184983770, 0))
	{
		iVar0 = 8;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2900078511, 0))
	{
		iVar0 = 9;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 4150140785, 0))
	{
		iVar0 = 10;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2690052464, 0))
	{
		iVar0 = 14;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3202756242, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_181(int iParam0, int iParam1, int iParam2)//Position - 0x2B8B1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 4294967197;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 124;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 140;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 188;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 204;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 240)
		{
			iVar0 = 236;
		}
		else if (iParam1 >= 241)
		{
			iVar1 = func_189(iParam0, iParam1, 8, 3);
			if (iVar1 != 4294967295)
			{
				iVar2 = FILE::_0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					FILE::GET_VARIANT_COMPONENT(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_79(iParam0, iVar4, 11, 3);
							return iVar0;
						}
						else
						{
							iVar0 = iVar5;
							return iVar0;
						}
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 32)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 33)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 49)
		{
			iVar0 = 64;
		}
		else if (iParam1 <= 65)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 66)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 67)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 68)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 69)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 70)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 86)
		{
			iVar0 = 176;
		}
		else if (iParam1 <= 102)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 118)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 119)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 135)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 136)
		{
			iVar7 = func_189(iParam0, iParam1, 8, 4);
			if (iVar7 != 4294967295)
			{
				iVar8 = FILE::_0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILE::GET_VARIANT_COMPONENT(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_79(iParam0, iVar10, 11, 4);
							return iVar0;
						}
						else
						{
							iVar0 = iVar11;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != 4294967197)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_182(int iParam0, int iParam1, int iParam2)//Position - 0x2BBA8
{
	int iVar0;
	
	if (iParam1 == 14)
	{
		iVar0 = iParam2;
		return func_82(iVar0);
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_19E56.f_933.f_21B[0 /*65*/].f_3B;
					break;
				
				case 3:
					if (Global_19E56.f_2361.f_63.f_3A[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 4:
					if (Global_19E56.f_2361.f_63.f_3A[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 6:
					return 6;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_19E56.f_933.f_21B[1 /*65*/].f_3B;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 24;
					break;
				
				case 6:
					return 17;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 26;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_19E56.f_933.f_21B[2 /*65*/].f_3B;
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 91;
					break;
				
				case 6:
					return 8;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 15;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 80;
					break;
				
				case 6:
					return 10;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 233;
					break;
				
				case 6:
					return 16;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 78;
					break;
			}
			break;
		
		default:
			break;
	}
	return 4294967197;
}

int func_183(int iParam0, int iParam1)//Position - 0x2BFC2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_176D0 != 4294967197)
	{
		if (Global_176D1 == 11)
		{
			Global_11569[1 /*14*/] = { func_218(ENTITY::GET_ENTITY_MODEL(iParam0), 11, Global_176D0, 4294967295) };
			iVar0 = func_185(ENTITY::GET_ENTITY_MODEL(iParam0), Global_176D0, iParam1, Global_11569[1 /*14*/].f_4);
			if (iVar0 != 4294967197)
			{
				return iVar0;
			}
		}
		else if (Global_176D1 == 8)
		{
			iVar1 = func_181(ENTITY::GET_ENTITY_MODEL(iParam0), Global_176D0, Global_176D2);
			if (iVar1 != 4294967197)
			{
				Global_11569[1 /*14*/] = { func_218(ENTITY::GET_ENTITY_MODEL(iParam0), 11, iVar1, 4294967295) };
				iVar2 = func_185(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, iParam1, Global_11569[1 /*14*/].f_4);
				if (iVar2 != 4294967197)
				{
					return iVar2;
				}
			}
			else
			{
				return Global_176D0;
			}
		}
	}
	return 4294967197;
}

int func_184(int iParam0, int iParam1, int iParam2)//Position - 0x2C095
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (((((iParam1 >= 48 && iParam1 < 64) || (iParam1 >= 64 && iParam1 < 80)) || (iParam1 >= 96 && iParam1 < 108)) || (iParam1 >= 108 && iParam1 < 124)) || (iParam1 >= 156 && iParam1 < 172))
			{
				return 1;
			}
			if (iParam2 == 4294967295 && iParam1 >= 237)
			{
				iParam2 = func_189(iParam0, iParam1, 11, 3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 2901811106, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 160 && iParam1 < 176))
			{
				return 1;
			}
			if (iParam2 == 4294967295 && iParam1 >= 256)
			{
				iParam2 = func_189(iParam0, iParam1, 11, 4);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 2901811106, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_185(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2C1EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<10> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	struct<10> Var32;
	int iVar33;
	int iVar34;
	int iVar35;
	bool bVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	bool bVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	bool bVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = 4294967197;
	iVar1 = 1;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar2 = 4294967295;
		iVar3 = 4294967295;
		if (iParam2 >= 237)
		{
			iVar2 = func_189(iParam0, iParam2, 11, 3);
			iVar3 = func_180(iVar2);
		}
		iVar4 = 4294967295;
		iVar5 = 4294967295;
		if (iParam1 >= 237)
		{
			iVar4 = func_189(iParam0, iParam1, 11, 3);
			iVar5 = func_180(iVar4);
		}
		if (iVar2 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3803378421, 0))
			{
				return 4294967197;
			}
		}
		if (iVar2 != 4294967295)
		{
			if (((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar2, 2947481270, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3020868293, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1723403459, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1538937264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2481756905, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 4205963378, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3547108821, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2887353267, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0))
			{
				if ((((((iParam1 >= 124 && iParam1 <= 139) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 8) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return 4294967197;
				}
				if (((((((!FILE::_0x341DE7ED1D2A1BFD(iVar2, 3745123536, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 2481756905, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 4205963378, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 3547108821, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 2887353267, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3466488725, 0))
					{
						return 4294967197;
					}
				}
			}
			if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 2639813129, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2575799735, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1431529976, 0))
			{
				return 4294967197;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1690933245, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2969153612, 0))
			{
				return 4294967197;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0))
			{
				if ((((((((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 140 && iParam1 <= 155)) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 5) || iVar5 == 8) || iVar5 == 9) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return 4294967197;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 264959411, 0))
			{
				if ((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 15)
				{
				}
				else
				{
					return 4294967197;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar4, 3653355204, 0))
			{
				return 4294967197;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2575628572, 0))
			{
				if ((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 4294967197;
				}
			}
		}
		iVar6 = 0;
		bVar7 = false;
		if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3057068164, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 3803378421, 0))
		{
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 4025701093, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_79(iParam0, 3223543667, 8, 3);
							break;
						
						case 1:
							iVar0 = func_79(iParam0, 3461872604, 8, 3);
							break;
						
						case 2:
							iVar0 = func_79(iParam0, 2458813514, 8, 3);
							break;
						
						case 3:
							iVar0 = func_79(iParam0, 2696552609, 8, 3);
							break;
						
						case 4:
							iVar0 = func_79(iParam0, 123661793, 8, 3);
							break;
						
						case 5:
							iVar0 = func_79(iParam0, 330958487, 8, 3);
							break;
						
						case 7:
							iVar0 = func_79(iParam0, 3648786972, 8, 3);
							break;
						
						case 8:
							iVar0 = func_79(iParam0, 4152249888, 8, 3);
							break;
						
						case 11:
							iVar0 = func_79(iParam0, 1290696959, 8, 3);
							break;
					}
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_79(iParam0, 2912144512, 8, 3);
							break;
						
						case 1:
							iVar0 = func_79(iParam0, 2563613428, 8, 3);
							break;
						
						case 2:
							iVar0 = func_79(iParam0, 2334328735, 8, 3);
							break;
						
						case 3:
							iVar0 = func_79(iParam0, 147161830, 8, 3);
							break;
						
						case 4:
							iVar0 = func_79(iParam0, 4202358353, 8, 3);
							break;
						
						case 5:
							iVar0 = func_79(iParam0, 4132036079, 8, 3);
							break;
						
						case 7:
							iVar0 = func_79(iParam0, 3757879637, 8, 3);
							break;
						
						case 8:
							iVar0 = func_79(iParam0, 1665087452, 8, 3);
							break;
						
						case 11:
							iVar0 = func_79(iParam0, 1012984348, 8, 3);
							break;
					}
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_79(iParam0, 385813134, 8, 3);
							break;
						
						case 1:
							iVar0 = func_79(iParam0, 675392787, 8, 3);
							break;
						
						case 2:
							iVar0 = func_79(iParam0, 4056694817, 8, 3);
							break;
						
						case 3:
							iVar0 = func_79(iParam0, 67757212, 8, 3);
							break;
						
						case 4:
							iVar0 = func_79(iParam0, 3758595224, 8, 3);
							break;
						
						case 5:
							iVar0 = func_79(iParam0, 4047388421, 8, 3);
							break;
						
						case 7:
							iVar0 = func_79(iParam0, 3134378543, 8, 3);
							break;
						
						case 8:
							iVar0 = func_79(iParam0, 3440146082, 8, 3);
							break;
						
						case 11:
							iVar0 = func_79(iParam0, 2836672178, 8, 3);
							break;
						}
				}
				return iVar0;
			}
			else if (iParam1 >= 236 && iParam1 <= 236)
			{
				iVar0 = 240;
				return iVar0;
			}
			else if (iParam1 >= 237)
			{
				bVar7 = true;
				if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 4025701093, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0))
				{
					iVar6 = 4;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0))
				{
					iVar6 = 5;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0))
				{
					iVar6 = 6;
				}
				else
				{
					iVar6 = 4294967295;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3653355204, 0))
		{
			bVar7 = true;
			if (((((((((FILE::_0x341DE7ED1D2A1BFD(iVar2, 470686834, 0) && FILE::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2481756905, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 4205963378, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3547108821, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2887353267, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0))
			{
				iVar6 = 1;
			}
			else if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2943480357, 0))
			{
				iVar6 = 0;
			}
			else
			{
				iVar6 = 4294967295;
			}
		}
		if (bVar7)
		{
			if (iVar6 != 4294967295)
			{
				iVar8 = FILE::_0xC17AD0E5752BECDA(iVar4);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILE::GET_VARIANT_COMPONENT(iVar4, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (((((((iVar6 == 6 && FILE::_0x341DE7ED1D2A1BFD(iVar10, 4126630879, 0)) || (iVar6 == 5 && FILE::_0x341DE7ED1D2A1BFD(iVar10, 2879967043, 0))) || (iVar6 == 4 && FILE::_0x341DE7ED1D2A1BFD(iVar10, 2591763688, 0))) || (iVar6 == 3 && FILE::_0x341DE7ED1D2A1BFD(iVar10, 1318819110, 0))) || (iVar6 == 2 && FILE::_0x341DE7ED1D2A1BFD(iVar10, 3156209713, 0))) || (iVar6 == 1 && FILE::_0x341DE7ED1D2A1BFD(iVar10, 647976134, 0))) || ((((((iVar6 == 0 && !FILE::_0x341DE7ED1D2A1BFD(iVar10, 647976134, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar10, 3156209713, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar10, 1318819110, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar10, 2591763688, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar10, 2879967043, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar10, 4126630879, 0)))
						{
							if (iVar10 != 0 && iVar10 != 1849449579)
							{
								iVar0 = func_79(iParam0, iVar10, 8, 3);
							}
							else
							{
								iVar0 = iVar11;
							}
							iVar9 = iVar8 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
			return 4294967197;
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 490219883, 0))
		{
			if ((iParam1 >= 80 && iParam1 <= 95) || iVar5 == 5)
			{
				return 4294967197;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 350281921, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 490219883, 0))
		{
			if ((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 140 && iParam1 <= 155)) || iVar5 == 5) || iVar5 == 9)
			{
				return 4294967197;
			}
		}
		if ((iParam2 >= 96 && iParam2 <= 107) || iVar3 == 6)
		{
			if (iParam1 <= 15)
			{
				iVar0 = 32;
			}
			else if (iParam1 <= 31)
			{
				iVar0 = 224;
			}
			else if (iParam1 == 236)
			{
				iVar0 = 240;
			}
			else if (((iParam1 >= 220 && iParam1 <= 235) && func_186()) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 3028409363, 0))
			{
				iVar0 = 34;
				iVar1 = 0;
				FILE::INIT_SHOP_PED_COMPONENT(&Var13);
				if (Global_4116CF[1] != 0)
				{
					FILE::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, 4294967295, 0, 4294967295, 8);
					FILE::GET_SHOP_PED_QUERY_COMPONENT(Global_4116CC[1], &Var13);
					if (Var13.f_1 != Global_4116CF[1])
					{
						Global_4116CF[1] = 0;
						Global_4116CC[1] = 0;
					}
				}
				if (Global_4116CF[1] == 0)
				{
					iVar15 = 0;
					iVar16 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, 4294967295, 0, 4294967295, 8);
					iVar14 = 0;
					while (iVar14 < iVar16)
					{
						FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar14, &Var13);
						if (!FILE::_IS_DLC_DATA_EMPTY(Var13))
						{
							if (MISC::GET_HASH_KEY(&(Var13.f_9)) == 2629350489 && FILE::_0x341DE7ED1D2A1BFD(Var13.f_1, 647976134, 0))
							{
								Global_4116CF[1] = Var13.f_1;
								Global_4116CC[1] = iVar15;
								iVar14 = iVar16 + 1;
							}
							iVar15++;
						}
						iVar14++;
					}
				}
				if (Global_4116CF[1] != 0)
				{
					iVar0 = (func_80(iParam0, func_59(8)) + Global_4116CC[1]);
					iVar1 = 1;
				}
			}
			else
			{
				iVar0 = 34;
				iVar1 = 0;
				if (iParam1 >= 237)
				{
					iVar17 = func_189(iParam0, iParam1, 11, 3);
					if ((iVar17 != 4294967295 && !FILE::_0x341DE7ED1D2A1BFD(iVar17, 310957510, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar17, 4184983770, 0))
					{
						iVar18 = FILE::_0xC17AD0E5752BECDA(iVar17);
						iVar19 = 0;
						while (iVar19 < iVar18)
						{
							FILE::GET_VARIANT_COMPONENT(iVar17, iVar19, &iVar20, &iVar21, &iVar22);
							if (iVar22 == 8)
							{
								if (iVar20 != 0 && iVar20 != 1849449579)
								{
									if ((!FILE::_0x341DE7ED1D2A1BFD(iVar20, 2591763688, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar20, 2879967043, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar20, 4126630879, 0))
									{
										iVar0 = func_79(iParam0, iVar20, 8, 3);
									}
								}
								else
								{
									iVar0 = iVar21;
								}
							}
							iVar19++;
						}
					}
				}
			}
		}
		else if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 203 || iVar5 == 12)
		{
			if (((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 3) || iVar3 == 7) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0))
			{
				iVar0 = 2;
				iVar1 = 0;
			}
			else
			{
				iVar23 = 0;
				if (iParam2 >= 236 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0))
				{
					iVar23 = 1;
				}
				iVar24 = func_189(iParam0, iParam1, 11, 3);
				if (iVar24 != 4294967295)
				{
					iVar25 = FILE::_0xC17AD0E5752BECDA(iVar24);
					iVar26 = 0;
					while (iVar26 < iVar25)
					{
						FILE::GET_VARIANT_COMPONENT(iVar24, iVar26, &iVar27, &iVar28, &iVar29);
						if (iVar29 == 8 && iVar23 == FILE::_0x341DE7ED1D2A1BFD(iVar27, 1680519719, 0))
						{
							if (iVar27 != 0 && iVar27 != 1849449579)
							{
								iVar0 = func_79(iParam0, iVar27, 8, 3);
							}
							else
							{
								iVar0 = iVar28;
							}
							iVar26 = iVar25 + 1;
							iVar1 = 0;
						}
						iVar26++;
					}
				}
				else
				{
					iVar0 = func_79(iParam0, 2555320394, 8, 3);
					iVar1 = 1;
				}
			}
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = 2;
			iVar1 = 0;
			if (func_186())
			{
				iVar30 = 0;
				iVar31 = 0;
				if ((iParam2 >= 96 && iParam2 <= 107) || (iParam2 >= 236 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)))
				{
					iVar30 = 1;
					iVar31 = 1;
				}
				FILE::INIT_SHOP_PED_COMPONENT(&Var32);
				if (Global_4116CF[iVar31] != 0)
				{
					FILE::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, 4294967295, 0, 4294967295, 8);
					FILE::GET_SHOP_PED_QUERY_COMPONENT(Global_4116CC[iVar31], &Var32);
					if (Var32.f_1 != Global_4116CF[iVar31])
					{
						Global_4116CF[iVar31] = 0;
						Global_4116CC[iVar31] = 0;
					}
				}
				if (Global_4116CF[iVar31] == 0)
				{
					iVar34 = 0;
					iVar35 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, 4294967295, 0, 4294967295, 8);
					iVar33 = 0;
					while (iVar33 < iVar35)
					{
						FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar33, &Var32);
						if (!FILE::_IS_DLC_DATA_EMPTY(Var32))
						{
							if (MISC::GET_HASH_KEY(&(Var32.f_9)) == 2629350489 && iVar30 == FILE::_0x341DE7ED1D2A1BFD(Var32.f_1, 647976134, 0))
							{
								Global_4116CF[iVar31] = Var32.f_1;
								Global_4116CC[iVar31] = iVar34;
								iVar33 = iVar35 + 1;
							}
							iVar34++;
						}
						iVar33++;
					}
				}
				if (Global_4116CF[iVar31] != 0)
				{
					iVar0 = (func_80(iParam0, func_59(8)) + Global_4116CC[iVar31]);
					iVar1 = 1;
				}
			}
			if ((((iParam2 >= 237 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 7) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0))
			{
				iVar0 = 4294967197;
			}
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
			iVar1 = 0;
		}
		else if (iParam1 >= 237)
		{
			iVar0 = 2;
			iVar1 = 0;
			bVar36 = false;
			iVar37 = func_189(iParam0, iParam1, 11, 3);
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2943480357, 0))
			{
				bVar36 = true;
			}
			if (iVar37 != 4294967295)
			{
				iVar38 = FILE::_0xC17AD0E5752BECDA(iVar37);
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					FILE::GET_VARIANT_COMPONENT(iVar37, iVar39, &iVar40, &iVar41, &iVar42);
					if (iVar42 == 8)
					{
						if (iVar40 != 0 && iVar40 != 1849449579)
						{
							iVar0 = func_79(iParam0, iVar40, 8, 3);
							iVar1 = 0;
							if (!bVar36 || FILE::_0x341DE7ED1D2A1BFD(iVar40, 647976134, 0))
							{
								iVar39 = iVar38 + 1;
							}
						}
						else
						{
							iVar0 = iVar41;
							iVar39 = iVar38 + 1;
							iVar1 = 0;
						}
					}
					iVar39++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar43 = 4294967295;
		iVar44 = 4294967295;
		if (iParam2 >= 256)
		{
			iVar43 = func_189(iParam0, iParam2, 11, 4);
			iVar44 = func_180(iVar43);
		}
		iVar45 = 4294967295;
		iVar46 = 4294967295;
		if (iParam1 >= 256)
		{
			iVar45 = func_189(iParam0, iParam1, 11, 4);
			iVar46 = func_180(iVar45);
		}
		if (iVar43 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 3803378421, 0))
			{
				return 4294967197;
			}
		}
		if ((((FILE::_0x341DE7ED1D2A1BFD(iVar43, 2481756905, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 4205963378, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2887353267, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 481861038, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 3466488725, 0))
			{
				return 4294967197;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 2575628572, 0))
		{
			if (((((((((((((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 32 && iParam1 <= 47)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar46 == 0) || iVar46 == 2) || iVar46 == 4) || iVar46 == 5) || iVar46 == 11) || iVar46 == 12) || iVar46 == 13) || iVar46 == 15) || iVar45 == 4073140617) || iVar45 == 1172264892) || iVar45 == 1474853838) || iVar45 == 278369420) || iVar45 == 3984150096) || iVar45 == 4155990732) || iVar45 == 3389425515) || iVar45 == 998321559) || iVar45 == 64401473)
			{
			}
			else
			{
				return 4294967197;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 3445128205, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2206820464, 0))
		{
			return 4294967197;
		}
		iVar47 = 0;
		bVar48 = false;
		if ((((((FILE::_0x341DE7ED1D2A1BFD(iVar45, 3533503320, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2947481270, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 1784133476, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2030343924, 0))
		{
			bVar48 = true;
			if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar44 == 1) || iVar44 == 8)
			{
				iVar47 = 2;
			}
			else if ((((FILE::_0x341DE7ED1D2A1BFD(iVar43, 1769225721, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2460520549, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1248753945, 0))
			{
				iVar47 = 0;
			}
			else if (((((((((((((iParam2 >= 160 && iParam2 <= 175) || iVar44 == 10) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 684992453, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3474242399, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3422517591, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 700658917, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1714969731, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 745826556, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1055526375, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 144417099, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 1784133476, 0))
				{
					iVar47 = 1;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 3175734607, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2044466679, 0))
				{
					iVar47 = 1;
				}
				else
				{
					iVar47 = 4294967295;
				}
			}
			else
			{
				iVar47 = 1;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 2943480357, 0))
		{
			bVar48 = true;
			if ((((((((((iParam2 >= 112 && iParam2 <= 127) || iVar44 == 7) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 684992453, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3474242399, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3422517591, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 947651647, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1830529185, 0))
			{
				if (((FILE::_0x341DE7ED1D2A1BFD(iVar43, 1769225721, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2460520549, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1248753945, 0))
				{
					iVar47 = 0;
				}
				else
				{
					iVar47 = 1;
				}
			}
			else if ((((((FILE::_0x341DE7ED1D2A1BFD(iVar43, 153792394, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1322269404, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 548036233, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 700658917, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3280213785, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2175211152, 0))
			{
				iVar47 = 0;
			}
			else
			{
				iVar47 = 4294967295;
			}
		}
		switch (iVar45)
		{
			case 4073140617:
			case 1172264892:
			case 1474853838:
			case 278369420:
			case 3984150096:
			case 4155990732:
			case 3389425515:
			case 998321559:
			case 64401473:
			case 15269846:
			case 3620941227:
			case 3390575157:
			case 3159258786:
			case 2934725598:
			case 2164916250:
			case 1935434943:
			case 1704282417:
			case 1472114052:
			case 1169688951:
			case 3101135124:
			case 3408082347:
			case 2625427551:
			case 2924706828:
			case 3881004551:
			case 4056187633:
				bVar48 = true;
				if (((FILE::_0x341DE7ED1D2A1BFD(iVar43, 1769225721, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1248753945, 0))
				{
					iVar47 = 1;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 2460520549, 0))
				{
					iVar47 = 2;
				}
				else if ((((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar43, 3424892835, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2575628572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 947651647, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1830529185, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2481756905, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 4205963378, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3547108821, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 4236554734, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2887353267, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 481861038, 0))
				{
					iVar47 = 3;
				}
				else if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || (iParam2 >= 112 && iParam2 <= 127)) || iVar44 == 1) || iVar44 == 7) || iVar44 == 8)
				{
					iVar47 = 0;
				}
				else
				{
					iVar47 = 4294967295;
				}
				break;
			
			case 619380843:
				bVar48 = true;
				if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar44 == 1) || iVar44 == 8)
				{
					iVar47 = 0;
				}
				else
				{
					iVar47 = 4294967295;
				}
				break;
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 3028409363, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3315498572, 0))
		{
			if ((iParam1 >= 240 && iParam1 <= 255) || iVar46 == 15)
			{
				iVar0 = 120;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 2044466679, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2274210138, 0))
			{
				bVar48 = true;
				iVar47 = 0;
			}
			else
			{
				return iVar0;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 3057068164, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar43, 3803378421, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 2170337719, 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar46 == 12)
				{
					return 4294967197;
				}
			}
			if ((((((((((((iParam1 >= 64 && iParam1 <= 79) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar46 == 4) || iVar46 == 5) || iVar46 == 11) || iVar46 == 12) || iVar46 == 13) || iVar46 == 15)
			{
				bVar48 = false;
			}
			else if (iParam1 >= 256)
			{
				bVar48 = true;
				if ((FILE::_0x341DE7ED1D2A1BFD(iVar43, 4025701093, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 297865853, 0))
				{
					iVar47 = 4;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 201427653, 0))
				{
					iVar47 = 5;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 967829025, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2170337719, 0))
				{
					iVar47 = 6;
				}
				else
				{
					iVar47 = 4294967295;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (bVar48)
		{
			if (iVar47 != 4294967295)
			{
				iVar49 = FILE::_0xC17AD0E5752BECDA(iVar45);
				iVar50 = 0;
				while (iVar50 < iVar49)
				{
					FILE::GET_VARIANT_COMPONENT(iVar45, iVar50, &iVar51, &iVar52, &iVar53);
					if (iVar53 == 8)
					{
						if (((((((iVar47 == 6 && FILE::_0x341DE7ED1D2A1BFD(iVar51, 4126630879, 0)) || (iVar47 == 5 && FILE::_0x341DE7ED1D2A1BFD(iVar51, 2879967043, 0))) || (iVar47 == 4 && FILE::_0x341DE7ED1D2A1BFD(iVar51, 2591763688, 0))) || (iVar47 == 3 && FILE::_0x341DE7ED1D2A1BFD(iVar51, 1318819110, 0))) || (iVar47 == 2 && FILE::_0x341DE7ED1D2A1BFD(iVar51, 3156209713, 0))) || (iVar47 == 1 && FILE::_0x341DE7ED1D2A1BFD(iVar51, 647976134, 0))) || ((((((iVar47 == 0 && !FILE::_0x341DE7ED1D2A1BFD(iVar51, 647976134, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar51, 3156209713, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar51, 1318819110, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar51, 2591763688, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar51, 2879967043, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar51, 4126630879, 0)))
						{
							if (iVar51 != 0 && iVar51 != 1849449579)
							{
								iVar0 = func_79(iParam0, iVar51, 8, 4);
							}
							else
							{
								iVar0 = iVar52;
							}
							iVar50 = iVar49 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar50++;
				}
			}
			return 4294967197;
		}
		if ((((((((iParam1 >= 192 && iParam1 <= 207) || iVar46 == 12) && ((((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 112 && iParam2 <= 127)) || iVar44 == 6) || iVar44 == 7)) && func_186()) && !FILE::_0x341DE7ED1D2A1BFD(iVar43, 3878346342, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar43, 947651647, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar43, 3745123536, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar43, 1830529185, 0))
		{
			if ((((((FILE::_0x341DE7ED1D2A1BFD(iVar43, 2481756905, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 4205963378, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3547108821, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 4236554734, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2887353267, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 481861038, 0))
			{
				return 4294967197;
			}
			iVar54 = iVar45;
			if (iParam1 == 199)
			{
				iVar0 = func_79(iParam0, 331193219, 8, 4);
			}
			else if (iParam1 == 200)
			{
				iVar0 = func_79(iParam0, 1115060468, 8, 4);
			}
			else if (iParam1 == 201)
			{
				iVar0 = func_79(iParam0, 779636984, 8, 4);
			}
			else if (iVar54 == 948380380)
			{
				iVar0 = func_79(iParam0, 3724718090, 8, 4);
			}
			else if (iVar54 == 708412993)
			{
				iVar0 = func_79(iParam0, 3418852244, 8, 4);
			}
			else if (iVar54 == 1974869305)
			{
				iVar0 = func_79(iParam0, 4186367762, 8, 4);
			}
			else if (iVar54 == 1197916315)
			{
				iVar0 = func_79(iParam0, 200575961, 8, 4);
			}
			else if (iVar54 == 587593690)
			{
				iVar0 = func_79(iParam0, 961930907, 8, 4);
			}
			else if (iVar54 == 323213398)
			{
				iVar0 = func_79(iParam0, 4037268788, 8, 4);
			}
			else if (iVar54 == 1050193651)
			{
				iVar0 = func_79(iParam0, 516534659, 8, 4);
			}
			else if (iVar54 == 811438717)
			{
				iVar0 = func_79(iParam0, 3120654712, 8, 4);
			}
			else if (iVar54 == 3417098537)
			{
				iVar0 = func_79(iParam0, 3102172992, 8, 4);
			}
			else if (iVar54 == 3186503084)
			{
				iVar0 = func_79(iParam0, 2267710407, 8, 4);
			}
			else if (iVar54 == 3827101202)
			{
				iVar0 = func_79(iParam0, 2624892507, 8, 4);
			}
			else if (iVar54 == 3621967262)
			{
				iVar0 = func_79(iParam0, 3968618121, 8, 4);
			}
			else if (iVar54 == 2310027578)
			{
				iVar0 = func_79(iParam0, 3498907275, 8, 4);
			}
			iVar1 = 0;
		}
		else if (iParam1 <= 15)
		{
			if (((((iParam2 >= 160 && iParam2 <= 175) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1769225721, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1248753945, 0))
			{
				iVar0 = 16;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar1 = 0;
			switch (iParam1)
			{
				case 199:
					iVar0 = 94;
					break;
				
				case 200:
					iVar0 = 95;
					break;
				
				case 201:
					iVar0 = 96;
					break;
			}
			if ((iParam2 >= 160 && iParam2 <= 175) || iVar44 == 10)
			{
				return 4294967197;
			}
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar0 = 48;
			iVar1 = 0;
			if (iVar45 != 4294967295)
			{
				bVar55 = true;
				if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 1965569012, 0))
				{
					bVar55 = false;
					if (iParam2 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar43, 3094454078, 0))
					{
						bVar55 = true;
					}
				}
				if (bVar55)
				{
					iVar47 = 0;
					if (iParam2 >= 160 && iParam2 <= 175)
					{
						if (iVar46 == 12)
						{
							iVar47 = 1;
						}
					}
					iVar56 = FILE::_0xC17AD0E5752BECDA(iVar45);
					iVar57 = 0;
					while (iVar57 < iVar56)
					{
						FILE::GET_VARIANT_COMPONENT(iVar45, iVar57, &iVar58, &iVar59, &iVar60);
						if (iVar60 == 8 && ((((((((iVar58 == 0 || iVar58 == 1849449579) || (iVar47 == 6 && FILE::_0x341DE7ED1D2A1BFD(iVar58, 4126630879, 0))) || (iVar47 == 5 && FILE::_0x341DE7ED1D2A1BFD(iVar58, 2879967043, 0))) || (iVar47 == 4 && FILE::_0x341DE7ED1D2A1BFD(iVar58, 2591763688, 0))) || (iVar47 == 3 && FILE::_0x341DE7ED1D2A1BFD(iVar58, 1318819110, 0))) || (iVar47 == 2 && FILE::_0x341DE7ED1D2A1BFD(iVar58, 3156209713, 0))) || (iVar47 == 1 && FILE::_0x341DE7ED1D2A1BFD(iVar58, 647976134, 0))) || ((((((iVar47 == 0 && !FILE::_0x341DE7ED1D2A1BFD(iVar58, 647976134, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar58, 3156209713, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar58, 1318819110, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar58, 2591763688, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar58, 2879967043, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar58, 4126630879, 0))))
						{
							if (iVar58 != 0 && iVar58 != 1849449579)
							{
								iVar0 = func_79(iParam0, iVar58, 8, 4);
							}
							else
							{
								iVar0 = iVar59;
							}
							iVar57 = iVar56 + 1;
							iVar1 = 0;
						}
						iVar57++;
					}
				}
			}
		}
	}
	if (iVar1 && iVar0 != 4294967197)
	{
		iVar0 = (iVar0 + iParam3);
	}
	return iVar0;
}

bool func_186()//Position - 0x2E7AA
{
	return DLC::IS_DLC_PRESENT(42019760);
}

int func_187(int iParam0, int iParam1, int iParam2)//Position - 0x2E7BB
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2131039487;
							break;
						
						case 3:
							return 717379468;
							break;
						
						case 4:
							return 3963774115;
							break;
						
						case 5:
							return 73557144;
							break;
						
						case 6:
							return 3406987030;
							break;
						
						case 7:
							return 3988651626;
							break;
						
						case 8:
							return 3140918358;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 1604817400;
							break;
						
						case 16:
							return 1070350465;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2993330681;
							break;
						
						case 3:
							return 1153996761;
							break;
						
						case 4:
							return 2979882504;
							break;
						
						case 5:
							return 1655884038;
							break;
						
						case 6:
							return 1489229833;
							break;
						
						case 7:
							return 2365463971;
							break;
						
						case 8:
							return 3105838929;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2507722867;
							break;
						
						case 16:
							return 4130341732;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 538171135;
							break;
						
						case 3:
							return 4049982234;
							break;
						
						case 4:
							return 442977103;
							break;
						
						case 5:
							return 2909239405;
							break;
						
						case 6:
							return 1309989623;
							break;
						
						case 7:
							return 1191418696;
							break;
						
						case 8:
							return 189293242;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2241289605;
							break;
						
						case 16:
							return 3479621494;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 2856282540;
							break;
						
						case 1:
							return 194146035;
							break;
						
						case 2:
							return 3874065698;
							break;
						
						case 3:
							return 2107411814;
							break;
						
						case 4:
							return 1242686602;
							break;
						
						case 5:
							return 3698426713;
							break;
						
						case 6:
							return 3641181225;
							break;
						
						case 7:
							return 1460048630;
							break;
						
						case 8:
							return 2215377481;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 195042046;
							break;
						
						case 16:
							return 1585638009;
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2347868813;
							break;
						
						case 3:
							return 569295621;
							break;
						
						case 4:
							return 4086868737;
							break;
						
						case 5:
							return 1256246195;
							break;
						
						case 6:
							return 1605755939;
							break;
						
						case 7:
							return 874748698;
							break;
						
						case 8:
							return 4157871924;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 4178443173;
							break;
						
						case 16:
							return 2265365265;
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1950801119;
							break;
						
						case 3:
							return 3136402525;
							break;
						
						case 4:
							return 4225037868;
							break;
						
						case 5:
							return 1957730707;
							break;
						
						case 6:
							return 374587029;
							break;
						
						case 7:
							return 4084820561;
							break;
						
						case 8:
							return 336100633;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 3922523070;
							break;
						
						case 16:
							return 3113259020;
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 3146728417;
							break;
						
						case 3:
							return 3336095272;
							break;
						
						case 4:
							return 1353141306;
							break;
						
						case 5:
							return 394070886;
							break;
						
						case 6:
							return 255958050;
							break;
						
						case 7:
							return 3773238586;
							break;
						
						case 8:
							return 1843470374;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 482576981;
							break;
						
						case 16:
							return 3742774391;
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 670760190;
							break;
						
						case 3:
							return 799655540;
							break;
						
						case 4:
							return 4195887990;
							break;
						
						case 5:
							return 1989760633;
							break;
						
						case 6:
							return 1157052274;
							break;
						
						case 7:
							return 3098705071;
							break;
						
						case 8:
							return 3630610897;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 4040450207;
							break;
						
						case 16:
							return 249940927;
							break;
					}
					break;
				
				case 8:
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1875496913;
							break;
						
						case 3:
							return 2316080488;
							break;
						
						case 4:
							return 3015564099;
							break;
						
						case 5:
							return 2834968475;
							break;
						
						case 6:
							return 1786467932;
							break;
						
						case 7:
							return 3499962050;
							break;
						
						case 8:
							return 3147958310;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2135611597;
							break;
						
						case 16:
							return 2400190606;
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
				case 16:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2369958009;
							break;
						
						case 3:
							return 4026233562;
							break;
						
						case 4:
							return 2170554475;
							break;
						
						case 5:
							return 3934930599;
							break;
						
						case 6:
							return 3368533741;
							break;
						
						case 7:
							return 985839403;
							break;
						
						case 8:
							return 4060530899;
							break;
						
						case 9:
							return 1165919867;
							break;
						
						case 10:
							return 1606204151;
							break;
						
						case 11:
							return 1774276352;
							break;
						
						case 12:
							return 1934254610;
							break;
						
						case 13:
							return 980775017;
							break;
						
						case 14:
							return 399321881;
							break;
						
						case 15:
							return 1330460533;
							break;
						
						case 16:
							return 1085725282;
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 493536654;
							break;
						
						case 3:
							return 2535914291;
							break;
						
						case 4:
							return 630158551;
							break;
						
						case 5:
							return 3587057782;
							break;
						
						case 6:
							return 1254885089;
							break;
						
						case 7:
							return 596977742;
							break;
						
						case 8:
							return 1861540342;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 4257211256;
							break;
						
						case 16:
							return 2310706429;
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 3454691279;
							break;
						
						case 3:
							return 756400133;
							break;
						
						case 4:
							return 1148630611;
							break;
						
						case 5:
							return 3401058014;
							break;
						
						case 6:
							return 1485630477;
							break;
						
						case 7:
							return 3360792529;
							break;
						
						case 8:
							return 2427985378;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 4289641771;
							break;
						
						case 16:
							return 532560667;
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 3703548719;
							break;
						
						case 3:
							return 2265375802;
							break;
						
						case 4:
							return 1293565798;
							break;
						
						case 5:
							return 1230599348;
							break;
						
						case 6:
							return 80125466;
							break;
						
						case 7:
							return 768104686;
							break;
						
						case 8:
							return 2735212016;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 347604073;
							break;
						
						case 16:
							return 824480839;
							break;
					}
					break;
				
				case 352:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1435783799;
							break;
						
						case 3:
							return 3359415220;
							break;
						
						case 4:
							return 766407714;
							break;
						
						case 5:
							return 1509946582;
							break;
						
						case 6:
							return 2189933498;
							break;
						
						case 7:
							return 1608018857;
							break;
						
						case 8:
							return 2548022312;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 717365732;
							break;
						
						case 16:
							return 2479645078;
							break;
					}
					break;
				
				case 353:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 640553446;
							break;
						
						case 3:
							return 376036624;
							break;
						
						case 4:
							return 4243931144;
							break;
						
						case 5:
							return 1864144311;
							break;
						
						case 6:
							return 875934121;
							break;
						
						case 7:
							return 3623861538;
							break;
						
						case 8:
							return 2855573784;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2063066579;
							break;
						
						case 16:
							return 1248148722;
							break;
					}
					break;
				
				case 354:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2499158891;
							break;
						
						case 3:
							return 3711793626;
							break;
						
						case 4:
							return 1309411930;
							break;
						
						case 5:
							return 3197963367;
							break;
						
						case 6:
							return 947491077;
							break;
						
						case 7:
							return 3273780201;
							break;
						
						case 8:
							return 2632545912;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2838644473;
							break;
						
						case 16:
							return 3542963615;
							break;
					}
					break;
				
				case 391:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2428817366;
							break;
						
						case 3:
							return 169817082;
							break;
						
						case 4:
							return 876172205;
							break;
						
						case 5:
							return 2053608242;
							break;
						
						case 6:
							return 720468224;
							break;
						
						case 7:
							return 2539303441;
							break;
						
						case 8:
							return 4017312986;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 3803189478;
							break;
						
						case 16:
							return 1956130191;
							break;
					}
					break;
				
				case 404:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2609775276;
							break;
						
						case 3:
							return 447714365;
							break;
						
						case 4:
							return 4107489012;
							break;
						
						case 5:
							return 2101575193;
							break;
						
						case 6:
							return 1655151264;
							break;
						
						case 7:
							return 4082518710;
							break;
						
						case 8:
							return 3719473258;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 180304173;
							break;
						
						case 16:
							return 1266107782;
							break;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 3880432508;
							break;
						
						case 3:
							return 185531215;
							break;
						
						case 4:
							return 3519549443;
							break;
						
						case 5:
							return 1619085169;
							break;
						
						case 6:
							return 888176083;
							break;
						
						case 7:
							return 3426331003;
							break;
						
						case 8:
							return 3813726078;
							break;
						
						case 9:
							return 2635070926;
							break;
						
						case 10:
							return 1919724703;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 982904848;
							break;
						
						case 3:
							return 1053086051;
							break;
						
						case 4:
							return 1565990968;
							break;
						
						case 5:
							return 869354244;
							break;
						
						case 6:
							return 3157298371;
							break;
						
						case 7:
							return 4049639860;
							break;
						
						case 8:
							return 2202231526;
							break;
						
						case 9:
							return 445078583;
							break;
						
						case 10:
							return 4113402191;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1286693086;
							break;
						
						case 3:
							return 443095479;
							break;
						
						case 4:
							return 2255632020;
							break;
						
						case 5:
							return 2083407994;
							break;
						
						case 6:
							return 533001127;
							break;
						
						case 7:
							return 1728875992;
							break;
						
						case 8:
							return 2629153079;
							break;
						
						case 9:
							return 372072052;
							break;
						
						case 10:
							return 143449031;
							break;
					}
					break;
				
				case 3:
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 1402439971;
							break;
						
						case 1:
							return 4217756910;
							break;
						
						case 2:
							return 206640931;
							break;
						
						case 3:
							return 1434974169;
							break;
						
						case 4:
							return 2218663893;
							break;
						
						case 5:
							return 2073263245;
							break;
						
						case 6:
							return 229693395;
							break;
						
						case 7:
							return 3313720557;
							break;
						
						case 8:
							return 2107613618;
							break;
						
						case 9:
							return 1636528688;
							break;
						
						case 10:
							return 1619141120;
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1954830049;
							break;
						
						case 3:
							return 1793062342;
							break;
						
						case 4:
							return 2176242147;
							break;
						
						case 5:
							return 3445220013;
							break;
						
						case 6:
							return 1582789248;
							break;
						
						case 7:
							return 2619280128;
							break;
						
						case 8:
							return 3913077992;
							break;
						
						case 9:
							return 316684696;
							break;
						
						case 10:
							return 1798619938;
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1942207698;
							break;
						
						case 3:
							return 3551597420;
							break;
						
						case 4:
							return 582693633;
							break;
						
						case 5:
							return 3014679012;
							break;
						
						case 6:
							return 3294861797;
							break;
						
						case 7:
							return 2147767267;
							break;
						
						case 8:
							return 2456252430;
							break;
						
						case 9:
							return 2793430367;
							break;
						
						case 10:
							return 2426306979;
							break;
					}
					break;
				
				case 7:
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1187050736;
							break;
						
						case 3:
							return 2874012333;
							break;
						
						case 4:
							return 232453794;
							break;
						
						case 5:
							return 406178867;
							break;
						
						case 6:
							return 739288468;
							break;
						
						case 7:
							return 4041970136;
							break;
						
						case 8:
							return 2250079206;
							break;
						
						case 9:
							return 171952701;
							break;
						
						case 10:
							return 4152648106;
							break;
					}
					break;
				
				case 9:
					break;
				
				case 10:
					break;
				
				case 11:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1703311969;
							break;
						
						case 3:
							return 1875667738;
							break;
						
						case 4:
							return 1291347593;
							break;
						
						case 5:
							return 3581513304;
							break;
						
						case 6:
							return 1417339152;
							break;
						
						case 7:
							return 587281350;
							break;
						
						case 8:
							return 4208063274;
							break;
						
						case 9:
							return 1665085600;
							break;
						
						case 10:
							return 3492063660;
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2436448527;
							break;
						
						case 3:
							return 44044890;
							break;
						
						case 4:
							return 3163829539;
							break;
						
						case 5:
							return 213313570;
							break;
						
						case 6:
							return 4061842347;
							break;
						
						case 7:
							return 171345846;
							break;
						
						case 8:
							return 1452902248;
							break;
						
						case 9:
							return 457174457;
							break;
						
						case 10:
							return 2584353300;
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 747852506;
							break;
						
						case 3:
							return 216238268;
							break;
						
						case 4:
							return 404894315;
							break;
						
						case 5:
							return 950341895;
							break;
						
						case 6:
							return 1159773017;
							break;
						
						case 7:
							return 3337781860;
							break;
						
						case 8:
							return 4054006411;
							break;
						
						case 9:
							return 1933094739;
							break;
						
						case 10:
							return 2146821602;
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 4035278343;
							break;
						
						case 3:
							return 3558433182;
							break;
						
						case 4:
							return 2621080335;
							break;
						
						case 5:
							return 976562040;
							break;
						
						case 6:
							return 2500163498;
							break;
						
						case 7:
							return 4213079340;
							break;
						
						case 8:
							return 1689176064;
							break;
						
						case 9:
							return 3029561478;
							break;
						
						case 10:
							return 1455856271;
							break;
					}
					break;
				
				case 302:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2459528430;
							break;
						
						case 3:
							return 3790079397;
							break;
						
						case 4:
							return 2232761327;
							break;
						
						case 5:
							return 1171204323;
							break;
						
						case 6:
							return 655612525;
							break;
						
						case 7:
							return 3555947677;
							break;
						
						case 8:
							return 1371789707;
							break;
						
						case 9:
							return 417256409;
							break;
						
						case 10:
							return 3526958236;
							break;
					}
					break;
				
				case 303:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 124374814;
							break;
						
						case 3:
							return 2119944607;
							break;
						
						case 4:
							return 3165484822;
							break;
						
						case 5:
							return 801728466;
							break;
						
						case 6:
							return 1764150402;
							break;
						
						case 7:
							return 4294923519;
							break;
						
						case 8:
							return 3751223427;
							break;
						
						case 9:
							return 3323373354;
							break;
						
						case 10:
							return 1482293004;
							break;
					}
					break;
				
				case 304:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1732443055;
							break;
						
						case 3:
							return 1991589117;
							break;
						
						case 4:
							return 2368165254;
							break;
						
						case 5:
							return 2415532340;
							break;
						
						case 6:
							return 3712767295;
							break;
						
						case 7:
							return 498117603;
							break;
						
						case 8:
							return 1121585510;
							break;
						
						case 9:
							return 96864554;
							break;
						
						case 10:
							return 3416909144;
							break;
					}
					break;
			}
			break;
	}
	return 4294967295;
}

int func_188(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x303B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 4294967197;
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar3 = 4294967295;
	iVar4 = 4294967295;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = func_189(iParam0, iParam2, 11, 3);
				iVar1 = func_180(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = func_189(iParam0, iParam1, 8, 3);
				iVar3 = func_180(iVar4);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				iVar0 = 14;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2276967906, 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2508519779, 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3284162009, 0))
			{
				iVar0 = 4;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3057068164, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 3803378421, 0))
			{
				if (iParam1 == 240)
				{
					if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 4025701093, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0))
					{
						iVar0 = func_79(iParam0, 4105619513, 3, 3);
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0))
					{
						iVar0 = func_79(iParam0, 2170707483, 3, 3);
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0))
					{
						iVar0 = func_79(iParam0, 1522547645, 3, 3);
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3315498572, 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_188(iParam0, 4294967197, func_181(iParam0, iParam1, 0), iParam3);
					if (iVar0 == 4294967197)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3978471604, 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3878346342, 0)) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2787434379, 0))) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2481756905, 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2575628572, 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2355588846, 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 264959411, 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3321753654, 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1847239679, 0))
				{
					if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2380584066, 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3445128205, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2206820464, 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != 4294967295)
					{
						iVar5 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILE::_0x017568A8182D98A6(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != 1849449579)
								{
									iVar0 = func_79(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 4287858010, 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1147939952, 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = func_189(iParam0, iParam2, 11, 4);
				iVar1 = func_180(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = func_189(iParam0, iParam1, 8, 4);
				iVar3 = func_180(iVar4);
				switch (iVar4)
				{
					case 327496660:
					case 4231038459:
					case 695885966:
					case 525421628:
					case 1426634666:
					case 1160648693:
					case 1928065904:
					case 1748557322:
					case 2517744063:
					case 2303172647:
					case 917309067:
					case 2665305798:
						iVar3 = 15;
						break;
					
					case 587358117:
					case 742748715:
					case 490263574:
					case 682683142:
					case 3122040275:
					case 4120601753:
					case 2844839045:
					case 2483528051:
					case 1578218888:
					case 3101485853:
					case 1549742623:
					case 1309119856:
					case 2143418596:
					case 1905745039:
					case 428026984:
					case 1547729071:
					case 2446648279:
						iVar3 = 13;
						break;
					}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				iVar0 = 0;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3057068164, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 3803378421, 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == 1389091979) || iVar4 == 442100644) || iVar4 == 2888863571) || iVar4 == 4127662847) || iVar4 == 129353308) || iVar4 == 1943510702) || iVar4 == 1963041026) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2875160829, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 297865853, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0))
				{
					if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 4025701093, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0))
					{
						iVar0 = func_79(iParam0, 3889232304, 3, 4);
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0))
					{
						iVar0 = func_79(iParam0, 1297919831, 3, 4);
					}
					else if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3315498572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2170337719, 0))
					{
						iVar0 = func_79(iParam0, 440926231, 3, 4);
					}
				}
				else if ((FILE::_0x341DE7ED1D2A1BFD(iVar4, 4205963378, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3547108821, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_188(iParam0, 4294967197, func_181(iParam0, iParam1, 0), iParam3);
					if (iVar0 == 4294967197)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3978471604, 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1965569012, 0)) && !func_184(iParam0, iParam2, 4294967295)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1147939952, 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1353777856, 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3445128205, 0)) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2206820464, 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2192107526, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(func_189(iParam0, iParam3, 4, 4), 4261935729, 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3175734607, 0)) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1976716889, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2806526264, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2875160829, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2481756905, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 263623295, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3985067549, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 4205963378, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3547108821, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1208450825, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 297865853, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1322269404, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 548036233, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3424892835, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3120042828, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2460520549, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2575628572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 947651647, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2481756905, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 4205963378, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3547108821, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 4236554734, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2887353267, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1248753945, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0))
				{
					iVar0 = 3;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2355588846, 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3424892835, 0)) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2481756905, 0))) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 4205963378, 0))) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3547108821, 0))) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0))) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 4236554734, 0))) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2887353267, 0))) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0)))
			{
				if ((((FILE::_0x341DE7ED1D2A1BFD(iVar4, 684992453, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != 4294967295)
					{
						iVar10 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILE::_0x017568A8182D98A6(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != 1849449579)
								{
									iVar0 = func_79(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2575628572, 0))
			{
				if ((((FILE::_0x341DE7ED1D2A1BFD(iVar4, 684992453, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

int func_189(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3167C
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILE::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_81(iParam0));
		if (iVar3 < 0)
		{
			return 4294967295;
		}
		iVar4 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 1, 4294967295, 4294967295);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			FILE::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		FILE::INIT_SHOP_PED_COMPONENT(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_80(iParam0, func_59(iParam2)));
		if (iVar8 < 0)
		{
			return 4294967295;
		}
		if ((iParam0 == Global_115E3.f_1A[iParam2] && iParam1 == Global_115E3[iParam2]) && Global_115E3.f_D[iParam2] != 0)
		{
			return Global_115E3.f_D[iParam2];
		}
		iVar9 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 0, 4294967295, func_59(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar6, &Var5);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_115E3.f_D[iParam2] = Var5.f_1;
					Global_115E3[iParam2] = iParam1;
					Global_115E3.f_1A[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return 4294967295;
}

void func_190(int iParam0)//Position - 0x317D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<5> Var15;
	int iVar16;
	int iVar17;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar8 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar9 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILE::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILE::_0x341DE7ED1D2A1BFD(iVar9, 3977318242, 0) && FILE::_0x341DE7ED1D2A1BFD(iVar9, 2405067007, 0))
	{
		if (!func_193(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (func_192(iVar9, 0, 0, &iVar16))
			{
				FILE::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar13, 2807284209, 0))
					{
						if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 3478539067, 0) && iVar13 != 3190685133)
						{
							FILE::GET_SHOP_PED_COMPONENT(3190685133, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 3773427298, 0) && iVar13 != 326501576)
						{
							FILE::GET_SHOP_PED_COMPONENT(326501576, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 3874407143, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 604028170, 0))
						{
							FILE::GET_SHOP_PED_COMPONENT(2525593565, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar13, 2807284209, 0))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 3478539067, 0))
					{
						if (iVar13 != 1349944895)
						{
							FILE::GET_SHOP_PED_COMPONENT(1349944895, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 3773427298, 0))
					{
						if (iVar13 != 3773766511)
						{
							FILE::GET_SHOP_PED_COMPONENT(3773766511, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 3874407143, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 604028170, 0))
					{
						FILE::GET_SHOP_PED_COMPONENT(4227998864, &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iVar9, 3977318242, 0) && FILE::_0x341DE7ED1D2A1BFD(iVar9, 1569775397, 0))
	{
		if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 4075571410, 1))
		{
			if (func_192(iVar9, 1, 0, &iVar17))
			{
				FILE::GET_SHOP_PED_COMPONENT(iVar17, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar13, 2807284209, 0))
					{
						if (FILE::_0x341DE7ED1D2A1BFD(iVar17, 3478539067, 0) && iVar13 != 3190685133)
						{
							FILE::GET_SHOP_PED_COMPONENT(3190685133, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILE::_0x341DE7ED1D2A1BFD(iVar17, 3773427298, 0) && iVar13 != 326501576)
						{
							FILE::GET_SHOP_PED_COMPONENT(326501576, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILE::_0x341DE7ED1D2A1BFD(iVar17, 3874407143, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar17, 604028170, 0))
						{
							FILE::GET_SHOP_PED_COMPONENT(2525593565, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar13, 2807284209, 0))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar17, 3478539067, 0))
					{
						if (iVar13 != 1349944895)
						{
							FILE::GET_SHOP_PED_COMPONENT(1349944895, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar17, 3773427298, 0))
					{
						if (iVar13 != 3773766511)
						{
							FILE::GET_SHOP_PED_COMPONENT(3773766511, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar17, 3874407143, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar17, 604028170, 0))
					{
						FILE::GET_SHOP_PED_COMPONENT(4227998864, &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iVar11, 391733089, 0) || func_191(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_193(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("mp_m_freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
			{
				FILE::GET_SHOP_PED_COMPONENT(1241116144, &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILE::GET_SHOP_PED_COMPONENT(3322209301, &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			FILE::GET_SHOP_PED_COMPONENT(3927116339, &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILE::GET_SHOP_PED_COMPONENT(555191698, &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_191(int iParam0, int iParam1)//Position - 0x31D7D
{
	if (iParam1 == 4294967295)
	{
		iParam1 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
	{
		if (FILE::_0x341DE7ED1D2A1BFD(iParam1, 572416369, 0))
		{
			return 1;
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
	{
		if (FILE::_0x341DE7ED1D2A1BFD(iParam1, 4098852308, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_192(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x31DEB
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	*iParam3 = 4294967295;
	iVar0 = FILE::_0xC17AD0E5752BECDA(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		FILE::GET_VARIANT_COMPONENT(iParam0, iVar1, iParam3, &uVar2, &iVar3);
		if ((((iVar3 == 11 && *iParam3 != 0) && *iParam3 != 1849449579) && iParam1 == FILE::_0x341DE7ED1D2A1BFD(*iParam3, 2405067007, 0)) && iParam2 == FILE::_0x341DE7ED1D2A1BFD(*iParam3, 2969823551, 0))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x31E6F
{
	int iVar0;
	
	*iParam1 = 0;
	if (iParam2 == 4294967295)
	{
		iParam2 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == 4294967295)
	{
		iParam3 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == 4294967295)
	{
		iParam4 = FILE::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 3977318242, 0))
	{
		if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 32905942, 0))
		{
			if (!FILE::_0x341DE7ED1D2A1BFD(iParam4, 605826125, 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != 4294967295)
			{
				return 0;
			}
			if ((!FILE::_0x341DE7ED1D2A1BFD(iParam3, 72391838, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam3, 2885519275, 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iParam4, 605826125, 1))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 629327198, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam3, 3602135069, 0))
					{
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
			if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 3106812971, 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != 4294967295)
			{
				return 0;
			}
			if ((!FILE::_0x341DE7ED1D2A1BFD(iParam3, 72391838, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam3, 2885519275, 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		if (!FILE::_0x341DE7ED1D2A1BFD(iParam2, 572416369, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case 3808240745:
			case 219052171:
			case 3262899047:
			case 3566307218:
			case 3444275478:
			case 3750895011:
			case 2483783319:
			case 3183663621:
			case 116190296:
			case 3012293826:
			case 3358858774:
			case 3623730601:
			case 1520550639:
			case 1816684092:
			case 2102823000:
			case 2428907319:
			case 1250403007:
			case 476038764:
			case 1863871456:
			case 351755390:
			case 1058844872:
			case 1549134650:
			case 1317097361:
			case 3465400232:
			case 4164363006:
			case 3914958147:
			case 596212130:
			case 2140942786:
			case 1901696317:
			case 2497041453:
			case 790890703:
			case 1633873228:
			case 1272234544:
			case 3622558296:
			case 2318253789:
			case 2392687100:
			case 4179023821:
			case 1684425644:
			case 1983115079:
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILE::_0x341DE7ED1D2A1BFD(iParam2, 4098852308, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 3076918706, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case 2553868378:
			case 2934578540:
			case 3164387537:
			case 3365785811:
			case 3730570319:
			case 3980433944:
			case 48874858:
			case 335112073:
			case 643009597:
			case 931540642:
			case 1886036076:
			case 2877527709:
			case 2514643803:
			case 955888011:
			case 691999254:
			case 1549695060:
			case 1319689449:
			case 4036632797:
			case 3796599872:
			case 346089706:
			case 1038236244:
			case 1731071211:
			case 1365303633:
			case 209639294:
			case 3872295966:
			case 805478037:
			case 2679456994:
			case 1527692182:
			case 2211482905:
			case 2922766819:
			case 761684042:
			case 534496565:
			case 303671729:
			case 39193130:
			case 4132368924:
			case 3901904547:
			case 2063387500:
			case 1633785910:
			case 3420056881:
			case 3054551455:
			case 4970004:
			case 2599488352:
			case 3844546507:
			case 257455149:
			case 1098963073:
			case 4090412314:
			case 1027252245:
			case 1482249810:
			case 1657236270:
			case 633729300:
			case 461560974:
			case 39856713:
			case 4164294133:
			case 1595499458:
			case 1424510816:
			case 2608749707:
			case 415037286:
			case 1095714954:
			case 2910291552:
			case 3691602819:
			case 423419373:
			case 3349461690:
			case 4106294518:
			case 578089053:
			case 1418122368:
			case 39432231:
			case 998548092:
			case 3755509153:
			case 1285512993:
			case 1384673675:
			case 207316274:
			case 924498608:
			case 1626705513:
			case 2343560157:
			case 1109577920:
			case 1943254053:
			case 3588716619:
			case 3361004838:
			case 2065187502:
			case 2143125494:
			case 3566109766:
			case 113895612:
			case 4188294769:
			case 2620625809:
			case 2868326684:
			case 2678856326:
			case 3469408451:
			case 3232193660:
			case 1680712586:
			case 731446975:
			case 2853272486:
			case 1076144086:
			case 1291534723:
			case 1653763249:
			case 3892082555:
			case 1982600156:
			case 2339782256:
			case 2572147235:
			case 519431533:
			case 1338441322:
			case 4197496693:
			case 3001886959:
			case 2762968180:
			case 762322431:
			case 1318477899:
			case 199940853:
			case 1034403438:
			case 1715572641:
			case 2281820961:
			case 1085654154:
			case 962496867:
			case 1611716295:
			case 637461160:
			case 3157856030:
			case 316882033:
			case 590699797:
			case 3909052586:
			case 2397090922:
			case 3433181168:
			case 3661351715:
			case 2996238986:
			case 2019526172:
			case 4138336919:
			case 99852586:
			case 1543589216:
			case 1783097837:
			case 2418260542:
			case 2647184776:
			case 2900849605:
			case 977702533:
			case 3624874919:
			case 3386873672:
			case 1219695857:
			case 1919117393:
			case 3759976986:
			case 445654672:
			case 329262298:
			case 22970455:
			case 3818565953:
			case 3588691418:
			case 3180581939:
			case 3454957199:
			case 2246963778:
			case 286623891:
			case 1792195596:
			case 1992938490:
			case 2930623425:
			case 721974080:
			case 4249458627:
			case 1998385862:
			case 1222776401:
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2885519275, 0) && !func_194(iVar0, 14, func_203(iParam0, 14, 0), 4294967295))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_194(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x32507
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == 4294967295)
					{
						iParam3 = func_189(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILE::_0x341DE7ED1D2A1BFD(iParam3, 3261533395, 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == 4294967295)
					{
						iParam3 = func_189(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILE::_0x341DE7ED1D2A1BFD(iParam3, 3261533395, 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_195(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x325D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	
	iVar0 = 4294967197;
	if (iParam4 == 2)
	{
		func_196(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = func_57(iParam0, 8);
					iVar15 = func_189(iParam1, iVar2, 8, 3);
					iVar16 = func_180(iVar15);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar16 == 6)) || (iVar2 >= 241 && iVar16 == 7)) || (iVar2 >= 241 && FILE::_0x341DE7ED1D2A1BFD(iVar15, 1965569012, 0)))
					{
						iVar0 = 4294967197;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = func_189(iParam1, iParam3, 11, 3);
					if (iVar14 != 4294967295)
					{
						bVar17 = true;
						if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 19149565, 0))
						{
							iVar2 = func_57(iParam0, 8);
							iVar18 = func_189(iParam1, iVar2, 8, 3);
							iVar19 = func_180(iVar18);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar19 == 6)) || (iVar2 >= 241 && iVar19 == 7)) || (iVar2 >= 241 && FILE::_0x341DE7ED1D2A1BFD(iVar18, 1965569012, 0)))
							{
								bVar17 = false;
							}
						}
						if (bVar17)
						{
							iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 3)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_79(iParam1, iVar5, 3, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar4 = iVar3 + 1;
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 == 240)
				{
					iVar0 = 14;
				}
				else if (iParam3 >= 241)
				{
					iVar14 = func_189(iParam1, iParam3, 8, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_189(iParam1, iParam3, 10, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar20 = 4294967295;
				if (iParam3 >= 237)
				{
					iVar20 = func_180(func_189(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 187 || iVar20 == 11)
				{
					iVar2 = func_57(iParam0, 8);
					iVar21 = func_189(iParam1, iVar2, 8, 3);
					iVar22 = func_180(iVar21);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar22 == 6)) || (iVar2 >= 241 && iVar22 == 7)) || (iVar2 >= 241 && FILE::_0x341DE7ED1D2A1BFD(iVar21, 1965569012, 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = func_189(iParam1, iParam3, 11, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
				else if (iParam2 == 6)
				{
					if (iParam3 >= 256)
					{
						iVar14 = func_189(iParam1, iParam3, 6, 3);
						if (iVar14 != 4294967295)
						{
							iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_79(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar23 = 4294967295;
				iVar24 = 4294967295;
				if (iParam3 >= 92)
				{
					iVar24 = func_189(iParam1, iParam3, 7, 3);
					iVar23 = func_180(iVar24);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar23 == 10) || iVar23 == 11) || iVar23 == 12) || (iParam3 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar24, 2344027589, 0))) || (iParam3 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar24, 2923543492, 0))) || (iParam3 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar24, 3374433204, 0)))
				{
					iVar2 = func_57(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar14 = func_189(iParam1, iVar2, 8, 3);
						iVar25 = func_180(iVar14);
						bVar26 = FILE::_0x341DE7ED1D2A1BFD(iVar14, 651155766, 0);
						if (((iVar25 == 3 || iVar25 == 7) || iVar25 == 11) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
						{
							if (iVar14 != 4294967295)
							{
								iVar12 = FILE::_0xC17AD0E5752BECDA(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILE::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if ((iVar7 == 8 && !bVar26) || (iVar7 == 10 && bVar26))
									{
										if (iVar5 != 0 && iVar5 != 1849449579)
										{
											iVar0 = func_79(iParam1, iVar5, 8, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
				else if (((iParam3 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar24, 3916060468, 0)) || (iParam3 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar24, 3599263835, 0))) || (iParam3 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar24, 4186639197, 0)))
				{
					iVar14 = func_189(iParam1, iVar2, 8, 3);
					iVar27 = func_180(iVar14);
					bVar28 = FILE::_0x341DE7ED1D2A1BFD(iVar14, 651155766, 0);
					if (((iVar27 == 3 || iVar27 == 7) || iVar27 == 11) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
					{
						if (iVar14 != 4294967295)
						{
							iVar12 = FILE::_0xC17AD0E5752BECDA(iVar14);
							iVar13 = 0;
							while (iVar13 < iVar12)
							{
								FILE::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
								if ((iVar7 == 8 && !bVar28) || (iVar7 == 10 && bVar28))
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_79(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar13 = iVar12 + 1;
								}
								iVar13++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar14 = func_189(iParam1, iParam3, 7, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_189(iParam1, iParam3, 10, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 6, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar29 = 4294967295;
				iVar30 = 4294967295;
				if (iParam3 >= 92)
				{
					iVar30 = func_189(iParam1, iParam3, 7, 3);
					iVar29 = func_180(iVar30);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar29 == 10) || iVar29 == 11) || iVar29 == 12) || FILE::_0x341DE7ED1D2A1BFD(iVar30, 3374433204, 0))
				{
					iVar31 = func_57(iParam0, 11);
					if (iVar31 >= 237)
					{
						iVar14 = func_189(iParam1, iVar31, 11, 3);
						if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 1847239679, 0) && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
						{
							if (iVar14 != 4294967295)
							{
								iVar12 = FILE::_0xC17AD0E5752BECDA(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILE::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if (iVar7 == 11)
									{
										if (iVar5 != 0 && iVar5 != 1849449579)
										{
											iVar0 = func_79(iParam1, iVar5, 11, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_189(iParam1, iParam3, 10, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 11, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar32 = func_57(iParam0, 11);
				if (iVar32 >= 237)
				{
					iVar14 = func_189(iParam1, iVar32, 11, 3);
					if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 1847239679, 0) && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
					{
						iVar14 = func_189(iParam1, iParam3, 11, 3);
						if (iVar14 != 4294967295)
						{
							iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 7)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_79(iParam1, iVar5, 7, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_189(iParam1, iParam3, 14, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 7, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_189(iParam1, iParam3, 11, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 4, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_189(iParam1, iParam3, 11, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 10, 3);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 4, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_189(iParam1, iParam3, 11, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_189(iParam1, iParam3, 14, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 6, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = func_189(iParam1, iParam3, 1, 3);
					if (iVar14 != 4294967295)
					{
						iVar8 = unk_0xB46507D36092CDFB(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILE::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_189(iParam1, iParam3, 11, 3);
					if (iVar14 != 4294967295)
					{
						iVar8 = unk_0xB46507D36092CDFB(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILE::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 6, 3);
					if (iVar14 != 4294967295)
					{
						iVar8 = unk_0xB46507D36092CDFB(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILE::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 11, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_189(iParam1, iParam3, 10, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 11, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar33 = 4294967295;
				if (iParam3 >= 55)
				{
					iVar33 = func_189(iParam1, iParam3, 7, 4);
				}
				if ((iVar33 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar33, 3374433204, 0)) || (iVar33 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar33, 1537081084, 0)))
				{
					iVar14 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					bVar34 = false;
					if (FILE::_0x341DE7ED1D2A1BFD(iVar33, 3916060468, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar33, 4186639197, 0))
					{
						if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 2380584066, 0))
						{
							bVar34 = true;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
					{
						bVar34 = true;
					}
					if (bVar34)
					{
						iVar12 = FILE::_0xC17AD0E5752BECDA(iVar14);
						iVar13 = 0;
						while (iVar13 < iVar12)
						{
							FILE::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
								}
								iVar13 = iVar12 + 1;
							}
							iVar13++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_189(iParam1, iParam3, 10, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 6, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 4, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 11, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 11, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 4, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 11, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 10, 4);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_189(iParam1, iParam3, 10, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 11, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_189(iParam1, iParam3, 14, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 7, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_189(iParam1, iParam3, 14, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 6, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = func_189(iParam1, iParam3, 1, 4);
					if (iVar14 != 4294967295)
					{
						iVar8 = unk_0xB46507D36092CDFB(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILE::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 11, 4);
					if (iVar14 != 4294967295)
					{
						iVar8 = unk_0xB46507D36092CDFB(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILE::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_189(iParam1, iParam3, 6, 4);
					if (iVar14 != 4294967295)
					{
						iVar8 = unk_0xB46507D36092CDFB(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILE::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_79(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_196(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x344B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	
	*iParam4 = 4294967197;
	switch (iParam1)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_80(iParam1, 1))
					{
						func_218(iParam1, 1, iParam3, 4294967295);
						if (Global_280005 == 2543240862)
						{
							*iParam4 = 0;
						}
					}
					iVar0 = func_57(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = func_189(iParam1, iVar0, 1, 3);
						if (FILE::_0x341DE7ED1D2A1BFD(iVar1, 3106812971, 0))
						{
							iVar1 = func_189(iParam1, iParam3, 1, 3);
							if (iVar1 != 4294967295)
							{
								iVar2 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									FILE::_0x017568A8182D98A6(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != 1849449579)
										{
											*iParam4 = func_79(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_80(iParam1, 1))
					{
						func_218(iParam1, 1, iParam3, 4294967295);
						if (Global_280005 == 2543240862)
						{
							*iParam4 = 0;
						}
					}
					iVar7 = func_57(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = func_189(iParam1, iVar7, 1, 4);
						if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 3106812971, 0))
						{
							iVar8 = func_189(iParam1, iParam3, 1, 4);
							if (iVar8 != 4294967295)
							{
								iVar9 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									FILE::_0x017568A8182D98A6(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != 1849449579)
										{
											*iParam4 = func_79(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != 4294967197)
	{
		func_263(753, iParam3, Global_11566, 1, 0);
		func_263(754, iParam2, Global_11566, 1, 0);
		return 1;
	}
	return 0;
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x34783
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_264(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (func_184(iVar0, iParam2, 4294967295))
				{
					iParam1 = 8;
					iParam2 = func_57(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = func_57(iParam0, 11);
				if (!func_184(iVar0, iVar1, 4294967295))
				{
					return;
				}
			}
			func_175(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!func_177(iVar0, iParam2, 13) && !func_177(iVar0, iParam2, 14)) && !func_177(iVar0, iParam2, 15)) && !func_177(iVar0, iParam2, 16)) && !func_177(iVar0, iParam2, 71)) && !func_177(iVar0, iParam2, 72))
				{
					func_175(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = func_172(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != 4294967295)
			{
				if (iParam3 == 1)
				{
					func_198(iParam0, iVar2, 0);
				}
				else
				{
					func_199(iVar2, 1, Global_11566);
				}
			}
		}
	}
}

void func_198(int iParam0, int iParam1, int iParam2)//Position - 0x348B3
{
	int iVar0;
	struct<6> Var1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != 4294967295)
		{
			iVar0 = func_173(iParam0);
			if (!func_158(iParam1, 4294967295) || iParam2)
			{
				if (func_151(&Var1, iParam1, iVar0, iParam0, 4294967295))
				{
					PED::_SET_PED_DECORATION(iParam0, Var1.f_4, Var1.f_5);
					func_133(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

void func_199(int iParam0, bool bParam1, int iParam2)//Position - 0x34912
{
	if (bParam1)
	{
		if (!func_158(iParam0, iParam2))
		{
			func_200(iParam0, 1, iParam2);
		}
	}
	else if (func_158(iParam0, iParam2))
	{
		func_200(iParam0, 0, iParam2);
	}
}

void func_200(int iParam0, bool bParam1, int iParam2)//Position - 0x3494B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_159(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > 4294967295)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_138(iVar1));
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, func_138(iVar1));
		}
		if (!func_201())
		{
			func_263(func_160(iParam0), iVar0, iParam2, 1, 0);
		}
	}
}

bool func_201()//Position - 0x349A2
{
	return Global_140842;
}

int func_202()//Position - 0x349AE
{
	int iVar0;
	
	iVar0 = Global_11566;
	if (func_158(13, iVar0))
	{
		return 13;
	}
	if (func_158(14, iVar0))
	{
		return 14;
	}
	if (func_158(15, iVar0))
	{
		return 15;
	}
	if (func_158(16, iVar0))
	{
		return 16;
	}
	if (func_158(71, iVar0))
	{
		return 71;
	}
	if (func_158(72, iVar0))
	{
		return 72;
	}
	return 4294967295;
}

int func_203(int iParam0, int iParam1, int iParam2)//Position - 0x34A1D
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_102(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_102(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == 4294967295)
			{
			}
			else
			{
				return func_204(iParam0, iParam2);
			}
		}
		else
		{
			return func_57(iParam0, iParam1);
		}
	}
	return 4294967197;
}

int func_204(int iParam0, int iParam1)//Position - 0x34ABE
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 4294967197;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
	if (iVar0 == 4294967295)
	{
		return func_82(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_77(iParam0, iVar0, iVar1, iParam1);
}

void func_205(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x34B04
{
	int iVar0;
	
	if (iParam2 == 4294967295)
	{
		PED::CLEAR_PED_PROP(iParam0, iParam1);
		if (iParam1 == 0)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
		}
	}
	else
	{
		PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
		if (iParam1 == 0)
		{
			iVar0 = func_77(iParam0, iParam2, iParam3, iParam1);
			if (func_194(ENTITY::GET_ENTITY_MODEL(iParam0), 14, iVar0, FILE::GET_HASH_NAME_FOR_PROP(iParam0, 0, iParam2, iParam3)))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 34, true);
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
			}
		}
	}
}

struct<10> func_206(int iParam0, int iParam1)//Position - 0x34B9C
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = 4294967197;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_208(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_208(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_208(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_208(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_208(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_208(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_208(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_208(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_208(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_208(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_208(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_207(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_208(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_208(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_208(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_208(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_208(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_208(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_208(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_208(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_208(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_208(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_207(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_208(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_208(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_208(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_208(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_208(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_208(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_208(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_208(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_208(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_208(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_207(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_208(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_208(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_208(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_208(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_208(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_208(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_208(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_208(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_208(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_208(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_208(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_208(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_208(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_208(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_208(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_208(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_208(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_208(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_208(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_208(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_208(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_208(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_208(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_208(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_208(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_208(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_207(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_208(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_208(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_208(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_208(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_208(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_208(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_208(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_208(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_208(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_208(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_208(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_208(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_208(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_208(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_208(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_208(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_208(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_208(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_208(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_208(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_208(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_208(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_208(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_208(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_208(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_207(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_207(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x354CB
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != 4294967197)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		FILE::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILE::_IS_DLC_DATA_EMPTY(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (FILE::_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar3, &vVar2) && vVar2.z != 4294967295)
				{
					if ((vVar2.x != 0 && vVar2.x != 4294967295) && vVar2.x != 1849449579)
					{
						(*iParam0)[vVar2.z] = func_79(iParam1, vVar2.x, 14, iVar0);
					}
					else if (vVar2.y != 4294967295)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x355F5
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_209(int iParam0, int iParam1)//Position - 0x3563D
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = 4294967197;
		iVar0++;
	}
	Var1.f_10 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_19E56.f_2361.f_63.f_3A[120])
					{
						func_211(&Var1, 4294967197, 4294967197, 1, 1, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					}
					else
					{
						func_211(&Var1, 4294967197, 4294967197, 0, 0, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					}
					break;
				
				case 1:
					func_211(&Var1, 4294967197, 4294967197, 16, 16, 6, 1, 1, 0, 1, 4294967197, 0, 0, 0);
					break;
				
				case 2:
					func_211(&Var1, 4294967197, 4294967197, 36, 21, 6, 1, 5, 0, 0, 4294967197, 0, 0, 8);
					break;
				
				case 3:
					func_211(&Var1, 4294967197, 4294967197, 65, 36, 6, 0, 2, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 4:
					func_211(&Var1, 4294967197, 4294967197, 61, 32, 6, 0, 0, 7, 3, 4294967197, 0, 0, 2);
					break;
				
				case 5:
					func_211(&Var1, 4294967197, 4294967197, Global_19E56.f_933.f_21B.f_C4[0], Global_19E56.f_933.f_21B.f_C8[0], 6, 3, 0, 0, 0, 4294967197, 0, 0, 3);
					break;
				
				case 6:
					func_211(&Var1, 4294967197, 4294967197, 92, 72, 7, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 7:
					func_211(&Var1, 4294967197, 4294967197, 85, 95, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 8:
					func_211(&Var1, 4294967197, 4294967197, 170, 80, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 9:
					func_211(&Var1, 4294967197, 4294967197, 171, 89, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 10:
					func_211(&Var1, 4294967197, 4294967197, 33, 18, 8, 10, 3, 8, 0, 4294967197, 0, 0, 4);
					break;
				
				case 11:
					func_211(&Var1, 4294967197, 4294967197, 33, 18, 17, 10, 4, 8, 0, 4294967197, 0, 0, 5);
					break;
				
				case 12:
					func_211(&Var1, 4294967197, 4294967197, 35, 20, 9, 10, 23, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 13:
					func_211(&Var1, 4294967197, 4294967197, 69, 40, 13, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 14:
					func_211(&Var1, 4294967197, 4294967197, 62, 33, 38, 0, 8, 0, 0, 4294967197, 0, 0, 6);
					break;
				
				case 15:
					func_211(&Var1, 4294967197, 4294967197, 63, 34, 6, 10, 0, 0, 4, 4294967197, 0, 0, 31);
					break;
				
				case 16:
					func_211(&Var1, 4294967197, 4294967197, 174, 93, 18, 0, 18, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 17:
					func_211(&Var1, 4294967197, 4294967197, 76, 46, 6, 10, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 18:
					func_211(&Var1, 4294967197, 4294967197, 35, 20, 9, 10, 0, 4, 0, 4294967197, 0, 0, 7);
					break;
				
				case 19:
					func_211(&Var1, 4294967197, 4294967197, 64, 35, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 20:
					func_211(&Var1, 4294967197, 4294967197, 66, 37, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 21:
					func_211(&Var1, 4294967197, 4294967197, 67, 38, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 22:
					func_211(&Var1, 4294967197, 4294967197, 68, 39, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 23:
					func_211(&Var1, 4294967197, 4294967197, 177, 94, 19, 9, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 24:
					func_211(&Var1, 4294967197, 4294967197, 35, 20, 9, 10, 4, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 25:
					func_211(&Var1, 4294967197, 4294967197, 97, 81, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 26:
					func_211(&Var1, 4294967197, 4294967197, 3, 3, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 27:
					func_211(&Var1, 4294967197, 4294967197, 129, 81, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 28:
					func_211(&Var1, 4294967197, 4294967197, 170, 80, 6, 0, 13, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 29:
					func_211(&Var1, 4294967197, 4294967197, 2, 2, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 30:
					func_211(&Var1, 4294967197, 4294967197, 161, 3, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 31:
					func_211(&Var1, 4294967197, 4294967197, 3, 3, 0, 12, 0, 0, 0, 4294967197, 0, 1, 31);
					break;
				
				case 32:
					func_211(&Var1, 4294967197, 4294967197, 85, 55, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 33:
					func_211(&Var1, 4294967197, 4294967197, 86, 4, 20, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 34:
					func_211(&Var1, 4294967197, 4294967197, 44, 97, 6, 0, 0, 0, 0, 4294967197, 0, 2, 31);
					break;
				
				case 35:
					func_211(&Var1, 4294967197, 4294967197, 85, 81, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 36:
					func_211(&Var1, 4294967197, 4294967197, 4, 4, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 37:
					func_211(&Var1, 4294967197, 4294967197, 5, 5, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 38:
					func_211(&Var1, 4294967197, 4294967197, 6, 6, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 39:
					func_211(&Var1, 4294967197, 4294967197, 7, 7, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 40:
					func_211(&Var1, 4294967197, 4294967197, 8, 8, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 41:
					func_211(&Var1, 4294967197, 4294967197, 9, 9, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 42:
					func_211(&Var1, 4294967197, 4294967197, 10, 10, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 43:
					func_211(&Var1, 4294967197, 4294967197, 11, 11, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 44:
					func_211(&Var1, 4294967197, 4294967197, 12, 12, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 45:
					func_211(&Var1, 4294967197, 4294967197, 13, 13, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 46:
					func_211(&Var1, 4294967197, 4294967197, 14, 14, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 47:
					func_211(&Var1, 4294967197, 4294967197, 15, 15, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 48:
					func_211(&Var1, 4294967197, 4294967197, 91, 71, 14, 13, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 49:
					func_211(&Var1, 4294967197, 4294967197, 35, 20, 9, 10, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 50:
					func_211(&Var1, 4294967197, 4294967197, 33, 18, 8, 10, 3, 8, 0, 4294967197, 0, 0, 9);
					break;
				
				case 51:
					func_211(&Var1, 4294967197, 4294967197, 169, 95, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 52:
					func_211(&Var1, 4294967197, 4294967197, 169, 72, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				default:
					func_210(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_211(&Var1, 4294967197, 4294967197, 73, 24, 18, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 1:
					func_211(&Var1, 4294967197, 4294967197, 22, 10, 64, 0, 24, 0, 0, 4294967197, 0, 43, 31);
					break;
				
				case 2:
					func_211(&Var1, 4294967197, 4294967197, Global_19E56.f_933.f_21B.f_C4[1], Global_19E56.f_933.f_21B.f_C8[1], 17, 2, 26, 0, 0, 4294967197, 0, 45, 31);
					break;
				
				case 3:
					func_211(&Var1, 4294967197, 4294967197, 23, 11, 13, 5, 2, 4, 0, 4294967197, 0, 0, 1);
					break;
				
				case 4:
					func_211(&Var1, 4294967197, 4294967197, 23, 11, 34, 5, 26, 0, 0, 4294967197, 0, 0, 2);
					break;
				
				case 5:
					func_211(&Var1, 4294967197, 20, 159, 69, 17, 5, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 6:
					func_211(&Var1, 4294967197, 4294967197, 40, 13, 14, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 7:
					func_211(&Var1, 4294967197, 4294967197, 90, 32, 17, 1, 8, 0, 1, 4294967197, 0, 0, 3);
					break;
				
				case 8:
					func_211(&Var1, 4294967197, 4294967197, 17, 5, 12, 0, 26, 0, 2, 4294967197, 0, 0, 5);
					break;
				
				case 9:
					func_211(&Var1, 4294967197, 4294967197, 16, 4, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 10:
					func_211(&Var1, 4294967197, 4294967197, 208, 71, 17, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 11:
					func_211(&Var1, 4294967197, 4294967197, 259, 10, 35, 0, 24, 0, 0, 4294967197, 0, 43, 31);
					break;
				
				case 12:
					func_211(&Var1, 4294967197, 4294967197, 18, 6, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 13:
					func_211(&Var1, 4294967197, 4294967197, 19, 7, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 14:
					func_211(&Var1, 4294967197, 4294967197, 20, 8, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 15:
					func_211(&Var1, 4294967197, 4294967197, 21, 9, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 16:
					func_211(&Var1, 4294967197, 4294967197, 135, 40, 0, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 17:
					func_211(&Var1, 4294967197, 4294967197, 74, 24, 52, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 18:
					func_211(&Var1, 4294967197, 4294967197, 176, 53, 26, 5, 26, 0, 0, 4294967197, 0, 41, 31);
					break;
				
				case 19:
					func_211(&Var1, 4294967197, 4294967197, 125, 24, 18, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 20:
					func_211(&Var1, 4294967197, 4294967197, 162, 24, 36, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 21:
					func_211(&Var1, 4294967197, 4294967197, 75, 24, 36, 0, 26, 0, 0, 4294967197, 0, 0, 4);
					break;
				
				case 22:
					func_211(&Var1, 4294967197, 4294967197, 227, 53, 25, 0, 27, 0, 0, 4294967197, 0, 25, 31);
					break;
				
				case 23:
					func_211(&Var1, 4294967197, 4294967197, 228, 54, 25, 0, 28, 0, 0, 4294967197, 0, 26, 31);
					break;
				
				case 24:
					func_211(&Var1, 4294967197, 4294967197, 229, 55, 25, 0, 29, 0, 0, 4294967197, 0, 27, 31);
					break;
				
				case 25:
					func_211(&Var1, 4294967197, 4294967197, 230, 56, 25, 0, 30, 0, 0, 4294967197, 0, 28, 31);
					break;
				
				case 26:
					func_211(&Var1, 4294967197, 4294967197, 231, 57, 25, 0, 31, 0, 0, 4294967197, 0, 29, 31);
					break;
				
				case 27:
					func_211(&Var1, 4294967197, 4294967197, 232, 58, 25, 0, 32, 0, 0, 4294967197, 0, 30, 31);
					break;
				
				case 28:
					func_211(&Var1, 4294967197, 4294967197, 233, 59, 25, 0, 33, 0, 0, 4294967197, 0, 31, 31);
					break;
				
				case 29:
					func_211(&Var1, 4294967197, 4294967197, 234, 60, 25, 0, 34, 0, 0, 4294967197, 0, 32, 31);
					break;
				
				case 30:
					func_211(&Var1, 4294967197, 4294967197, 235, 61, 25, 0, 35, 0, 0, 4294967197, 0, 33, 31);
					break;
				
				case 31:
					func_211(&Var1, 4294967197, 4294967197, 236, 62, 25, 0, 36, 0, 0, 4294967197, 0, 34, 31);
					break;
				
				case 32:
					func_211(&Var1, 4294967197, 4294967197, 237, 63, 25, 0, 37, 0, 0, 4294967197, 0, 35, 31);
					break;
				
				case 33:
					func_211(&Var1, 4294967197, 4294967197, 238, 64, 25, 0, 38, 0, 0, 4294967197, 0, 36, 31);
					break;
				
				case 34:
					func_211(&Var1, 4294967197, 4294967197, 239, 65, 25, 0, 39, 0, 0, 4294967197, 0, 37, 31);
					break;
				
				case 35:
					func_211(&Var1, 4294967197, 4294967197, 240, 66, 25, 0, 40, 0, 0, 4294967197, 0, 38, 31);
					break;
				
				case 36:
					func_211(&Var1, 4294967197, 4294967197, 241, 67, 25, 0, 41, 0, 0, 4294967197, 0, 39, 31);
					break;
				
				case 37:
					func_211(&Var1, 4294967197, 4294967197, 242, 68, 25, 0, 42, 0, 0, 4294967197, 0, 40, 31);
					break;
				
				case 38:
					func_211(&Var1, 4294967197, 4294967197, 260, 72, 17, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 39:
					func_211(&Var1, 4294967197, 4294967197, 125, 24, 0, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 40:
					func_211(&Var1, 4294967197, 4294967197, 123, 24, 0, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 41:
					func_211(&Var1, 4294967197, 4294967197, 159, 69, 17, 5, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 42:
					func_211(&Var1, 4294967197, 4294967197, 89, 22, 15, 6, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 43:
					func_211(&Var1, 4294967197, 4294967197, 317, 69, 17, 0, 0, 0, 51, 4294967197, 0, 0, 6);
					break;
				
				case 44:
					func_211(&Var1, 4294967197, 4294967197, 30, 23, 16, 0, 0, 0, 0, 4294967197, 0, 0, 7);
					break;
				
				case 45:
					func_211(&Var1, 4294967197, 4294967197, 106, 70, 17, 5, 26, 0, 0, 4294967197, 0, 0, 8);
					break;
				
				case 46:
					func_211(&Var1, 4294967197, 4294967197, 117, 24, 20, 5, 26, 0, 52, 4294967197, 0, 0, 31);
					break;
				
				default:
					func_210(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_211(&Var1, 4294967197, 4294967197, 0, 91, 28, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 1:
					func_211(&Var1, 4294967197, 4294967197, 17, 5, 8, 2, 3, 0, 0, 4294967197, 0, 0, 8);
					break;
				
				case 2:
					func_211(&Var1, 4294967197, 4294967197, 43, 8, 12, 3, 5, 0, 0, 4294967197, 0, 0, 1);
					break;
				
				case 3:
					func_211(&Var1, 4294967197, 4294967197, 50, 14, 8, 0, 15, 6, 3, 4294967197, 0, 0, 2);
					break;
				
				case 4:
					func_211(&Var1, 4294967197, 4294967197, Global_19E56.f_933.f_21B.f_C4[2], Global_19E56.f_933.f_21B.f_C8[2], 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 5:
					func_211(&Var1, 4294967197, 4294967197, 95, 33, 8, 0, 15, 0, 0, 4294967197, 0, 0, 6);
					break;
				
				case 6:
					func_211(&Var1, 4294967197, 4294967197, 49, 13, 10, 4, 6, 0, 0, 4294967197, 0, 0, 3);
					break;
				
				case 7:
					func_211(&Var1, 4294967197, 4294967197, 49, 13, 14, 4, 15, 0, 0, 4294967197, 0, 0, 4);
					break;
				
				case 8:
					func_211(&Var1, 4294967197, 4294967197, 79, 32, 8, 5, 7, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 9:
					func_211(&Var1, 4294967197, 4294967197, 53, 17, 11, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 10:
					func_211(&Var1, 4294967197, 4294967197, 96, 81, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 11:
					func_211(&Var1, 4294967197, 4294967197, 51, 15, 33, 0, 8, 0, 0, 4294967197, 0, 0, 5);
					break;
				
				case 12:
					func_211(&Var1, 4294967197, 4294967197, 0, 93, 29, 0, 13, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 13:
					func_211(&Var1, 4294967197, 4294967197, 52, 16, 30, 5, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 14:
					func_211(&Var1, 4294967197, 4294967197, 241, 92, 16, 0, 12, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 15:
					func_211(&Var1, 4294967197, 4294967197, 97, 34, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 16:
					func_211(&Var1, 4294967197, 4294967197, 44, 9, 12, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 17:
					func_211(&Var1, 4294967197, 4294967197, 45, 10, 12, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 18:
					func_211(&Var1, 4294967197, 4294967197, 46, 11, 12, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 19:
					func_211(&Var1, 4294967197, 4294967197, 47, 12, 12, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 20:
					func_211(&Var1, 4294967197, 4294967197, 161, 53, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 21:
					func_211(&Var1, 4294967197, 4294967197, 0, 44, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 22:
					func_211(&Var1, 4294967197, 4294967197, 98, 0, 28, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 23:
					func_211(&Var1, 4294967197, 4294967197, 27, 0, 31, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 24:
					func_211(&Var1, 4294967197, 4294967197, 190, 71, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 25:
					func_211(&Var1, 4294967197, 4294967197, 191, 72, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 26:
					func_211(&Var1, 4294967197, 4294967197, 192, 73, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 27:
					func_211(&Var1, 4294967197, 4294967197, 193, 74, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 28:
					func_211(&Var1, 4294967197, 4294967197, 194, 75, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 29:
					func_211(&Var1, 4294967197, 4294967197, 195, 76, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 30:
					func_211(&Var1, 4294967197, 4294967197, 196, 77, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 31:
					func_211(&Var1, 4294967197, 4294967197, 197, 78, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 32:
					func_211(&Var1, 4294967197, 4294967197, 198, 79, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 33:
					func_211(&Var1, 4294967197, 4294967197, 199, 80, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 34:
					func_211(&Var1, 4294967197, 4294967197, 200, 62, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 35:
					func_211(&Var1, 4294967197, 4294967197, 201, 63, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 36:
					func_211(&Var1, 4294967197, 4294967197, 202, 64, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 37:
					func_211(&Var1, 4294967197, 4294967197, 203, 65, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 38:
					func_211(&Var1, 4294967197, 4294967197, 204, 66, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 39:
					func_211(&Var1, 4294967197, 4294967197, 205, 67, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 40:
					func_211(&Var1, 4294967197, 4294967197, 206, 68, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 41:
					func_211(&Var1, 4294967197, 4294967197, 2, 43, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 42:
					func_211(&Var1, 4294967197, 4294967197, 55, 0, 28, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 43:
					func_211(&Var1, 4294967197, 4294967197, 0, 52, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 44:
					func_211(&Var1, 4294967197, 4294967197, 70, 30, 32, 6, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 45:
					func_211(&Var1, 4294967197, 4294967197, 19, 91, 28, 0, 0, 0, 0, 4294967197, 0, 0, 7);
					break;
				
				case 46:
					func_211(&Var1, 4294967197, 4294967197, 0, 0, 28, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 47:
					func_211(&Var1, 4294967197, 4294967197, 79, 32, 8, 5, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				default:
					func_210(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_211(&Var1, 4294967197, 4294967197, 0, 0, 10, 4294967197, 0, 4294967197, 4294967197, 0, 0, 0, 31);
					break;
				
				case 1:
					func_211(&Var1, 4294967197, 4294967197, 1, 127, 38, 4294967197, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_211(&Var1, 4294967197, 4294967197, 0, 248, 45, 4294967197, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_211(&Var1, 4294967197, 4294967197, 4, 31, 25, 4294967197, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_211(&Var1, 4294967197, 4294967197, 1, 66, 10, 4294967197, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_211(&Var1, 4294967197, 4294967197, 1, 93, 141, 4294967197, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_211(&Var1, 4294967197, 4294967197, 1, 116, 113, 4294967197, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_211(&Var1, 4294967197, 4294967197, 1, 61, 136, 4294967197, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_211(&Var1, 4294967197, 4294967197, 0, 112, 10, 4294967197, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_211(&Var1, 4294967197, 4294967197, 4, 131, 24, 4294967197, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_211(&Var1, 4294967197, 4294967197, 1, 209, 188, 4294967197, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_211(&Var1, 4294967197, 4294967197, 1, 209, 160, 4294967197, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_211(&Var1, 4294967197, 4294967197, 1, 162, 174, 4294967197, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_211(&Var1, 4294967197, 4294967197, 1, 4, 240, 4294967197, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_211(&Var1, 4294967197, 4294967197, 1, 128, 232, 4294967197, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_211(&Var1, 4294967197, 4294967197, 1, 66, 65, 4294967197, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_211(&Var1, 4294967197, 4294967197, 1, 65, 172, 4294967197, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_211(&Var1, 4294967197, 4294967197, 1, 64, 10, 4294967197, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_211(&Var1, 4294967197, 4294967197, 5, 98, 80, 4294967197, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_211(&Var1, 4294967197, 4294967197, 5, 192, 96, 4294967197, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_211(&Var1, 4294967197, 4294967197, 1, 124, 96, 4294967197, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_211(&Var1, 4294967197, 4294967197, 0, 80, 114, 4294967197, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_211(&Var1, 4294967197, 4294967197, 6, 43, 112, 4294967197, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_211(&Var1, 4294967197, 4294967197, 1, 116, 144, 4294967197, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_211(&Var1, 4294967197, 4294967197, 1, 63, 38, 4294967197, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_211(&Var1, 4294967197, 4294967197, 2, 64, 10, 4294967197, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_210(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_211(&Var1, 4294967197, 4294967197, 0, 0, 0, 4294967197, 0, 4294967197, 4294967197, 0, 4294967197, 0, 31);
					break;
				
				case 1:
					func_211(&Var1, 4294967197, 4294967197, 5, 136, 241, 4294967197, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_211(&Var1, 4294967197, 4294967197, 4, 1, 96, 4294967197, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_211(&Var1, 4294967197, 4294967197, 1, 73, 241, 4294967197, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_211(&Var1, 4294967197, 4294967197, 2, 88, 217, 4294967197, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_211(&Var1, 4294967197, 4294967197, 9, 7, 98, 4294967197, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_211(&Var1, 4294967197, 4294967197, 1, 140, 241, 4294967197, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_211(&Var1, 4294967197, 4294967197, 4, 139, 112, 4294967197, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_211(&Var1, 4294967197, 4294967197, 1, 193, 48, 4294967197, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_211(&Var1, 4294967197, 4294967197, 5, 114, 97, 4294967197, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_211(&Var1, 4294967197, 4294967197, 9, 134, 239, 4294967197, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_211(&Var1, 4294967197, 4294967197, 5, 152, 96, 4294967197, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_211(&Var1, 4294967197, 4294967197, 6, 129, 1, 4294967197, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_211(&Var1, 4294967197, 4294967197, 5, 0, 0, 4294967197, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_211(&Var1, 4294967197, 4294967197, 4, 159, 96, 4294967197, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_211(&Var1, 4294967197, 4294967197, 9, 232, 213, 4294967197, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_211(&Var1, 4294967197, 4294967197, 2, 8, 98, 4294967197, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_211(&Var1, 4294967197, 4294967197, 5, 150, 235, 4294967197, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_211(&Var1, 4294967197, 4294967197, 6, 96, 97, 4294967197, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_211(&Var1, 4294967197, 4294967197, 4, 48, 64, 4294967197, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_211(&Var1, 4294967197, 4294967197, 4, 62, 64, 4294967197, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_211(&Var1, 4294967197, 4294967197, 4, 49, 65, 4294967197, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_211(&Var1, 4294967197, 4294967197, 3, 20, 16, 4294967197, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_211(&Var1, 4294967197, 4294967197, 0, 73, 178, 4294967197, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_211(&Var1, 4294967197, 4294967197, 5, 135, 53, 4294967197, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_211(&Var1, 4294967197, 4294967197, 7, 233, 176, 4294967197, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_211(&Var1, 4294967197, 4294967197, 4, 34, 179, 4294967197, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_211(&Var1, 4294967197, 4294967197, 15, 131, 93, 4294967197, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_210(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_210(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37485
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = 4294967197;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = 4294967197;
	(*uParam0)[14] = 4294967197;
	uParam0->f_10 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	FILE::_0xF3FBE2D50A6A8C28(iVar0, 0);
	FILE::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILE::_IS_DLC_DATA_EMPTY(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (FILE::_GET_PROP_FROM_OUTFIT(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0 && vVar2.x != 4294967295) && vVar2.x != 1849449579)
				{
					if (vVar2.z == 10)
					{
						FILE::INIT_SHOP_PED_COMPONENT(&Var3);
						FILE::GET_SHOP_PED_COMPONENT(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_10 = 1;
						}
					}
					if (vVar2.z == 10 && uParam0->f_10)
					{
						(*uParam0)[func_60(vVar2.z)] = vVar2.x;
						uParam0->f_10 = 1;
					}
					else
					{
						(*uParam0)[func_60(vVar2.z)] = func_79(iParam1, vVar2.x, func_60(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != 4294967295)
				{
					(*uParam0)[func_60(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = 4294967197;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

void func_211(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x3766F
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = 4294967197;
}

void func_212(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x376E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10[2];
	struct<2> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<2> Var16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_11566 != func_64() || iParam2 == 4294967197)
		{
			return;
		}
		Global_11569[2 /*14*/] = { func_218(iParam0, iParam1, iParam2, 4294967295) };
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[2 /*14*/].f_6, 1) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				func_215(Global_280004, 2, 1, 1, 4294967295);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				func_215(Global_280004, 2, 1, 1, 4294967295);
			}
			else
			{
				func_215(Global_280004, 2, 1, 1, 4294967295);
			}
			if (bParam3)
			{
				iVar0 = FILE::_0xC17AD0E5752BECDA(Global_280004);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4116ED)
					{
						Global_4116ED[iVar5] = 4294967295;
						Global_4116F8[iVar5] = 4294967295;
					}
					FILE::GET_VARIANT_COMPONENT(Global_280004, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3071453855, 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != 1849449579)
						{
							func_215(iVar2, 2, 1, 1, 4294967295);
							if (iVar5 < Global_4116ED)
							{
								Global_4116ED[iVar5] = iVar2;
								Global_4116F8[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_212(iParam0, func_60(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4116EC++;
				if (Global_4116EC < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4116ED)
						{
							if (Global_4116ED[iVar1] != 4294967295)
							{
								if (iParam0 == joaat("mp_m_freemode_01"))
								{
									func_212(iParam0, func_60(Global_4116F8[iVar1]), func_79(iParam0, Global_4116ED[iVar1], func_60(Global_4116F8[iVar1]), 3), 1);
								}
								else
								{
									func_212(iParam0, func_60(Global_4116F8[iVar1]), func_79(iParam0, Global_4116ED[iVar1], func_60(Global_4116F8[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4116EC = (Global_4116EC - 1);
			}
			return;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[2 /*14*/].f_6, 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[2 /*14*/].f_6, 6))
		{
			if (func_214(iParam1, Global_11569[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = func_69(iVar6, Global_11566, 0);
				MISC::SET_BIT(&iVar7, Global_11569[2 /*14*/].f_1);
				func_263(iVar6, iVar7, Global_11566, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									iVar10[0] = 691352495;
									iVar10[1] = 691352495;
									break;
								
								case 221:
									iVar10[0] = 451909412;
									iVar10[1] = 451909412;
									break;
								
								case 222:
									iVar10[0] = 4088416422;
									iVar10[1] = 4088416422;
									break;
								
								case 223:
									iVar10[0] = 3849169953;
									iVar10[1] = 3849169953;
									break;
								
								case 224:
									iVar10[0] = 4121250964;
									iVar10[1] = 4121250964;
									break;
								
								case 225:
									iVar10[0] = 3756663070;
									iVar10[1] = 3756663070;
									break;
								
								case 226:
									iVar10[0] = 3702725296;
									iVar10[1] = 3702725296;
									break;
								
								case 227:
									iVar10[0] = 3463872055;
									iVar10[1] = 3463872055;
									break;
								
								case 228:
									iVar10[0] = 3202866970;
									iVar10[1] = 3202866970;
									break;
								
								case 229:
									iVar10[0] = 2828972680;
									iVar10[1] = 2828972680;
									break;
								
								case 230:
									iVar10[0] = 507503642;
									iVar10[1] = 507503642;
									break;
								
								case 231:
									iVar10[0] = 2902884777;
									iVar10[1] = 2902884777;
									break;
								
								case 232:
									iVar10[0] = 4206107907;
									iVar10[1] = 4206107907;
									break;
								
								case 233:
									iVar10[0] = 157858412;
									iVar10[1] = 157858412;
									break;
								
								case 234:
									iVar10[0] = 3781814895;
									iVar10[1] = 3781814895;
									break;
								
								case 235:
									iVar10[0] = 2004948615;
									iVar10[1] = 2004948615;
									break;
							}
							FILE::INIT_SHOP_PED_COMPONENT(&Var11);
							iVar14 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, 4294967295, 0, 4294967295, 8);
							iVar12 = 0;
							while (iVar12 < iVar14)
							{
								FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar12, &Var11);
								if (!FILE::_IS_DLC_DATA_EMPTY(Var11))
								{
									if (Var11.f_1 == iVar10[0] || Var11.f_1 == iVar10[1])
									{
										func_212(iParam0, 8, (241 + iVar13), 0);
										iVar12 = iVar14 + 1;
									}
									iVar13++;
								}
								iVar12++;
							}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_11569[2 /*14*/].f_4)
							{
								case 0:
									func_212(iParam0, 7, func_79(iParam0, 2401208626, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 221276858, 7, 3), 0);
									break;
								
								case 1:
									func_212(iParam0, 7, func_79(iParam0, 2698914991, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 576886046, 7, 3), 0);
									break;
								
								case 2:
									func_212(iParam0, 7, func_79(iParam0, 1233059274, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 3901989249, 7, 3), 0);
									break;
								
								case 3:
									func_212(iParam0, 7, func_79(iParam0, 232228476, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 4261203027, 7, 3), 0);
									break;
								
								case 4:
									func_212(iParam0, 7, func_79(iParam0, 3840521377, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 1510704243, 7, 3), 0);
									break;
								
								case 5:
									func_212(iParam0, 7, func_79(iParam0, 925653285, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 1800939276, 7, 3), 0);
									break;
								
								case 6:
									func_212(iParam0, 7, func_79(iParam0, 2190110692, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 833565623, 7, 3), 0);
									break;
								
								case 7:
									func_212(iParam0, 7, func_79(iParam0, 1657483366, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 1201823645, 7, 3), 0);
									break;
								
								case 8:
									func_212(iParam0, 7, func_79(iParam0, 501294735, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 2132496022, 7, 3), 0);
									break;
								
								case 9:
									func_212(iParam0, 7, func_79(iParam0, 1882573627, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 2355947833, 7, 3), 0);
									break;
								
								case 10:
									func_212(iParam0, 7, func_79(iParam0, 206035418, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 1713491273, 7, 3), 0);
									break;
								
								case 11:
									func_212(iParam0, 7, func_79(iParam0, 3652023462, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 4138298978, 7, 3), 0);
									break;
								
								case 12:
									func_212(iParam0, 7, func_79(iParam0, 3906671361, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 106696135, 7, 3), 0);
									break;
								
								case 13:
									func_212(iParam0, 7, func_79(iParam0, 927641567, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 3492061529, 7, 3), 0);
									break;
								
								case 14:
									func_212(iParam0, 7, func_79(iParam0, 1147226636, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 3789440204, 7, 3), 0);
									break;
								
								case 15:
									func_212(iParam0, 7, func_79(iParam0, 312665744, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 3150837964, 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_11569[2 /*14*/].f_4)
							{
								case 0:
									func_212(iParam0, 7, func_79(iParam0, 3959701217, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 3368978276, 7, 3), 0);
									break;
								
								case 1:
									func_212(iParam0, 7, func_79(iParam0, 2915418741, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 244486895, 7, 3), 0);
									break;
								
								case 2:
									func_212(iParam0, 7, func_79(iParam0, 2892808131, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 1095104597, 7, 3), 0);
									break;
								
								case 3:
									func_212(iParam0, 7, func_79(iParam0, 1357351098, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 1787874026, 7, 3), 0);
									break;
								
								case 4:
									func_212(iParam0, 7, func_79(iParam0, 3197789214, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 476163725, 7, 3), 0);
									break;
								
								case 5:
									func_212(iParam0, 7, func_79(iParam0, 4115485059, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 1223952305, 7, 3), 0);
									break;
								
								case 6:
									func_212(iParam0, 7, func_79(iParam0, 3544452465, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 2049796643, 7, 3), 0);
									break;
								
								case 7:
									func_212(iParam0, 7, func_79(iParam0, 2570393940, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 3281419512, 7, 3), 0);
									break;
								
								case 8:
									func_212(iParam0, 7, func_79(iParam0, 94106144, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 1456972664, 7, 3), 0);
									break;
								
								case 9:
									func_212(iParam0, 7, func_79(iParam0, 1070524041, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 2624204448, 7, 3), 0);
									break;
								
								case 10:
									func_212(iParam0, 7, func_79(iParam0, 2650389978, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 1428867383, 7, 3), 0);
									break;
								
								case 11:
									func_212(iParam0, 7, func_79(iParam0, 1865900118, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 2630801534, 7, 3), 0);
									break;
								
								case 12:
									func_212(iParam0, 7, func_79(iParam0, 1611776523, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 2332865786, 7, 3), 0);
									break;
								
								case 13:
									func_212(iParam0, 7, func_79(iParam0, 1381115532, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 3024455539, 7, 3), 0);
									break;
								
								case 14:
									func_212(iParam0, 7, func_79(iParam0, 1636484345, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 2723341190, 7, 3), 0);
									break;
								
								case 15:
									func_212(iParam0, 7, func_79(iParam0, 1422633851, 7, 3), 0);
									func_212(iParam0, 7, func_79(iParam0, 3596635048, 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_11569[2 /*14*/].f_4);
							func_212(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_11569[2 /*14*/] = { func_218(iParam0, iParam1, iParam2, 4294967295) };
				if (iParam1 == 11)
				{
					iVar9 = func_213(iParam0, iParam2, Global_11569[2 /*14*/].f_4);
					if (iVar9 != 4294967197)
					{
						func_212(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								iVar15 = 331193219;
								break;
							
							case 200:
								iVar15 = 1115060468;
								break;
							
							case 201:
								iVar15 = 779636984;
								break;
						}
						FILE::INIT_SHOP_PED_COMPONENT(&Var16);
						iVar19 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(4, 6, 4294967295, 0, 4294967295, 8);
						iVar17 = 0;
						while (iVar17 < iVar19)
						{
							FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar17, &Var16);
							if (!FILE::_IS_DLC_DATA_EMPTY(Var16))
							{
								if (Var16.f_1 == iVar15)
								{
									func_212(iParam0, 8, (136 + iVar18), 0);
									iVar17 = iVar19 + 1;
								}
								iVar18++;
							}
							iVar17++;
						}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = func_181(iParam0, iParam2, Global_11569[2 /*14*/].f_4);
					if (iVar9 != 4294967197)
					{
						func_212(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_213(int iParam0, int iParam1, int iParam2)//Position - 0x38611
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 4294967197;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 203)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 237)
		{
			iVar1 = func_189(iParam0, iParam1, 11, 3);
			if (iVar1 != 4294967295)
			{
				iVar2 = FILE::_0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					FILE::GET_VARIANT_COMPONENT(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 8)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_79(iParam0, iVar4, 8, 3);
						}
						else
						{
							iVar0 = iVar5;
						}
						iVar3 = iVar2 + 1;
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 87;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar7 = func_189(iParam0, iParam1, 11, 4);
			if (iVar7 != 4294967295)
			{
				iVar8 = FILE::_0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILE::GET_VARIANT_COMPONENT(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_79(iParam0, iVar10, 8, 4);
						}
						else
						{
							iVar0 = iVar11;
						}
						iVar9 = iVar8 + 1;
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != 4294967197)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

bool func_214(int iParam0, int iParam1, var uParam2)//Position - 0x38906
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

void func_215(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x38D0B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_11566;
	if (iParam4 != 4294967295)
	{
		iVar0 = iParam4;
	}
	if (func_216(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_69(iVar2, iVar0, 0);
		MISC::SET_BIT(&iVar3, iVar1);
		func_263(iVar2, iVar3, iVar0, 1, 0);
	}
}

bool func_216(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x38D55
{
	int iVar0;
	
	*uParam2 = 9954;
	if ((bParam4 && Global_4116CB) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case 3325336349:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case 3096903646:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case 2698039378:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case 3223543667:
					case 2912144512:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case 3461872604:
					case 2563613428:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case 2458813514:
					case 2334328735:
					case 4056694817:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case 2696552609:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case 4202358353:
					case 3758595224:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case 4132036079:
					case 4047388421:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case 4152249888:
					case 1665087452:
					case 3440146082:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case 2836672178:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case 2840164692:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case 3325336349:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case 3096903646:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case 2698039378:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 2499192393:
					case 3915920436:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 2343343033:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 2708717383:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 2822786272:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 3178788688:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 3266052535:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 3640471129:
					case 2305750079:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 2499192393:
					case 3915920436:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 2343343033:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 2708717383:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 2822786272:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 3178788688:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 3266052535:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 3640471129:
					case 2305750079:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = 4294967295;
	if (bParam4)
	{
		if (Global_4116CB)
		{
			iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else
		{
			iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else
	{
		iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
				
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
				
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 9954;
}

int func_217(int iParam0)//Position - 0x3A80E
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_218(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3A85F
{
	func_258();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_242(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_219(iParam1, iParam2, iParam3);
	}
	return Global_11569[0 /*14*/];
}

void func_219(int iParam0, int iParam1, int iParam2)//Position - 0x3A8A0
{
	switch (iParam0)
	{
		case 2:
			func_241(iParam1, iParam2);
			break;
		
		case 11:
			func_240(iParam1, iParam2);
			break;
		
		case 8:
			func_239(iParam1, iParam2);
			break;
		
		case 9:
			func_238(iParam1, iParam2);
			break;
		
		case 3:
			func_237(iParam1, iParam2);
			break;
		
		case 4:
			func_236(iParam1, iParam2);
			break;
		
		case 6:
			func_235(iParam1, iParam2);
			break;
		
		case 1:
			func_234(iParam1, iParam2);
			break;
		
		case 7:
			func_233(iParam1, iParam2);
			break;
		
		case 10:
			func_232(iParam1, iParam2);
			break;
		
		case 14:
			func_231(iParam1, iParam2);
			break;
		
		case 12:
			func_230(iParam1, iParam2);
			break;
		
		case 5:
			func_229(iParam1, iParam2);
			break;
		
		case 0:
			func_227(iParam1, iParam2);
			break;
		
		case 13:
			func_220(iParam1);
			break;
	}
}

void func_220(int iParam0)//Position - 0x3A9AC
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 13;
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_221(&(Global_11569[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_221(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3AB67
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_D = iParam8;
	uParam0->f_C = func_226(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (func_377(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(Global_280004, 1827025211, 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_225(Global_280004, 1, 1, 1, 4294967295))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_6), 2);
			}
			if (!func_225(Global_280004, 2, 1, 1, 4294967295))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_225(Global_280004, 1, 1, 1, 4294967295))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_6), 2);
			}
			if (!func_225(Global_280004, 2, 1, 1, 4294967295))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_225(Global_280004, 1, 1, 1, 4294967295))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_6), 2);
			}
			if (!func_225(Global_280004, 2, 1, 1, 4294967295))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_224(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_224(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_224(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_377(14))
			{
				return;
			}
			iVar0 = func_69(func_223(iParam1, uParam0->f_2), Global_11566, 0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 1);
			}
			iVar0 = func_69(func_222(iParam1, uParam0->f_2), Global_11566, 0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_214(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_69(iVar1, Global_11566, 0);
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == 4294967295)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

int func_222(int iParam0, int iParam1)//Position - 0x3AEF8
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_223(int iParam0, int iParam1)//Position - 0x3B2F3
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_224(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3B6EE
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/][iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_C[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_10[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_14[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_18[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_1C[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_2C[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_30[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_34[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_38[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_3C[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_44[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_4C[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_50[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_54[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_58[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_5C[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_6C[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_70[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_74[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_78[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_7C[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_88[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_8C[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_90[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_94[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_98[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_9C[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_A0[iParam3], iParam4);
		}
	}
	return 0;
}

int func_225(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x3C610
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_11566;
	if (iParam4 != 4294967295)
	{
		iVar0 = iParam4;
	}
	if (func_216(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_69(iVar2, iVar0, 0);
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, iVar1);
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x3C652
{
	switch (iParam0)
	{
		case 4294967295:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_227(int iParam0, int iParam1)//Position - 0x3C726
{
	int iVar0;
	
	iVar0 = 0;
	Global_11569[0 /*14*/].f_5 = 4;
	func_228(iVar0, iParam0, 0, iParam1);
}

void func_228(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3C746
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_11569[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = FILE::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			FILE::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_280004 = Var2.f_1;
					Global_280005 = Var2;
					func_221(&(Global_11569[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, 4294967295, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_221(&(Global_11569[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, 4294967295, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILE::INIT_SHOP_PED_PROP(&Var6);
		iVar9 = 0;
		iVar10 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 6, 4294967295, 1, 4294967295, 4294967295);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			FILE::GET_SHOP_PED_QUERY_PROP(iVar8, &Var6);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = 4294967295;
					}
					Global_280004 = Var6.f_1;
					Global_280005 = Var6;
					func_221(&(Global_11569[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, FILE::_0x341DE7ED1D2A1BFD(Var6.f_1, 2244334710, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		FILE::INIT_SHOP_PED_COMPONENT(&Var11);
		if (iParam3 != 4294967295 && Global_11612)
		{
			FILE::GET_SHOP_PED_COMPONENT(iParam3, &Var11);
			Global_280004 = Var11.f_1;
			Global_280005 = Var11;
			func_221(&(Global_11569[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, FILE::_0x341DE7ED1D2A1BFD(Var11.f_1, 2244334710, 0), 4294967295, 2, Var11.f_1 != 0);
			return;
		}
		iVar13 = 0;
		iVar14 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 6, 4294967295, 0, 4294967295, func_59(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar12, &Var11);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_280004 = Var11.f_1;
					Global_280005 = Var11;
					func_221(&(Global_11569[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, FILE::_0x341DE7ED1D2A1BFD(Var11.f_1, 2244334710, 0), 4294967295, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_229(int iParam0, int iParam1)//Position - 0x3CA1F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 5;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_11569[0 /*14*/].f_5 = 4;
			func_228(iVar7, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_221(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_230(int iParam0, int iParam1)//Position - 0x3CB22
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 12;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_11569[0 /*14*/].f_5 = 4;
			func_228(iVar7, iParam0, 28, iParam1);
			return;
			break;
	}
	func_221(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_231(int iParam0, int iParam1)//Position - 0x3CE01
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 400;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 375;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 325;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 255;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 360;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 3970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1355;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 515;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 545;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 1440;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 50;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 575;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 605;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 285;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 2125;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 295;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 855;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1615;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 1130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 390;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 970;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1125;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 740;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 805;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 6250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 3585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 4075;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 4935;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 5600;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 4790;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 2245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 1205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 2215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 2835;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 2450;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 2515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 2820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 2435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 2500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 4815;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 4795;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 4965;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 480;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 465;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 2390;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 2005;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 2070;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 570;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 525;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4275;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 3660;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 4165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 3670;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 3620;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 3610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 4140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 1490;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 1105;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 1170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 825;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_7FB[iVar9]) * Global_46424.f_1A));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_874[iVar10]) * Global_46424.f_1B));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_88D[iVar11]) * Global_46424.f_38));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 10)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_90E[iVar12]) * Global_46424.f_1C));
		}
	}
	if (iParam0 >= 327)
	{
		Global_11569[0 /*14*/].f_5 = 4;
		func_228(iVar7, iParam0, 327, iParam1);
		if (Global_11569[0 /*14*/].f_7 > 0)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(Global_280004, 2537416713, 1))
			{
				Global_11569[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_11569[0 /*14*/].f_7) * Global_46424.f_1A));
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(Global_280004, 97230661, 1))
			{
				Global_11569[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_11569[0 /*14*/].f_7) * Global_46424.f_38));
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(Global_280004, 1147826474, 1))
			{
				Global_11569[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_11569[0 /*14*/].f_7) * Global_46424.f_1C));
			}
		}
	}
	else
	{
		func_221(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_232(int iParam0, int iParam1)//Position - 0x3FBD6
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_11569[0 /*14*/].f_5 = 4;
			func_228(iVar7, iParam0, 6, iParam1);
			return;
			break;
	}
	func_221(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_233(int iParam0, int iParam1)//Position - 0x3FCDB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 7;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			if (Global_40001.f_102C != 4294967295)
			{
				iVar1 = Global_40001.f_102C;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			if (Global_40001.f_102D != 4294967295)
			{
				iVar1 = Global_40001.f_102D;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			if (Global_40001.f_102E != 4294967295)
			{
				iVar1 = Global_40001.f_102E;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			if (Global_40001.f_102F != 4294967295)
			{
				iVar1 = Global_40001.f_102F;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			if (Global_40001.f_1030 != 4294967295)
			{
				iVar1 = Global_40001.f_1030;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			if (Global_40001.f_1031 != 4294967295)
			{
				iVar1 = Global_40001.f_1031;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			if (Global_40001.f_1032 != 4294967295)
			{
				iVar1 = Global_40001.f_1032;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			if (Global_40001.f_1033 != 4294967295)
			{
				iVar1 = Global_40001.f_1033;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			if (Global_40001.f_1034 != 4294967295)
			{
				iVar1 = Global_40001.f_1034;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			if (Global_40001.f_1035 != 4294967295)
			{
				iVar1 = Global_40001.f_1035;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			if (Global_40001.f_1036 != 4294967295)
			{
				iVar1 = Global_40001.f_1036;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			if (Global_40001.f_1037 != 4294967295)
			{
				iVar1 = Global_40001.f_1037;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			if (Global_40001.f_1038 != 4294967295)
			{
				iVar1 = Global_40001.f_1038;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			if (Global_40001.f_1039 != 4294967295)
			{
				iVar1 = Global_40001.f_1039;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			if (Global_40001.f_103A != 4294967295)
			{
				iVar1 = Global_40001.f_103A;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			if (Global_40001.f_103B != 4294967295)
			{
				iVar1 = Global_40001.f_103B;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			if (Global_40001.f_103C != 4294967295)
			{
				iVar1 = Global_40001.f_103C;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			if (Global_40001.f_103D != 4294967295)
			{
				iVar1 = Global_40001.f_103D;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			if (Global_40001.f_103E != 4294967295)
			{
				iVar1 = Global_40001.f_103E;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			if (Global_40001.f_103F != 4294967295)
			{
				iVar1 = Global_40001.f_103F;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 4;
			if (Global_40001.f_1040 != 4294967295)
			{
				iVar1 = Global_40001.f_1040;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 5;
			if (Global_40001.f_1041 != 4294967295)
			{
				iVar1 = Global_40001.f_1041;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 0;
			if (Global_40001.f_1042 != 4294967295)
			{
				iVar1 = Global_40001.f_1042;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 1;
			if (Global_40001.f_1043 != 4294967295)
			{
				iVar1 = Global_40001.f_1043;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 2;
			if (Global_40001.f_1044 != 4294967295)
			{
				iVar1 = Global_40001.f_1044;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 3;
			if (Global_40001.f_1045 != 4294967295)
			{
				iVar1 = Global_40001.f_1045;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 4;
			if (Global_40001.f_1046 != 4294967295)
			{
				iVar1 = Global_40001.f_1046;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 5;
			if (Global_40001.f_1047 != 4294967295)
			{
				iVar1 = Global_40001.f_1047;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 0;
			if (Global_40001.f_1048 != 4294967295)
			{
				iVar1 = Global_40001.f_1048;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 1;
			if (Global_40001.f_1049 != 4294967295)
			{
				iVar1 = Global_40001.f_1049;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 0;
			if (Global_40001.f_104A != 4294967295)
			{
				iVar1 = Global_40001.f_104A;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_11569[0 /*14*/].f_5 = 4;
			func_228(iVar7, iParam0, 55, iParam1);
			if (Global_11569[0 /*14*/].f_7 > 0)
			{
				Global_11569[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_11569[0 /*14*/].f_7) * Global_46424.f_3A));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_46424.f_3A));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_221(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_234(int iParam0, int iParam1)//Position - 0x404B7
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_11569[0 /*14*/].f_5 = 4;
			func_228(iVar7, iParam0, 26, iParam1);
			if (Global_11569[0 /*14*/].f_7 > 0)
			{
				Global_11569[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_11569[0 /*14*/].f_7) * Global_46424.f_1D));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_7E0[iVar8]) * Global_46424.f_1D));
	}
	func_221(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_235(int iParam0, int iParam1)//Position - 0x4079C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_6DF[iVar8]) * Global_46424.f_19));
	}
	if (iParam0 >= 256)
	{
		Global_11569[0 /*14*/].f_5 = 4;
		func_228(iVar7, iParam0, 256, iParam1);
		if (Global_11569[0 /*14*/].f_7 > 0)
		{
			Global_11569[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_11569[0 /*14*/].f_7) * Global_46424.f_19));
		}
	}
	else
	{
		func_221(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_236(int iParam0, int iParam1)//Position - 0x41DC3
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 4;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			break;
		