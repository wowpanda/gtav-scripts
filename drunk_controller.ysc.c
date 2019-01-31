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
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_18 = 0f;
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
	fLocal_16 = -99f;
	fLocal_18 = -1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		func_31();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_30(0);
		func_29();
		func_22();
		func_19();
		func_14();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!func_1())
		{
			func_31();
		}
	}
}

int func_1()//Position - 0xA6
{
	if (Global_9175)
	{
		return 1;
	}
	if (CAM::DOES_CAM_EXIST(Global_9176))
	{
		return 1;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_90A7 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0xE3
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
	
	if (!Global_9175)
	{
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (Global_9177 > iVar1 || Global_9177 == 4294967295)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			return;
		}
		iVar2 = func_13();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + 4294967295);
		}
		fLocal_17[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_8();
		if (Global_917A != Global_917B)
		{
			fVar6 = (Global_917B - Global_917A);
			Global_917A = (Global_917A + (fVar6 * 0.1f));
			if (MISC::ABSF((Global_917A - Global_917B)) < 0.01f)
			{
				Global_917A = Global_917B;
			}
		}
		if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
		{
			CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", ((Global_917A * fVar3) * fVar5));
		}
		if ((MISC::GET_GAME_TIMER() % 100) == 0)
		{
			if (Global_9177 == 4294967295)
			{
			}
			else
			{
				if (fLocal_18 == -1f)
				{
					fLocal_18 = fVar3;
				}
				CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(((Global_917A * fVar3) * fVar5));
				CAM::CUSTOM_MENU_COORDINATES(((Global_9179 * fVar3) * fVar5));
				fLocal_18 = fVar3;
			}
		}
		if (((Global_9179 * fVar3) * fVar5) < 1f)
		{
			CAM::_0x0225778816FDC28C(((Global_9179 * fVar3) * fVar5));
		}
		else
		{
			CAM::_0x0225778816FDC28C(1f);
		}
		if (!CAM::IS_CINEMATIC_CAM_SHAKING())
		{
			CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (((Global_917A * Global_9174) * fVar3) * fVar5));
		}
		unk_0x3B35C0FF76598EE9((((Global_917A * Global_9174) * fVar3) * fVar5));
		if (CAM::DOES_CAM_EXIST(Global_9176))
		{
			if (CAM::IS_CAM_SHAKING(Global_9176))
			{
				CAM::SET_CAM_SHAKE_AMPLITUDE(Global_9176, ((Global_917A * fVar3) * fVar5));
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_9191) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_9181))
		{
			AUDIO::START_AUDIO_SCENE(&Global_9181);
			StringCopy(&Global_9191, "", 16);
		}
		unk_0x86B38FBE5E57D36F();
		if (Global_917C > 0f)
		{
			if (fLocal_16 != Global_917C)
			{
				if (GRAPHICS::_0x459FD2C8D0AB78BC() != 4294967295)
				{
				}
				else if (!unk_0xB2D5505186AFADA7())
				{
					GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(&Global_917D, 15f);
					fLocal_16 = Global_917C;
				}
			}
			else
			{
				if (GRAPHICS::_0x459FD2C8D0AB78BC() != 4294967295 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != 4294967295)
				{
					fLocal_16 = -99f;
				}
				AUDIO::_0x12561FCBB62D5B9C(2);
				iVar7 = (Global_9177 - iVar1);
				if (iVar7 <= (Global_9178 / 2))
				{
					bVar8 = false;
					if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(AUDIO::_0x0626A247D2405330()))
						{
							bVar8 = true;
						}
					}
					if (func_6(AUDIO::_0x0626A247D2405330()))
					{
						Global_9177 += 1000;
					}
					else if (bVar8)
					{
						Global_9177 += 1000;
					}
					else if (GRAPHICS::_0x459FD2C8D0AB78BC() != 4294967295)
					{
						Global_9177 += 1000;
					}
					else if (func_5())
					{
						Global_9177 += 1000;
					}
					else
					{
						if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != 4294967295)
						{
							GRAPHICS::_0x1CBA05AE7BD7EE05((SYSTEM::TO_FLOAT((Global_9178 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_917C = 0f;
						StringCopy(&Global_917D, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_18 = -1f;
	fLocal_16 = -99f;
	func_3(1);
	iLocal_12 = 1;
}

void func_3(bool bParam0)//Position - 0x3E0
{
	CAM::CUSTOM_MENU_COORDINATES(0f);
	CAM::_0x0225778816FDC28C(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	unk_0x3B35C0FF76598EE9(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::_0x12561FCBB62D5B9C(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_9181))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_9181))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_9181);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_9176))
	{
		if (CAM::IS_CAM_SHAKING(Global_9176))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_9176, 0f);
			CAM::STOP_CAM_SHAKING(Global_9176, 1);
		}
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != 4294967295 || GRAPHICS::_0x459FD2C8D0AB78BC() != 4294967295)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_917C = 0f;
	StringCopy(&Global_917D, "", 16);
	StringCopy(&Global_9181, "", 64);
	StringCopy(&Global_9191, "", 16);
	func_4();
}

