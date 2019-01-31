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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
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
	struct<14> Local_47[30];
	var uLocal_48 = 0;
	var uLocal_49 = -1;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = -1;
	var uLocal_55 = -1;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_76())
	{
		while (!func_63())
		{
			func_11();
			SYSTEM::WAIT(0);
		}
	}
	func_1();
}

void func_1()//Position - 0x90
{
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_18044A, 1);
	func_3(&Local_47);
	func_2();
}

void func_2()//Position - 0xAB
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_3(int iParam0)//Position - 0xB7
{
	func_9(&(iParam0->f_1A5.f_5));
	func_4(iParam0, 1);
}

void func_4(var uParam0, bool bParam1)//Position - 0xD1
{
	if (func_5(uParam0))
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	}
	if (bParam1)
	{
		func_9(&(uParam0->f_1A5.f_5));
	}
}

bool func_5(var uParam0)//Position - 0xF7
{
	char* sVar0;
	char* sVar1;
	
	func_7(uParam0, uParam0->f_1A5.f_2, &sVar0);
	func_7(uParam0, uParam0->f_1A5.f_2, &sVar1);
	return (func_6(&sVar0) || func_6(&sVar1));
}

int func_6(char* sParam0)//Position - 0x12F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_7(var uParam0, int iParam1, char* sParam2)//Position - 0x142
{
	if (func_8(&(uParam0->f_1A5), 7))
	{
		Stack.Push(uParam0[iParam1 /*14*/]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(uParam0->f_1A5.f_E);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, int iParam1)//Position - 0x173
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, iParam1);
}

void func_9(var uParam0)//Position - 0x184
{
	int iVar0;
	
	if (*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
	if (iVar0 == 4294967295)
	{
		*uParam0 = 4294967295;
		return;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/])
		{
			Global_8FDB[iVar0 /*32*/].f_7 = 1;
			*uParam0 = 4294967295;
			return;
		}
	}
	*uParam0 = 4294967295;
}

int func_10(int iParam0)//Position - 0x1DB
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_11()//Position - 0x216
{
	func_19(&Local_47);
	if (Global_18415C == CAM::_0xDC9DA9E8789F5246() && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19B0A9[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*39*/].f_1B, 5))
	{
		if (func_18(&Local_47, 1, 1))
		{
			func_17(&Local_47);
		}
		if (func_18(&Local_47, 0, 0))
		{
			MISC::SET_BIT(&Global_18044A, 1);
			if ((((((iLocal_64 == 0 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19B0A9[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*39*/].f_1B, 3)) && !func_16()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_15(0)) && !func_14()) && NETWORK::_0x5C497525F803486B(0, 225))
			{
				func_12(&Local_47);
			}
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_18044A, 1);
		}
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_18044A, 1);
	}
	iLocal_64 = 0;
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19B0A9[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*39*/].f_1B, 3))
	{
		MISC::SET_BIT(&iLocal_64, 0);
	}
	if (func_16())
	{
		MISC::SET_BIT(&iLocal_64, 1);
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		MISC::SET_BIT(&iLocal_64, 2);
	}
	if (func_14())
	{
		MISC::SET_BIT(&iLocal_64, 4);
	}
	if (func_15(0))
	{
		MISC::SET_BIT(&iLocal_64, 3);
	}
}

void func_12(int iParam0)//Position - 0x33B
{
	func_13(&(iParam0->f_1A5), 10);
}

void func_13(int iParam0, int iParam1)//Position - 0x34E
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_14()//Position - 0x35E
{
	return Global_10B8E;
}

