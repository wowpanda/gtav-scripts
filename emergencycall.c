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
	char* sLocal_20 = NULL;
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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_48 = 0;
	var uLocal_49 = 0;
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
	sLocal_20 = "NULL";
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
	if (HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		WAIT(0);
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (CREATE_INCIDENT_WITH_ENTITY(7, PLAYER_PED_ID(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (CREATE_INCIDENT(7, vLocal_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (NETWORK_IS_GAME_IN_PROGRESS())
					{
						if ((func_7(PLAYER_ID(), 0) && func_4(PLAYER_ID()) == 5) && Global_1687979)
						{
							if (Global_1687980 == 0)
							{
								Global_1687980 = 1;
							}
							iLocal_43 = 5;
						}
						else if (CREATE_INCIDENT_WITH_ENTITY(5, PLAYER_PED_ID(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (CREATE_INCIDENT(5, vLocal_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (CREATE_INCIDENT_WITH_ENTITY(3, PLAYER_PED_ID(), 4, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (CREATE_INCIDENT(3, vLocal_45, 4, 3f, &uLocal_49, 0, 0))
					{
						if (Global_90209.f_358 == GET_HASH_KEY("AGENCY_PREP_1") || (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("agency_prep1")) > 0 && func_3(0)))
						{
							Global_90209.f_358 = GET_HASH_KEY("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_90139 = 1;
						}
						iLocal_48 = GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (GET_GAME_TIMER() > (iLocal_48 + 60000) || !IS_INCIDENT_VALID(uLocal_49))
					{
						func_1();
					}
					else if (IS_PLAYER_PLAYING(PLAYER_ID()))
					{
						if (!IS_PLAYER_CONTROL_ON(PLAYER_ID()))
						{
							if (IS_INCIDENT_VALID(uLocal_49))
							{
								DELETE_INCIDENT(uLocal_49);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

int func_3(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

int func_4(int iParam0)
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (GET_GAME_TIMER() > iLocal_48 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_48 = GET_GAME_TIMER();
			break;
		
		case 1:
			while (!func_18())
			{
				WAIT(0);
				if (func_17() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_17() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_17() == 5)
				{
					iLocal_43 = 2;
				}
				if (GET_GAME_TIMER() > iLocal_48 + 30000)
				{
					iLocal_48 = GET_GAME_TIMER();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				func_10(PLAYER_PED_ID(), &vLocal_45, &uVar0);
			}
			iLocal_48 = GET_GAME_TIMER();
			break;
	}
}

void func_10(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	vector3 vVar25;
	var uVar28;
	
	fVar18 = 5f;
	iVar0 = 1;
	iVar19 = 0;
	while (iVar19 < 2)
	{
		switch (iVar19)
		{
			case 0:
				GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), iVar0, uParam1, &fVar16, &iVar1, 5, 1077936128, 0);
				GET_CLOSEST_ROAD(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
				if (GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				vVar10 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) - GET_ENTITY_COORDS(uParam0, 1) };
				fVar14 = GET_HEADING_FROM_VECTOR_2D(vVar10.x, vVar10.y);
				fVar15 = (fVar16 + 180f);
				if (fVar15 > 360f)
				{
					fVar15 = (fVar15 - 360f);
				}
				if (func_11(fVar14, fVar16, 90f))
				{
					*uParam2 = fVar16;
				}
				else
				{
					*uParam2 = fVar15;
				}
				if (fVar13 < 0f)
				{
					fVar17 = 0f;
				}
				else if (_GET_IS_SLOW_ROAD_FLAG(GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar17 = 0f;
				}
				else
				{
					fVar17 = (fVar18 * TO_FLOAT((iVar1 / 2)));
					if (fVar17 == 0f)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (iVar1 == 5)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 294f, -895f, 28f, 1) < 25f || GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (VDIST(_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, *uParam2, fVar17, 0f, 0f), GET_ENTITY_COORDS(PLAYER_PED_ID(), 1)) > VDIST(_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, *uParam2, -fVar17, 0f, 0f), GET_ENTITY_COORDS(PLAYER_PED_ID(), 1)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, *uParam2, fVar17, 0f, 0f) };
				uVar20 = START_SHAPE_TEST_CAPSULE(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (GET_SHAPE_TEST_RESULT(uVar20, &iVar21, &vVar25, &uVar22, &uVar28) == 2)
					{
						if (iVar21 != 0)
						{
							if (vVar25.z > (uParam1->f_2 + 8.5f))
							{
								iVar19++;
							}
							else
							{
								iVar0++;
								iVar19 = 0;
							}
						}
						else
						{
							iVar19++;
						}
					}
				}
				else
				{
					iVar19++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
{
	if (func_16())
	{
		return;
	}
	if (Global_14725)
	{
		func_14(0, 0);
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
	if (!func_13())
	{
		Global_14553.f_1 = 3;
	}
}

int func_13()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
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

bool func_16()
{
	return IS_BIT_SET(Global_1681628, 19);
}

int func_17()
{
	return Global_16883;
}

int func_18()
{
	if (Global_15866 == 0)
	{
		return 1;
	}
	return 0;
}