void func_4()//Position - 0x4BA
{
	Global_9175 = 0;
	Global_9176 = 0;
	Global_9177 = 0;
	Global_9178 = 30000;
	Global_9179 = 0f;
	Global_917B = 0f;
	Global_917A = 0f;
	Global_917C = 0f;
	StringCopy(&Global_917D, "", 16);
}

bool func_5()//Position - 0x4EC
{
	return Global_263720;
}

int func_6(int iParam0)//Position - 0x4F8
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_7(iParam0) == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0)//Position - 0x519
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_90C2[iVar0 /*5*/] == 4294967295)
		{
			if (iParam0 == Global_90C2[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

float func_8()//Position - 0x562
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_12(AUDIO::_0x0626A247D2405330());
	iVar2 = func_9(AUDIO::_0x0626A247D2405330());
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

int func_9(int iParam0)//Position - 0x5E1
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
	iVar0 = func_11(iParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == 4294967295)
	{
		return 4294967295;
	}
	return Global_90C2[iVar1 /*5*/].f_4;
}

int func_10(int iParam0)//Position - 0x624
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_90C2[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_11(int iParam0)//Position - 0x654
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_90C2[iVar0 /*5*/].f_1)
		{
			return Global_90C2[iVar0 /*5*/];
		}
		iVar0++;
	}
	return 4294967295;
}

int func_12(int iParam0)//Position - 0x695
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
	iVar0 = func_11(iParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == 4294967295)
	{
		return 4294967295;
	}
	return Global_90C2[iVar1 /*5*/].f_3;
}

float func_13()//Position - 0x6D8
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = 1f;
	iVar2 = (Global_9177 - iVar0);
	if (iVar2 <= Global_9178)
	{
		if (Global_9177 != 4294967295)
		{
			fVar1 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(Global_9178));
		}
	}
	return fVar1;
}

void func_14()//Position - 0x712
{
	if (Global_90A8[iLocal_15 /*5*/] == 0)
	{
		func_15(iLocal_15);
	}
}

void func_15(int iParam0)//Position - 0x72B
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_90A8[iParam0 /*5*/].f_1, 0))
	{
		func_18(iParam0);
		return;
	}
	if (func_6(Global_90A8[iParam0 /*5*/].f_1))
	{
		func_18(iParam0);
		return;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("drunk"))
	{
		SCRIPT::REQUEST_SCRIPT("drunk");
		return;
	}
	iVar0 = func_17();
	if (iVar0 == 4294967295)
	{
		func_18(iParam0);
		return;
	}
	Global_90C2[iVar0 /*5*/] = func_16();
	Global_90C2[iVar0 /*5*/].f_1 = Global_90A8[iParam0 /*5*/].f_1;
	Global_90C2[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_90A8[iParam0 /*5*/] };
	SYSTEM::START_NEW_SCRIPT_WITH_ARGS("drunk", &Var1, 5, 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("drunk");
	func_18(iParam0);
}