int func_15(int iParam0)//Position - 0x36A
{
	if (iParam0 == 1)
	{
		if (Global_38B1.f_1 > 3)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_38B1.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_16()//Position - 0x3C4
{
	if (Global_252F9E.f_47F.f_5 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)//Position - 0x3DE
{
	func_13(&(iParam0->f_1A5), 9);
}

bool func_18(int iParam0, int iParam1, int iParam2)//Position - 0x3F1
{
	return ((iParam0->f_1A5.f_4 > 2 && (iParam1 || func_8(&(iParam0->f_1A5), 11))) && (iParam2 || iParam0->f_1A5.f_4 < 8));
}

void func_19(int iParam0)//Position - 0x431
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	func_61(iParam0);
	func_59(iParam0);
	Var2.f_1.f_6 = 1061158912;
	Var2 = { *(iParam0[iParam0->f_1A5.f_2 /*14*/]) };
	switch (iParam0->f_1A5.f_4)
	{
		case 0:
			func_58(&(iParam0->f_1A5), 11);
			func_57(iParam0, 1);
			break;
		
		case 1:
			if (func_56(iParam0))
			{
				iParam0->f_1A5.f_6 = MISC::GET_GAME_TIMER();
				func_57(iParam0, 2);
			}
			break;
		
		case 2:
			if (func_55(AUDIO::_0x0626A247D2405330(), iParam0[iParam0->f_1A5.f_2 /*14*/]))
			{
				if ((func_54(iParam0) || func_52(iParam0)) || !func_51(iParam0))
				{
					func_4(iParam0, 1);
					func_57(iParam0, 1);
				}
				else if (iParam0->f_1A5.f_5 == 4294967295)
				{
					if ((MISC::GET_GAME_TIMER() - iParam0->f_1A5.f_6) > 150)
					{
						func_50(&(iParam0->f_1A5.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
				{
					func_9(&(iParam0->f_1A5.f_5));
					func_47(iParam0);
					func_57(iParam0, 3);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_57(iParam0, 1);
			}
			break;
		
		case 3:
			func_46(iParam0, &sVar0);
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				func_57(iParam0, 4);
			}
			break;
		
		case 4:
			func_46(iParam0, &sVar0);
			func_45(iParam0, &sVar1);
			if (Var2 != 3)
			{
				vVar3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar1, func_44(iParam0), func_43(iParam0), 0f, 2) };
				vVar4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar1, func_44(iParam0), func_43(iParam0), 0f, 2) };
				iVar5 = vVar4.z;
				BRAIN::TASK_GO_STRAIGHT_TO_COORD(AUDIO::_0x0626A247D2405330(), vVar3, 1f, 500, iVar5, 0.15f);
			}
			func_57(iParam0, 5);
			break;
		
		case 5:
			func_33(iParam0);
			func_46(iParam0, &sVar0);
			func_45(iParam0, &sVar1);
			if (Var2 == 3)
			{
				iVar6 = BRAIN::GET_SCRIPT_TASK_STATUS(AUDIO::_0x0626A247D2405330(), 1920390111);
			}
			else
			{
				iVar6 = BRAIN::GET_SCRIPT_TASK_STATUS(AUDIO::_0x0626A247D2405330(), 2106541073);
			}
			if (iVar6 != 1 && iVar6 != 0)
			{
				iParam0->f_1A5.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_44(iParam0), func_43(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(AUDIO::_0x0626A247D2405330(), iParam0->f_1A5.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1.5f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_1A5.f_1);
				iParam0->f_1A5.f_8.f_4 = MISC::GET_GAME_TIMER();
				func_13(&(iParam0->f_1A5), 8);
				func_57(iParam0, 6);
			}
			break;
		
		case 6:
			if (func_8(&(iParam0->f_1A5), 10))
			{
				func_58(&(iParam0->f_1A5), 10);
				func_32(iParam0);
			}
			func_33(iParam0);
			func_26(iParam0);
			iVar7 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iParam0->f_1A5.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar7))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar7) >= 1f)
				{
					func_20(iParam0, 0);
					func_46(iParam0, &sVar0);
					func_45(iParam0, &sVar1);
					iParam0->f_1A5.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_44(iParam0), func_43(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(AUDIO::_0x0626A247D2405330(), iParam0->f_1A5.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_1A5.f_1);
					func_13(&(iParam0->f_1A5), 8);
					func_13(&(iParam0->f_1A5), 11);
				}
				else
				{
					func_58(&(iParam0->f_1A5), 8);
				}
			}
			else if (!func_8(&(iParam0->f_1A5), 8))
			{
				func_57(iParam0, 8);
			}
			break;
		
		case 7:
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_1A5.f_1);
			func_57(iParam0, 8);
			break;
		
		case 8:
			iVar8 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iParam0->f_1A5.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar8))
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 1f || ENTITY::HAS_ANIM_EVENT_FIRED(AUDIO::_0x0626A247D2405330(), 364629851)) || ENTITY::HAS_ANIM_EVENT_FIRED(AUDIO::_0x0626A247D2405330(), 2116425869))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_1A5.f_1);
					func_4(iParam0, 1);
					func_57(iParam0, 0);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_57(iParam0, 0);
			}
			break;
	}
}

