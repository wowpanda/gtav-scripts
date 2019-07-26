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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<24> Local_40[2];
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	bool bLocal_106 = 0;
	vector3 vLocal_107[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_114[2] = { 0, 0 };
	int iLocal_117[2] = { 0, 0 };
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	vVar2 = { ScriptParam_0.f_1[0 /*3*/] };
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("launcher_carwash")) > 1)
	{
		TERMINATE_THIS_THREAD();
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else if (HAS_FORCE_CLEANUP_OCCURRED(99))
	{
		func_70();
	}
	if (Global_2621550)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-949873222) == 0)
		{
			REQUEST_SCRIPT_WITH_NAME_HASH(-949873222);
			while (!HAS_SCRIPT_WITH_NAME_HASH_LOADED(-949873222))
			{
				WAIT(0);
			}
			START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-949873222, &ScriptParam_0, 23, 1424);
		}
		TERMINATE_THIS_THREAD();
	}
	if (func_69(PLAYER_PED_ID()))
	{
	}
	func_63();
	while (true)
	{
		func_69(PLAYER_PED_ID());
		if (func_62(PLAYER_PED_ID(), vVar2, 0) > (100f + 20f))
		{
			func_70();
		}
		bVar0 = false;
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			uVar1 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
			bVar0 = (func_59(uVar1) || func_58(uVar1));
			bLocal_106 = DOES_VEHICLE_HAVE_ROOF(uVar1);
			func_57(bLocal_106);
		}
		iVar5 = 0;
		while (iVar5 < Local_40)
		{
			func_56(iVar5);
			iVar5++;
		}
		if (func_1(&Local_40, &uLocal_89, bVar0, 0, 1, 1424))
		{
			func_70();
		}
		WAIT(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_51(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_44(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_41(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (GET_MISSION_FLAG() && uParam1->f_16 == 0))
						{
							func_40(uParam1, 6);
						}
						else if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0)
						{
							func_40(uParam1, 8);
						}
						else if (bParam2)
						{
							func_40(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_40(uParam1, 2);
						}
						else if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_40(uParam1, 1);
						}
						else if (func_25())
						{
							func_40(uParam1, 7);
						}
						else
						{
							func_40(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_24(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_6);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_13(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_30() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_1);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_3);
			}
			if ((func_18(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_5);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_4);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) == 0)
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_12())
				{
					func_22(uParam1, uParam1->f_7);
				}
				else
				{
					func_22(uParam1, uParam1->f_8);
				}
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_9(iParam0[uParam1->f_12 /*24*/]))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			SET_INPUT_EXCLUSIVE(2, 51);
			DISABLE_CONTROL_ACTION(0, 101, 1);
			func_8();
			if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0)
			{
				func_40(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_40(uParam1, 2);
				return 0;
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			if (Global_68807)
			{
				return 0;
			}
			if (func_5(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0) || func_4(PLAYER_PED_ID(), 0) != -1)
				{
					func_40(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (GET_MISSION_FLAG() && uParam1->f_16 == 0))
			{
				func_40(uParam1, 6);
				return 0;
			}
			if (func_25())
			{
				func_40(uParam1, 7);
				return 0;
			}
			if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_40(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_13(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0) && !IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER_PED_ID()))
				{
					return 0;
				}
			}
			if (IS_PAUSE_MENU_ACTIVE() || IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 0;
			}
			if (IS_PED_ON_FOOT(PLAYER_PED_ID()))
			{
				if ((IS_PED_FALLING(PLAYER_PED_ID()) || IS_PED_JUMPING(PLAYER_PED_ID())) || IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER_PED_ID()))
				{
					return 0;
				}
				if ((IS_PED_RUNNING_RAGDOLL_TASK(PLAYER_PED_ID()) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_GETTING_UP(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (IS_PED_CLIMBING(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (IS_PED_DUCKING(PLAYER_PED_ID()) || IS_PED_SWIMMING(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (GET_ENTITY_SPEED(PLAYER_PED_ID()) > 0.05f)
				{
					return 0;
				}
			}
			if (IS_CONTROL_JUST_PRESSED(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_9(iParam0[uParam1->f_12 /*24*/]))
				{
					func_40(uParam1, 9);
				}
				else
				{
					func_40(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_24(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_40(uParam1, 0);
				return 1;
			}
			CLEAR_HELP(1);
			CLEAR_AREA_OF_PROJECTILES(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), 20f, 0);
			if (!IS_STRING_NULL_OR_EMPTY((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				REQUEST_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!HAS_SCRIPT_LOADED((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_8();
					if (func_69(PLAYER_PED_ID()))
					{
						if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0) && !Global_71590)
						{
							func_2(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, 1, 0);
							SET_VEHICLE_BRAKE_LIGHTS(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 0);
						}
					}
					SET_INPUT_EXCLUSIVE(2, 51);
					REQUEST_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5);
					DISABLE_CONTROL_ACTION(0, 101, 1);
					DISABLE_CONTROL_ACTION(0, 75, 1);
					DISABLE_CONTROL_ACTION(0, 23, 1);
					WAIT(0);
				}
				if (bParam3)
				{
					DO_SCREEN_FADE_OUT(250);
				}
				if (HAS_SCRIPT_LOADED((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!IS_SCREEN_FADED_OUT())
						{
							if (func_69(PLAYER_PED_ID()))
							{
								if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0) && !Global_71590)
								{
									func_2(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, 1, 0);
									SET_VEHICLE_BRAKE_LIGHTS(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 0);
								}
							}
							SET_INPUT_EXCLUSIVE(2, 51);
							DISABLE_CONTROL_ACTION(0, 101, 1);
							DISABLE_CONTROL_ACTION(0, 75, 1);
							DISABLE_CONTROL_ACTION(0, 23, 1);
							func_8();
							WAIT(0);
						}
					}
					START_NEW_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					SET_SCRIPT_AS_NO_LONGER_NEEDED((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	DISABLE_CONTROL_ACTION(0, 71, 1);
	DISABLE_CONTROL_ACTION(0, 72, 1);
	DISABLE_CONTROL_ACTION(0, 76, 1);
	DISABLE_CONTROL_ACTION(0, 73, 1);
	DISABLE_CONTROL_ACTION(0, 59, 1);
	DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		DISABLE_CONTROL_ACTION(0, 69, 1);
		DISABLE_CONTROL_ACTION(0, 70, 1);
		DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	DISABLE_CONTROL_ACTION(0, 74, 1);
	DISABLE_CONTROL_ACTION(0, 86, 1);
	DISABLE_CONTROL_ACTION(0, 81, 1);
	DISABLE_CONTROL_ACTION(0, 82, 1);
	DISABLE_CONTROL_ACTION(0, 138, 1);
	DISABLE_CONTROL_ACTION(0, 136, 1);
	DISABLE_CONTROL_ACTION(0, 114, 1);
	DISABLE_CONTROL_ACTION(0, 107, 1);
	DISABLE_CONTROL_ACTION(0, 110, 1);
	DISABLE_CONTROL_ACTION(0, 89, 1);
	DISABLE_CONTROL_ACTION(0, 89, 1);
	DISABLE_CONTROL_ACTION(0, 87, 1);
	DISABLE_CONTROL_ACTION(0, 88, 1);
	DISABLE_CONTROL_ACTION(0, 113, 1);
	DISABLE_CONTROL_ACTION(0, 115, 1);
	DISABLE_CONTROL_ACTION(0, 116, 1);
	DISABLE_CONTROL_ACTION(0, 117, 1);
	DISABLE_CONTROL_ACTION(0, 118, 1);
	DISABLE_CONTROL_ACTION(0, 119, 1);
	DISABLE_CONTROL_ACTION(0, 131, 1);
	DISABLE_CONTROL_ACTION(0, 132, 1);
	DISABLE_CONTROL_ACTION(0, 123, 1);
	DISABLE_CONTROL_ACTION(0, 126, 1);
	DISABLE_CONTROL_ACTION(0, 129, 1);
	DISABLE_CONTROL_ACTION(0, 130, 1);
	DISABLE_CONTROL_ACTION(0, 133, 1);
	DISABLE_CONTROL_ACTION(0, 134, 1);
	_0x17FCA7199A530203();
	func_3(uParam0);
	if ((GET_GAME_TIMER() - Global_29) > 500)
	{
		_SET_VEHICLE_HALT(uParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GET_GAME_TIMER();
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		if (ABSF(GET_ENTITY_SPEED(uParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_3(var uParam0)
{
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		if (_HAS_VEHICLE_ROCKET_BOOST(uParam0))
		{
			if (_IS_VEHICLE_ROCKET_BOOST_ACTIVE(uParam0))
			{
				_SET_VEHICLE_ROCKET_BOOST_ACTIVE(uParam0, 0);
			}
		}
	}
}

int func_4(int iParam0, int iParam1)
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

int func_5(bool bParam0)
{
	if (bParam0)
	{
		if (func_7())
		{
			return 1;
		}
	}
	if (func_6(14))
	{
		return 1;
	}
	return 0;
}

bool func_6(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_7()
{
	if (Global_105510)
	{
		return 1;
	}
	if (!func_6(14) && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	Global_17272.f_6 = 1;
}

int func_9(var uParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	
	uVar4 = PLAYER_PED_ID();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_11(uParam0->f_12))
	{
		return 1;
	}
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		uVar3 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
		if (func_69(uVar3))
		{
			vVar0 = { GET_ENTITY_ROTATION(uVar3, 2) };
			if (vVar0.y > 45f || vVar0.y < -45f)
			{
				return 0;
			}
			uVar4 = uVar3;
		}
	}
	vVar0 = { GET_ENTITY_FORWARD_VECTOR(uVar4) };
	if (func_10(uParam0->f_12, vVar0) > COS(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_10(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

int func_11(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	var uVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		uVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
		return IS_ENTITY_UPRIGHT(uVar0, 1119092736);
	}
	return IS_ENTITY_UPRIGHT(PLAYER_PED_ID(), 1119092736);
}

int func_13(var uParam0, var uParam1, var uParam2)
{
	if (IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		CLEAR_HELP(1);
		func_14(uParam1, uParam2);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_14(var uParam0, var uParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	ADD_TEXT_COMPONENT_INTEGER(uParam1);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_15(var uParam0)
{
	if (IS_STRING_NULL_OR_EMPTY(uParam0->f_14))
	{
		return 0;
	}
	if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (ARE_STRINGS_EQUAL(*uParam0, uParam0->f_14) || ARE_STRINGS_EQUAL(uParam0->f_2, uParam0->f_14))
	{
		return func_17(uParam0->f_14, uParam0->f_15);
	}
	return func_16(uParam0->f_14);
}

var func_16(var uParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

var func_17(var uParam0, var uParam1)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	ADD_TEXT_COMPONENT_INTEGER(uParam1);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_18(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			return 1;
		}
		if (func_4(PLAYER_PED_ID(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_21(PLAYER_PED_ID(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_19(uParam0->f_16, 2f) };
	return !IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}

struct<8> func_19(struct<8> Param0, float fParam8)
{
	struct<8> Var0;
	vector3 vVar8;
	
	Var0 = 2;
	vVar8 = { func_20(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam8, fParam8, fParam8) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - vVar8 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + vVar8 };
	Var0.f_7 = (Param0.f_7 + (fParam8 * 2f));
	return Var0;
}

Vector3 func_20(vector3 vParam0)
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

bool func_21(var uParam0, vector3 vParam1, float fParam4)
{
	return VDIST2(GET_ENTITY_COORDS(uParam0, 1), vParam1) <= (fParam4 * fParam4);
}

int func_22(var uParam0, var uParam1)
{
	if (IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		CLEAR_HELP(1);
		func_23(uParam1);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_23(var uParam0)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_24(var uParam0)
{
	if (func_15(uParam0))
	{
		CLEAR_HELP(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_25()
{
	var uVar0;
	
	if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	uVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
	if (IS_ENTITY_ON_FIRE(uVar0))
	{
		return 1;
	}
	if (func_29(uVar0))
	{
		return 1;
	}
	if (func_26(uVar0, 3))
	{
		return 1;
	}
	return !IS_VEHICLE_DRIVEABLE(uVar0, 0);
}

int func_26(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_27(uParam0))
	{
		iVar0 = 0;
		if (IS_VEHICLE_TYRE_BURST(uParam0, 0, 0) && IS_VEHICLE_TYRE_BURST(uParam0, 1, 0))
		{
			return 1;
		}
		if (IS_VEHICLE_TYRE_BURST(uParam0, 4, 0) && IS_VEHICLE_TYRE_BURST(uParam0, 5, 0))
		{
			return 1;
		}
		if (IS_VEHICLE_TYRE_BURST(uParam0, 0, 0))
		{
			iVar0++;
		}
		if (IS_VEHICLE_TYRE_BURST(uParam0, 1, 0))
		{
			iVar0++;
		}
		if (IS_VEHICLE_TYRE_BURST(uParam0, 4, 0))
		{
			iVar0++;
		}
		if (IS_VEHICLE_TYRE_BURST(uParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(var uParam0)
{
	if (func_28(uParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!IS_ENTITY_ON_FIRE(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (!IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
		else if (!IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!IS_ENTITY_ON_FIRE(uParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_30()
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		return func_37(PLAYER_ID());
	}
	switch (func_32())
	{
		case 2:
			return func_31(2);
		
		case 0:
			return func_31(0);
		
		case 1:
			return func_31(1);
		
		default:
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_53668[iParam0];
}

int func_32()
{
	func_33();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_33()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_36(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_35(PLAYER_PED_ID());
			if (func_34(iVar0) && (!func_6(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_34(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)
{
	var uVar0;
	
	uVar0 = func_38(iParam0);
	return uVar0;
}

int func_38(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER_ID())
		{
			return unk_0xCCADB536D2A7894D(-1);
		}
		else if (func_39(iParam0))
		{
			return Global_1589819[iParam0 /*818*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return IS_BIT_SET(Global_2437364.f_1, iParam0);
	}
	return 1;
}

void func_40(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_24(uParam0);
}

int func_41(var uParam0)
{
	func_69(PLAYER_PED_ID());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (func_4(PLAYER_PED_ID(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return func_21(PLAYER_PED_ID(), uParam0->f_1, uParam0->f_10);
}

bool func_42()
{
	return GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

bool func_43(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

int func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_50())
		{
			return 0;
		}
	}
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (Global_56488)
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_49(0))
	{
		return 0;
	}
	if (func_45(PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	if (func_48(iParam0))
	{
		return 1;
	}
	if (func_46(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_47(iParam0, 9);
	}
	return 0;
}

var func_47(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

int func_48(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_49(int iParam0)
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

int func_50()
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	return 1;
}

void func_51(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_53(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_52(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_52(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	
	fVar1 = (360f / TO_FLOAT(iParam8));
	vVar2 = { vParam0 };
	vVar5 = { vParam0 };
	fVar8 = 0f;
	vVar2 = { vParam0 };
	vVar2.x = (vVar2.x + (SIN((fVar8 - fVar1)) * fParam3));
	vVar2.y = (vVar2.y + (COS((fVar8 - fVar1)) * fParam3));
	iVar0 = 0;
	while (iVar0 <= iParam8)
	{
		vVar5 = { vParam0 };
		vVar5.x = (vVar5.x + (SIN(fVar8) * fParam3));
		vVar5.y = (vVar5.y + (COS(fVar8) * fParam3));
		DRAW_DEBUG_LINE(vVar2, vVar5, iParam4, iParam5, iParam6, iParam7);
		vVar2 = { vVar5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

void func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_54(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_54(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13[8];
	int iVar38;
	
	if (fParam6 == 0f)
	{
		return;
	}
	vVar0 = { func_20(vParam3 - vParam0) };
	vVar3 = { func_55(vVar0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	vVar7 = { vParam0 };
	vVar10 = { vParam3 };
	vVar10.z = vParam0.z;
	vVar13[0 /*3*/] = { vVar7 - vVar3 * Vector(fVar6, fVar6, fVar6) };
	vVar13[1 /*3*/] = { vVar7 + vVar3 * Vector(fVar6, fVar6, fVar6) };
	vVar13[2 /*3*/] = { vVar10 + vVar3 * Vector(fVar6, fVar6, fVar6) };
	vVar13[3 /*3*/] = { vVar10 - vVar3 * Vector(fVar6, fVar6, fVar6) };
	DRAW_DEBUG_LINE(vVar13[0 /*3*/], vVar13[1 /*3*/], uParam7, uParam8, uParam9, uParam10);
	DRAW_DEBUG_LINE(vVar13[1 /*3*/], vVar13[2 /*3*/], uParam7, uParam8, uParam9, uParam10);
	DRAW_DEBUG_LINE(vVar13[2 /*3*/], vVar13[3 /*3*/], uParam7, uParam8, uParam9, uParam10);
	DRAW_DEBUG_LINE(vVar13[3 /*3*/], vVar13[0 /*3*/], uParam7, uParam8, uParam9, uParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		vVar13[(4 + iVar38) /*3*/] = { vVar13[iVar38 /*3*/] };
		vVar13[(4 + iVar38) /*3*/].f_2 = vParam3.z;
		iVar38++;
	}
	DRAW_DEBUG_LINE(vVar13[4 /*3*/], vVar13[5 /*3*/], uParam7, uParam8, uParam9, uParam10);
	DRAW_DEBUG_LINE(vVar13[5 /*3*/], vVar13[6 /*3*/], uParam7, uParam8, uParam9, uParam10);
	DRAW_DEBUG_LINE(vVar13[6 /*3*/], vVar13[7 /*3*/], uParam7, uParam8, uParam9, uParam10);
	DRAW_DEBUG_LINE(vVar13[7 /*3*/], vVar13[4 /*3*/], uParam7, uParam8, uParam9, uParam10);
	DRAW_DEBUG_LINE(vVar13[0 /*3*/], vVar13[4 /*3*/], uParam7, uParam8, uParam9, uParam10);
	DRAW_DEBUG_LINE(vVar13[1 /*3*/], vVar13[5 /*3*/], uParam7, uParam8, uParam9, uParam10);
	DRAW_DEBUG_LINE(vVar13[2 /*3*/], vVar13[6 /*3*/], uParam7, uParam8, uParam9, uParam10);
	DRAW_DEBUG_LINE(vVar13[3 /*3*/], vVar13[7 /*3*/], uParam7, uParam8, uParam9, uParam10);
}

Vector3 func_55(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_56(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	int iVar8;
	
	if (!func_41(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (iLocal_117[iParam0] == 0)
	{
		if (GET_GAME_TIMER() > uLocal_114[iParam0])
		{
			iLocal_117[iParam0] = _START_SHAPE_TEST_CAPSULE_2(vLocal_107[iParam0 /*3*/], vLocal_107[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 4);
		}
	}
	else
	{
		iVar0 = GET_SHAPE_TEST_RESULT(iLocal_117[iParam0], &iVar8, &uVar2, &uVar5, &uVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (DOES_ENTITY_EXIST(uVar1))
				{
					if (IS_ENTITY_A_VEHICLE(uVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_117[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_117[iParam0] = 0;
		}
		uLocal_114[iParam0] = GET_GAME_TIMER() + 250;
	}
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_58(var uParam0)
{
	if (!IS_THIS_MODEL_A_CAR(GET_ENTITY_MODEL(uParam0)))
	{
		return 1;
	}
	if (IS_VEHICLE_DOOR_DAMAGED(uParam0, 0))
	{
		return 1;
	}
	if (IS_VEHICLE_DOOR_DAMAGED(uParam0, 1))
	{
		return 1;
	}
	if (IS_VEHICLE_DOOR_DAMAGED(uParam0, 2))
	{
		return 1;
	}
	if (IS_VEHICLE_DOOR_DAMAGED(uParam0, 3))
	{
		return 1;
	}
	if (IS_VEHICLE_A_CONVERTIBLE(uParam0, 1))
	{
		if (GET_CONVERTIBLE_ROOF_STATE(uParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!func_28(uParam0))
	{
		return 0;
	}
	if (!DOES_VEHICLE_HAVE_ROOF(uParam0))
	{
		return 1;
	}
	if (IS_VEHICLE_ATTACHED_TO_TRAILER(uParam0))
	{
		return 1;
	}
	if (!IS_THIS_MODEL_A_CAR(GET_ENTITY_MODEL(uParam0)))
	{
		return 1;
	}
	if (IS_ENTITY_ON_FIRE(uParam0))
	{
		return 1;
	}
	if (func_60(uParam0))
	{
		return 1;
	}
	GET_MODEL_DIMENSIONS(GET_ENTITY_MODEL(uParam0), &vVar0, &vVar3);
	if (ABSF((vVar3.x - vVar0.x)) > 3.4f)
	{
		return 1;
	}
	if (ABSF((vVar3.z - vVar0.z)) > 2.9f)
	{
		return 1;
	}
	if (Global_71590)
	{
		if (!NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
		{
			return 0;
		}
	}
	if (IS_VEHICLE_A_CONVERTIBLE(uParam0, 1) && !DOES_VEHICLE_HAVE_ROOF(uParam0))
	{
		return 1;
	}
	if (!IS_VEHICLE_A_CONVERTIBLE(uParam0, 1) && !DOES_VEHICLE_HAVE_ROOF(uParam0))
	{
		return 1;
	}
	if (GET_ENTITY_MODEL(uParam0) == joaat("btype") || GET_ENTITY_MODEL(uParam0) == joaat("btype3"))
	{
		if (((((func_28(GET_PED_IN_VEHICLE_SEAT(uParam0, 3, 0)) || func_28(GET_PED_IN_VEHICLE_SEAT(uParam0, 4, 0))) || func_28(GET_PED_IN_VEHICLE_SEAT(uParam0, 5, 0))) || func_28(GET_PED_IN_VEHICLE_SEAT(uParam0, 6, 0))) || func_28(GET_PED_IN_VEHICLE_SEAT(uParam0, 7, 0))) || func_28(GET_PED_IN_VEHICLE_SEAT(uParam0, 8, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(var uParam0)
{
	int iVar0;
	
	iVar0 = GET_ENTITY_MODEL(uParam0);
	if (func_61(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 2))
		{
			return 1;
		}
		if (IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 3) && IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !DOES_VEHICLE_HAVE_ROOF(uParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 3) && !IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_61(int iParam0)
{
	if (!IS_THIS_MODEL_A_CAR(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case joaat("dune3"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("vigilante"):
		case joaat("deluxo"):
		case joaat("caracara"):
		case joaat("scramjet"):
		case joaat("menacer"):
		case -1349095620:
		case -941272559:
		case -208911803:
		case -682108547:
			return 1;
		
		default:
	}
	return 0;
}

float func_62(var uParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;
	
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		vVar0 = { GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(uParam0, 0) };
	}
	return GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, iParam4);
}

void func_63()
{
	func_67(&(Local_40[0 /*24*/]), 1, "Carwash1", func_68(156), 15, "", 0, 4f);
	func_67(&(Local_40[1 /*24*/]), 1, "Carwash2", func_68(157), 15, "", 0, 4f);
	func_65(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_65(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_64(&uLocal_89, 0);
	vLocal_107[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	vLocal_107[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_64(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_71590)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (IS_PS3_VERSION() || IS_ORBIS_VERSION())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (IS_XBOX360_VERSION() || IS_DURANGO_VERSION())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_65(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_12 = { func_20(vParam1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_66(fParam4, 0f, 360f);
}

float func_66(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_67(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { vParam3 };
	uParam0->f_4 = sParam7;
	uParam0->f_9 = iParam6;
	uParam0->f_7 = iParam8;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam9 > 0f)
	{
		uParam0->f_10 = fParam9;
	}
}

Vector3 func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_26140[iVar0 /*23*/][0 /*3*/];
}

bool func_69(var uParam0)
{
	if (!DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	return !IS_ENTITY_DEAD(uParam0, 0);
}

void func_70()
{
	func_71(&Local_40);
	func_24(&uLocal_89);
	TERMINATE_THIS_THREAD();
}

void func_71(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_72(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_72(var uParam0)
{
	*uParam0 = 0;
}