var func_16()//Position - 0x7F3
{
	var uVar0;
	
	uVar0 = Global_90A6;
	Global_90A6++;
	return uVar0;
}

int func_17()//Position - 0x80A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_90C2[iVar0 /*5*/] == 4294967295)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_18(int iParam0)//Position - 0x839
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_90A8[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_90A8[iParam0 /*5*/].f_1 == AUDIO::_0x0626A247D2405330())
		{
			Global_9195 = 0;
		}
	}
	Global_90A8[iParam0 /*5*/] = 13;
	Global_90A8[iParam0 /*5*/].f_1 = 0;
	Global_90A8[iParam0 /*5*/].f_2 = 0;
	Global_90A8[iParam0 /*5*/].f_3 = 0;
	Global_90A8[iParam0 /*5*/].f_4 = 0;
	Global_90A7 = (Global_90A7 - 1);
	if (Global_90A7 < 0)
	{
		Global_90A7 = 0;
	}
}

void func_19()//Position - 0x8BC
{
	if (!Global_9113[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_9113[iLocal_13 /*6*/].f_1 == 0)
		{
			func_21(iLocal_13);
			func_20(iLocal_13);
		}
	}
}

void func_20(int iParam0)//Position - 0x8EC
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_9113[iParam0 /*6*/] = 4294967295;
	Global_9113[iParam0 /*6*/].f_1 = 4294967295;
	Global_9113[iParam0 /*6*/].f_2 = 6;
	Global_9113[iParam0 /*6*/].f_3 = 0;
	Global_9113[iParam0 /*6*/].f_4 = 0;
}

void func_21(int iParam0)//Position - 0x939
{
	int iVar0;
	
	iVar0 = Global_9113[iParam0 /*6*/].f_2;
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

void func_22()//Position - 0x983
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!Global_90C2[iLocal_14 /*5*/] == 4294967295)
	{
		iVar0 = func_28(Global_90C2[iLocal_14 /*5*/], 0);
		if (iVar0 == 4294967295)
		{
			func_23(Global_90C2[iLocal_14 /*5*/]);
		}
		else
		{
			func_20(iVar0);
		}
	}
}

void func_23(int iParam0)//Position - 0x9C3
{
	int iVar0;
	
	func_26(iParam0);
	iVar0 = func_25(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	func_24(iVar0);
}

void func_24(int iParam0)//Position - 0x9E8
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_90C2[iParam0 /*5*/] = 4294967295;
	Global_90C2[iParam0 /*5*/].f_1 = 0;
	Global_90C2[iParam0 /*5*/].f_2 = 4294967295;
	Global_90C2[iParam0 /*5*/].f_3 = 0;
	Global_90C2[iParam0 /*5*/].f_4 = 0;
}

int func_25(int iParam0)//Position - 0xA35
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_90C2[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_26(int iParam0)//Position - 0xA65
{
	func_30(iParam0);
	func_27(iParam0);
}

void func_27(int iParam0)//Position - 0xA79
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_9113[iVar0 /*6*/].f_1)
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

int func_28(int iParam0, int iParam1)//Position - 0xAAB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_9113[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_9113[iVar0 /*6*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

void func_29()//Position - 0xAE9
{
	if (Global_9113[iLocal_13 /*6*/] == 1)
	{
		Global_9113[iLocal_13 /*6*/] = 0;
	}
}

void func_30(int iParam0)//Position - 0xB04
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_9113[iVar0 /*6*/])
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

void func_31()//Position - 0xB34
{
	func_32();
	if (!iLocal_12)
	{
		func_3(1);
	}
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_32()//Position - 0xB4F
{
	func_35();
	func_34();
	func_33();
	func_4();
	Global_9196 = 0;
	Global_9195 = 0;
	Global_90A7 = 0;
	MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("drunk");
}

void func_33()//Position - 0xB7A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_20(iVar0);
		iVar0++;
	}
}

void func_34()//Position - 0xB9E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_35()//Position - 0xBC2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_18(iVar0);
		iVar0++;
	}
}

