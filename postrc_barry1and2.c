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
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_52 = { 0f, 0f, 0f };
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	vLocal_49 = { 189.5964f, -956.0344f, 29.5771f };
	vLocal_52 = { 190.2424f, -956.379f, 28.63f };
	DISABLE_CONTROL_ACTION(0, 26, 1);
	if (func_24(PLAYER_PED_ID()))
	{
		if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) != 0)
		{
			SET_PLAYER_WANTED_LEVEL(PLAYER_ID(), 0, 0);
		}
	}
	if (HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_21(0);
	}
	REQUEST_ANIM_DICT(sLocal_44);
	REQUEST_ADDITIONAL_TEXT("BARY1", 7);
	while (!HAS_ANIM_DICT_LOADED(sLocal_44) || !HAS_ADDITIONAL_TEXT_LOADED(7))
	{
		DISABLE_CONTROL_ACTION(0, 26, 1);
		WAIT(0);
	}
	DISABLE_CONTROL_ACTION(0, 26, 1);
	func_24(PLAYER_PED_ID());
	iLocal_46 = GET_GAME_TIMER() + 13000;
	iLocal_47 = GET_RANDOM_INT_IN_RANGE(0, 5);
	func_18();
	while (!func_13(&uLocal_43, 49, vLocal_52, func_17(1.12f), 0))
	{
		DISABLE_CONTROL_ACTION(0, 26, 1);
		WAIT(0);
	}
	DISABLE_CONTROL_ACTION(0, 26, 1);
	func_12();
	iLocal_48 = GET_GAME_TIMER() + 1000;
	DISABLE_CONTROL_ACTION(0, 26, 1);
	while (true)
	{
		func_24(PLAYER_PED_ID());
		if (GET_GAME_TIMER() < iLocal_48)
		{
			DISABLE_CONTROL_ACTION(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(PLAYER_PED_ID(), vLocal_52, 1) > 70f)
		{
			func_1(&uLocal_40, 0);
			func_1(&uLocal_41, 0);
			func_1(&uLocal_42, 0);
			func_21(0);
		}
		WAIT(0);
	}
}

void func_1(var uParam0, bool bParam1)
{
	if (DOES_ENTITY_EXIST(*uParam0))
	{
		if (IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			DETACH_ENTITY(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		}
		else
		{
			_MARK_OBJECT_FOR_DELETION(*uParam0);
		}
	}
}

float func_2(var uParam0, vector3 vParam1, int iParam4)
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

int func_3()
{
	var uVar0;
	
	if (((((func_10(PLAYER_PED_ID()) && func_10(uLocal_43)) && !func_9()) && GET_GAME_TIMER() > iLocal_46) && func_8(PLAYER_PED_ID(), uLocal_43, 1) < 20f) && !GET_MISSION_FLAG())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	SET_BIT(&Global_14732, 0);
	Global_15869 = iParam3;
	StringCopy(&Global_15856, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		vVar0 = { GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(uParam0, 0) };
	}
	if (!IS_ENTITY_DEAD(uParam1, 0))
	{
		vVar3 = { GET_ENTITY_COORDS(uParam1, 1) };
	}
	else
	{
		vVar3 = { GET_ENTITY_COORDS(uParam1, 0) };
	}
	return GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, iParam2);
}

