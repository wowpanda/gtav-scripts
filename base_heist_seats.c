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
	var uLocal_468 = 0;
	var uLocal_469 = -1;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = -1;
	var uLocal_474 = -1;
	var uLocal_475 = -1;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	int iLocal_484 = 0;
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
	if (func_77())
	{
		while (!func_63())
		{
			func_11();
			WAIT(0);
		}
	}
	func_1();
}

void func_1()
{
	CLEAR_BIT(&Global_1573968, 1);
	func_3(&Local_47);
	func_2();
}

void func_2()
{
	TERMINATE_THIS_THREAD();
}

void func_3(int iParam0)
{
	func_9(&(iParam0->f_421.f_5));
	func_4(iParam0, 1);
}

void func_4(var uParam0, bool bParam1)
{
	if (func_5(uParam0))
	{
		CLEAR_HELP(1);
	}
	if (bParam1)
	{
		func_9(&(uParam0->f_421.f_5));
	}
}

bool func_5(var uParam0)
{
	char* sVar0;
	char* sVar4;
	
	func_7(uParam0, uParam0->f_421.f_2, &sVar0);
	func_7(uParam0, uParam0->f_421.f_2, &sVar4);
	return (func_6(&sVar0) || func_6(&sVar4));
}

var func_6(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_7(var uParam0, int iParam1, char* sParam2)
{
	if (func_8(&(uParam0->f_421), 7))
	{
		Stack.Push(uParam0[iParam1 /*14*/]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(uParam0->f_421.f_14);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, int iParam1)
{
	return IS_BIT_SET(*uParam0, iParam1);
}

void func_9(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_11()
{
	func_19(&Local_47);
	if (Global_1589667 == PLAYER_ID() && !IS_BIT_SET(Global_1686664[NETWORK_PLAYER_ID_TO_INT() /*39*/].f_27, 5))
	{
		if (func_18(&Local_47, 1, 1))
		{
			func_17(&Local_47);
		}
		if (func_18(&Local_47, 0, 0))
		{
			SET_BIT(&Global_1573968, 1);
			if ((((((iLocal_484 == 0 && !IS_BIT_SET(Global_1686664[NETWORK_PLAYER_ID_TO_INT() /*39*/].f_27, 3)) && !func_16()) && !IS_PAUSE_MENU_ACTIVE()) && !func_15(0)) && !func_14()) && IS_DISABLED_CONTROL_JUST_PRESSED(0, 225))
			{
				func_12(&Local_47);
			}
		}
		else
		{
			CLEAR_BIT(&Global_1573968, 1);
		}
	}
	else
	{
		CLEAR_BIT(&Global_1573968, 1);
	}
	iLocal_484 = 0;
	if (IS_BIT_SET(Global_1686664[NETWORK_PLAYER_ID_TO_INT() /*39*/].f_27, 3))
	{
		SET_BIT(&iLocal_484, 0);
	}
	if (func_16())
	{
		SET_BIT(&iLocal_484, 1);
	}
	if (IS_PAUSE_MENU_ACTIVE())
	{
		SET_BIT(&iLocal_484, 2);
	}
	if (func_14())
	{
		SET_BIT(&iLocal_484, 4);
	}
	if (func_15(0))
	{
		SET_BIT(&iLocal_484, 3);
	}
}

void func_12(int iParam0)
{
	func_13(&(iParam0->f_421), 10);
}

void func_13(var uParam0, int iParam1)
{
	SET_BIT(uParam0, iParam1);
}

bool func_14()
{
	return Global_68807;
}

int func_15(int iParam0)
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

int func_16()
{
	if (Global_2437364.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	func_13(&(iParam0->f_421), 9);
}

bool func_18(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0->f_421.f_4 > 2 && (iParam1 || func_8(&(iParam0->f_421), 11))) && (iParam2 || iParam0->f_421.f_4 < 8));
}

void func_19(int iParam0)
{
	char* sVar0;
	char* sVar16;
	struct<14> Var20;
	vector3 vVar34;
	vector3 vVar37;
	var uVar40;
	int iVar41;
	var uVar42;
	var uVar43;
	
	func_61(iParam0);
	func_59(iParam0);
	Var20.f_1.f_6 = 1061158912;
	Var20 = { *(iParam0[iParam0->f_421.f_2 /*14*/]) };
	switch (iParam0->f_421.f_4)
	{
		case 0:
			func_58(&(iParam0->f_421), 11);
			func_57(iParam0, 1);
			break;
		
		case 1:
			if (func_56(iParam0))
			{
				iParam0->f_421.f_6 = GET_GAME_TIMER();
				func_57(iParam0, 2);
			}
			break;
		
		case 2:
			if (func_55(PLAYER_PED_ID(), iParam0[iParam0->f_421.f_2 /*14*/]))
			{
				if ((func_54(iParam0) || func_52(iParam0)) || !func_51(iParam0))
				{
					func_4(iParam0, 1);
					func_57(iParam0, 1);
				}
				else if (iParam0->f_421.f_5 == -1)
				{
					if ((GET_GAME_TIMER() - iParam0->f_421.f_6) > 150)
					{
						func_50(&(iParam0->f_421.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (IS_CONTROL_JUST_PRESSED(0, 51))
				{
					func_9(&(iParam0->f_421.f_5));
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
			REQUEST_ANIM_DICT(&sVar0);
			if (HAS_ANIM_DICT_LOADED(&sVar0))
			{
				func_57(iParam0, 4);
			}
			break;
		
		case 4:
			func_46(iParam0, &sVar0);
			func_45(iParam0, &sVar16);
			if (Var20 != 3)
			{
				vVar34 = { GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar16, func_44(iParam0), func_43(iParam0), 0, 2) };
				vVar37 = { GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar16, func_44(iParam0), func_43(iParam0), 0, 2) };
				uVar40 = vVar37.z;
				TASK_GO_STRAIGHT_TO_COORD(PLAYER_PED_ID(), vVar34, 1f, 500, uVar40, 0.15f);
			}
			func_57(iParam0, 5);
			break;
		
		case 5:
			func_33(iParam0);
			func_46(iParam0, &sVar0);
			func_45(iParam0, &sVar16);
			if (Var20 == 3)
			{
				iVar41 = GET_SCRIPT_TASK_STATUS(PLAYER_PED_ID(), 1920390111);
			}
			else
			{
				iVar41 = GET_SCRIPT_TASK_STATUS(PLAYER_PED_ID(), 2106541073);
			}
			if (iVar41 != 1 && iVar41 != 0)
			{
				iParam0->f_421.f_1 = NETWORK_CREATE_SYNCHRONISED_SCENE(func_44(iParam0), func_43(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
				NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER_PED_ID(), iParam0->f_421.f_1, &sVar0, &sVar16, 2f, -1000f, 13, 16, 1.5f, 0);
				NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
				iParam0->f_421.f_8.f_4 = GET_GAME_TIMER();
				func_13(&(iParam0->f_421), 8);
				func_57(iParam0, 6);
			}
			break;
		
		case 6:
			if (func_8(&(iParam0->f_421), 10))
			{
				func_58(&(iParam0->f_421), 10);
				func_32(iParam0);
			}
			func_33(iParam0);
			func_26(iParam0);
			uVar42 = _NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iParam0->f_421.f_1);
			if (IS_SYNCHRONIZED_SCENE_RUNNING(uVar42))
			{
				if (GET_SYNCHRONIZED_SCENE_PHASE(uVar42) >= 1f)
				{
					func_20(iParam0, 0);
					func_46(iParam0, &sVar0);
					func_45(iParam0, &sVar16);
					iParam0->f_421.f_1 = NETWORK_CREATE_SYNCHRONISED_SCENE(func_44(iParam0), func_43(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
					NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER_PED_ID(), iParam0->f_421.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
					func_13(&(iParam0->f_421), 8);
					func_13(&(iParam0->f_421), 11);
				}
				else
				{
					func_58(&(iParam0->f_421), 8);
				}
			}
			else if (!func_8(&(iParam0->f_421), 8))
			{
				func_57(iParam0, 8);
			}
			break;
		
		case 7:
			NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
			func_57(iParam0, 8);
			break;
		
		case 8:
			uVar43 = _NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iParam0->f_421.f_1);
			if (IS_SYNCHRONIZED_SCENE_RUNNING(uVar43))
			{
				if ((GET_SYNCHRONIZED_SCENE_PHASE(uVar43) >= 1f || HAS_ANIM_EVENT_FIRED(PLAYER_PED_ID(), 364629851)) || HAS_ANIM_EVENT_FIRED(PLAYER_PED_ID(), 2116425869))
				{
					NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
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

void func_20(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_21(uParam0);
		if (iVar1 != uParam0->f_421.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_421.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_421.f_8.f_2;
		}
		iVar1 = uParam0->f_421.f_8.f_1;
	}
	else if (uParam0->f_421.f_8.f_2 == 5)
	{
		iVar1 = uParam0->f_421.f_8.f_1;
		iVar2 = 3;
		iVar0 = GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (iVar0 == uParam0->f_421.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_421.f_8.f_2 > 6)
		{
			iVar1 = func_21(uParam0);
			uParam0->f_421.f_8.f_4 = GET_GAME_TIMER();
		}
		else
		{
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		if ((GET_GAME_TIMER() - uParam0->f_421.f_8.f_4) >= 90000)
		{
			iVar1 = func_21(uParam0);
			if (iVar1 != uParam0->f_421.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_421.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_421.f_8.f_3 = uParam0->f_421.f_8.f_2;
	uParam0->f_421.f_8.f_2 = iVar0;
	uParam0->f_421.f_8.f_1 = iVar1;
}

int func_21(var uParam0)
{
	if (uParam0->f_421.f_8 == 2)
	{
		return uParam0->f_421.f_8.f_1;
	}
	return (uParam0->f_421.f_8.f_1 + 1 % func_22(uParam0->f_421.f_8));
}

int func_22(int iParam0)
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

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_24()
{
	return func_25(PLAYER_ID());
}

int func_25(var uParam0)
{
	if (GET_ENTITY_MODEL(GET_PLAYER_PED(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_26(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	
	if (uParam0->f_421.f_4 == 6)
	{
		vVar0 = { GET_CONTROL_NORMAL(0, 218), GET_CONTROL_NORMAL(0, 219), 0f };
		fVar3 = VMAG(vVar0);
		if ((uParam0->f_421.f_4 == 6 && !HAS_ANIM_EVENT_FIRED(PLAYER_PED_ID(), -1322051853)) && !func_8(&(uParam0->f_421), 12))
		{
			if (fVar3 >= 0.35f)
			{
				func_31(uParam0);
			}
		}
		if (HAS_ANIM_EVENT_FIRED(PLAYER_PED_ID(), -1322051853))
		{
			func_4(uParam0, 1);
		}
		else if (func_30(uParam0))
		{
			func_4(uParam0, 1);
		}
		else
		{
			_DISABLE_INPUT_GROUP(2);
			DISABLE_CONTROL_ACTION(0, 24, 1);
			DISABLE_CONTROL_ACTION(0, 257, 1);
			DISABLE_CONTROL_ACTION(0, 142, 1);
			DISABLE_CONTROL_ACTION(0, 141, 1);
			DISABLE_CONTROL_ACTION(0, 140, 1);
			DISABLE_CONTROL_ACTION(0, 263, 1);
			DISABLE_CONTROL_ACTION(0, 264, 1);
			DISABLE_CONTROL_ACTION(0, 143, 1);
			DISABLE_CONTROL_ACTION(2, 200, 1);
			if (((((!IS_PAUSE_MENU_ACTIVE() && !func_8(&(uParam0->f_421), 0)) && !func_8(&(uParam0->f_421), 4)) && !func_29()) && !func_27(1)) && uParam0->f_421.f_8.f_2 != 3)
			{
				if (uParam0->f_421.f_5 == -1)
				{
					func_50(&(uParam0->f_421.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
				}
				if (uParam0->f_421.f_4 == 6)
				{
					if (IS_CONTROL_JUST_PRESSED(0, 51))
					{
						func_32(uParam0);
					}
				}
			}
		}
	}
	func_58(&(uParam0->f_421), 9);
}

int func_27(bool bParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!IS_PED_INJURED(PLAYER_PED_ID()))
		{
			if (func_28(PLAYER_PED_ID()))
			{
				if (IS_CONTROL_PRESSED(0, 25) || IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17272.f_130)
	{
		return 0;
	}
	if (IS_CONTROL_PRESSED(0, 19) || (!bParam0 && IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (IS_PC_VERSION())
	{
		if (((IS_CONTROL_PRESSED(0, 166) || IS_CONTROL_PRESSED(0, 167)) || IS_CONTROL_PRESSED(0, 168)) || IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((IS_DISABLED_CONTROL_PRESSED(0, 166) || IS_DISABLED_CONTROL_PRESSED(0, 167)) || IS_DISABLED_CONTROL_PRESSED(0, 168)) || IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(var uParam0)
{
	int iVar0;
	
	if (IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!IS_PED_INJURED(uParam0))
		{
			GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_29()
{
	if (Global_2437364.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_30(var uParam0)
{
	return func_8(&(uParam0->f_421), 9);
}

void func_31(var uParam0)
{
	char* sVar0;
	char* sVar16;
	
	if (((func_21(uParam0) != uParam0->f_421.f_8.f_1 && uParam0->f_421.f_8.f_2 < 6) && uParam0->f_421.f_8.f_2 != 3) && uParam0->f_421.f_8.f_2 != 4)
	{
		func_20(uParam0, 1);
		func_46(uParam0, &sVar0);
		func_45(uParam0, &sVar16);
		uParam0->f_421.f_1 = NETWORK_CREATE_SYNCHRONISED_SCENE(func_44(uParam0), func_43(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
		NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER_PED_ID(), uParam0->f_421.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1000f, 0);
		NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_421.f_1);
		func_13(&(uParam0->f_421), 8);
		_0x2208438012482A1A(PLAYER_PED_ID(), 0, 0);
	}
}

void func_32(var uParam0)
{
	char* sVar0;
	
	uParam0->f_421.f_1 = NETWORK_CREATE_SYNCHRONISED_SCENE(func_44(uParam0), func_43(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
	func_46(uParam0, &sVar0);
	NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER_PED_ID(), uParam0->f_421.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_421.f_1);
	func_9(&(uParam0->f_421.f_5));
	func_57(uParam0, 8);
}

void func_33(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_421.f_4)
	{
		case 4:
		case 8:
			func_38(1);
		
		case 6:
			INVALIDATE_IDLE_CAM();
			_SHOW_WEAPON_WHEEL(0);
			DISPLAY_AMMO_THIS_FRAME(0);
			HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HIDE_HUD_COMPONENT_THIS_FRAME(2);
			_BLOCK_WEAPON_WHEEL_THIS_FRAME();
			func_37();
			if (GET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), &iVar0, 1) && iVar0 != joaat("weapon_unarmed"))
			{
				SET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
			DISABLE_CONTROL_ACTION(0, 37, 1);
			func_35(1);
			func_34();
			break;
	}
}

void func_34()
{
	Global_17272.f_6 = 1;
}

void func_35(bool bParam0)
{
	if (bParam0)
	{
		if (func_36())
		{
			Global_2448756.f_33 = 1;
		}
	}
	else
	{
		Global_2448756.f_33 = 0;
	}
}

bool func_36()
{
	return IS_BIT_SET(Global_2448756.f_2, 11);
}

void func_37()
{
	SET_BIT(&Global_2424, 4);
}

void func_38(int iParam0)
{
	if (func_42())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_15(0))
		{
			func_39(iParam0);
		}
		SET_BIT(&Global_2424, 2);
	}
}

void func_39(int iParam0)
{
	if (func_42())
	{
		return;
	}
	if (Global_14725)
	{
		func_41(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		SET_BIT(&Global_2424, 16);
	}
	if (IS_MOBILE_PHONE_CALL_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		SET_BIT(&Global_2423, 30);
	}
	else
	{
		CLEAR_BIT(&Global_2423, 30);
	}
	if (!func_40())
	{
		Global_14553.f_1 = 3;
	}
}

int func_40()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				GET_MOBILE_PHONE_POSITION(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			SET_MOBILE_PHONE_POSITION(Global_14490);
		}
		else
		{
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
}

bool func_42()
{
	return IS_BIT_SET(Global_1681628, 19);
}

Vector3 func_43(var uParam0)
{
	vector3 vVar0;
	
	vVar0 = { (uParam0[uParam0->f_421.f_2 /*14*/])->f_8.f_3 };
	if (func_24() && uParam0->f_421.f_8 == 0)
	{
		vVar0.z = (vVar0.z - 4f);
	}
	return vVar0;
}

Vector3 func_44(var uParam0)
{
	return (uParam0[uParam0->f_421.f_2 /*14*/])->f_8;
}

void func_45(var uParam0, char* sParam1)
{
	switch (uParam0->f_421.f_8.f_2)
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

void func_46(var uParam0, char* sParam1)
{
	switch (uParam0->f_421.f_8)
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
	switch (uParam0->f_421.f_8)
	{
		case 1:
		case 0:
			switch (uParam0->f_421.f_8.f_1)
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
			switch (uParam0->f_421.f_8.f_1)
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

void func_47(var uParam0)
{
	uParam0->f_421.f_8 = func_49((*uParam0)[uParam0->f_421.f_2 /*14*/]);
	uParam0->f_421.f_8.f_1 = func_48(uParam0);
	uParam0->f_421.f_8.f_2 = 3;
	uParam0->f_421.f_8.f_3 = 3;
}

int func_48(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_421.f_8)
	{
		case 2:
			iVar0 = GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = GET_RANDOM_INT_IN_RANGE(0, func_22(uParam0->f_421.f_8));
	}
	return iVar0;
}

int func_49(int iParam0)
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

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_9(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/] = 1;
			Global_37139[iVar0 /*32*/].f_1 = Global_37340;
			Global_37340++;
			Global_37139[iVar0 /*32*/].f_4 = 0;
			Global_37139[iVar0 /*32*/].f_29 = 0;
			Global_37139[iVar0 /*32*/].f_5 = 0;
			Global_37139[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_37139[iVar0 /*32*/].f_8), sParam2, 16);
			Global_37139[iVar0 /*32*/].f_6 = iParam3;
			Global_37139[iVar0 /*32*/].f_31 = GET_ID_OF_THIS_THREAD();
			Global_37139[iVar0 /*32*/].f_7 = 0;
			Global_37139[iVar0 /*32*/].f_3 = iParam5;
			if (!IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_37139[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_37139[iVar0 /*32*/].f_13), sParam4, 64);
				Global_37139[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_37139[iVar0 /*32*/].f_12 = 0;
				Global_37139[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_37139[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_51(var uParam0)
{
	Stack.Push(!func_8(&(uParam0->f_421), 5));
	Stack.Push(uParam0[uParam0->f_421.f_2 /*14*/]);
	Stack.Push(uParam0->f_421.f_2);
	Call_Loc(uParam0->f_421.f_13);
	return (StackVal || StackVal);
}

int func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK_GET_PLAYER_INDEX(INT_TO_PARTICIPANTINDEX(iVar0));
			if ((iVar1 != PLAYER_ID() && func_53(iVar1, 1, 1)) && func_55(GET_PLAYER_PED(iVar1), uParam0[uParam0->f_421.f_2 /*14*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_53(int iParam0, bool bParam1, bool bParam2)
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

bool func_54(var uParam0)
{
	return uParam0->f_421 & 31 > 0;
}

bool func_55(var uParam0, var uParam1)
{
	return IS_ENTITY_IN_ANGLED_AREA(uParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_56(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_55(PLAYER_PED_ID(), uParam0[uParam0->f_421.f_2 /*14*/]))
		{
			return 1;
		}
		else
		{
			uParam0->f_421.f_2 = (uParam0->f_421.f_2 + 1 % 30);
		}
		iVar0++;
	}
	return 0;
}

void func_57(var uParam0, int iParam1)
{
	uParam0->f_421.f_4 = iParam1;
}

void func_58(var uParam0, int iParam1)
{
	CLEAR_BIT(uParam0, iParam1);
}

void func_59(var uParam0)
{
	if (uParam0->f_421.f_4 == 6)
	{
	}
	else if (uParam0->f_421.f_4 > 4)
	{
		_0x2AED6301F67007D5(PLAYER_PED_ID());
		SET_PED_CAPSULE(PLAYER_PED_ID(), func_60(uParam0));
		uParam0->f_421.f_7 = GET_FRAME_COUNT();
	}
	else if (uParam0->f_421.f_4 > 1)
	{
		SET_PED_CAPSULE(PLAYER_PED_ID(), func_60(uParam0));
		uParam0->f_421.f_7 = GET_FRAME_COUNT();
	}
	else if ((GET_FRAME_COUNT() - uParam0->f_421.f_7) < 5)
	{
		SET_PED_CAPSULE(PLAYER_PED_ID(), func_60(uParam0));
	}
}

float func_60(var uParam0)
{
	switch ((*uParam0)[uParam0->f_421.f_2 /*14*/])
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

void func_61(var uParam0)
{
	func_62(&(uParam0->f_421), 4, func_14());
	func_62(&(uParam0->f_421), 1, IS_ENTITY_DEAD(PLAYER_PED_ID(), 0));
	func_62(&(uParam0->f_421), 3, IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1));
	func_62(&(uParam0->f_421), 0, func_15(0));
	func_62(&(uParam0->f_421), 2, IS_PED_RUNNING(PLAYER_PED_ID()));
}

void func_62(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	uVar0 = iParam1;
	if (bParam2)
	{
		SET_BIT(uParam0, uVar0);
	}
	else
	{
		CLEAR_BIT(uParam0, uVar0);
	}
}

int func_63()
{
	if (!func_76(PLAYER_PED_ID()))
	{
		return 1;
	}
	if (func_65())
	{
		return 1;
	}
	if (Global_1589667 == func_64())
	{
		return 1;
	}
	return 0;
}

int func_64()
{
	return -1;
}

int func_65()
{
	var uVar0;
	
	func_73(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_72())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_71())
	{
		return 1;
	}
	if (func_70(157))
	{
		if (!func_69())
		{
			return 1;
		}
	}
	if (func_70(155))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_66() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_66()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	switch (func_68())
	{
		case 0:
			return func_67();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_67()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_68()
{
	return Global_25765;
}

bool func_69()
{
	return Global_2448756.f_586;
}

int func_70(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_71()
{
	return Global_2458613;
}

bool func_72()
{
	return Global_2448756.f_581;
}

void func_73(var uParam0)
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
					func_74(iVar0);
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

void func_74(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_53(vVar0.y, 1, 1))
		{
			uVar3 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(uVar3))
			{
				if (IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_75(uVar4, &bVar5))
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

int func_75(var uParam0, var uParam1)
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

bool func_76(var uParam0)
{
	return IS_ENTITY_IN_ANGLED_AREA(uParam0, 354.4375f, 4877.2f, -62.34054f, 345.1211f, 4864.095f, -55.11187f, 16f, 0, 1, 0);
}

int func_77()
{
	if (Global_1589667 != func_64())
	{
		if (NETWORK_IS_SCRIPT_ACTIVE("base_heist_seats", Global_1589667, 1, 0))
		{
			return 0;
		}
		NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Global_1589667);
		func_89(0, -1, 0);
		SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		func_78();
		return 1;
	}
	return 0;
}

void func_78()
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { func_88() };
	vVar3 = { func_87() };
	func_84(0, func_86(343.93f, 4875.389f, -60.44f, -90f), -90f, vVar0, vVar3);
	func_84(1, func_86(344.08f, 4874.239f, -60.44f, -86f), -86f, vVar0, vVar3);
	func_84(2, func_86(344.33f, 4873.189f, -60.44f, -78f), -78f, vVar0, vVar3);
	func_84(3, func_86(344.7f, 4872.239f, -60.44f, -72f), -72f, vVar0, vVar3);
	func_84(4, func_86(345.06f, 4871.48f, -60.44f, -67f), -67f, vVar0, vVar3);
	func_84(5, func_86(345.86f, 4870.289f, -60.44f, -60f), -60f, vVar0, vVar3);
	func_84(6, func_86(350.41f, 4867.05f, -60.44f, -26f), -26f, vVar0, vVar3);
	func_84(7, func_86(351.51f, 4866.75f, -60.44f, -17f), -17f, vVar0, vVar3);
	func_84(8, func_86(352.66f, 4866.6f, -60.44f, -10f), -10f, vVar0, vVar3);
	func_84(9, func_86(353.6f, 4866.58f, -60.44f, -4f), -4f, vVar0, vVar3);
	func_84(10, func_86(354.7f, 4866.68f, -60.44f, 4f), 4f, vVar0, vVar3);
	func_84(11, func_86(355.85f, 4866.91f, -60.44f, 10f), 10f, vVar0, vVar3);
	func_84(12, func_86(346.02f, 4876.871f, -60.838f, -102f), -102f, vVar0, vVar3);
	func_84(13, func_86(345.97f, 4875.721f, -60.838f, -93f), -93f, vVar0, vVar3);
	func_84(14, func_86(346.19f, 4874.21f, -60.838f, -81f), -81f, vVar0, vVar3);
	func_84(15, func_86(346.62f, 4873.01f, -60.838f, -73f), -73f, vVar0, vVar3);
	func_84(16, func_86(347.27f, 4871.86f, -60.838f, -62f), -62f, vVar0, vVar3);
	func_84(17, func_86(351.57f, 4868.86f, -60.838f, -20f), -20f, vVar0, vVar3);
	func_84(18, func_86(352.89f, 4868.65f, -60.838f, -9f), -9f, vVar0, vVar3);
	func_84(19, func_86(354.17f, 4868.68f, -60.838f, 0f), 0f, vVar0, vVar3);
	func_84(20, func_86(355.12f, 4868.85f, -60.838f, 10f), 8f, vVar0, vVar3);
	func_84(21, func_86(356.58f, 4869.38f, -60.838f, 10f), 20f, vVar0, vVar3);
	func_84(22, func_86(348.2f, 4876.56f, -61.24f, -101f), -101f, vVar0, vVar3);
	func_84(23, func_86(348.2f, 4875.31f, -61.24f, -88f), -88f, vVar0, vVar3);
	func_84(24, func_86(348.47f, 4874.28f, -61.24f, -76f), -76f, vVar0, vVar3);
	func_84(25, func_86(349.17f, 4872.97f, -61.24f, -60f), -60f, vVar0, vVar3);
	func_84(26, func_86(352.12f, 4870.98f, -61.24f, -20f), -20f, vVar0, vVar3);
	func_84(27, func_86(353.42f, 4870.84f, -61.24f, -6f), -6f, vVar0, vVar3);
	func_84(28, func_86(354.67f, 4870.995f, -61.24f, 8f), 8f, vVar0, vVar3);
	func_84(29, func_86(356.02f, 4871.545f, -61.24f, 25f), 25f, vVar0, vVar3);
	func_79(&Local_47, 8371);
}

void func_79(int iParam0, int iParam1)
{
	iParam0->f_421.f_13 = iParam1;
	func_13(&(iParam0->f_421), 5);
}

bool func_80(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	bool bVar13;
	
	if (iParam1 < 22)
	{
		return 1;
	}
	if (!DOES_ENTITY_EXIST(PLAYER_PED_ID()) || IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (func_83(PLAYER_ID()) || IS_BIT_SET(iLocal_484, 0))
	{
		return 0;
	}
	vVar0 = { uParam0->f_1 };
	vVar3 = { uParam0->f_1.f_3 };
	vVar0.z = 0f;
	vVar3.z = 0f;
	vVar6 = { func_82(vVar0 - vVar3) };
	vVar9 = { GET_ENTITY_FORWARD_VECTOR(PLAYER_PED_ID()) };
	fVar12 = func_81(vVar6, vVar9);
	bVar13 = fVar12 > 0.36f;
	return bVar13;
}

float func_81(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_82(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = VMAG(vParam0);
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

int func_83(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_53(iParam0, 1, 1))
		{
			if (IS_BIT_SET(Global_1686664[iParam0 /*39*/].f_27, 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84(int iParam0, vector3 vParam1, float fParam4, vector3 vParam5, vector3 vParam8)
{
	Local_47[iParam0 /*14*/] = 3;
	Local_47[iParam0 /*14*/].f_1 = { vParam1 + func_85(vParam5, (fParam4 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_3 = { vParam1 + func_85(vParam8, (fParam4 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_6 = 1f;
	Local_47[iParam0 /*14*/].f_8 = { vParam1 };
	Local_47[iParam0 /*14*/].f_8.f_3 = { 0f, 0f, fParam4 };
}

Vector3 func_85(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	fVar3 = SIN(fParam3);
	fVar4 = COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_86(vector3 vParam0, float fParam3)
{
	return vParam0 + func_85(0f, 0.01f, 0.015f, fParam3);
}

Vector3 func_87()
{
	return 0f, -0.7f, -1f;
}

Vector3 func_88()
{
	return 0f, 0.1f, 1f;
}

int func_89(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
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
		if (!func_90())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
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
				if (func_72())
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
				if (func_70(155))
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
			else if (!NETWORK_IS_IN_SESSION())
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
		WAIT(0);
		iVar0 = NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
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
	else if (!NETWORK_IS_IN_SESSION())
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

bool func_90()
{
	return Global_1312844;
}

