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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_61 = 0;
	vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	bool bLocal_68 = 0;
	struct<21> Local_69 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_239(ScriptParam_69))
		{
			func_233();
		}
		if (ScriptParam_69.f_10 >= 32)
		{
			if (func_232(CAM::_0xDC9DA9E8789F5246()) != 1 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_350.f_7, 0))
			{
				func_233();
			}
		}
	}
	uLocal_64 = ScriptParam_69.f_13;
	while (true)
	{
		func_231();
		if (func_221())
		{
			func_233();
		}
		if (ScriptParam_69.f_10 >= 32)
		{
			if (func_232(CAM::_0xDC9DA9E8789F5246()) != 1 && Global_18C774 == 0)
			{
				func_233();
			}
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() != bLocal_68)
		{
			func_233();
		}
		NETWORK::_0x2302C0264EA58D31();
		switch (func_220(NETSHOP::_NETWORK_SHOP_BASKET_START()))
		{
			case 0:
				if (func_219())
				{
					if (func_218() == 1)
					{
						vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 1;
					}
					else if (func_218() == 4)
					{
						vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_218() == 1)
				{
					func_183();
				}
				else if (func_218() == 4)
				{
					vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 3;
				}
				if (vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 == 0)
				{
					if ((!ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), Local_60.f_3, 500f, 500f, 500f, 0, 1, 0) && func_232(CAM::_0xDC9DA9E8789F5246()) != 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_350.f_7, 0))
					{
						vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_181(&(Local_60.f_9));
				if (func_180(&(Local_60.f_9)))
				{
					vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 4;
			
			case 4:
				func_233();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_218())
			{
				case 0:
					if (func_6())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_5();
					func_4();
					if (func_1())
					{
						Local_60 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x25A
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x26E
{
	if (Local_60.f_7 >= 32 && func_232(CAM::_0xDC9DA9E8789F5246()) == 1)
	{
		if (func_3(Global_26862F.f_350.f_1))
		{
			return 1;
		}
	}
	if (Local_60.f_8 == 2)
	{
		return 1;
	}
	return 0;
}

int func_3(vector3 vParam0)//Position - 0x2B2
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x2DC
{
	switch (Local_60.f_8)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2) || Local_60.f_6 != 4294967295)
			{
				Local_60.f_8 = 1;
			}
			break;
		
		case 1:
			Local_60.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_5()//Position - 0x32A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_60.f_6 == 4294967295)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_62[iVar0 /*3*/].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_60.f_1, 7))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_62[iVar0 /*3*/].f_1, 1))
				{
					MISC::SET_BIT(&(Local_60.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_6()//Position - 0x398
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	struct<35> Var7;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (func_219())
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				fVar3 = 250f;
				vVar4 = { Local_60.f_3 };
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_60.f_1, 8))
				{
					vVar0 = { Global_26862F.f_350.f_1 };
					fVar1 = Global_26862F.f_350.f_4;
				}
				if (func_232(CAM::_0xDC9DA9E8789F5246()) == 7)
				{
					iVar6 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
					if (Global_440000.f_68[iVar6 /*10693*/].f_4DA[0 /*36*/].f_A > 0f)
					{
						vVar4 = { Global_440000.f_68[iVar6 /*10693*/].f_4DA[0 /*36*/].f_3 };
						vVar5 = { Global_440000.f_68[iVar6 /*10693*/].f_4DA[0 /*36*/].f_6 };
						fVar3 = Global_440000.f_68[iVar6 /*10693*/].f_4DA[0 /*36*/].f_A;
						iVar2 = 1;
					}
					else if (Global_440000.f_68[iVar6 /*10693*/].f_4DA[0 /*36*/].f_9 > 0f)
					{
						vVar4 = { Global_440000.f_68[iVar6 /*10693*/].f_4DA[0 /*36*/] };
						fVar3 = Global_440000.f_68[iVar6 /*10693*/].f_4DA[0 /*36*/].f_9;
					}
				}
				Var7.f_5 = 1115815936;
				Var7.f_D = 2;
				Var7.f_14 = 2;
				Var7.f_20 = 3212836864;
				Var7.f_22 = 1;
				Var7.f_4 = 1;
				Var7.f_5 = 30f;
				Var7.f_A = 1;
				if (iVar2 == 0)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_60.f_1, 8) || func_179(vVar4, fVar3, &vVar0, &fVar1, &Var7))
					{
						if (Local_60.f_7 >= 32 || func_232(CAM::_0xDC9DA9E8789F5246()) == 1)
						{
							Local_60.f_2 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_60.f_2 = NETWORK::OBJ_TO_NET(OBJECT::_CREATE_PORTABLE_PICKUP_2(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
						}
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_60.f_2), fVar1);
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_60.f_1, 8) || func_7(vVar4, vVar5, fVar3, &vVar0, &fVar1, Var7))
				{
					if (Local_60.f_7 >= 32 || func_232(CAM::_0xDC9DA9E8789F5246()) == 1)
					{
						Local_60.f_2 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_60.f_2 = NETWORK::OBJ_TO_NET(OBJECT::_CREATE_PORTABLE_PICKUP_2(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
					}
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_60.f_2), fVar1);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		return 1;
	}
	return 0;
}

int func_7(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3, float fParam4, struct<8> Param5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)//Position - 0x61F
{
	struct<17> Var0;
	struct<25> Var1;
	
	if (Param5.f_5 < 20f)
	{
		Param5.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_10 = 5;
	Var0.f_16 = 5;
	Var0.f_1C = 5;
	Var1.f_10 = 1;
	Var1.f_16 = 1;
	Var1.f_17 = 1;
	Var1.f_18 = 1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 2;
	Var1.f_8 = { vParam0 };
	Var1.f_B = { vParam1 };
	Var1.f_E = fParam2;
	Var1.f_F = 0;
	Var1.f_10 = 1;
	Var1.f_11 = 0;
	Param5.f_7 = 0;
	if (func_8(&Var1, &Param5, &Var0))
	{
		*uParam3 = { Var0[0 /*3*/] };
		*fParam4 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_8(var uParam0, var uParam1, var uParam2)//Position - 0x6D5
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_24B2CE.f_991 == *uParam0 || !Global_24B2CE.f_991.f_1 == uParam0->f_1) || !Global_24B2CE.f_991.f_2 == uParam0->f_2) || !Global_24B2CE.f_994 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_24B2CE.f_99F == uParam0->f_8 || !Global_24B2CE.f_99F.f_1 == uParam0->f_8.f_1) || !Global_24B2CE.f_99F.f_2 == uParam0->f_8.f_2) || !Global_24B2CE.f_9A2 == uParam0->f_B) || !Global_24B2CE.f_9A2.f_1 == uParam0->f_B.f_1) || !Global_24B2CE.f_9A2.f_2 == uParam0->f_B.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_24B2CE.f_99F == uParam0->f_8 || !Global_24B2CE.f_99F.f_1 == uParam0->f_8.f_1) || !Global_24B2CE.f_99F.f_2 == uParam0->f_8.f_2) || !Global_24B2CE.f_9A2 == uParam0->f_B) || !Global_24B2CE.f_9A2.f_1 == uParam0->f_B.f_1) || !Global_24B2CE.f_9A2.f_2 == uParam0->f_B.f_2) || !Global_24B2CE.f_9A5 == uParam0->f_E)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_24B2CE.f_98F == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_998))
			{
				if (Global_24B2CE.f_998 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_995) < func_178(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_995) < func_178(0))
				{
					return 0;
				}
			}
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_177();
		}
		Global_24B2CE.f_98F = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_995) > func_178(0))
	{
		Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
		func_171();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_B;
			}
			else
			{
				fVar2 = uParam0->f_B;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_B.f_1;
			}
			else
			{
				fVar3 = uParam0->f_B.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_B + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar2 = (uParam0->f_B - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_E));
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_B.f_1 + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar3 = (uParam0->f_B.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_E));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_B * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_24B2CE.f_98F)
	{
		NETWORK::_0xFB8F2A6F3DF08CBE();
		PED::_0xFEE4A5459472A9F8();
		func_177();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_170(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, 4294967295, 1, uParam1->f_5, uParam0->f_11, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_24B2CE.f_9A6 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_24B2CE.f_991 = { *uParam0 };
					Global_24B2CE.f_994 = uParam0->f_4;
					break;
				
				case 1:
					Global_24B2CE.f_99F = { uParam0->f_8 };
					Global_24B2CE.f_9A2 = { uParam0->f_B };
					Global_24B2CE.f_9A5 = 0f;
					Global_24B2CE.f_991 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_24B2CE.f_99F = { uParam0->f_8 };
					Global_24B2CE.f_9A2 = { uParam0->f_B };
					Global_24B2CE.f_9A5 = uParam0->f_E;
					Global_24B2CE.f_991 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_169(vVar6.x, vVar6.y);
			}
			Global_24B2CE.f_990 = 1;
			Global_24B2CE.f_98F = 1;
			Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_995 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_998 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_24B2CE.f_98F)
	{
		if (Global_24B2CE.f_990 == 1)
		{
			if (PATHFIND::_0xF7B79A50B905A30D(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 5000)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_15)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_12 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_A = 1;
					Var14.f_D = 1;
					Var14.f_F = 1;
					Var14.f_10 = 1;
					Var14.f_1F = 1;
					Var14.f_22 = joaat("TAILGATER");
					Var14.f_26 = 2;
					Var14.f_2D = 2;
					Var14.f_31 = 1123024896;
					Var14.f_35 = 999;
					Var14.f_36 = 1176256410;
					Var14.f_37 = 1;
					Var14.f_38 = 1;
					Var14.f_39 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_B = uParam1->f_9;
					Var14.f_12 = 1;
					if (uParam1->f_20 > 0f)
					{
						Var14.f_6 = uParam1->f_20;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_13 = { *uParam0 };
							Var14.f_19 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = 0f;
							break;
						
						case 2:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = uParam0->f_E;
							break;
					}
					Var14.f_1A = uParam0->f_7;
					Var14.f_C = uParam0->f_F;
					if (uParam0->f_15)
					{
						Var14.f_1E = 1;
						Var14.f_20 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_26[iVar9 /*3*/] = { uParam1->f_D[iVar9 /*3*/] };
						Var14.f_2D[iVar9] = uParam1->f_14[iVar9];
						iVar9++;
					}
					Var14.f_33 = uParam1->f_1E;
					Var14.f_37 = uParam0->f_10;
					if (uParam0->f_1A)
					{
						Var14.f_A = 0;
					}
					if (func_168(Global_440000.f_2559E))
					{
						Var14.f_9 = 1;
					}
					func_143(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_142(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_24B2CE.f_990 = 9;
				}
				else
				{
					Global_24B2CE.f_990 = 2;
				}
			}
		}
		if (Global_24B2CE.f_990 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar7, vVar8) || NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(vVar7, vVar8) == 0)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				if (uParam0->f_5 && !func_139(CAM::_0xDC9DA9E8789F5246(), 0))
				{
					Global_24B2CE.f_990 = 3;
				}
				else
				{
					Global_24B2CE.f_990 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_99A) > 7000)
			{
				func_138(vVar6.x, vVar6.y);
			}
		}
		if (Global_24B2CE.f_990 == 3)
		{
			if (func_137() || NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 10000)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_990 = 4;
			}
		}
		if (Global_24B2CE.f_990 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_171();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::_0x5A6FFA2433E2F14C(CAM::_0xDC9DA9E8789F5246(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
								Global_24B2CE.f_990 = 5;
							}
							break;
						
						case 1:
							func_136(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							if (NETWORK::_0x4BA92A18502BCA61(CAM::_0xDC9DA9E8789F5246(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
								Global_24B2CE.f_990 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::_0x4BA92A18502BCA61(CAM::_0xDC9DA9E8789F5246(), uParam0->f_8, uParam0->f_B, uParam0->f_E, *uParam1, iVar0))
							{
								Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
								Global_24B2CE.f_990 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_A)
					{
						iVar0 += 32;
					}
					Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
					Global_24B2CE.f_990 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_136(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							PED::_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_24B2CE.f_990 == 5)
		{
			if (func_62(uParam2, uParam0, uParam1, 0))
			{
				if (Global_24B2CE.f_9AA.f_5)
				{
					Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
					Global_24B2CE.f_990 = 6;
				}
				else
				{
					Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_24B2CE.f_990 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 20000)
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_990 = 8;
			}
		}
		if (Global_24B2CE.f_990 == 6)
		{
			iVar0 = 0;
			Global_24B2CE.f_9AA.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_61(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_60(uParam0->f_8, uParam0->f_B, uParam0->f_E))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_A)
			{
				iVar0 += 32;
			}
			if (uParam0->f_F)
			{
				iVar0 += 16;
			}
			Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_990 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_136(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
					PED::_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_24B2CE.f_990 == 7)
		{
			if (func_62(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_24B2CE.f_A30[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_142(Global_24B2CE.f_A30[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A30[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_58(Global_24B2CE.f_A30[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A30[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_24B2CE.f_A30[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, uParam0->f_E, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A30[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
								break;
						}
						func_11(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_10[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_24B2CE.f_990 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 20000)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_990 = 8;
			}
		}
		if (Global_24B2CE.f_990 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_24B2CE.f_1E3))
				{
				}
			}
			else if (Global_24B2CE.f_9AA.f_2)
			{
				func_9(uParam2, &(Global_24B2CE.f_9AA.f_6));
			}
			else
			{
				if (uParam0->f_F)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_24B2CE.f_991 };
				func_11(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_990 = 9;
		}
		if (Global_24B2CE.f_990 == 9)
		{
			Global_24B2CE.f_98F = 0;
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_177();
			return 1;
		}
		Global_24B2CE.f_995 = HUD::_0x13C4B962653A5280();
	}
	return 0;
}

void func_9(var uParam0, var uParam1)//Position - 0x168E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_16[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_10(int iParam0)//Position - 0x16D8
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_11(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x16F7
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_A = 1;
	Var2.f_D = 1;
	Var2.f_F = 1;
	Var2.f_10 = 1;
	Var2.f_1F = 1;
	Var2.f_22 = joaat("TAILGATER");
	Var2.f_26 = 2;
	Var2.f_2D = 2;
	Var2.f_31 = 1123024896;
	Var2.f_35 = 999;
	Var2.f_36 = 1176256410;
	Var2.f_37 = 1;
	Var2.f_38 = 1;
	Var2.f_39 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_16)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_61(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_60(uParam5->f_8, uParam5->f_B, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_60(uParam5->f_8, uParam5->f_B, uParam5->f_E) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_17(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_A = 0;
		}
		else
		{
			Var2.f_A = 1;
		}
		Var2.f_D = uParam5->f_F;
		Var2.f_F = iParam3;
		if (uParam6->f_20 > 0f)
		{
			Var2.f_6 = uParam6->f_20;
		}
		if (bParam4)
		{
			Var2.f_12 = 1;
			Var2.f_1A = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_13 = { *uParam5 };
					Var2.f_19 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = 0f;
					break;
				
				case 2:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = uParam5->f_E;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_26[iVar4 /*3*/] = { uParam6->f_D[iVar4 /*3*/] };
			Var2.f_2D[iVar4] = uParam6->f_14[iVar4];
			iVar4++;
		}
		Var2.f_33 = uParam6->f_1E;
		Var2.f_37 = uParam5->f_10;
		if (func_13(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			Var2.f_9 = 1;
		}
		func_143(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				fVar10 = uParam5->f_E;
				break;
		}
		if (!func_12(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_17(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_12(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_24B2CE.f_292 = 1;
}

int func_12(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x1B40
{
	switch (iParam1)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_58(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam2, vParam3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_13(int iParam0, bool bParam1)//Position - 0x1BAD
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TERBYTE"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_16())
			{
				return func_14(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)//Position - 0x1C3B
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
	}
	return 4294967295;
}

int func_15(int iParam0, bool bParam1, bool bParam2)//Position - 0x1F95
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

int func_16()//Position - 0x1FDF
{
	return 4294967295;
}

int func_17(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1FE8
{
	if (func_57(vParam0, uParam1))
	{
		if (func_18(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam1, iParam2))
	{
		if (func_18(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_18(vector3 vParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x2044
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_38(Global_24B2CE.f_1FA, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_25(*uParam1, 1056964608))
			{
				if (!func_19(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_19(var uParam0, bool bParam1)//Position - 0x20C9
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_24(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[iVar2])
	{
		if (func_23(vVar1, &(Global_24C681[iVar2 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_20(&vVar1, Global_24C681[iVar2 /*127*/][iVar0 /*7*/], Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_3, Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[8])
	{
		if (func_23(vVar1, &(Global_24C681[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_20(&vVar1, Global_24C681[8 /*127*/][iVar0 /*7*/], Global_24C681[8 /*127*/][iVar0 /*7*/].f_3, Global_24C681[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_20(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x21D6
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_22(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	fVar3 = (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_21(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_21(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_22(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_22(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		fVar3 = (SYSTEM::VMAG(vVar11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_21(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_21(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (SYSTEM::VDIST(vVar4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_21(vector3 vParam0, vector3 vParam1)//Position - 0x24A5
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_22(vector3 vParam0, vector3 vParam1)//Position - 0x24C6
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

bool func_23(vector3 vParam0, var uParam1)//Position - 0x24FF
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_24(struct<2> Param0, var uParam1)//Position - 0x251F
{
	if (Param0.f_1 > Global_24CB03[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_24CB03[1])
	{
		if (Param0 < Global_24CB07[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_24CB03[2])
	{
		if (Param0 < Global_24CB07[1])
		{
			return 3;
		}
		else if (Param0 < Global_24CB07[2])
		{
			return 4;
		}
		else if (Param0 < Global_24CB07[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_25(vector3 vParam0, float fParam1)//Position - 0x25BA
{
	int iVar0;
	
	if (func_35(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (Global_440000.f_E78A > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_E78A)
			{
				if (Global_440000.f_E78B[iVar0 /*80*/].f_7 != 0)
				{
					if (func_26(vParam0, Global_440000.f_E78B[iVar0 /*80*/], Global_440000.f_E78B[iVar0 /*80*/].f_6, Global_440000.f_E78B[iVar0 /*80*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_D972 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_D972)
			{
				if (Global_440000.f_D975[iVar0 /*149*/].f_10 != 0)
				{
					if (func_26(vParam0, Global_440000.f_D975[iVar0 /*149*/], Global_440000.f_D975[iVar0 /*149*/].f_3, Global_440000.f_D975[iVar0 /*149*/].f_10, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_136F4 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_136F4)
			{
				if (Global_440000.f_136F8[iVar0 /*217*/].f_C != 0)
				{
					if (func_26(vParam0, Global_440000.f_136F8[iVar0 /*217*/], Global_440000.f_136F8[iVar0 /*217*/].f_3, Global_440000.f_136F8[iVar0 /*217*/].f_C, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_26(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)//Position - 0x2743
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (SYSTEM::VDIST(vParam0, vParam1) < func_34(iParam3, 1008981770))
	{
		func_27(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_27(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0x2796
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_33(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_28(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = MISC::ABSF((vVar2.x - vVar1.x));
}

void func_28(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2862
{
	int iVar0;
	
	if (NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_31(iParam0);
		if (iVar0 != 0)
		{
			func_29(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_29(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2921
{
	int iVar0;
	
	func_30(iParam0, &Global_1413D0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Global_1413D0[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1413D0[iVar0], &(Global_1413D4[iVar0 /*3*/]), &(Global_1413DB[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1413D4[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1413DB[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1413D4[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1413DB[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1413D4[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1413DB[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1413D4[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1413DB[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1413E2[iVar0] = (Global_1413DB[iVar0 /*3*/] - Global_1413D4[iVar0 /*3*/]);
		Global_1413E5[iVar0] = (Global_1413DB[iVar0 /*3*/].f_1 - Global_1413D4[iVar0 /*3*/].f_1);
		Global_1413E8[iVar0] = (Global_1413DB[iVar0 /*3*/].f_2 - Global_1413D4[iVar0 /*3*/].f_2);
		if (Global_1413E2[iVar0] > Global_1413EB)
		{
			Global_1413EB = Global_1413E2[iVar0];
		}
		if (Global_1413E8[iVar0] > Global_1413EC)
		{
			Global_1413EC = Global_1413E8[iVar0];
		}
		iVar0++;
	}
	Global_1413ED = (Global_1413EB * -0.5f);
	Global_1413F0 = (Global_1413EB * 0.5f);
	Global_1413ED.f_1 = ((((0.5f * Global_1413E5[0]) + Global_1413E5[1]) + Global_1413D0.f_3) * -1f);
	Global_1413F0.f_1 = (0.5f * Global_1413E5[0]);
	Global_1413ED.f_2 = (Global_1413E8[0] * -0.5f);
	Global_1413F0.f_2 = (Global_1413E8[0] * 0.5f);
	*uParam1 = { Global_1413ED };
	*uParam2 = { Global_1413F0 };
}

void func_30(int iParam0, var uParam1)//Position - 0x2B2D
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("HAULER2");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("PHANTOM3");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("NIGHTSHARK");
			(*uParam1)[1] = joaat("TRAILERSMALL2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_31(int iParam0)//Position - 0x2BAE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_32(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x2BDD
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_33(var uParam0, vector3 vParam1)//Position - 0x2BEF
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_34(int iParam0, float fParam1)//Position - 0x2CC6
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_28(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_35(int iParam0, bool bParam1)//Position - 0x2D46
{
	if (bParam1)
	{
		if (func_36(iParam0))
		{
			return 1;
		}
	}
	if (Global_1841F3[iParam0 /*790*/] == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool func_36(int iParam0)//Position - 0x2D72
{
	return func_37(iParam0);
}

bool func_37(int iParam0)//Position - 0x2D80
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

int func_38(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x2D9A
{
	int iVar0;
	bool bVar1;
	
	if (func_51(vParam0))
	{
		if (func_50(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_41(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_40(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_39(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_39(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0x2E56
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_33(&vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_33(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

int func_40(vector3 vParam0, float fParam1)//Position - 0x2EFE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_24B2CE.f_A9F[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_41(var uParam0, bool bParam1, bool bParam2)//Position - 0x2F39
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_46(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_43(&vVar2, &(Global_24B2CE.f_16A[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_46(vVar2, &uVar1) || func_42(vVar2))
			{
				vVar2 = { *uParam0 };
				func_43(&vVar2, &(Global_24B2CE.f_16A[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_42(vector3 vParam0)//Position - 0x2FBD
{
	float fVar0;
	
	if (Global_24B2CE.f_24B > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_24B2CE.f_248);
		if (fVar0 < Global_24B2CE.f_24B)
		{
			return 1;
		}
	}
	return 0;
}

void func_43(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x2FF6
{
	if (bParam4)
	{
		switch (uParam1->f_A)
		{
			case 0:
				*uParam0 = { func_45(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_24B2CE.f_A9D) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_45(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_45(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_A)
		{
			case 0:
				func_39(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_24B2CE.f_A9D) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_44(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_20(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_44(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x3100
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

Vector3 func_45(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x31FF
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_39(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_44(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_20(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_142(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_58(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, vParam1, vParam2, fParam3, 0, 1))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_46(vector3 vParam0, var uParam1)//Position - 0x3302
{
	int iVar0;
	int iVar1;
	
	if (func_49())
	{
		return 0;
	}
	iVar1 = func_48();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_24B2CE.f_16A[iVar0 /*12*/].f_9 == 1)
		{
			if (func_47(vParam0, &(Global_24B2CE.f_16A[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x3366
{
	switch (uParam1->f_A)
	{
		case 0:
			return func_142(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_24B2CE.f_A9D) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_58(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_48()//Position - 0x34C7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_24B2CE.f_16A[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_49()//Position - 0x34FA
{
	return Global_197632.f_1C;
}

int func_50(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3508
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_24C5D6[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_24C5D6[iVar0 /*17*/].f_10))
			{
				if (func_47(*uParam0, &(Global_24C5D6[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_24C5D6[iVar0 /*17*/].f_C)
						{
							*uParam0 = { Global_24C5D6[iVar0 /*17*/].f_D };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_43(&vVar1, &(Global_24C5D6[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_50(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_43(&vVar1, &(Global_24C5D6[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_51(vector3 vParam0)//Position - 0x35E3
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_24B2CE.f_1FD && !Global_24B2CE.f_1FE)
	{
		if (!Global_24B2CE.f_2C.f_13A)
		{
			if (!func_55(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				return 1;
			}
			if (!func_54(vParam0, 1008981770))
			{
				if (!func_50(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_50(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_53(vParam0, 1008981770);
				if (iVar0 > 4294967295)
				{
					vVar1 = { func_52(&(Global_24B2CE.f_2C[iVar0 /*12*/])) };
					if (!func_50(&vVar1, 0, 0, 0, 1))
					{
						if (!func_50(&vParam0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_52(var uParam0)//Position - 0x36A3
{
	switch (uParam0->f_A)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_53(vector3 vParam0, float fParam1)//Position - 0x36EC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_24B2CE.f_2C[iVar0 /*12*/].f_9)
		{
			if (func_47(vParam0, &(Global_24B2CE.f_2C[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_54(vector3 vParam0, float fParam1)//Position - 0x3734
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_24B2CE.f_2C[iVar0 /*12*/].f_9)
		{
			if (func_47(vParam0, &(Global_24B2CE.f_2C[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_55(int iParam0, bool bParam1)//Position - 0x377B
{
	if (Global_1406BF != 0)
	{
		return func_56(iParam0) != 0;
	}
	return func_35(iParam0, bParam1);
}

int func_56(int iParam0)//Position - 0x37A1
{
	if (func_15(iParam0, 0, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_1;
	}
	return 0;
}

int func_57(vector3 vParam0, var uParam1)//Position - 0x37C3
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 4294967295;
	fVar2 = 999999.9f;
	if (Global_24B2CE.f_8C5 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_8C5)
		{
			fVar3 = SYSTEM::VDIST(Global_24B2CE.f_8C6[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == 4294967295)
		{
			*uParam1 = { Global_24B2CE.f_8C6[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_58(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)//Position - 0x383D
{
	func_59(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_59(var uParam0, var uParam1)//Position - 0x38E8
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_60(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x394A
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_61(float fParam0)//Position - 0x39F5
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_62(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x3A0D
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_24B2CE.f_9AA.f_1 == 0 && Global_24B2CE.f_9AA == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::_0x3C891A251567DFCE(&(Global_24B2CE.f_9AA.f_1)))
			{
				case 0:
					func_134(uParam1, uParam2);
					if (!Global_24B2CE.f_9AA.f_2)
					{
						if (uParam2->f_7 && Global_24B2CE.f_225.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_10[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_15)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_12 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
							}
							if (uParam1->f_5 && func_10(Global_24B2CE.f_1E3))
							{
								if (!Global_24B2CE.f_9AA.f_5)
								{
									Global_24B2CE.f_9AA.f_5 = 1;
								}
								else
								{
									func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_11(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_134(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::_0x3C67506996001F5E())
		{
			if (!PED::_0xF445DE8DA80A1792())
			{
				if (PED::_0xA586FBEB32A53DBB())
				{
					func_134(uParam1, uParam2);
					Global_24B2CE.f_9AA.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_134(uParam1, uParam2);
				if (!Global_24B2CE.f_9AA.f_2)
				{
					Global_24B2CE.f_9AA.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_131(Global_24B2CE.f_225, &(Global_24B2CE.f_9AA.f_39), &(Global_24B2CE.f_9AA.f_5A));
	}
	if (uParam2->f_7 && !Global_24B2CE.f_9AA.f_4)
	{
		Global_24B2CE.f_9AA.f_4 = 1;
		func_70(*uParam1, uParam1->f_3, uParam1, uParam2, 1, 4294967295);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_24B2CE.f_9AA.f_1 > 0 || Global_24B2CE.f_9AA > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar2 = 0;
			while (iVar2 < Global_24B2CE.f_9AA.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_24B2CE.f_9AA.f_3)
					{
						iVar2 = Global_24B2CE.f_9AA.f_3 + 1;
					}
					if (iVar2 > (Global_24B2CE.f_9AA.f_1 - 1))
					{
						iVar2 = (Global_24B2CE.f_9AA.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::_0x280C7E3AC7F56E90(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::_0x6C34F1208B8923FD(iVar2);
					}
					else
					{
						PED::_0xB782F8238512BAD5(iVar2, &iVar3);
					}
					func_70(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_24B2CE.f_9AA.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_24B2CE.f_9AA.f_1;
		}
		if (Global_24B2CE.f_9AA.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_24B2CE.f_B37)
			{
				func_64(&(Global_24B2CE.f_9AA.f_6[0 /*10*/]), &(Global_24B2CE.f_9AA.f_6[1 /*10*/]), &(Global_24B2CE.f_9AA.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_10(Global_24B2CE.f_1E3))
			{
				if (Global_24B2CE.f_9AA.f_2)
				{
					func_9(uParam0, &(Global_24B2CE.f_9AA.f_6));
					func_63(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_63(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_24B2CE.f_9AA.f_2)
			{
				func_9(uParam0, &(Global_24B2CE.f_9AA.f_6));
				func_63(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24B2CE.f_9AA.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_19(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_63(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_63(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_63(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
		if (uParam1->f_5 && func_10(Global_24B2CE.f_1E3))
		{
			if (!Global_24B2CE.f_9AA.f_5)
			{
				Global_24B2CE.f_9AA.f_5 = 1;
			}
			else
			{
				func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_F)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_11(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_63(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_63(vector3 vParam0)//Position - 0x3FD4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_24B2CE.f_A30[(3 - iVar0) /*3*/] = { Global_24B2CE.f_A30[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_24B2CE.f_A30[0 /*3*/] = { vParam0 };
}

void func_64(var uParam0, var uParam1, var uParam2)//Position - 0x4026
{
	if (func_10(Global_24B2CE.f_1E3) && func_69() < 4096)
	{
		func_68(uParam0, 0f);
		func_68(uParam1, uParam0->f_2);
		func_68(uParam2, uParam1->f_2);
	}
	else
	{
		func_67(uParam0);
		func_66(uParam2, uParam0->f_4);
		func_65(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_65(var uParam0, vector3 vParam1, vector3 vParam2)//Position - 0x408B
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE21[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_24BE21[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_24BE21[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_66(var uParam0, vector3 vParam1)//Position - 0x412A
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE21[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_24BE21[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_67(var uParam0)//Position - 0x41AC
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			if (Global_24BE21[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_24BE21[iVar0 /*10*/].f_1;
				Var2 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_68(var uParam0, float fParam1)//Position - 0x4219
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			if (Global_24BE21[iVar0 /*10*/].f_2 < fVar1 && Global_24BE21[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_24BE21[iVar0 /*10*/].f_2;
				Var2 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_69()//Position - 0x429C
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_24BE21[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_70(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x42D3
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_24B2CE.f_1E3 == 1)
		{
			if (MISC::ABSF((Global_24B2CE.f_1FA.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_127(CAM::_0xDC9DA9E8789F5246()))
		{
			if (iParam5 == 4294967295)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == 4294967295)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_126(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::_0x68772DB2B2526F9F(AUDIO::_0x0626A247D2405330(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::_0x68772DB2B2526F9F(AUDIO::_0x0626A247D2405330(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_125(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_D[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam3->f_D[iVar11 /*3*/]) > uParam3->f_14[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_17) > 0f && SYSTEM::VMAG(uParam3->f_1A) > 0f) && uParam3->f_1D > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_17, uParam3->f_1A, uParam3->f_1D, 0, 1))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_119(vParam0, fParam1, uParam2->f_F, func_124(1), uParam2->f_10, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_24B2CE.f_3;
		}
	}
	else if (!func_116(vParam0, 25f, CAM::_0xDC9DA9E8789F5246(), 1, 1))
	{
		if (uParam2->f_F)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_113(vParam0, fVar1, 1, 1, 120f, 0, 4294967295, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_113(vParam0, fVar1, 1, 1, 60f, 0, 4294967295, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2CE.f_2B2)
		{
			vVar12 = { Global_24B2CE.f_1FA };
			if (Global_24B2CE.f_1E3 == 26)
			{
				vVar12 = { Global_24B2CE.f_225.f_12 };
			}
			if (!func_40(vParam0, 0.5f))
			{
				if (func_51(vVar12))
				{
					if (!func_50(&vParam0, 0, 0, 0, 1) && !func_112(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_112(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_111(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_110(CAM::_0xDC9DA9E8789F5246()) && func_108(CAM::_0xDC9DA9E8789F5246())))
		{
			if (!func_107(&vParam0, &(Global_24B2CE.f_9AA.f_5A), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_108(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!func_106(vParam0, &(Global_24B2CE.f_9AA.f_39), &(Global_24B2CE.f_9AA.f_5A), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_105(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_10(Global_24B2CE.f_1E3))
			{
				if (func_54(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_104(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_24B2CE.f_2C.f_37)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2CE.f_2B2)
		{
			if (!func_41(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_19(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_53(vParam0, 1008981770);
		if (iVar14 > 4294967295)
		{
			func_103(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_98(&(Global_24B2CE.f_2C[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = 4294967295;
			}
		}
		else
		{
			iVar8 = 4294967295;
		}
	}
	if (func_25(vParam0, 1056964608))
	{
		iVar8 = 4294967295;
	}
	if (uParam3->f_21)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = 4294967295;
		}
	}
	if (uParam3->f_22)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = 4294967295;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_97(vParam0, 1, 0, uParam2->f_F, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_24B2CE.f_B37 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_15)
			{
				fVar0 = func_89(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_89(vParam0, Global_24B2CE.f_991, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_10(Global_24B2CE.f_1E3) && iVar8 < 4096)
			{
				Var19.f_2 = func_87(vParam0);
			}
			uVar7 = func_76(vParam0, 1, 0, 0, 0);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_75(Var19);
			Global_24B2CE.f_9AA.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_24B2CE.f_9AA.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_15)
						{
							fVar0 = func_89(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_89(vParam0, Global_24B2CE.f_991, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_10(Global_24B2CE.f_1E3) && iVar8 == Global_24B2CE.f_9AA.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_87(vParam0);
							bVar21 = true;
						}
						if (fVar2 < Global_24B2CE.f_9AA.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_74(Var19, iVar18);
							Global_24B2CE.f_9AA.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] && fVar0 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_74(Var19, iVar18);
						Global_24B2CE.f_9AA.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_F)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_72(vParam0, fVar1, 1, 1, 0, 4294967295, 1);
						fVar6 = func_76(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_71(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_71(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] && fVar3 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_74(Var19, iVar18);
						Global_24B2CE.f_9AA.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_71(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4C8E
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_72(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x4D2C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_15(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_15(iVar1, 1, 1))
		{
			if (!func_139(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if (func_73(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam5 || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_73(int iParam0)//Position - 0x4EC3
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24FBF9[iParam0 /*413*/].f_F5)
	{
		return 1;
	}
	return 0;
}

void func_74(struct<10> Param0, int iParam1)//Position - 0x4EEE
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_24B2CE.f_9AA.f_6[iParam1 /*10*/] };
	Global_24B2CE.f_9AA.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_74(Var0, iParam1 + 1);
	}
}

void func_75(struct<10> Param0)//Position - 0x4F40
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_69();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] < iVar2)
		{
			Global_24BE21[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] == 0)
		{
			Global_24BE21[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = 4294967295;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			if (Global_24BE21[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_24BE21[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > 4294967295)
	{
		Global_24BE21[iVar4 /*10*/] = { Param0 };
	}
}

float func_76(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x5034
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_15(iVar7, 1, 1))
		{
			if (!iVar7 == CAM::_0xDC9DA9E8789F5246() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_78(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar7) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar7) == 4294967295 || !func_55(CAM::_0xDC9DA9E8789F5246(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar7) || !bParam4)
					{
						if (func_73(iVar7))
						{
							vVar5 = { func_77(iVar7) };
							if (!iVar7 == CAM::_0xDC9DA9E8789F5246())
							{
								vVar6 = { unk_0xCCA038CFFE1C48BC(PLAYER::GET_PLAYER_PED(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, 1);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar6, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_77(int iParam0)//Position - 0x5180
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_78(int iParam0)//Position - 0x5193
{
	if (func_15(iParam0, 0, 1))
	{
		if (!func_85(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
				{
					if (func_35(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (!func_84(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
				{
					if (!func_35(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (!func_79(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0)//Position - 0x523E
{
	if (func_83(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	Global_2633E1 = { func_82(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2633E1))
	{
		return 1;
	}
	if (func_80(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)//Position - 0x5285
{
	int iVar0;
	
	iVar0 = func_81(iParam0);
	if (!iVar0 == func_16())
	{
		if (iVar0 == func_81(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x52B0
{
	if (iParam0 != func_16())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_16();
}

struct<13> func_82(int iParam0)//Position - 0x52D3
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_83(int iParam0, int iParam1)//Position - 0x52EA
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_82(iParam0) };
		Global_2633EE = { func_82(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2633E1))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2633EE))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_26339B, 35, &Global_2633E1);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2633BE, 35, &Global_2633EE);
				if (Global_26339B == Global_2633BE)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2)//Position - 0x5357
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > 4294967295 && iParam1 > 4294967295) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 0);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 1);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 2);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 4);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 5);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 6);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 8);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 9);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 10);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 12);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 13);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 14);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_85(int iParam0)//Position - 0x5522
{
	if (func_139(iParam0, 0))
	{
		return 1;
	}
	if (func_86())
	{
		if (iParam0 == CAM::_0xDC9DA9E8789F5246())
		{
			return 1;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 2))
	{
		return 1;
	}
	return 0;
}

bool func_86()//Position - 0x5564
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

float func_87(vector3 vParam0)//Position - 0x5575
{
	var uVar0;
	
	return func_88(vParam0, &(Global_24B2CE.f_2C), &uVar0);
}

float func_88(vector3 vParam0, var uParam1, var uParam2)//Position - 0x558D
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 4294967295;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_A)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_24B2CE.f_A9D) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_89(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x5709
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = func_71(SYSTEM::VDIST(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_76(vParam0, 1, 0, 0, 1);
	fVar0 = func_71(fVar4, 0f, func_96(), func_94(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_92(vParam0);
	fVar0 = func_71(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && !func_55(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_91(vParam0, CAM::_0xDC9DA9E8789F5246(), 0);
	fVar0 = func_71(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_90(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_71(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_71(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_71(SYSTEM::VDIST(Global_24B2CE.f_1FA, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_90(vector3 vParam0, var uParam1, var uParam2)//Position - 0x58EF
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar1))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar1, &vVar0);
		*uParam1 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = MISC::ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_91(vector3 vParam0, int iParam1, int iParam2)//Position - 0x5948
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_15(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_15(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam1) || (PLAYER::GET_PLAYER_TEAM(iVar3) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iParam1) == 4294967295))
					{
						if (Global_24E392.f_105[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_24E392.f_83[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_92(vector3 vParam0)//Position - 0x59F4
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = PED::GET_PED_NEARBY_PEDS(AUDIO::_0x0626A247D2405330(), &uVar4, 4294967295);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar4[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar4[iVar2], 0))
			{
				if (func_93(uVar4[iVar2]))
				{
					vVar3 = { unk_0x8000C77B5F336760(uVar4[iVar2], 1) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_93(int iParam0)//Position - 0x5A81
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x4EE7377FBE72B4BC(Global_180824[CAM::_0xDC9DA9E8789F5246()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_180824[CAM::_0xDC9DA9E8789F5246()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
		if (iVar1 > 4294967295 && iVar1 < 4)
		{
			if (unk_0x4EE7377FBE72B4BC(Global_180702[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_180702[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_94()//Position - 0x5B4C
{
	if (func_95())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_24B2CE.f_2C.f_43) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_24B2CE.f_2C.f_43)) || Global_24B2CE.f_2C.f_43 == joaat("RHINO"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_95()//Position - 0x5BA8
{
	if (Global_24B2CE.f_2C.f_41 && !Global_24B2CE.f_2C.f_12D)
	{
		if (!func_85(CAM::_0xDC9DA9E8789F5246()))
		{
			return 1;
		}
	}
	return 0;
}

float func_96()//Position - 0x5BDE
{
	if (func_95())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_24B2CE.f_2C.f_43) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_24B2CE.f_2C.f_43)) || Global_24B2CE.f_2C.f_43 == joaat("RHINO"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_97(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x5C3A
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam5)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_98(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x5CC9
{
	switch (uParam0->f_A)
	{
		case 0:
			if (func_102(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_101(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_99(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_99(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)//Position - 0x5D55
{
	vector3 vVar0[8];
	int iVar1;
	
	func_100(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_100(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0x5DA7
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_22(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(SYSTEM::VMAG(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_101(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x5ED4
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_102(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x5F9E
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_103(vector3 vParam0, var uParam1, var uParam2, var uParam3)//Position - 0x6022
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_24(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[iVar2])
	{
		if (func_23(vVar1, &(Global_24C681[iVar2 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C681[iVar2 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[8])
	{
		if (func_23(vVar1, &(Global_24C681[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C681[8 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C681[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C681[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_104(vector3 vParam0)//Position - 0x6110
{
	int iVar0;
	int iVar1;
	
	if (Global_24B2CE.f_2C.f_37)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_24B2CE.f_2C.f_38))
		{
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_24B2CE.f_2C.f_39)
					{
						return 0;
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
	}
	return 1;
}

int func_105(vector3 vParam0)//Position - 0x617B
{
	switch (Global_24B2CE.f_9A6)
	{
		case 0:
			return func_142(vParam0, Global_24B2CE.f_991, Global_24B2CE.f_994, 0, 0);
			break;
		
		case 1:
			return func_58(vParam0, Global_24B2CE.f_99F, Global_24B2CE.f_9A2, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_24B2CE.f_99F, Global_24B2CE.f_9A2, Global_24B2CE.f_9A5, 0, 1);
			break;
	}
	return 0;
}

int func_106(vector3 vParam0, var uParam1, var uParam2, float fParam3)//Position - 0x620D
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_107(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x62BB
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_39(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x632E
{
	switch (Global_1406BF)
	{
		case 0:
			if (!func_109(iParam0))
			{
				if (Global_1841F3[iParam0 /*790*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_109(int iParam0)//Position - 0x6364
{
	return Global_1841F3[iParam0 /*790*/].f_C4 != 0;
}

int func_110(int iParam0)//Position - 0x6379
{
	if (func_35(iParam0, 1))
	{
		if (Global_1841F3[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_111(vector3 vParam0, float fParam1, int iParam2)//Position - 0x639D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_24B2CE.f_A30[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_112(var uParam0, bool bParam1)//Position - 0x63DB
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_42(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_39(&vVar1, Global_24B2CE.f_248, Global_24B2CE.f_24B, 1036831949, 0, fVar2);
			if (func_46(vVar1, &uVar0) || func_42(vVar1))
			{
				vVar1 = { *uParam0 };
				func_39(&vVar1, Global_24B2CE.f_248, Global_24B2CE.f_24B, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_113(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x6473
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_15(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_114(CAM::_0xDC9DA9E8789F5246()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_15(iVar1, 1, 1))
		{
			if (!func_139(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if ((func_73(iVar1) || !bParam8) && !Global_24FBF9[iVar1 /*413*/].f_103)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_114(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_114(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_114(int iParam0)//Position - 0x662B
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_115() && Global_1841F3[iVar0 /*790*/].f_2F9) && !func_3(Global_1841F3[iVar0 /*790*/].f_2FA))
	{
		return Global_1841F3[iVar0 /*790*/].f_2FA;
	}
	return func_77(iParam0);
}

var func_115()//Position - 0x667E
{
	return Global_255C02.f_10;
}

int func_116(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x668C
{
	if (func_118(vParam0, fParam1, iParam2, iParam3, 0) || func_117(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_117(vector3 vParam0, int iParam1, int iParam2)//Position - 0x66BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_26(vParam0, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_15(iVar2, 0, 1) && func_15(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_118(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x677F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_15(iVar1, 0, 1) && func_15(iParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_15(iVar1, 0, 1) && func_15(iParam2, 0, 1))
				{
					if (Global_24E392.f_105[iVar0])
					{
						if (SYSTEM::VDIST(Global_24E392.f_83[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_77(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_24E392.f_105[iVar0])
				{
					if (SYSTEM::VDIST(Global_24E392.f_83[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_15(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_77(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_119(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x689C
{
	Global_24B2CE.f_3 = 0;
	if (!func_116(vParam0, 0.5f, CAM::_0xDC9DA9E8789F5246(), 0, 0))
	{
		Global_24B2CE.f_3++;
		if (bParam3)
		{
			if (func_170(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, 4294967295, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
				if (!func_123(vParam0, fParam10))
				{
					Global_24B2CE.f_3++;
					if (!func_25(vParam0, 1056964608))
					{
						Global_24B2CE.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_170(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, 4294967295, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
				if (!func_123(vParam0, fParam10))
				{
					Global_24B2CE.f_3++;
					if (!func_120(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_24B2CE.f_3++;
						if (!func_25(vParam0, 1056964608))
						{
							Global_24B2CE.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			}
		}
		else if (func_170(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, 4294967295, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			if (!func_123(vParam0, fParam10))
			{
				Global_24B2CE.f_3++;
				if (!func_120(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_24B2CE.f_3++;
					if (!func_25(vParam0, 1056964608))
					{
						Global_24B2CE.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
		}
	}
	return 0;
}

int func_120(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x6ADC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!CAM::_0xDC9DA9E8789F5246() == iVar1)
		{
			if ((func_15(iVar1, 1, 1) && func_73(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (!func_122(CAM::_0xDC9DA9E8789F5246(), iVar1, 4294967294, 0))
				{
					if (func_121(func_77(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_121(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6B5B
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = SYSTEM::SIN(fParam2);
	vVar0.y = SYSTEM::COS(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam1, vVar1, fParam4, 0, 1);
}

bool func_122(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6BE7
{
	if (iParam2 == 4294967294)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iParam1) == 4294967295)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && iParam2 == 4294967295)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_123(vector3 vParam0, float fParam1)//Position - 0x6C5F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_15(iVar1, 1, 1) && func_73(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295) && !func_55(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && !CAM::_0xDC9DA9E8789F5246() == iVar1) || !func_122(CAM::_0xDC9DA9E8789F5246(), iVar1, 4294967294, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_77(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_124(int iParam0)//Position - 0x6D1B
{
	if ((Global_24B2CE.f_1E3 == 9 || Global_24B2CE.f_1E3 == 9) || (Global_24B2CE.f_1E3 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_125(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x6D5E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam6 == 0)
		{
			if (func_15(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_73(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && iParam7) && bParam4) && func_79(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_77(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_126(vector3 vParam0, float fParam1, int iParam2, float fParam3)//Position - 0x6E5A
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
	if (!iVar3 == 4294967295)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_15(iVar1, 1, 1))
			{
				if ((!func_139(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1)) && iVar1 != CAM::_0xDC9DA9E8789F5246())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_77(iVar1), vParam0, 1) <= (fVar2 + fParam1))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x6F1F
{
	if (((func_55(iParam0, 1) || func_130(iParam0)) || func_129(iParam0, 0)) || func_128(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)//Position - 0x6F5B
{
	if (!func_15(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_23;
}

int func_129(int iParam0, int iParam1)//Position - 0x6F7E
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0x6FB9
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/] != 4294967295;
	}
	return 0;
}

void func_131(vector3 vParam0, var uParam1, var uParam2)//Position - 0x6FDA
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar1 /*26*/].f_C, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2401A9[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2401A9[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2401A9[iVar1 /*26*/].f_6.f_2;
					func_133(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_1739[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_40001.f_1739[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_133(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_1767[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_40001.f_1767[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_133(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403DA)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar5 = { Global_140131[iVar1 /*8*/].f_1 + Global_140131[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar5, vParam0) < SYSTEM::VDIST(vVar6, vParam0))
			{
				Var4 = { Global_140131[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_140131[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_140131[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_240065[iVar1 /*3*/] };
				func_132(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_132(var uParam0, var uParam1, int iParam2)//Position - 0x72FD
{
	Global_24CEE6 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_132(&Global_24CEE6, uParam1, iParam2 + 1);
	}
}

void func_133(var uParam0, var uParam1, int iParam2)//Position - 0x733B
{
	Global_24CEE2 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_133(&Global_24CEE2, uParam1, iParam2 + 1);
	}
}

void func_134(var uParam0, var uParam1)//Position - 0x7375
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_24B2CE.f_8C5 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_8C5)
		{
			if (func_135(Global_24B2CE.f_8C6[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_24B2CE.f_8C6[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_24B2CE.f_8C6[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_70(Global_24B2CE.f_8C6[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, 4294967295);
				Global_24B2CE.f_9AA++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_24B2CE.f_B37)
	{
		func_64(&(Global_24B2CE.f_9AA.f_6[0 /*10*/]), &(Global_24B2CE.f_9AA.f_6[1 /*10*/]), &(Global_24B2CE.f_9AA.f_6[2 /*10*/]));
	}
}

int func_135(vector3 vParam0, var uParam1)//Position - 0x7462
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_12(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_12(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_B, uParam1->f_E);
		
		default:
	}
	return 0;
}

void func_136(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)//Position - 0x74BF
{
	float fVar0;
	
	func_59(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_137()//Position - 0x7515
{
	return Global_14010B.f_4;
}

void func_138(var uParam0, var uParam1)//Position - 0x7523
{
	func_177();
	func_169(uParam0, uParam1);
}

bool func_139(int iParam0, int iParam1)//Position - 0x7537
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_140(4294967295, 0) == 8;
	}
	else
	{
		bVar0 = Global_1841F3[iParam0 /*790*/].f_D3 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_140(int iParam0, bool bParam1)//Position - 0x7582
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_141();
	}
	if (Global_140845[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DA[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_141()//Position - 0x75C3
{
	return Global_1407E0;
}

bool func_142(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x75CF
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_143(var uParam0, var uParam1, var uParam2)//Position - 0x7682
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_24B2CE.f_6C9 > 0)
	{
		iVar0 = 0;
		while (func_165(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_21 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_144(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_144(var uParam0, var uParam1, var uParam2)//Position - 0x76F1
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
	{
		uParam2->f_23 = { *uParam0 };
	}
	if (uParam2->f_F)
	{
		if (func_38(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_33)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_30)
	{
		if (func_164(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_B)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_A == 0 || (uParam2->f_21 > 0 && uParam2->f_10))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_21)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_24CEF0.f_A2 = 0;
	Global_24CEF0.f_A3 = 0;
	Global_24CEF0.f_A4 = 4294967197;
	Global_24CEF0.f_A5 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_24CEF0[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_24CEF0.f_79[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_31(uParam2->f_22) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_12 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &vVar1);
			bVar10 = false;
			if (Global_24CEF0.f_A4 == iVar6)
			{
				bVar10 = true;
			}
			Global_24CEF0.f_A5 = { vVar1 };
			if (((uParam2->f_A || uParam2->f_21 > 0) || !PATHFIND::_GET_IS_SLOW_ROAD_FLAG(iVar6)) || PATHFIND::_GET_SUPPORTS_GPS_ROUTE_FLAG(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(vVar1, uParam2->f_23) > uParam2->f_4)
				{
					if (!func_112(&vVar1, 0))
					{
						if ((uParam2->f_D || uVar5 & 64 == 0) || uParam2->f_21 == 1)
						{
							if (uParam2->f_E || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_163(vVar1))
									{
										vVar1 = { func_159(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, bVar10, 1, uParam2->f_33) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_25(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_23.f_2 - uParam2->f_7) || uParam2->f_21 >= 2)
												{
													if (vVar1.z <= (uParam2->f_23.f_2 + uParam2->f_6) || uParam2->f_21 >= 2)
													{
														if (func_158(vVar1, uParam2))
														{
															if ((uParam2->f_30 && !func_164(&vVar1, 0)) || uParam2->f_30 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + 4294967295);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_21 >= 2)
																	{
																		if ((uParam2->f_C && !func_154(vVar1, fVar2, uParam2->f_22, CAM::_0xDC9DA9E8789F5246(), 0, uParam2->f_38)) || !uParam2->f_C)
																		{
																			if (!uParam2->f_F || !func_38(uParam2->f_23, &vVar1, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_1F;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_31;
																					if (!uParam2->f_37)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_11)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_21 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_1C)
																						{
																							if (uParam2->f_21 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_153(vVar1, fVar2, uParam2->f_22))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_170(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, 4294967295, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_170(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, 4294967295, 1, 0f, 0, 0, 0, 0) && !func_151(vVar1, fVar2, uParam2->f_22, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_21 >= 2)
																					{
																						if (((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34) || uParam2->f_21 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_34)
																							{
																								iVar22 = func_150(vVar1, uParam2->f_36, &fVar23);
																							}
																							if (!uParam2->f_34 || (uParam2->f_34 && iVar22 <= uParam2->f_35))
																							{
																								if (uParam2->f_34)
																								{
																									if (iVar22 < uParam2->f_35)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_24CEF0.f_A2)
																										{
																											Global_24CEF0[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_24CEF0.f_79[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_24CEF0.f_A2 = 0;
																										uParam2->f_35 = iVar22;
																									}
																								}
																								if (uParam2->f_1E)
																								{
																									if (Global_24CEF0.f_A2 == 0)
																									{
																										Global_24CEF0[0 /*3*/] = { vVar1 };
																										Global_24CEF0.f_79[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_24CEF0.f_A2 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_23) < SYSTEM::VDIST2(Global_24CEF0[iVar14 /*3*/], uParam2->f_23))
																												{
																													func_149(vVar1, fVar2, iVar14);
																													iVar14 = Global_24CEF0.f_A2 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_24CEF0.f_A2++;
																									if (Global_24CEF0.f_A2 >= 5)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_24CEF0.f_A2 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_24CEF0[Global_24CEF0.f_A2 /*3*/] = { vVar1 };
																									Global_24CEF0.f_79[Global_24CEF0.f_A2] = fVar2;
																									Global_24CEF0.f_A2++;
																									if (func_158(vVar1, uParam2))
																									{
																										Global_24CEF0.f_A3++;
																									}
																									if (Global_24CEF0.f_A2 >= 10)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_24CEF0.f_A2 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_20)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_24CEF0.f_A2 > 0 && ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 2))
				{
					if (uParam2->f_1E)
					{
						*uParam0 = { Global_24CEF0[0 /*3*/] };
						*uParam1 = Global_24CEF0.f_79[0];
						return 1;
					}
					else
					{
						if (Global_24CEF0.f_A3 > 0 && !Global_24CEF0.f_A3 == Global_24CEF0.f_A2)
						{
							func_147(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24CEF0.f_A2);
						if (uParam2->f_12 && uParam2->f_1E)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_24CEF0[0 /*3*/] };
						uVar26 = Global_24CEF0.f_79[0];
						Global_24CEF0[0 /*3*/] = { Global_24CEF0[iVar24 /*3*/] };
						Global_24CEF0.f_79[0] = Global_24CEF0.f_79[iVar24];
						Global_24CEF0[iVar24 /*3*/] = { vVar25 };
						Global_24CEF0.f_79[iVar24] = uVar26;
						*uParam0 = { Global_24CEF0[0 /*3*/] };
						*uParam1 = Global_24CEF0.f_79[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_21++;
					if (uParam2->f_21 < 3)
					{
						return 0;
					}
					else
					{
						func_146(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_32)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_38(uParam2->f_23, &vVar27, &(uParam2->f_26), &(uParam2->f_2D), bVar29, 1) || func_164(&vVar27, bVar29))
						{
							if (!uParam2->f_32)
							{
								uParam2->f_21 = 0;
								uParam2->f_32 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 3)
			{
				return 0;
			}
			else
			{
				func_145(&Global_14053D, uParam0, uParam1, *uParam0);
				if (uParam2->f_B)
				{
					uParam2->f_1B = 1;
				}
				return 1;
			}
		}
		Global_24CEF0.f_A4 = iVar6;
	}
	return 0;
}

void func_145(var uParam0, var uParam1, var uParam2, vector3 vParam3)//Position - 0x811C
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 4294967295;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_116(*(uParam0[iVar2 /*4*/]), 5f, CAM::_0xDC9DA9E8789F5246(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == 4294967295)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_146(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)//Position - 0x81A0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_159(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_B, uParam5->f_22, &bParam11, 0, 0, uParam5->f_33) };
		if (!func_163(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_147(int iParam0, var uParam1)//Position - 0x8224
{
	if (!func_158(Global_24CEF0[iParam0 /*3*/], uParam1))
	{
		Global_24CEF0.f_A2 = (Global_24CEF0.f_A2 - 1);
		func_148(iParam0);
		if (Global_24CEF0.f_A2 > Global_24CEF0.f_A3)
		{
			func_147(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_147(iParam0 + 1, uParam1);
	}
}

void func_148(int iParam0)//Position - 0x827F
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_24CEF0[iParam0 /*3*/] = { Global_24CEF0[iParam0 + 1 /*3*/] };
			Global_24CEF0.f_79[iParam0] = Global_24CEF0.f_79[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_149(vector3 vParam0, float fParam1, int iParam2)//Position - 0x82CA
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_24CEF0[iParam2 /*3*/] };
	uVar1 = Global_24CEF0.f_79[iParam2];
	Global_24CEF0[iParam2 /*3*/] = { vParam0 };
	Global_24CEF0.f_79[iParam2] = fParam1;
	if (iParam2 <= Global_24CEF0.f_A2 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_149(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_150(vector3 vParam0, float fParam1, float fParam2)//Position - 0x8337
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_78(iVar3))
		{
			vVar1 = { func_77(iVar3) };
			fVar5 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_151(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x839F
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam7 == 0)
		{
			if (func_15(iVar1, bParam3, bParam4))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_73(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && iParam8) && bParam5) && func_79(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										vVar5 = { unk_0x8000C77B5F336760(iVar3, 0) };
										fVar6 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_152(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_26(func_77(iVar1), vParam0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_152(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)//Position - 0x8512
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_26(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_28(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_33(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_33(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (MISC::ABSF((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_33(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_26(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_152(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_153(vector3 vParam0, float fParam1, int iParam2)//Position - 0x86CC
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { unk_0x8000C77B5F336760(iVar1, 0) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_152(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { unk_0x8000C77B5F336760(iVar1, 0) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_152(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_154(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x87D8
{
	if (func_157(vParam0, fParam1, iParam2, iParam3, iParam4) || func_155(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_155(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x880E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_156(vParam0, iParam2, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_152(vParam0, fParam1, iParam2, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_15(iVar2, 0, 1) && func_15(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_156(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x88E8
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_34(iParam1, 1008981770);
	fVar1 = func_34(iParam3, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_157(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8928
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_15(iVar1, 0, 1) && func_15(iParam3, 0, 1))
			{
				if (Global_24E392.f_105[iVar0])
				{
					if (func_26(Global_24E392.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_26(func_77(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_24E392.f_105[iVar0])
			{
				if (func_26(Global_24E392.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_15(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_26(func_77(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_158(vector3 vParam0, var uParam1)//Position - 0x8A37
{
	if (uParam1->f_12)
	{
		switch (uParam1->f_1A)
		{
			case 0:
				if (func_142(vParam0, uParam1->f_13, uParam1->f_19, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_58(vParam0, uParam1->f_13, uParam1->f_16, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam1->f_13, uParam1->f_16, uParam1->f_19, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_159(vector3 vParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x8AC8
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(vParam4) > 0f)
		{
			if (!func_162(vParam0, *uParam1, vParam4))
			{
				*uParam1 = (*uParam1 + 180f);
			}
		}
		return vParam0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_161(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*uParam1 = (*uParam1 + 180f);
			if (*uParam1 > 360f)
			{
				*uParam1 = (*uParam1 + -360f);
			}
		}
		if (*uParam1 <= 90f || *uParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_160(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_160(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam4) > 0f)
	{
		if (!func_162(vParam0, *uParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*uParam1 = (*uParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *uParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x4264B2362A7E120F(vParam0, *uParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar13 = { vVar12 / FtoV(SYSTEM::VMAG(vVar12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_160(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_160(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_160(int iParam0, float fParam1)//Position - 0x8F0F
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_28(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_161(vector3 vParam0)//Position - 0x8F46
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_162(vector3 vParam0, float fParam1, vector3 vParam2)//Position - 0x8F7E
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_33(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_21(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_163(vector3 vParam0)//Position - 0x8FBA
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_24(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_24CDCB[iVar1])
	{
		if (func_23(vParam0, &(Global_24CB0C[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CDCB[8])
	{
		if (func_23(vParam0, &(Global_24CB0C[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_164(var uParam0, bool bParam1)//Position - 0x9035
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_24B2CE.f_1A.f_11)
	{
		switch (Global_24B2CE.f_1A.f_10)
		{
			case 0:
				if (func_142(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_F, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_58(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, Global_24B2CE.f_1A.f_F, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_45(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, Global_24B2CE.f_1A.f_F, Global_24B2CE.f_1A.f_10, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_165(var uParam0, var uParam1, var uParam2)//Position - 0x9127
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_24B2CE.f_6C9 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
		{
			uParam2->f_23 = { *uParam0 };
		}
		if (uParam2->f_F)
		{
			if (func_38(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_30)
		{
			if (func_164(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_24CEF0.f_A2 = 0;
		Global_24CEF0.f_A3 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_24CEF0[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_24CEF0.f_79[iVar4] = 0f;
			iVar4++;
		}
		func_166(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_6C9)
		{
			iVar1 = Global_24B2CE.f_85F[iVar0];
			if (iVar1 > 4294967295 && iVar1 < 101)
			{
				vVar2 = { Global_24B2CE.f_6CA[iVar1 /*4*/] };
				fVar3 = Global_24B2CE.f_6CA[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_39 && SYSTEM::VDIST(vVar2, uParam2->f_23) > uParam2->f_4) || uParam2->f_39 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_C && !func_154(vVar2, fVar3, uParam2->f_22, CAM::_0xDC9DA9E8789F5246(), 0, uParam2->f_38)) || !uParam2->f_C)
							{
								if (!uParam2->f_F || !func_38(uParam2->f_23, &vVar2, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_1F;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_31;
										if (!uParam2->f_37)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_11)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_21 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_1C)
											{
												if (uParam2->f_21 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_153(vVar2, fVar3, uParam2->f_22))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_170(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, 4294967295, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_170(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, 4294967295, 1, 0f, 0, 0, 0, 0) && !func_151(vVar2, fVar3, uParam2->f_22, 1, 1, 0, 0, uParam2->f_3A, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34)
											{
												fVar11 = 0f;
												if (uParam2->f_34)
												{
													iVar10 = func_150(vVar2, uParam2->f_36, &fVar11);
												}
												if (!uParam2->f_34 || (uParam2->f_34 && iVar10 <= uParam2->f_35))
												{
													if (uParam2->f_34)
													{
														if (iVar10 < uParam2->f_35)
														{
															iVar4 = 0;
															while (iVar4 < Global_24CEF0.f_A2)
															{
																Global_24CEF0[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_24CEF0.f_79[iVar4] = 0f;
																iVar4++;
															}
															Global_24CEF0.f_A2 = 0;
															uParam2->f_35 = iVar10;
														}
													}
													if (uParam2->f_1E)
													{
														if (Global_24CEF0.f_A2 == 0)
														{
															Global_24CEF0[0 /*3*/] = { vVar2 };
															Global_24CEF0.f_79[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_24CEF0.f_A2 + 1)
															{
																if (iVar4 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_23) < SYSTEM::VDIST2(Global_24CEF0[iVar4 /*3*/], uParam2->f_23))
																	{
																		func_149(vVar2, fVar3, iVar4);
																		iVar4 = Global_24CEF0.f_A2 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_24CEF0.f_A2++;
														if (Global_24CEF0.f_A2 >= 5)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
															else if (Global_24CEF0.f_A2 == 40)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
														}
													}
													else
													{
														Global_24CEF0[Global_24CEF0.f_A2 /*3*/] = { vVar2 };
														Global_24CEF0.f_79[Global_24CEF0.f_A2] = fVar3;
														Global_24CEF0.f_A2++;
														if (Global_24CEF0.f_A2 >= 10)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
															else if (Global_24CEF0.f_A2 == 40)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_24CEF0.f_A2 > 0)
		{
			if (uParam2->f_1E)
			{
				*uParam0 = { Global_24CEF0[0 /*3*/] };
				*uParam1 = Global_24CEF0.f_79[0];
				return 1;
			}
			else
			{
				if (Global_24CEF0.f_A3 > 0 && !Global_24CEF0.f_A3 == Global_24CEF0.f_A2)
				{
					func_147(0, uParam2);
				}
				iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24CEF0.f_A2);
				vVar13 = { Global_24CEF0[0 /*3*/] };
				uVar14 = Global_24CEF0.f_79[0];
				Global_24CEF0[0 /*3*/] = { Global_24CEF0[iVar12 /*3*/] };
				Global_24CEF0.f_79[0] = Global_24CEF0.f_79[iVar12];
				Global_24CEF0[iVar12 /*3*/] = { vVar13 };
				Global_24CEF0.f_79[iVar12] = uVar14;
				*uParam0 = { Global_24CEF0[0 /*3*/] };
				*uParam1 = Global_24CEF0.f_79[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_166(vector3 vParam0)//Position - 0x975F
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_24B2CE.f_6C9)
	{
		uVar1 = func_167(vParam0, fVar0, &fVar0);
		Global_24B2CE.f_85F[iVar2] = uVar1;
		iVar2++;
	}
}

int func_167(vector3 vParam0, float fParam1, float fParam2)//Position - 0x979A
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_24B2CE.f_6C9)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_24B2CE.f_6CA[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_168(int iParam0)//Position - 0x97FC
{
	return iParam0 == 50;
}

void func_169(var uParam0, var uParam1)//Position - 0x9809
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
	Global_24B2CE.f_999 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_24B2CE.f_997 = 1;
	Global_24B2CE.f_99A = HUD::_0x13C4B962653A5280();
}

int func_170(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x983C
{
	Global_24B2CE.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (fParam12 > 0f)
	{
		if (func_125(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_113(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

void func_171()//Position - 0x994D
{
	func_176();
	func_175();
	func_174();
	func_173();
	func_172();
}

void func_172()//Position - 0x9969
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_24BE21[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_173()//Position - 0x99A1
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_24B2CE.f_9AA.f_5A[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_174()//Position - 0x99D0
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_24B2CE.f_9AA.f_39[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_175()//Position - 0x99FE
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_24B2CE.f_9AA.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_176()//Position - 0x9A3A
{
	struct<6> Var0;
	
	Var0.f_3 = 4294967295;
	Global_24B2CE.f_9AA = { Var0 };
}

void func_177()//Position - 0x9A58
{
	if (Global_24B2CE.f_997)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_999)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_24B2CE.f_997 = 0;
	}
}

int func_178(bool bParam0)//Position - 0x9A8B
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_179(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)//Position - 0x9AAE
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_10 = 5;
	Var0.f_16 = 5;
	Var0.f_1C = 5;
	Var1.f_10 = 1;
	Var1.f_16 = 1;
	Var1.f_17 = 1;
	Var1.f_18 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = uParam4->f_B;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_F = 0;
	Var1.f_10 = 1;
	Var1.f_11 = 0;
	if (func_8(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_C > 0f && uParam4->f_7) && uParam4->f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > uParam4->f_C)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_10[0] = uParam4->f_B;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_180(var uParam0)//Position - 0x9BAE
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_181(var uParam0)//Position - 0x9BD7
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_182(uParam0, 0, 0);
		}
	}
}

void func_182(var uParam0, bool bParam1, bool bParam2)//Position - 0x9BF6
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = HUD::_0x13C4B962653A5280();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_183()//Position - 0x9C3B
{
	switch (vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2)
	{
		case 0:
			func_217();
			func_216();
			if (func_205())
			{
				func_203();
				func_202();
				func_184(35);
				vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_202();
				vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_60.f_8 >= 2)
			{
				vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_184(int iParam0)//Position - 0x9CC2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_40001.f_210A)
	{
		iVar1 = iParam0;
		iVar2 = 4294967295;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_200000[func_201() /*12745*/].f_1FF2.f_F52[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_200000[func_201() /*12745*/].f_1FF2.f_F52[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > 4294967295 && iVar2 < 3)
		{
			if (!Global_200000[func_201() /*12745*/].f_1FF2.f_F52[iVar2 /*3*/].f_1)
			{
				func_197(iVar2, 1);
				MISC::SET_BIT(&Global_263724, (8 + iVar2));
				func_192(2110, 4294967295);
				func_188(67, 4294967295);
				func_192(2581, 4294967295);
				func_188(69, 4294967295);
				STATS::_0xA071E0ED98F91286(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_263724, 12))
					{
						func_185(7, 0);
					}
					else
					{
						func_185(15, 0);
					}
				}
			}
		}
	}
}

void func_185(int iParam0, int iParam1)//Position - 0x9DB9
{
	int iVar0;
	
	if (func_187(iParam0, iParam1))
	{
		iVar0 = func_186();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_186()//Position - 0x9DDC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2581E6[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_187(int iParam0, var uParam1)//Position - 0x9E11
{
	if (Global_14084D)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_140859) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_188(int iParam0, int iParam1)//Position - 0x9E97
{
	int iVar0;
	
	iVar0 = func_190(iParam0, func_191(iParam1));
	iVar0++;
	func_189(iParam0, iVar0, iParam1);
}

void func_189(int iParam0, int iParam1, var uParam2)//Position - 0x9EBD
{
	int iVar0;
	
	iVar0 = Global_272D60[iParam0 /*3*/][func_191(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_190(int iParam0, int iParam1)//Position - 0x9EE1
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_272D60[iParam0 /*3*/][func_191(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_191(var uParam0)//Position - 0x9F0D
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_141();
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

void func_192(int iParam0, int iParam1)//Position - 0x9F41
{
	int iVar0;
	
	iVar0 = func_196(iParam0, func_191(iParam1), 0);
	iVar0++;
	if (!func_195(iParam0))
	{
		func_194(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_193(iParam0, iVar0, iParam1, 1);
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9F82
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_191(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_191(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_191(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_191(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_191(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_191(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_191(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_191(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_191(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_191(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_191(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_191(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_191(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_191(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_191(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_191(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_191(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_191(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_191(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_191(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_191(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_191(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_191(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_191(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_191(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_191(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_191(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_191(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_191(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_191(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_191(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_191(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_191(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xA78D
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_191(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_195(int iParam0)//Position - 0xA7BD
{
	if (Global_150A02)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8527:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
				return 1;
				break;
			}
	}
	return 0;
}

int func_196(int iParam0, int iParam1, int iParam2)//Position - 0xA9C7
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_191(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_197(int iParam0, int iParam1)//Position - 0xA9F9
{
	if (Global_200000[func_201() /*12745*/].f_1FF2.f_F52[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_200000[func_201() /*12745*/].f_1FF2.f_F52[iParam0 /*3*/].f_1 = iParam1;
		func_198(func_200(iParam0), iParam1, 4294967295, 1);
	}
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAA44
{
	int iVar0;
	
	if (func_199())
	{
		iVar0 = Global_2727B6[iParam0 /*3*/][func_191(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_199()//Position - 0xAA76
{
	return 1;
	return 0;
}

int func_200(int iParam0)//Position - 0xAA83
{
	switch (iParam0)
	{
		case 0:
			return 169;
		
		case 1:
			return 170;
		
		case 2:
			return 171;
		
		default:
	}
	return 169;
}

int func_201()//Position - 0xAAB5
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_202()//Position - 0xAAC2
{
	if (HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		HUD::REMOVE_BLIP(&iLocal_65);
	}
}

void func_203()//Position - 0xAAD9
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_252F9E.f_F24, 0))
	{
		MISC::SET_BIT(&(Global_252F9E.f_F24), 0);
		func_204();
	}
	else
	{
		MISC::SET_BIT(&(Global_252F9E.f_F24), 1);
	}
}

void func_204()//Position - 0xAB10
{
	func_192(1188, 4294967295);
}

int func_205()//Position - 0xAB20
{
	struct<14> Var0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_2))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_2), AUDIO::_0x0626A247D2405330()) && func_215(Local_60.f_2))
			{
				func_214(&(Local_60.f_2));
				if (HUD::DOES_BLIP_EXIST(iLocal_65))
				{
					HUD::REMOVE_BLIP(&iLocal_65);
				}
				if (!func_213(1))
				{
					func_208("ABB_BOXCT", 1);
				}
				Var0.f_2 = 1095428883;
				Var0.f_A = CAM::_0xDC9DA9E8789F5246();
				Var0.f_3 = uLocal_64;
				func_206(Var0, func_207(1));
				MISC::SET_BIT(&(vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_206(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0xABBF
{
	Param0 = 713068249;
	Param0.f_1 = CAM::_0xDC9DA9E8789F5246();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_207(int iParam0)//Position - 0xABEC
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_15(iVar2, 0, 0))
			{
				if (iVar2 != CAM::_0xDC9DA9E8789F5246() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_208(char* sParam0, int iParam1)//Position - 0xAC49
{
	int iVar0;
	
	iVar0 = 4294967295;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_209(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_209(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xAC75
{
	int iVar0;
	
	if ((!func_212() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_139(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = func_210(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_196195.f_5[iVar0 /*53*/] = iParam0;
		Global_196195.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_196195.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_196195.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_196195.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_196195.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_196195.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_210(int iParam0)//Position - 0xAD7D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_196195 - 1))
	{
		if (iParam0 > Global_196195.f_5[iVar0 /*53*/].f_1)
		{
			func_211(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_196195++;
	if (Global_196195 > 5)
	{
		Global_196195 = 5;
		return Global_196195;
	}
	return (Global_196195 - 1);
}

void func_211(int iParam0)//Position - 0xADDF
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_196195.f_5[iVar0 /*53*/] = { Global_196195.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_212()//Position - 0xAE18
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

int func_213(int iParam0)//Position - 0xAE29
{
	switch (iParam0)
	{
		case 1:
			return Global_18C774 > 0;
		
		case 2:
			return Global_18C774.f_1 > 0;
		
		case 3:
			return Global_18C774.f_2 > 0;
		
		case 4:
			return Global_18C774.f_4 > 0;
		
		case 5:
			return Global_18C774.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_214(var uParam0)//Position - 0xAE8C
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&uVar0);
	}
}

int func_215(var uParam0)//Position - 0xAEC5
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

void func_216()//Position - 0xAEE7
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
		{
			iLocal_65 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_2));
			HUD::SET_BLIP_SCALE(iLocal_65, 1.2f);
			HUD::SET_BLIP_SPRITE(iLocal_65, 403);
			HUD::SET_BLIP_COLOUR(iLocal_65, 2);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_65, "ABB_BLIPN");
		}
	}
}

void func_217()//Position - 0xAF36
{
	int iVar0;
	
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		iVar0 = func_196(1190, 4294967295, 0);
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 14))
		{
			MISC::SET_BIT(&iVar0, 14);
			func_194(1190, iVar0, 4294967295, 1, 0);
		}
	}
}

int func_218()//Position - 0xAF71
{
	return Local_60;
}

int func_219()//Position - 0xAF7B
{
	STREAMING::REQUEST_MODEL(joaat("prop_drug_package_02"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0)//Position - 0xAF9D
{
	return vLocal_62[iParam0 /*3*/];
}

int func_221()//Position - 0xAFAB
{
	var uVar0;
	
	func_228(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_227())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_226())
	{
		return 1;
	}
	if (func_225(157))
	{
		if (!func_224())
		{
			return 1;
		}
	}
	if (func_225(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_222() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_222()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_222()//Position - 0xB035
{
	switch (func_223())
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

int func_223()//Position - 0xB069
{
	return Global_6373;
}

bool func_224()//Position - 0xB074
{
	return Global_255C02.f_24B;
}

int func_225(int iParam0)//Position - 0xB083
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_226()//Position - 0xB09A
{
	return Global_25824F;
}

bool func_227()//Position - 0xB0A6
{
	return Global_255C02.f_246;
}

void func_228(var uParam0)//Position - 0xB0B5
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
					func_229(iVar0);
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

void func_229(int iParam0)//Position - 0xB128
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_15(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_230(iVar2, &bVar3))
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

int func_230(int iParam0, var uParam1)//Position - 0xB1A9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
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

void func_231()//Position - 0xB208
{
	SYSTEM::WAIT(0);
}

int func_232(int iParam0)//Position - 0xB215
{
	return Global_1841F3[iParam0 /*790*/];
}

void func_233()//Position - 0xB226
{
	Global_150AE1 = 4294967295;
	if (HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		HUD::REMOVE_BLIP(&iLocal_65);
	}
	func_236();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_60.f_2))
			{
				func_214(&(Local_60.f_2));
			}
			Local_60 = 4;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_60.f_1, 8))
	{
		func_235();
	}
	func_234();
}

void func_234()//Position - 0xB28C
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_235()//Position - 0xB298
{
	Global_26862F.f_350 = 0;
	Global_26862F.f_350.f_1 = { 0f, 0f, 0f };
	Global_26862F.f_350.f_4 = 0f;
	Global_26862F.f_350.f_8 = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_350.f_7), 0);
}

void func_236()//Position - 0xB2D8
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_63, 4))
	{
		PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(CAM::_0xDC9DA9E8789F5246(), 0.72f);
		PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(CAM::_0xDC9DA9E8789F5246(), 1f, 1);
		PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(CAM::_0xDC9DA9E8789F5246(), 1f);
		PLAYER::SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(CAM::_0xDC9DA9E8789F5246(), 1f);
		func_237(1);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_63, 5);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_63, 7);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_63, 4);
	}
}

void func_237(int iParam0)//Position - 0xB32D
{
	char* sVar0;
	
	sVar0 = func_238(iParam0, 0);
	GRAPHICS::_STOP_SCREEN_EFFECT(sVar0);
}

char* func_238(int iParam0, bool bParam1)//Position - 0xB344
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_239(struct<21> Param0)//Position - 0xB3E7
{
	func_243(func_244(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	func_241(0, 4294967295, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_60, 11);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_62, 97);
	if (!func_240())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_60.f_7 = Param0.f_10;
		Global_150AE1 = Local_60.f_7;
		Local_60.f_3 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0) };
		if (!func_3(Global_26862F.f_350.f_1))
		{
			MISC::SET_BIT(&(Local_60.f_1), 8);
		}
	}
	bLocal_68 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	vLocal_62[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 0;
	return 1;
}

int func_240()//Position - 0xB47F
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_227())
		{
			return 0;
		}
		if (func_225(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_241(int iParam0, int iParam1, bool bParam2)//Position - 0xB4D8
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_234();
			}
			else
			{
				return 0;
			}
		}
		if (!func_242())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_234();
					}
					else
					{
						return 0;
					}
				}
				if (func_227())
				{
					if (!bParam2)
					{
						func_234();
					}
					else
					{
						return 0;
					}
				}
				if (func_225(155))
				{
					if (!bParam2)
					{
						func_234();
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
					func_234();
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
				func_234();
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
			func_234();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_242()//Position - 0xB5ED
{
	return Global_140842;
}

void func_243(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xB5F9
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_234();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_244(int iParam0)//Position - 0xB618
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

