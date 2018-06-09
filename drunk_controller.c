#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	float fLocal_4 = 0f;
	float fLocal_5[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_6 = 0f;
#endregion

void __EntryFunction__()
{
	fLocal_4 = -99f;
	fLocal_6 = -1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		func_30();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_29(0);
		func_28();
		func_21();
		func_18();
		func_13();
		func_2();
		iLocal_1++;
		if (iLocal_1 >= 16)
		{
			iLocal_1 = 0;
		}
		iLocal_2++;
		if (iLocal_2 >= 16)
		{
			iLocal_2 = 0;
		}
		iLocal_3++;
		if (iLocal_3 >= 5)
		{
			iLocal_3 = 0;
		}
		if (!func_1())
		{
			func_30();
		}
	}
}

int func_1()
{
	if (Global_36959)
	{
		return 1;
	}
	if (CAM::DOES_CAM_EXIST(Global_36960))
	{
		return 1;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_36769 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_36959)
	{
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (Global_36961 > iVar1 || Global_36961 == -1)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			return;
		}
		iVar2 = func_12();
		iVar0 = (fLocal_5 - 1);
		while (iVar0 >= 1)
		{
			fLocal_5[iVar0] = fLocal_5[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_5[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_5)
		{
			fVar3 = (fVar3 + fLocal_5[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_7();
		if (Global_36964 != Global_36965)
		{
			fVar6 = (Global_36965 - Global_36964);
			Global_36964 = (Global_36964 + (fVar6 * 0.1f));
			if (MISC::ABSF((Global_36964 - Global_36965)) < 0.01f)
			{
				Global_36964 = Global_36965;
			}
		}
		if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
		{
			CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", ((Global_36964 * fVar3) * fVar5));
		}
		if ((MISC::GET_GAME_TIMER() % 100) == 0)
		{
			if (Global_36961 == -1)
			{
			}
			else
			{
				if (fLocal_6 == -1f)
				{
					fLocal_6 = fVar3;
				}
				CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(((Global_36964 * fVar3) * fVar5));
				CAM::CUSTOM_MENU_COORDINATES(((Global_36963 * fVar3) * fVar5));
				fLocal_6 = fVar3;
			}
		}
		if (((Global_36963 * fVar3) * fVar5) < 1f)
		{
			CAM::_0x0225778816FDC28C(((Global_36963 * fVar3) * fVar5));
		}
		else
		{
			CAM::_0x0225778816FDC28C(1f);
		}
		if (!CAM::IS_CINEMATIC_CAM_SHAKING())
		{
			CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (((Global_36964 * Global_36958) * fVar3) * fVar5));
		}
		CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE((((Global_36964 * Global_36958) * fVar3) * fVar5));
		if (CAM::DOES_CAM_EXIST(Global_36960))
		{
			if (CAM::IS_CAM_SHAKING(Global_36960))
			{
				CAM::SET_CAM_SHAKE_AMPLITUDE(Global_36960, ((Global_36964 * fVar3) * fVar5));
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_36987) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_36971))
		{
			AUDIO::START_AUDIO_SCENE(&Global_36971);
			StringCopy(&Global_36987, "", 16);
		}
		CAM::_0xF4F2C0D4EE209E20();
		if (Global_36966 > 0f)
		{
			if (fLocal_4 != Global_36966)
			{
				if (GRAPHICS::_0x459FD2C8D0AB78BC() != -1)
				{
				}
				else
				{
					GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(&Global_36967, 15f);
					fLocal_4 = Global_36966;
				}
			}
			else
			{
				if (GRAPHICS::_0x459FD2C8D0AB78BC() != -1 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					fLocal_4 = -99f;
				}
				AUDIO::_0x12561FCBB62D5B9C(2);
				iVar7 = (Global_36961 - iVar1);
				if (iVar7 <= (Global_36962 / 2))
				{
					bVar8 = false;
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							bVar8 = true;
						}
					}
					if (func_5(PLAYER::PLAYER_PED_ID()))
					{
						Global_36961 += 1000;
					}
					else if (bVar8)
					{
						Global_36961 += 1000;
					}
					else if (GRAPHICS::_0x459FD2C8D0AB78BC() != -1)
					{
						Global_36961 += 1000;
					}
					else
					{
						if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
						{
							GRAPHICS::_0x1CBA05AE7BD7EE05((SYSTEM::TO_FLOAT((Global_36962 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_36966 = 0f;
						StringCopy(&Global_36967, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_5)
	{
		fLocal_5[iVar0] = 0f;
		iVar0++;
	}
	fLocal_6 = -1f;
	func_3(1);
	iLocal_0 = 1;
}

void func_3(bool bParam0)
{
	CAM::CUSTOM_MENU_COORDINATES(0f);
	CAM::_0x0225778816FDC28C(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::_0x12561FCBB62D5B9C(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_36971))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_36971))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_36971);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_36960))
	{
		if (CAM::IS_CAM_SHAKING(Global_36960))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_36960, 0f);
			CAM::STOP_CAM_SHAKING(Global_36960, 1);
		}
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::_0x459FD2C8D0AB78BC() != -1)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_36966 = 0f;
	StringCopy(&Global_36967, "", 16);
	StringCopy(&Global_36971, "", 64);
	StringCopy(&Global_36987, "", 16);
	func_4();
}

void func_4()
{
	Global_36959 = 0;
	Global_36960 = 0;
	Global_36961 = 0;
	Global_36962 = 30000;
	Global_36963 = 0f;
	Global_36965 = 0f;
	Global_36964 = 0f;
	Global_36966 = 0f;
	StringCopy(&Global_36967, "", 16);
}

int func_5(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_6(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_6(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36796[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

float func_7()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_11(PLAYER::PLAYER_PED_ID());
	iVar2 = func_8(PLAYER::PLAYER_PED_ID());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36796[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36796[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
		{
			return Global_36796[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36796[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = 1f;
	iVar2 = (Global_36961 - iVar0);
	if (iVar2 <= Global_36962)
	{
		if (Global_36961 != -1)
		{
			fVar1 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(Global_36962));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_36770[iLocal_3 /*5*/] == 0)
	{
		func_14(iLocal_3);
	}
}

void func_14(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_36770[iParam0 /*5*/].f_1, 0))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36770[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("drunk"))
	{
		SCRIPT::REQUEST_SCRIPT("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36796[iVar0 /*5*/] = func_15();
	Global_36796[iVar0 /*5*/].f_1 = Global_36770[iParam0 /*5*/].f_1;
	Global_36796[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_36770[iParam0 /*5*/] };
	SYSTEM::START_NEW_SCRIPT_WITH_ARGS("drunk", &Var1, 5, 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_36768;
	Global_36768++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36796[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_17(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36770[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36770[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_36991 = 0;
		}
	}
	Global_36770[iParam0 /*5*/] = 13;
	Global_36770[iParam0 /*5*/].f_1 = 0;
	Global_36770[iParam0 /*5*/].f_2 = 0;
	Global_36770[iParam0 /*5*/].f_3 = 0;
	Global_36770[iParam0 /*5*/].f_4 = 0;
	Global_36769 = (Global_36769 - 1);
	if (Global_36769 < 0)
	{
		Global_36769 = 0;
	}
}

void func_18()
{
	if (!Global_36877[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36877[iLocal_1 /*5*/].f_1 == 0)
		{
			func_20(iLocal_1);
			func_19(iLocal_1);
		}
	}
}

void func_19(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36877[iParam0 /*5*/] = -1;
	Global_36877[iParam0 /*5*/].f_1 = -1;
	Global_36877[iParam0 /*5*/].f_2 = 6;
	Global_36877[iParam0 /*5*/].f_3 = 0;
	Global_36877[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36877[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_21()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_36796[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36796[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36796[iLocal_2 /*5*/]);
		}
		else
		{
			func_19(iVar0);
		}
	}
}

void func_22(int iParam0)
{
	int iVar0;
	
	func_25(iParam0);
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_23(iVar0);
}

void func_23(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36796[iParam0 /*5*/] = -1;
	Global_36796[iParam0 /*5*/].f_1 = 0;
	Global_36796[iParam0 /*5*/].f_2 = -1;
	Global_36796[iParam0 /*5*/].f_3 = 0;
	Global_36796[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36796[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(int iParam0)
{
	func_29(iParam0);
	func_26(iParam0);
}

void func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36877[iVar0 /*5*/].f_1)
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_36877[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36877[iVar0 /*5*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_28()
{
	if (Global_36877[iLocal_1 /*5*/] == 1)
	{
		Global_36877[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36877[iVar0 /*5*/])
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

void func_30()
{
	func_31();
	if (!iLocal_0)
	{
		func_3(1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36992 = 0;
	Global_36991 = 0;
	Global_36769 = 0;
	MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("drunk");
}

void func_32()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_19(iVar0);
		iVar0++;
	}
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_23(iVar0);
		iVar0++;
	}
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_17(iVar0);
		iVar0++;
	}
}