void func_20(var uParam0, bool bParam1)//Position - 0x862
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_21(uParam0);
		if (iVar1 != uParam0->f_1A5.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_1A5.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_1A5.f_8.f_2;
		}
		iVar1 = uParam0->f_1A5.f_8.f_1;
	}
	else if (uParam0->f_1A5.f_8.f_2 == 5)
	{
		iVar1 = uParam0->f_1A5.f_8.f_1;
		iVar2 = 3;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (iVar0 == uParam0->f_1A5.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_1A5.f_8.f_2 > 6)
		{
			iVar1 = func_21(uParam0);
			uParam0->f_1A5.f_8.f_4 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = uParam0->f_1A5.f_8.f_1;
		}
		if ((MISC::GET_GAME_TIMER() - uParam0->f_1A5.f_8.f_4) >= 90000)
		{
			iVar1 = func_21(uParam0);
			if (iVar1 != uParam0->f_1A5.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_1A5.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_1A5.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_1A5.f_8.f_3 = uParam0->f_1A5.f_8.f_2;
	uParam0->f_1A5.f_8.f_2 = iVar0;
	uParam0->f_1A5.f_8.f_1 = iVar1;
}

int func_21(var uParam0)//Position - 0x9AD
{
	if (uParam0->f_1A5.f_8 == 2)
	{
		return uParam0->f_1A5.f_8.f_1;
	}
	return (uParam0->f_1A5.f_8.f_1 + 1 % func_22(uParam0->f_1A5.f_8));
}

int func_22(int iParam0)//Position - 0x9E3
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return func_23(func_24(), 4, 5);
		
		case 2:
			return 5;
		
		default:
	}
	return 0;
}

int func_23(bool bParam0, int iParam1, int iParam2)//Position - 0xA1A
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_24()//Position - 0xA31
{
	return func_25(CAM::_0xDC9DA9E8789F5246());
}

int func_25(int iParam0)//Position - 0xA41
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_26(var uParam0)//Position - 0xA60
{
	vector3 vVar0;
	float fVar1;
	
	if (uParam0->f_1A5.f_4 == 6)
	{
		vVar0 = { PAD::GET_CONTROL_NORMAL(0, 218), PAD::GET_CONTROL_NORMAL(0, 219), 0f };
		fVar1 = SYSTEM::VMAG(vVar0);
		if ((uParam0->f_1A5.f_4 == 6 && !ENTITY::HAS_ANIM_EVENT_FIRED(AUDIO::_0x0626A247D2405330(), 2972915443)) && !func_8(&(uParam0->f_1A5), 12))
		{
			if (fVar1 >= 0.35f)
			{
				func_31(uParam0);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(AUDIO::_0x0626A247D2405330(), 2972915443))
		{
			func_4(uParam0, 1);
		}
		else if (func_30(uParam0))
		{
			func_4(uParam0, 1);
		}
		else
		{
			PAD::_DISABLE_INPUT_GROUP(2);
			PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
			if (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_8(&(uParam0->f_1A5), 0)) && !func_8(&(uParam0->f_1A5), 4)) && !func_29()) && !func_27(1)) && uParam0->f_1A5.f_8.f_2 != 3)
			{
				if (uParam0->f_1A5.f_5 == 4294967295)
				{
					func_50(&(uParam0->f_1A5.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
				}
				if (uParam0->f_1A5.f_4 == 6)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
					{
						func_32(uParam0);
					}
				}
			}
		}
	}
	func_58(&(uParam0->f_1A5), 9);
}

