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
	int iLocal_18 = 0;
	vector3 vLocal_19 = { 0f, 0f, 0f };
	int iLocal_22 = 0;
	var uScriptParam_0 = 0;
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
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_1383928, 1))
		{
			func_18();
		}
		else
		{
			NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
			func_15(0, -1, 0);
			SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
			iLocal_22 = 1;
		}
	}
	else if (HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
	}
	while (true)
	{
		WAIT(0);
		if (iLocal_22 == 1)
		{
			if (func_3())
			{
				func_18();
			}
		}
		if (DOES_ENTITY_EXIST(uScriptParam_0))
		{
			if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0))
						{
							vLocal_19 = { GET_ENTITY_COORDS(uScriptParam_0, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((HAS_OBJECT_BEEN_BROKEN(uScriptParam_0, 0) && IS_ENTITY_VISIBLE(uScriptParam_0)) && !IS_ENTITY_A_MISSION_ENTITY(uScriptParam_0))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_18();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = GET_RANDOM_INT_IN_RANGE(70, 121);
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = GET_RANDOM_INT_IN_RANGE(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	SET_BIT(&uVar2, 3);
	SET_BIT(&uVar2, 4);
	REQUEST_MODEL(iVar0);
	while (!HAS_MODEL_LOADED(iVar0))
	{
		WAIT(0);
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		CREATE_AMBIENT_PICKUP(iVar1, GET_SAFE_PICKUP_COORDS(vLocal_19, 1067030938, 1069547520), uVar2, iVar3, iVar0, 0, 0);
	}
	else
	{
		CREATE_PICKUP(iVar1, GET_SAFE_PICKUP_COORDS(vLocal_19, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
	}
}

int func_2(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (TO_FLOAT(iParam0) * Global_262145);
				iParam0 = ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_3()
{
	var uVar0;
	
	func_11(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_10())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_9())
	{
		return 1;
	}
	if (func_8(157))
	{
		if (!func_7())
		{
			return 1;
		}
	}
	if (func_8(155))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	switch (func_6())
	{
		case 0:
			return func_5();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_5()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_6()
{
	return Global_25765;
}

bool func_7()
{
	return Global_2448756.f_586;
}

int func_8(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_9()
{
	return Global_2458613;
}

bool func_10()
{
	return Global_2448756.f_581;
}

void func_11(var uParam0)
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
					func_12(iVar0);
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

void func_12(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_14(vVar0.y, 1, 1))
		{
			uVar3 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(uVar3))
			{
				if (IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_13(uVar4, &bVar5))
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

int func_13(var uParam0, var uParam1)
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

int func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(uParam0))
		{
			if (bParam1)
			{
				if (!IS_PLAYER_PLAYING(uParam0))
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

int func_15(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_17();
			}
			else
			{
				return 0;
			}
		}
		if (!func_16())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
				if (func_10())
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
				if (func_8(155))
				{
					if (!bParam2)
					{
						func_17();
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
					func_17();
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
				func_17();
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
			func_17();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_16()
{
	return Global_1312844;
}

void func_17()
{
	TERMINATE_THIS_THREAD();
}

void func_18()
{
	TERMINATE_THIS_THREAD();
}