int func_9()
{
	if (Global_15866 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
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

void func_11()
{
	if (IS_EXPLOSION_IN_SPHERE(-1, vLocal_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			FREEZE_ENTITY_POSITION(uLocal_43, 0);
			APPLY_DAMAGE_TO_PED(uLocal_43, 1000, 1, 0);
		}
		if (func_10(uLocal_41))
		{
			FREEZE_ENTITY_POSITION(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			FREEZE_ENTITY_POSITION(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!IS_ENTITY_A_MISSION_ENTITY(uLocal_43))
		{
			SET_ENTITY_AS_MISSION_ENTITY(uLocal_43, 1, 0);
		}
		SET_PED_PROP_INDEX(uLocal_43, 1, 0, 0, 0);
		SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_43, 1);
		SET_PED_MONEY(uLocal_43, 0);
		SET_PED_CAN_BE_TARGETTED(uLocal_43, 0);
		SET_PED_NAME_DEBUG(uLocal_43, "POSTBARRY");
		SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_43, 1862763509);
		SET_ENTITY_COLLISION(uLocal_43, 0, 0);
		FREEZE_ENTITY_POSITION(uLocal_43, 1);
		SET_ENTITY_COORDS(uLocal_43, vLocal_52, 1, 0, 0, 1);
		SET_ENTITY_HEADING(uLocal_43, func_17(1.12f));
		FREEZE_ENTITY_POSITION(uLocal_43, 1);
		TASK_PLAY_ANIM(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		TASK_LOOK_AT_ENTITY(uLocal_43, PLAYER_PED_ID(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, vector3 vParam2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		REQUEST_MODEL(iVar0);
		if (HAS_MODEL_LOADED(iVar0))
		{
			if (DOES_ENTITY_EXIST(*uParam0))
			{
				DELETE_PED(uParam0);
			}
			*uParam0 = CREATE_PED(26, iVar0, vParam2, uParam5, 0, 0);
			SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (GET_PED_DRAWABLE_VARIATION(*uParam0, 3) == 0)
				{
					SET_PED_COMPONENT_VARIATION(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_89546[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

float func_17(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_18()
{
	if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!IS_ENTITY_A_MISSION_ENTITY(uLocal_41))
			{
				SET_ENTITY_AS_MISSION_ENTITY(uLocal_41, 1, 0);
			}
			vLocal_49 = { 189.5964f, -956.0344f, 29.54f };
			SET_ENTITY_COORDS(uLocal_41, vLocal_49, 1, 0, 0, 1);
			SET_ENTITY_HEADING(uLocal_41, func_17(-2.01f));
			FREEZE_ENTITY_POSITION(uLocal_41, 1);
		}
	}
	if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!IS_ENTITY_A_MISSION_ENTITY(uLocal_40))
			{
				SET_ENTITY_AS_MISSION_ENTITY(uLocal_40, 1, 0);
			}
			vLocal_49 = { 190.2574f, -956.3513f, 29.621f };
			SET_ENTITY_COORDS(uLocal_40, vLocal_49, 1, 0, 0, 1);
			SET_ENTITY_HEADING(uLocal_40, func_17(-1.68f));
			FREEZE_ENTITY_POSITION(uLocal_40, 1);
		}
	}
	else
	{
		vLocal_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_40, joaat("prop_chair_08"), vLocal_49, func_17(-1.68f));
		SET_ENTITY_COORDS(uLocal_40, vLocal_49, 1, 0, 0, 1);
		SET_ENTITY_HEADING(uLocal_40, func_17(-1.68f));
		FREEZE_ENTITY_POSITION(uLocal_40, 1);
	}
	vLocal_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = GET_CLOSEST_OBJECT_OF_TYPE(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_42))
		{
			if (!IS_ENTITY_A_MISSION_ENTITY(uLocal_42))
			{
				SET_ENTITY_AS_MISSION_ENTITY(uLocal_42, 1, 0);
			}
			vLocal_49.z = 29.603f;
			SET_ENTITY_COORDS(uLocal_42, vLocal_49, 1, 0, 0, 1);
			SET_ENTITY_HEADING(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_42, joaat("prop_protest_sign_01"), vLocal_49, 23.45f);
		SET_ENTITY_COORDS(uLocal_42, vLocal_49, 1, 0, 0, 1);
		SET_ENTITY_HEADING(uLocal_42, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = CREATE_OBJECT(iParam1, vParam2, 1, 1, 0);
	SET_ENTITY_HEADING(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (DOES_ENTITY_EXIST(*uParam0))
	{
		if (IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			DETACH_ENTITY(*uParam0, 1, 1);
		}
		DELETE_OBJECT(uParam0);
	}
}

void func_21(bool bParam0)
{
	if (bParam0)
	{
		func_23(&uLocal_43);
	}
	else
	{
		func_22(&uLocal_43, 1, 0, 1);
	}
	if (func_10(uLocal_41))
	{
		FREEZE_ENTITY_POSITION(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		FREEZE_ENTITY_POSITION(uLocal_40, 0);
	}
	if (bParam0)
	{
		func_20(&uLocal_40);
		func_20(&uLocal_41);
		func_20(&uLocal_42);
	}
	else
	{
		func_1(&uLocal_40, 0);
		func_1(&uLocal_41, 0);
		func_1(&uLocal_42, 0);
	}
	REMOVE_ANIM_DICT(sLocal_44);
	CLEAR_ADDITIONAL_TEXT(7, 0);
	TERMINATE_THIS_THREAD();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (DOES_ENTITY_EXIST(*uParam0))
	{
		if (!IS_PED_INJURED(*uParam0))
		{
			SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				CLEAR_PED_SECONDARY_TASK(*uParam0);
			}
			SET_PED_KEEP_TASK(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
		SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_23(var uParam0)
{
	if (DOES_ENTITY_EXIST(*uParam0))
	{
		if (!IS_ENTITY_DEAD(*uParam0, 0))
		{
			SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
		}
		if (!IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		DELETE_PED(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	return !IS_ENTITY_DEAD(uParam0, 0);
}