int func_27(bool bParam0)//Position - 0xBDE
{
	if (PAD::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (func_28(AUDIO::_0x0626A247D2405330()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_434C.f_82)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && unk_0xE11F00B4AC919F45(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xE11F00B4AC919F45(0, 166) || unk_0xE11F00B4AC919F45(0, 167)) || unk_0xE11F00B4AC919F45(0, 168)) || unk_0xE11F00B4AC919F45(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)//Position - 0xCC9
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_29()//Position - 0xD26
{
	if (Global_252F9E.f_47F.f_5 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool func_30(var uParam0)//Position - 0xD40
{
	return func_8(&(uParam0->f_1A5), 9);
}

void func_31(var uParam0)//Position - 0xD53
{
	char* sVar0;
	char* sVar1;
	
	if (((func_21(uParam0) != uParam0->f_1A5.f_8.f_1 && uParam0->f_1A5.f_8.f_2 < 6) && uParam0->f_1A5.f_8.f_2 != 3) && uParam0->f_1A5.f_8.f_2 != 4)
	{
		func_20(uParam0, 1);
		func_46(uParam0, &sVar0);
		func_45(uParam0, &sVar1);
		uParam0->f_1A5.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_44(uParam0), func_43(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(AUDIO::_0x0626A247D2405330(), uParam0->f_1A5.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_1A5.f_1);
		func_13(&(uParam0->f_1A5), 8);
		MISC::_0x1327E2FE9746BAEE(AUDIO::_0x0626A247D2405330(), 0, 0);
	}
}

void func_32(var uParam0)//Position - 0xE1C
{
	char* sVar0;
	
	uParam0->f_1A5.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_44(uParam0), func_43(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
	func_46(uParam0, &sVar0);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(AUDIO::_0x0626A247D2405330(), uParam0->f_1A5.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_1A5.f_1);
	func_9(&(uParam0->f_1A5.f_5));
	func_57(uParam0, 8);
}

void func_33(var uParam0)//Position - 0xE92
{
	int iVar0;
	
	switch (uParam0->f_1A5.f_4)
	{
		case 4:
		case 8:
			func_38(1);
		
		case 6:
			unk_0x86B38FBE5E57D36F();
			HUD::_SHOW_WEAPON_WHEEL(0);
			HUD::DISPLAY_AMMO_THIS_FRAME(0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			unk_0x2F91408F71BD2284();
			func_37();
			if (WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar0, 1) && iVar0 != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			func_35(1);
			func_34();
			break;
	}
}

void func_34()//Position - 0xF1B
{
	Global_434C.f_6 = 1;
}

void func_35(bool bParam0)//Position - 0xF29
{
	if (bParam0)
	{
		if (func_36())
		{
			Global_255C02.f_22 = 1;
		}
	}
	else
	{
		Global_255C02.f_22 = 0;
	}
}

bool func_36()//Position - 0xF4E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02.f_2, 11);
}

void func_37()//Position - 0xF62
{
	MISC::SET_BIT(&Global_950, 4);
}

void func_38(int iParam0)//Position - 0xF72
{
	if (func_42())
	{
		return;
	}
	if (!Global_38B1.f_1 == 1)
	{
		if (func_15(0))
		{
			func_39(iParam0);
		}
		MISC::SET_BIT(&Global_950, 2);
	}
}

void func_39(int iParam0)//Position - 0xFA5
{
	if (func_42())
	{
		return;
	}
	if (Global_3959)
	{
		func_41(0, 0);
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
	if (!func_40())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_40()//Position - 0x101F
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_41(bool bParam0, bool bParam1)//Position - 0x1046
{
	if (bParam0)
	{
		if (func_15(0))
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

bool func_42()//Position - 0x10BA
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

Vector3 func_43(var uParam0)//Position - 0x10CC
{
	vector3 vVar0;
	
	vVar0 = { (uParam0[uParam0->f_1A5.f_2 /*14*/])->f_8.f_3 };
	if (func_24() && uParam0->f_1A5.f_8 == 0)
	{
		vVar0.z = (vVar0.z - 4f);
	}
	return vVar0;
}

Vector3 func_44(var uParam0)//Position - 0x110C
{
	return (uParam0[uParam0->f_1A5.f_2 /*14*/])->f_8;
}

void func_45(var uParam0, char* sParam1)//Position - 0x1123
{
	switch (uParam0->f_1A5.f_8.f_2)
	{
		case 0:
			StringCopy(sParam1, "IDLE_A", 16);
			break;
		
		case 1:
			StringCopy(sParam1, "IDLE_B", 16);
			break;
		
		case 2:
			StringCopy(sParam1, "IDLE_C", 16);
			break;
		
		case 3:
			StringCopy(sParam1, "ENTER", 16);
			break;
		
		case 5:
			StringCopy(sParam1, "BASE", 16);
			break;
		
		case 4:
			StringCopy(sParam1, "EXIT", 16);
			break;
		
		case 7:
			StringCopy(sParam1, "A_TO_B", 16);
			break;
		
		case 8:
			StringCopy(sParam1, "B_TO_C", 16);
			break;
		
		case 9:
			StringCopy(sParam1, "C_TO_D", 16);
			break;
		
		case 10:
			StringCopy(sParam1, "D_TO_E", 16);
			break;
		
		case 12:
			StringCopy(sParam1, "B_TO_E", 16);
			break;
		
		case 13:
			StringCopy(sParam1, "C_TO_A", 16);
			break;
		
		case 14:
			StringCopy(sParam1, "D_TO_A", 16);
			break;
		
		case 15:
			StringCopy(sParam1, "E_TO_A", 16);
			break;
		
		default:
			StringCopy(sParam1, "invalid_clip", 16);
	}
}

void func_46(var uParam0, char* sParam1)//Position - 0x1220
{
	switch (uParam0->f_1A5.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_24())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_1A5.f_8)
	{
		case 1:
		case 0:
			switch (uParam0->f_1A5.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_1A5.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_47(var uParam0)//Position - 0x1364
{
	uParam0->f_1A5.f_8 = func_49((*uParam0)[uParam0->f_1A5.f_2 /*14*/]);
	uParam0->f_1A5.f_8.f_1 = func_48(uParam0);
	uParam0->f_1A5.f_8.f_2 = 3;
	uParam0->f_1A5.f_8.f_3 = 3;
}

int func_48(var uParam0)//Position - 0x13A5
{
	int iVar0;
	
	switch (uParam0->f_1A5.f_8)
	{
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_22(uParam0->f_1A5.f_8));
	}
	return iVar0;
}

int func_49(int iParam0)//Position - 0x13EA
{
	if (iParam0 >= 11)
	{
		return 0;
	}
	else if (iParam0 >= 9)
	{
		return 0;
	}
	else if (iParam0 >= 7)
	{
		return 0;
	}
	else if (iParam0 >= 4)
	{
		return 0;
	}
	else if (iParam0 > 1)
	{
		return 2;
	}
	return 0;
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1433
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == 4294967295)
		{
			func_9(uParam0);
		}
		return;
	}
	if (!*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8FDB[iVar0 /*32*/])
		{
			Global_8FDB[iVar0 /*32*/] = 1;
			Global_8FDB[iVar0 /*32*/].f_1 = Global_90A4;
			Global_90A4++;
			Global_8FDB[iVar0 /*32*/].f_4 = 0;
			Global_8FDB[iVar0 /*32*/].f_1D = 0;
			Global_8FDB[iVar0 /*32*/].f_5 = 0;
			Global_8FDB[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_8FDB[iVar0 /*32*/].f_8), sParam2, 16);
			Global_8FDB[iVar0 /*32*/].f_6 = iParam3;
			Global_8FDB[iVar0 /*32*/].f_1F = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_8FDB[iVar0 /*32*/].f_7 = 0;
			Global_8FDB[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_8FDB[iVar0 /*32*/].f_C = 1;
				StringCopy(&(Global_8FDB[iVar0 /*32*/].f_D), sParam4, 64);
				Global_8FDB[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_8FDB[iVar0 /*32*/].f_C = 0;
				Global_8FDB[iVar0 /*32*/].f_1E = 0;
			}
			*uParam0 = Global_8FDB[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_51(var uParam0)//Position - 0x155E
{
	Stack.Push(!func_8(&(uParam0->f_1A5), 5));
	Stack.Push(uParam0[uParam0->f_1A5.f_2 /*14*/]);
	Stack.Push(uParam0->f_1A5.f_2);
	Call_Loc(uParam0->f_1A5.f_D);
	return (StackVal || StackVal);
}

int func_52(var uParam0)//Position - 0x1591
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if ((iVar1 != CAM::_0xDC9DA9E8789F5246() && func_53(iVar1, 1, 1)) && func_55(PLAYER::GET_PLAYER_PED(iVar1), uParam0[uParam0->f_1A5.f_2 /*14*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_53(int iParam0, bool bParam1, bool bParam2)//Position - 0x15FD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_252F9E.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_54(var uParam0)//Position - 0x1647
{
	return uParam0->f_1A5 & 31 > 0;
}

bool func_55(int iParam0, var uParam1)//Position - 0x1659
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_56(var uParam0)//Position - 0x167E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_55(AUDIO::_0x0626A247D2405330(), uParam0[uParam0->f_1A5.f_2 /*14*/]))
		{
			return 1;
		}
		else
		{
			uParam0->f_1A5.f_2 = (uParam0->f_1A5.f_2 + 1 % 30);
		}
		iVar0++;
	}
	return 0;
}

void func_57(var uParam0, int iParam1)//Position - 0x16C9
{
	uParam0->f_1A5.f_4 = iParam1;
}

void func_58(int iParam0, int iParam1)//Position - 0x16DA
{
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, iParam1);
}

void func_59(var uParam0)//Position - 0x16EA
{
	if (uParam0->f_1A5.f_4 == 6)
	{
	}
	else if (uParam0->f_1A5.f_4 > 4)
	{
		CAM::_0x2AED6301F67007D5(AUDIO::_0x0626A247D2405330());
		PED::SET_PED_CAPSULE(AUDIO::_0x0626A247D2405330(), func_60(uParam0));
		uParam0->f_1A5.f_7 = MISC::GET_FRAME_COUNT();
	}
	else if (uParam0->f_1A5.f_4 > 1)
	{
		PED::SET_PED_CAPSULE(AUDIO::_0x0626A247D2405330(), func_60(uParam0));
		uParam0->f_1A5.f_7 = MISC::GET_FRAME_COUNT();
	}
	else if ((MISC::GET_FRAME_COUNT() - uParam0->f_1A5.f_7) < 5)
	{
		PED::SET_PED_CAPSULE(AUDIO::_0x0626A247D2405330(), func_60(uParam0));
	}
}

float func_60(var uParam0)//Position - 0x1774
{
	switch ((*uParam0)[uParam0->f_1A5.f_2 /*14*/])
	{
		case 12:
		case 10:
		case 6:
			return 0.24f;
		
		case 2:
			return 0.16f;
		
		case 3:
			return 0.18f;
		
		default:
	}
	return 0.13f;
}

void func_61(var uParam0)//Position - 0x17C7
{
	func_62(&(uParam0->f_1A5), 4, func_14());
	func_62(&(uParam0->f_1A5), 1, ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0));
	func_62(&(uParam0->f_1A5), 3, PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1));
	func_62(&(uParam0->f_1A5), 0, func_15(0));
	func_62(&(uParam0->f_1A5), 2, BRAIN::IS_PED_RUNNING(AUDIO::_0x0626A247D2405330()));
}

void func_62(int iParam0, int iParam1, bool bParam2)//Position - 0x1824
{
	int iVar0;
	
	iVar0 = iParam1;
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, iVar0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(iParam0, iVar0);
	}
}

int func_63()//Position - 0x1848
{
	if (!func_75(AUDIO::_0x0626A247D2405330()))
	{
		return 1;
	}
	if (func_65())
	{
		return 1;
	}
	if (Global_18415C == func_64())
	{
		return 1;
	}
	return 0;
}

int func_64()//Position - 0x187B
{
	return 4294967295;
}

int func_65()//Position - 0x1884
{
	var uVar0;
	
	func_72(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_71())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_70())
	{
		return 1;
	}
	if (func_69(157))
	{
		if (!func_68())
		{
			return 1;
		}
	}
	if (func_69(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_66() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_66()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()//Position - 0x190E
{
	switch (func_67())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_67()//Position - 0x1942
{
	return Global_6373;
}

bool func_68()//Position - 0x194D
{
	return Global_255C02.f_24B;
}

int func_69(int iParam0)//Position - 0x195C
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_70()//Position - 0x1973
{
	return Global_25824F;
}

bool func_71()//Position - 0x197F
{
	return Global_255C02.f_246;
}

void func_72(var uParam0)//Position - 0x198E
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 3731680626:
					func_73(iVar0);
					break;
				
				case 566035618:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 2305239146)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_73(int iParam0)//Position - 0x1A01
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_53(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_74(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_74(int iParam0, var uParam1)//Position - 0x1A82
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_75(int iParam0)//Position - 0x1AE1
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 354.4375f, 4877.2f, -62.34054f, 345.1211f, 4864.095f, -55.11187f, 16f, 0, 1, 0);
}

int func_76()//Position - 0x1B15
{
	if (Global_18415C != func_64())
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("base_heist_seats", Global_18415C, 1, 0))
		{
			return 0;
		}
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Global_18415C);
		func_88(0, 4294967295, 0);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		func_77();
		return 1;
	}
	return 0;
}

void func_77()//Position - 0x1B61
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_87() };
	vVar1 = { func_86() };
	func_83(0, func_85(343.93f, 4875.389f, -60.44f, -90f), -90f, vVar0, vVar1);
	func_83(1, func_85(344.08f, 4874.239f, -60.44f, -86f), -86f, vVar0, vVar1);
	func_83(2, func_85(344.33f, 4873.189f, -60.44f, -78f), -78f, vVar0, vVar1);
	func_83(3, func_85(344.7f, 4872.239f, -60.44f, -72f), -72f, vVar0, vVar1);
	func_83(4, func_85(345.06f, 4871.48f, -60.44f, -67f), -67f, vVar0, vVar1);
	func_83(5, func_85(345.86f, 4870.289f, -60.44f, -60f), -60f, vVar0, vVar1);
	func_83(6, func_85(350.41f, 4867.05f, -60.44f, -26f), -26f, vVar0, vVar1);
	func_83(7, func_85(351.51f, 4866.75f, -60.44f, -17f), -17f, vVar0, vVar1);
	func_83(8, func_85(352.66f, 4866.6f, -60.44f, -10f), -10f, vVar0, vVar1);
	func_83(9, func_85(353.6f, 4866.58f, -60.44f, -4f), -4f, vVar0, vVar1);
	func_83(10, func_85(354.7f, 4866.68f, -60.44f, 4f), 4f, vVar0, vVar1);
	func_83(11, func_85(355.85f, 4866.91f, -60.44f, 10f), 10f, vVar0, vVar1);
	func_83(12, func_85(346.02f, 4876.871f, -60.838f, -102f), -102f, vVar0, vVar1);
	func_83(13, func_85(345.97f, 4875.721f, -60.838f, -93f), -93f, vVar0, vVar1);
	func_83(14, func_85(346.19f, 4874.21f, -60.838f, -81f), -81f, vVar0, vVar1);
	func_83(15, func_85(346.62f, 4873.01f, -60.838f, -73f), -73f, vVar0, vVar1);
	func_83(16, func_85(347.27f, 4871.86f, -60.838f, -62f), -62f, vVar0, vVar1);
	func_83(17, func_85(351.57f, 4868.86f, -60.838f, -20f), -20f, vVar0, vVar1);
	func_83(18, func_85(352.89f, 4868.65f, -60.838f, -9f), -9f, vVar0, vVar1);
	func_83(19, func_85(354.17f, 4868.68f, -60.838f, 0f), 0f, vVar0, vVar1);
	func_83(20, func_85(355.12f, 4868.85f, -60.838f, 10f), 8f, vVar0, vVar1);
	func_83(21, func_85(356.58f, 4869.38f, -60.838f, 10f), 20f, vVar0, vVar1);
	func_83(22, func_85(348.2f, 4876.56f, -61.24f, -101f), -101f, vVar0, vVar1);
	func_83(23, func_85(348.2f, 4875.31f, -61.24f, -88f), -88f, vVar0, vVar1);
	func_83(24, func_85(348.47f, 4874.28f, -61.24f, -76f), -76f, vVar0, vVar1);
	func_83(25, func_85(349.17f, 4872.97f, -61.24f, -60f), -60f, vVar0, vVar1);
	func_83(26, func_85(352.12f, 4870.98f, -61.24f, -20f), -20f, vVar0, vVar1);
	func_83(27, func_85(353.42f, 4870.84f, -61.24f, -6f), -6f, vVar0, vVar1);
	func_83(28, func_85(354.67f, 4870.995f, -61.24f, 8f), 8f, vVar0, vVar1);
	func_83(29, func_85(356.02f, 4871.545f, -61.24f, 25f), 25f, vVar0, vVar1);
	func_78(&Local_47, 8336/*func_79*/);
}

void func_78(int iParam0, int iParam1)//Position - 0x2075
{
	iParam0->f_1A5.f_D = iParam1;
	func_13(&(iParam0->f_1A5), 5);
}

bool func_79(var uParam0, int iParam1)//Position - 0x2090
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	bool bVar5;
	
	if (iParam1 < 22)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()) || ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		return 0;
	}
	if (func_82(CAM::_0xDC9DA9E8789F5246()) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_64, 0))
	{
		return 0;
	}
	vVar0 = { uParam0->f_1 };
	vVar1 = { uParam0->f_1.f_3 };
	vVar0.z = 0f;
	vVar1.z = 0f;
	vVar2 = { func_81(vVar0 - vVar1) };
	vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(AUDIO::_0x0626A247D2405330()) };
	fVar4 = func_80(vVar2, vVar3);
	bVar5 = fVar4 > 0.36f;
	return bVar5;
}

float func_80(vector3 vParam0, vector3 vParam1)//Position - 0x2136
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_81(vector3 vParam0)//Position - 0x2157
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_82(int iParam0)//Position - 0x2196
{
	if (iParam0 != func_64())
	{
		if (func_53(iParam0, 1, 1))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19B0A9[iParam0 /*39*/].f_1B, 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_83(int iParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4)//Position - 0x21C9
{
	Local_47[iParam0 /*14*/] = 3;
	Local_47[iParam0 /*14*/].f_1 = { vParam1 + func_84(vParam3, (fParam2 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_3 = { vParam1 + func_84(vParam4, (fParam2 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_6 = 1f;
	Local_47[iParam0 /*14*/].f_8 = { vParam1 };
	Local_47[iParam0 /*14*/].f_8.f_3 = { 0f, 0f, fParam2 };
}

Vector3 func_84(vector3 vParam0, float fParam1)//Position - 0x2241
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_85(vector3 vParam0, float fParam1)//Position - 0x2285
{
	return vParam0 + func_84(0f, 0.01f, 0.015f, fParam1);
}

Vector3 func_86()//Position - 0x22A3
{
	return 0f, -0.7f, -1f;
}

Vector3 func_87()//Position - 0x22B2
{
	return 0f, 0.1f, 1f;
}

int func_88(int iParam0, int iParam1, bool bParam2)//Position - 0x22C1
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_89())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_71())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_69(155))
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_2();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > 4294967295)
	{
		Global_1406F4 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_89()//Position - 0x23D6
{
	return Global_140842;
}

