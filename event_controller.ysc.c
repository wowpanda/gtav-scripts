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
	float fLocal_47 = 0f;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 10;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_133();
		func_1();
	}
}

void func_1()//Position - 0xA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		iVar2 = 0;
		while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
		{
			iVar7 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar2);
			switch (iVar7)
			{
				case 189:
					func_130();
					break;
				
				case 190:
					func_129();
					break;
				
				case 191:
					func_123(iVar2);
					break;
				
				case 192:
					func_122(iVar2);
					break;
				
				case 193:
					func_112(iVar2);
					break;
				
				case 211:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		iLocal_96 = 1;
		switch (iVar0)
		{
			case 139:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_BD30.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_BD30.f_19[iVar5] = iVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 140:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_BD30.f_D[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_BD30.f_25[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_BD30 = iVar3;
	Global_BD30.f_C = iVar4;
	Global_BD30.f_18 = iVar5;
	Global_BD30.f_24 = iVar6;
}

bool func_2(int iParam0)//Position - 0x24E
{
	return iParam0 < 10;
}

void func_3(int iParam0)//Position - 0x25B
{
	struct<39> Var0;
	int iVar1;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 39))
	{
		iVar1 = NETWORK::_0x742B58F723233ED9(Var0.f_26);
		if (iVar1 >= 0 && iVar1 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
		{
			if (NETWORK::_0x3DBF2DF0AEB7D289(iVar1) || NETWORK::_0x8806CEBFABD3CE05(iVar1))
			{
				if (NETWORK::_0x8806CEBFABD3CE05(iVar1))
				{
					func_55(iVar1);
				}
				else
				{
					NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iVar1);
				}
				func_54(Var0.f_25, 4294967295);
			}
			else if (func_47())
			{
				func_4(Var0.f_1D, Var0, Var0.f_26, Var0.f_10, Var0.f_23, Var0.f_24);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param1, var uParam2, struct<13> Param3, var uParam4, int iParam5)//Position - 0x2F8
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<16> Var12;
	struct<16> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	bVar0 = false;
	if (iParam5 >= 1000000)
	{
		iParam5 = (iParam5 - 1000000);
		bVar0 = true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_46())
		{
			func_45(uParam2);
			return 0;
		}
		if (func_44())
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bVar0)
		{
		}
		else if (!NETWORK::NETWORK_IS_FRIEND(&Param3))
		{
			func_45(uParam2);
			return 0;
		}
		if (Global_3878)
		{
			func_45(uParam2);
			return 0;
		}
		bVar1 = true;
		if (!func_43())
		{
			if (!func_42(0))
			{
				if (bVar1)
				{
					func_45(uParam2);
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_41(CAM::_0xDC9DA9E8789F5246()))
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		func_45(uParam2);
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		func_45(uParam2);
		return 0;
	}
	Var2 = { Param1 };
	iVar3 = func_40(Var2);
	if (iVar3 != 4294967295)
	{
		func_37(iVar3);
	}
	uVar4 = NETWORK::_0x742B58F723233ED9(uParam2);
	iVar5 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(uVar4);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 11)
	{
		if (iVar5 == Global_248C9C[iVar6 /*4*/].f_3 && MISC::GET_GAME_TIMER() < Global_248C9C[iVar6 /*4*/].f_2)
		{
			Global_248C9C[iVar6 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
			iVar6 = 12;
			func_45(uParam2);
			return 0;
		}
		iVar6++;
	}
	Var7.f_1 = 4294967295;
	Var7.f_2 = 4294967295;
	Var7.f_9 = 4294967295;
	func_36(&Var7);
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 63;
	iVar11 = 0;
	StringCopy(&Var12, "", 64);
	StringCopy(&Var13, "", 64);
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 1;
	iVar18 = 0;
	iVar19 = 0;
	if (func_35(&Param0, &iVar8, &iVar11))
	{
		iVar10 = 40;
		iVar15 = 0;
		iVar11 = iVar11;
	}
	else if (func_33(&Param0, &Var7, 0))
	{
		iVar10 = Var7.f_2;
		iVar8 = func_32(iVar10, Var7.f_1);
		iVar9 = func_31(&Var7);
		Var12 = { func_30(&Var7, 0) };
		Var13 = { func_29(&Var7) };
		iVar15 = 1;
		iVar14 = func_28(&Var7, 0);
		iVar19 = func_27(&Var7);
		uVar20 = func_25(&Var7);
		uVar21 = func_24(&Var7);
		bVar22 = func_19(&Var7);
		if (!bVar22)
		{
			iVar18 = 1;
		}
	}
	else
	{
		bVar23 = false;
		if (func_17(CAM::_0xDC9DA9E8789F5246(), Param3))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar23 = true;
			}
			else
			{
				func_45(uParam2);
				func_15(0);
				return 0;
			}
		}
		if (!MISC::IS_DURANGO_VERSION())
		{
			if (!bVar23)
			{
				if (func_13(CAM::_0xDC9DA9E8789F5246(), Param3))
				{
					func_45(uParam2);
					func_15(0);
					return 0;
				}
			}
		}
		if (!func_12())
		{
			func_45(uParam2);
			bVar24 = true;
			func_15(bVar24);
			return 0;
		}
		bVar25 = false;
		if (!bVar23)
		{
			if (func_7(Param3, &bVar25, 1))
			{
				func_45(uParam2);
				func_15(bVar25);
				return 0;
			}
		}
		iVar16 = 1;
		iVar17 = 0;
		iVar15 = 1;
	}
	iVar26 = Global_150958;
	if (iVar26 >= 12)
	{
		iVar26 = (iVar26 - 1);
	}
	iVar27 = (iVar26 - 1);
	while (iVar27 >= 0)
	{
		Global_24839F[iVar26 /*99*/] = { Global_24839F[iVar27 /*99*/] };
		iVar26 = (iVar26 - 1);
		iVar27 = (iVar27 - 1);
	}
	Global_150958++;
	if (Global_150958 > 12)
	{
		Global_150958 = 12;
	}
	iVar28 = 0;
	Global_24839F[iVar28 /*99*/] = 0;
	Global_24839F[iVar28 /*99*/].f_1 = 0;
	Global_24839F[iVar28 /*99*/].f_5 = 0;
	Global_24839F[iVar28 /*99*/].f_2 = iVar16;
	Global_24839F[iVar28 /*99*/].f_3 = 0;
	Global_24839F[iVar28 /*99*/].f_4 = iVar17;
	Global_24839F[iVar28 /*99*/].f_6 = { Param0 };
	Global_24839F[iVar28 /*99*/].f_C = uVar20;
	Global_24839F[iVar28 /*99*/].f_D = uVar21;
	Global_24839F[iVar28 /*99*/].f_F = { Param1 };
	StringCopy(&(Global_24839F[iVar28 /*99*/].f_1F), "", 64);
	Global_24839F[iVar28 /*99*/].f_31 = iVar10;
	Global_24839F[iVar28 /*99*/].f_32 = iVar8;
	Global_24839F[iVar28 /*99*/].f_33 = iVar9;
	Global_24839F[iVar28 /*99*/].f_5B = uParam2;
	Global_24839F[iVar28 /*99*/].f_39 = { Var12 };
	Global_24839F[iVar28 /*99*/].f_49 = { Var13 };
	Global_24839F[iVar28 /*99*/].f_34 = iVar14;
	Global_24839F[iVar28 /*99*/].f_35 = 0;
	Global_24839F[iVar28 /*99*/].f_35.f_1 = 0;
	Global_24839F[iVar28 /*99*/].f_35.f_2 = 0;
	Global_24839F[iVar28 /*99*/].f_38 = iVar15;
	Global_24839F[iVar28 /*99*/].f_5A = uParam4;
	Global_24839F[iVar28 /*99*/].f_5C = 4294967295;
	Global_24839F[iVar28 /*99*/].f_5D = iVar18;
	Global_24839F[iVar28 /*99*/].f_5E = Global_248CD0;
	Global_24839F[iVar28 /*99*/].f_5F = iVar19;
	Global_24839F[iVar28 /*99*/].f_62 = NETWORK::NETWORK_IS_FRIEND(&Param3);
	if (Global_24839F[iVar28 /*99*/].f_32 == 0)
	{
		if (Global_24839F[iVar28 /*99*/].f_33 == 1)
		{
			Global_24839F[iVar28 /*99*/].f_38 = 0;
		}
	}
	Global_24839F[iVar28 /*99*/].f_60 = func_6(Param3, iVar28);
	Global_24839F[iVar28 /*99*/].f_61 = 0;
	Global_24839F[iVar28 /*99*/].f_59 = iParam5;
	Global_248CD0++;
	Global_24839F[iVar28 /*99*/].f_2F = func_5(Param3);
	if (Global_24839F[iVar28 /*99*/].f_2F != 4294967295)
	{
		Global_24839F[iVar28 /*99*/].f_30 = MISC::GET_GAME_TIMER() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)//Position - 0x845
{
	struct<13> Var0[1];
	int iVar1;
	
	if (!MISC::IS_DURANGO_VERSION())
	{
		return 4294967295;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar1 = NETWORK::_0xD66C9E72B3CC4982(&Var0, 1);
	if (iVar1 < 0)
	{
		return 4294967295;
	}
	return iVar1;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x880
{
	if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
	{
		return 0;
	}
	if (Global_24839F[iParam13 /*99*/].f_5A > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)//Position - 0x8A9
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(CAM::_0xDC9DA9E8789F5246()) };
	if (!bParam14 && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &uParam0))
	{
		if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)//Position - 0x91D
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)//Position - 0x934
{
	if (MISC::IS_PS3_VERSION() || (MISC::IS_ORBIS_VERSION() && iParam0 == 0))
	{
		if (NETWORK::_0x72D918C99BCACC54(1) == 0 || NETWORK::_0xAEEF48CDF5B6CE7C(1, 4294967295) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::_0x72D918C99BCACC54(1) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

int func_10()//Position - 0x98F
{
	if (MISC::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if ((MISC::IS_ORBIS_VERSION() && NETWORK::_0x1353F87E89946207() == 0) && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_DURANGO_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)//Position - 0xA07
{
	if (MISC::IS_PS3_VERSION() || (MISC::IS_ORBIS_VERSION() && iParam0 == 0))
	{
		if (NETWORK::_0x72D918C99BCACC54(0) == 0 || NETWORK::_0xAEEF48CDF5B6CE7C(0, 4294967295) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::_0x72D918C99BCACC54(0) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_12()//Position - 0xA62
{
	if (!MISC::IS_XBOX360_VERSION())
	{
		return 1;
	}
	return NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
}

int func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xA7A
{
	if (!func_14(iParam0))
	{
		if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0xB57A49545BA53CE7(&uParam1))
			{
				return 0;
			}
		}
		if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			if (!NETWORK::_0x72D918C99BCACC54(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)//Position - 0xAB7
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_15(bool bParam0)//Position - 0xAE3
{
	int iVar0;
	
	if (bParam0)
	{
		if (!MISC::IS_XBOX360_VERSION())
		{
			return;
		}
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 < Global_248CCD)
	{
		return;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", 4294967295);
	}
	else
	{
		func_16("INV_RESTRICT", 4294967295);
	}
	Global_248CCD = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)//Position - 0xB43
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xB5A
{
	if (!func_14(iParam0))
	{
		if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0xB57A49545BA53CE7(&uParam1))
			{
				return 0;
			}
		}
		if (!func_18())
		{
			return 1;
		}
	}
	return 0;
}

int func_18()//Position - 0xB8D
{
	if (NETWORK::_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	if (MISC::IS_PS3_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(1, 4294967295))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x595F028698072DD9(0, 4294967293, 1))
		{
			return 1;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, 4294967295))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(var uParam0)//Position - 0xC13
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_3F, 14);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_249797.f_1.f_3F, 14);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[iVar1 /*88*/].f_4C, 14);
		
		case 62:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E012E.f_25C[iVar1 /*88*/].f_4C, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == CAM::_0xDC9DA9E8789F5246())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_20(var uParam0)//Position - 0xCEF
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return 4294967295;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return 9999;
		}
		return 4294967295;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_C2055.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (Global_14010B.f_5)
				{
					return 4294967295;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[iVar0 /*88*/].f_4C, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_C2055.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 4294967295;
		
		case 62:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_E012E.f_25C[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (Global_14010B.f_5)
				{
					return 4294967295;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E012E.f_25C[iVar0 /*88*/].f_4C, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_E012E.f_25C[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 4294967295;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == CAM::_0xDC9DA9E8789F5246())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_E55BC.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 13))
		{
			if (Global_14010B.f_5)
			{
				return 4294967295;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E55BC.f_5[iVar0 /*88*/].f_4C, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_E55BC.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return 4294967295;
	}
	else if (uParam0->f_2 < 32)
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_21(var uParam0)//Position - 0xF5F
{
	if (Global_249797)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_249797.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0)//Position - 0xF84
{
	return iParam0 == 9999;
}

int func_23(var uParam0)//Position - 0xF92
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (!Global_248CD2.f_164[iVar0 /*75*/])
	{
		return 0;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&(Global_248CD2.f_164[iVar0 /*75*/].f_A), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_248CD2.f_164[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_24(var uParam0)//Position - 0xFF5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_50;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_25(var uParam0)//Position - 0x103E
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_C = 4294967295;
	iVar1 = 0;
	iVar2 = func_20(uParam0);
	if (iVar2 == 4294967295)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_26(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_26(var uParam0)//Position - 0x10A5
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_C = 4294967295;
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_1A2B5[iVar1 /*13*/];
		
		case 62:
			return Global_E012E.f_24BD[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_27(var uParam0)//Position - 0x111C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_3F, 17);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_249797.f_1.f_3F, 17);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[iVar1 /*88*/].f_4C, 17);
		
		case 62:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E012E.f_25C[iVar1 /*88*/].f_4C, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == CAM::_0xDC9DA9E8789F5246())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_28(var uParam0, bool bParam1)//Position - 0x11F8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14041C.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_24981D.f_201[uParam0->f_9];
			}
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_36;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_36;
		
		case 62:
			return Global_E012E.f_25C[iVar1 /*88*/].f_36;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == CAM::_0xDC9DA9E8789F5246())
	{
		return Global_E55BC.f_5[iVar1 /*88*/].f_36;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_29(var uParam0)//Position - 0x12DA
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_23(uParam0))
	{
		return Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_1C;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_1C;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_26;
		
		case 62:
			return Global_E012E.f_25C[iVar1 /*88*/].f_26;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == CAM::_0xDC9DA9E8789F5246())
	{
		return Global_E55BC.f_5[iVar1 /*88*/].f_26;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_30(var uParam0, bool bParam1)//Position - 0x13CA
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14041C.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_24981D[uParam0->f_9 /*16*/];
			}
			return Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_C;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_C;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_16;
		
		case 62:
			return Global_E012E.f_25C[iVar1 /*88*/].f_16;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == CAM::_0xDC9DA9E8789F5246())
	{
		return Global_E55BC.f_5[iVar1 /*88*/].f_16;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_31(var uParam0)//Position - 0x14EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	if (func_23(uParam0))
	{
		return Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_37;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_37;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_44;
		
		case 62:
			return Global_E012E.f_25C[iVar1 /*88*/].f_44;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == CAM::_0xDC9DA9E8789F5246())
	{
		return Global_E55BC.f_5[iVar1 /*88*/].f_44;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)//Position - 0x15BD
{
	if (func_22(iParam1))
	{
		if (Global_249797)
		{
			return Global_249797.f_1.f_35;
		}
		return 253;
	}
	switch (iParam0)
	{
		case 63:
			return Global_C2055.f_4[iParam1 /*88*/].f_41;
		
		case 62:
			return Global_E012E.f_25C[iParam1 /*88*/].f_41;
		
		default:
	}
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		return Global_E55BC.f_5[iParam1 /*88*/].f_41;
	}
	else if (iParam0 < 32)
	{
		return 253;
	}
	return 253;
}

int func_33(char* sParam0, var uParam1, bool bParam2)//Position - 0x1643
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 4294967295;
	iVar2 = 1218;
	if (!bParam2)
	{
		iVar2 = 1200;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[iVar0 /*88*/].f_4C, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_C2055.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_C2055.f_4[iVar0 /*88*/].f_41;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_C2055.f_4[iVar0 /*88*/] };
				uParam1->f_9 = 4294967295;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E012E.f_25C[iVar0 /*88*/].f_4C, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_E012E.f_25C[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_E012E.f_25C[iVar0 /*88*/].f_41;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = 4294967295;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E55BC.f_5[iVar0 /*88*/].f_4C, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_E55BC.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_E55BC.f_5[iVar0 /*88*/].f_41;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = CAM::_0xDC9DA9E8789F5246();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = 4294967295;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x17DB
{
	switch (iParam0)
	{
		case 15:
			return 142;
		
		case 14:
			return 143;
		
		case 122:
			return 147;
		
		case 11:
			return 144;
		
		case 13:
			return 145;
		
		case 12:
			return 146;
		
		case 8:
			return 149;
		
		case 1:
			return 150;
		
		case 5:
			return 148;
		
		case 6:
			return 151;
		
		case 3:
			return 154;
		
		case 0:
			return 152;
		
		case 2:
			return 153;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 86;
		
		case 183:
			return 87;
		
		case 185:
			return 88;
		
		case 186:
			return 89;
		
		case 190:
			return 90;
		
		case 191:
			return 91;
		
		case 192:
			return 92;
		
		case 193:
			return 93;
		
		case 205:
			return 101;
		
		case 194:
			return 94;
		
		case 197:
			return 95;
		
		case 198:
			return 96;
		
		case 195:
			return 97;
		
		case 199:
			return 98;
		
		case 200:
			return 99;
		
		case 201:
			return 100;
		
		case 207:
			return 102;
		
		case 208:
			return 103;
		
		case 209:
			return 104;
		
		case 210:
			return 105;
		
		case 225:
			return 106;
		
		case 226:
			return 107;
		
		case 227:
			return 108;
		
		case 229:
			return 109;
		
		case 230:
			return 110;
		
		case 233:
			return 112;
		
		case 237:
			return 114;
		
		case 238:
			return 115;
		
		case 249:
			return 122;
		
		case 239:
			return 116;
		
		case 240:
			return 117;
		
		case 241:
			return 118;
		
		case 242:
			return 119;
		
		case 244:
			return 120;
		
		case 248:
			return 121;
		
		case 250:
			return 123;
		
		default:
	}
	return 0;
}

int func_35(char* sParam0, int iParam1, int iParam2)//Position - 0x1B7C
{
	int iVar0;
	char[] cVar1[8];
	char cVar2[16];
	char[] cVar3[8];
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = HUD::_GET_LENGTH_OF_STRING(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, HUD::_GET_TEXT_SUBSTRING_SLICE(sParam0, 0, 5), 8);
	if (!MISC::ARE_STRINGS_EQUAL(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar2, HUD::_GET_TEXT_SUBSTRING_SLICE(sParam0, 5, 12), 16);
	if (MISC::ARE_STRINGS_EQUAL(&cVar2, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar2, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar2, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar2, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar2, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar2, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar3, HUD::_GET_TEXT_SUBSTRING_SLICE(sParam0, 12, iVar0), 8);
	if (!MISC::STRING_TO_INT(&cVar3, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_36(var uParam0)//Position - 0x1C6B
{
	*uParam0 = 0;
	uParam0->f_1 = 4294967295;
	uParam0->f_2 = 4294967295;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = 4294967295;
}

void func_37(int iParam0)//Position - 0x1C8E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_150958)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (MISC::GET_GAME_TIMER() > Global_248C9C[iVar0 /*4*/].f_2 || Global_248C9C[iVar0 /*4*/].f_2 == 0)
		{
			if (NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES() > 0 && Global_24839F[iParam0 /*99*/].f_5B < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
			{
				Global_248C9C[iVar0 /*4*/].f_3 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Global_24839F[iParam0 /*99*/].f_5B);
				Global_248C9C[iVar0 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_24839F[iParam0 /*99*/].f_5C != 4294967295)
	{
		HUD::_REMOVE_NOTIFICATION(Global_24839F[iParam0 /*99*/].f_5C);
	}
	if (!Global_24839F[iParam0 /*99*/].f_38)
	{
		if (Global_24839F[iParam0 /*99*/].f_34 != 0)
		{
			NETWORK::_0x5A34CD9C3C5BEC44(Global_24839F[iParam0 /*99*/].f_34);
		}
	}
	func_45(Global_24839F[iParam0 /*99*/].f_5B);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_150958)
	{
		Global_24839F[iVar1 /*99*/] = { Global_24839F[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_150958 = (Global_150958 - 1);
	if (Global_15093D)
	{
		if (Global_15093B > 0)
		{
			func_38();
		}
	}
}

void func_38()//Position - 0x1DD6
{
	Global_15093D = 0;
}

void func_39(int iParam0)//Position - 0x1DE3
{
	Global_24839F[iParam0 /*99*/] = 0;
	Global_24839F[iParam0 /*99*/].f_1 = 0;
	Global_24839F[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_F), "", 64);
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_1F), "", 64);
	Global_24839F[iParam0 /*99*/].f_2F = 4294967295;
	Global_24839F[iParam0 /*99*/].f_30 = MISC::GET_GAME_TIMER();
	Global_24839F[iParam0 /*99*/].f_31 = 4294967295;
	Global_24839F[iParam0 /*99*/].f_32 = 4294967295;
	Global_24839F[iParam0 /*99*/].f_33 = 4294967295;
	Global_24839F[iParam0 /*99*/].f_34 = 0;
	Global_24839F[iParam0 /*99*/].f_35 = 0;
	Global_24839F[iParam0 /*99*/].f_35.f_1 = 0;
	Global_24839F[iParam0 /*99*/].f_35.f_2 = 0;
	Global_24839F[iParam0 /*99*/].f_38 = 0;
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_39), "", 64);
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_49), "", 64);
	Global_24839F[iParam0 /*99*/].f_59 = 0;
	Global_24839F[iParam0 /*99*/].f_5A = 0;
	Global_24839F[iParam0 /*99*/].f_5B = 4294967295;
	Global_24839F[iParam0 /*99*/].f_5C = 4294967295;
	Global_24839F[iParam0 /*99*/].f_5D = 0;
	Global_24839F[iParam0 /*99*/].f_5E = 4294967295;
	Global_24839F[iParam0 /*99*/].f_5F = 0;
	Global_24839F[iParam0 /*99*/].f_60 = 0;
	Global_24839F[iParam0 /*99*/].f_61 = 0;
	Global_24839F[iParam0 /*99*/].f_62 = 0;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)//Position - 0x1F25
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_150958)
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_24839F[iVar0 /*99*/].f_F)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool func_41(int iParam0)//Position - 0x1F5E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_8E, 22);
}

bool func_42(bool bParam0)//Position - 0x1F77
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_43()//Position - 0x1FA2
{
	if (Global_19E56.f_2361.f_14A[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_44()//Position - 0x1FBF
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_8E, 2);
}

void func_45(var uParam0)//Position - 0x1FD9
{
	int iVar0;
	
	iVar0 = NETWORK::_0x742B58F723233ED9(uParam0);
	if (iVar0 < 0 || iVar0 >= NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
	{
		return;
	}
	if (NETWORK::NETWORK_REMOVE_PRESENCE_INVITE(iVar0))
	{
		return;
	}
}

bool func_46()//Position - 0x200C
{
	return Global_140831 == 10;
}

int func_47()//Position - 0x201B
{
	if (!Global_11625)
	{
		return 1;
	}
	else if (func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()//Position - 0x203E
{
	if (Global_1406BE)
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return func_49(120, 4294967295);
}

int func_49(int iParam0, int iParam1)//Position - 0x206E
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_50(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)//Position - 0x209A
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_51();
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

int func_51()//Position - 0x20CE
{
	return Global_1407E0;
}

bool func_52()//Position - 0x20DA
{
	return Global_14084D;
}

bool func_53()//Position - 0x20E6
{
	return Global_14084F;
}

void func_54(var uParam0, int iParam1)//Position - 0x20F2
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == 4294967295)
	{
		iVar0 = func_51();
	}
	Global_140845[iVar0] = uParam0;
}

void func_55(int iParam0)//Position - 0x2114
{
	func_105();
	if (func_104(1))
	{
		if (!func_95())
		{
			if (!func_84(1))
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					func_83();
				}
				func_58(1, 0);
				NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iParam0);
				func_57();
				func_56();
			}
		}
	}
}

void func_56()//Position - 0x2159
{
	Global_193FA3.f_7 = 1;
}

void func_57()//Position - 0x2168
{
	Global_193FA3.f_6 = 1;
}

void func_58(int iParam0, bool bParam1)//Position - 0x2177
{
	if (func_104(iParam0))
	{
		Global_193FA3.f_10[iParam0 /*44*/].f_5 = 1;
		func_60(iParam0, 0);
		func_59();
		if (bParam1)
		{
			Global_193FA3 = 1;
		}
	}
}

void func_59()//Position - 0x21AA
{
	Global_193FA3.f_2 = 1;
}

void func_60(int iParam0, bool bParam1)//Position - 0x21B9
{
	struct<6> Var0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam1)
		{
			func_82();
			func_72(CAM::_0xDC9DA9E8789F5246(), 0, 81920);
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_62 = 8;
			func_71();
			func_70();
		}
		func_69(iParam0);
		func_68(iParam0);
		func_66();
		func_65();
		func_59();
	}
	Var0 = { func_64(iParam0) };
	func_63(iParam0);
	func_61(&Var0);
}

void func_61(char* sParam0)//Position - 0x2224
{
	StringCopy(&(Global_255C02.f_2EC), sParam0, 24);
	if (func_62())
	{
		StringCopy(&(Global_EA450.f_2A), sParam0, 24);
	}
}

bool func_62()//Position - 0x2248
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255F11.f_1.f_AF9, 5);
}

void func_63(int iParam0)//Position - 0x225E
{
	Global_193FA3.f_10[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_64(int iParam0)//Position - 0x2273
{
	return Global_193FA3.f_10[iParam0 /*44*/].f_6;
}

void func_65()//Position - 0x2289
{
	Global_255C02.f_6 = 100;
}

void func_66()//Position - 0x2299
{
	MISC::SET_BIT(&Global_255C02, 5);
	func_67();
}

void func_67()//Position - 0x22AE
{
	MISC::SET_BIT(&Global_255C02, 8);
}

void func_68(var uParam0)//Position - 0x22C0
{
	Global_193FA3.f_8 = uParam0;
}

void func_69(var uParam0)//Position - 0x22D0
{
	Global_193FA3.f_9 = uParam0;
}

void func_70()//Position - 0x22E0
{
	Global_257B9F.f_1 = 0;
}

void func_71()//Position - 0x22EF
{
	char* sVar0;
	
	StringCopy(&(Global_255C02.f_2EC), sVar0, 24);
}

void func_72(int iParam0, bool bParam1, int iParam2)//Position - 0x2302
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_80())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			iVar25 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_78(CAM::_0xDC9DA9E8789F5246(), 0) && !func_77()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_24FBF9[iParam0 /*413*/].f_F4 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_76(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
				{
					if (!bVar20)
					{
						unk_0x346478B12F69D4E3(iVar25, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x346478B12F69D4E3(iVar25, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x86195BFC9E6E3412(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar25) && PED::_0x7350823473013C02(iVar25))
				{
					PED::_0x4668D80430D6C299(iVar25);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar25, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()) == 0)
				{
					func_75();
					func_74();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_24FBF9[iParam0 /*413*/].f_F5 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_24B2CE.f_A67)
				{
					Global_24B2CE.f_A67 = 0;
				}
			}
			else
			{
				if (!func_76(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
					{
						if (!bVar20)
						{
							unk_0x346478B12F69D4E3(iVar25, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar25, 1);
						}
					}
					if (func_73(Global_440000.f_2559E))
					{
						unk_0x346478B12F69D4E3(iVar25, true);
					}
				}
				if (Global_140842)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar25) && !PED::IS_PED_IN_ANY_VEHICLE(iVar25, 0))
					{
						BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar26);
		}
	}
}

bool func_73(int iParam0)//Position - 0x271B
{
	return iParam0 == 17;
}

void func_74()//Position - 0x2728
{
	vector3 vVar0;
	
	Global_252F9E.f_4CC = 0;
	Global_252F9E.f_4CD = 0;
	Global_252F9E.f_4CE = { 9999.9f, 9999.9f, 9999.9f };
	Global_252F9E.f_4D3 = 4294967295;
	Global_252F9E.f_4D4 = 0;
	Global_24B2CE.f_A72 = { vVar0 };
}

void func_75()//Position - 0x2775
{
	Global_24B2CE.f_2B3 = 0;
	Global_24B2CE.f_A9D = 0;
	Global_24B2CE.f_1FD = 0;
	Global_24B2CE.f_255 = 0;
	Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 0;
	Global_24B2CE.f_A70 = 0;
}

int func_76(int iParam0)//Position - 0x27B3
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 2500551826);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_77()//Position - 0x27E4
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

bool func_78(int iParam0, int iParam1)//Position - 0x27F5
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_79(4294967295, 0) == 8;
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

int func_79(int iParam0, bool bParam1)//Position - 0x2840
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_51();
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

int func_80()//Position - 0x2881
{
	if (func_81() == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()//Position - 0x2896
{
	return Global_1406D2.f_12;
}

void func_82()//Position - 0x28A4
{
	MISC::SET_BIT(&Global_255C02, 7);
}

void func_83()//Position - 0x28B5
{
	MISC::SET_BIT(&(Global_255C02.f_2), 15);
}

int func_84(int iParam0)//Position - 0x28C9
{
	if (iParam0 || func_94())
	{
		if (!func_86(1))
		{
			return 1;
		}
		if (!func_85())
		{
			return 1;
		}
		if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
		{
			return 1;
		}
	}
	return 0;
}

bool func_85()//Position - 0x2905
{
	return Global_193FA3.f_4;
}

int func_86(bool bParam0)//Position - 0x2913
{
	if (!func_91())
	{
		return 0;
	}
	if ((func_89(func_90(4294967295), 0) >= 1 || func_49(123, 4294967295)) && func_49(133, 4294967295))
	{
		func_88();
		return 1;
	}
	else if (bParam0)
	{
		func_87();
	}
	return 0;
}

void func_87()//Position - 0x2964
{
	Global_193FA3.f_5 = 1;
}

void func_88()//Position - 0x2973
{
	Global_193FA3.f_4 = 1;
}

int func_89(int iParam0, int iParam1)//Position - 0x2982
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_4646A[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4646A[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_90(int iParam0)//Position - 0x2A41
{
	return Global_150A81[func_50(iParam0)];
}

int func_91()//Position - 0x2A55
{
	if (func_93() && func_92(0))
	{
		return 1;
	}
	return 0;
}

var func_92(int iParam0)//Position - 0x2A73
{
	return Global_140675[iParam0];
}

var func_93()//Position - 0x2A83
{
	return func_92(func_51() + 1);
}

var func_94()//Position - 0x2A95
{
	return Global_193FA3.f_2;
}

int func_95()//Position - 0x2AA3
{
	if (((((func_103() || !func_101(4294967295)) || !func_99()) || !func_98()) || !func_97()) || func_96())
	{
		return 1;
	}
	return 0;
}

var func_96()//Position - 0x2AEE
{
	return Global_25825C;
}

int func_97()//Position - 0x2AFA
{
	if (MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_98()//Position - 0x2B15
{
	int iVar0;
	
	if (NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_99()//Position - 0x2B32
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_100(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x2B5E
{
	if (func_49(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)//Position - 0x2B7A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_102(iParam0);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)//Position - 0x2BA1
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_51();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_103()//Position - 0x2C04
{
	return Global_255C02.f_278;
}

bool func_104(int iParam0)//Position - 0x2C13
{
	return Global_193FA3.f_10[iParam0 /*44*/].f_4;
}

void func_105()//Position - 0x2C27
{
	int iVar0;
	int iVar1;
	
	func_111();
	if (SOCIALCLUB::_0xFF8F3A92B75ED67A() && !func_108())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = SOCIALCLUB::_0x4A7D6E727F941747(func_107(iVar0));
			if (iVar1 > 0)
			{
				Global_193FA3.f_10[iVar0 /*44*/] = iVar1;
				func_106(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_193FA3.f_10[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_106(int iParam0, int iParam1)//Position - 0x2C9E
{
	bool bVar0;
	struct<16> Var1;
	var uVar2;
	
	bVar0 = true;
	if (SOCIALCLUB::_0x699E4A5C8C893A18(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_193FA3.f_10[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (SOCIALCLUB::_0x699E4A5C8C893A18(iParam1, "playlist", &Var1))
	{
		Global_193FA3.f_10[iParam0 /*44*/].f_C = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (SOCIALCLUB::_0x19853B5B17D77BCA(iParam1, &Var1))
	{
		Global_193FA3.f_10[iParam0 /*44*/].f_1C = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (SOCIALCLUB::_0x8CC469AB4D349B7C(iParam1, "coronaCountdown", &uVar2))
		{
			Global_193FA3.f_10[iParam0 /*44*/].f_1 = uVar2;
		}
		else
		{
			Global_193FA3.f_10[iParam0 /*44*/].f_1 = 120000;
		}
		Global_193FA3.f_10[iParam0 /*44*/].f_2 = 0;
		if (SOCIALCLUB::_0x8CC469AB4D349B7C(iParam1, "eventSubType", &uVar2))
		{
			Global_193FA3.f_10[iParam0 /*44*/].f_2 = uVar2;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_193FA3.f_1 = 1;
		}
		Global_193FA3.f_10[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_193FA3.f_10[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_107(int iParam0)//Position - 0x2DAC
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_108()//Position - 0x2DF9
{
	if (!func_109())
	{
		return 1;
	}
	return 0;
}

int func_109()//Position - 0x2E0E
{
	if (func_110())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_110()//Position - 0x2E2E
{
	return Global_258443;
}

void func_111()//Position - 0x2E3A
{
	struct<281> Var0;
	
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_10 = 6;
	Global_193FA3 = { Var0 };
}

void func_112(int iParam0)//Position - 0x2E65
{
	var uVar0;
	
	if (Global_11625)
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Hang_Up", &Global_38A6, 1);
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 21))
	{
		func_114();
	}
	Global_269E92.f_1 = 0;
	Global_269E92.f_21 = 4294967295;
	Global_269E92.f_22 = 4294967295;
	StringCopy(&(Global_269E92.f_4), "", 64);
	func_113(&(Global_269E92.f_14));
}

void func_113(var uParam0)//Position - 0x2ECD
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

void func_114()//Position - 0x2F15
{
	Global_269E92.f_2 = 1;
	Global_269E92.f_26 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::_0x855BC38818F6F684())
		{
			while (NETWORK::_0xEF0912DDF7C4CB4B())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_269E92 = 0;
			Global_269E92.f_2 = 0;
		}
		else if (func_121(Global_269E92.f_14))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_269E92.f_14)))
			{
				if (!NETWORK::_NETWORK_IS_FRIEND_ONLINE_2(&(Global_269E92.f_14)))
				{
					func_120();
				}
			}
		}
		else
		{
			func_120();
		}
	}
	else
	{
		func_120();
	}
	if (Global_269E92.f_25)
	{
		func_115(0);
	}
	Global_269E92.f_25 = 0;
	Global_269E92.f_3 = 0;
}

void func_115(int iParam0)//Position - 0x2FB5
{
	if (func_119())
	{
		return;
	}
	if (Global_3959)
	{
		func_117(0, 0);
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
	if (!func_116())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_116()//Position - 0x302F
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_117(bool bParam0, bool bParam1)//Position - 0x3056
{
	if (bParam0)
	{
		if (func_118(0))
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

int func_118(int iParam0)//Position - 0x30CA
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

bool func_119()//Position - 0x3124
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_120()//Position - 0x3136
{
	Global_269E92.f_1 = 0;
	Global_269E92 = 0;
	Global_269E92.f_2 = 0;
	Global_269E92.f_21 = 4294967295;
	Global_269E92.f_22 = 4294967295;
	StringCopy(&(Global_269E92.f_4), "", 64);
	StringCopy(&(Global_269E92.f_27[0 /*16*/]), "", 64);
	Global_269E92.f_26 = 0;
	Global_269E92.f_38 = 0;
	Global_269E92.f_39 = 0;
	Global_269E92.f_3A = 4294967294;
	Global_269E92.f_3 = 0;
	func_113(&(Global_269E92.f_14));
}

bool func_121(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x31A5
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_122(int iParam0)//Position - 0x31B5
{
	struct<2> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 15))
	{
		Global_269E92.f_21 = Var0.f_1;
		Global_269E92.f_22 = Var0;
	}
}

void func_123(int iParam0)//Position - 0x31E0
{
	struct<9> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 21))
	{
		if (Global_269E92.f_3 == 0)
		{
			if (!func_124(&(Var0.f_8)))
			{
				NETWORK::NETWORK_SET_KEEP_FOCUSPOINT(0, 2);
			}
			else
			{
				Global_269E92.f_3 = 1;
				MemCopy(&(Global_269E92.f_4), {Var0}, 16);
				Global_269E92.f_14 = { Var0.f_8 };
				StringCopy(&(Global_269E92.f_27[0 /*16*/]), "", 64);
				Global_269E92.f_3A = 4294967294;
				Global_269E92.f_38 = 0;
				Global_269E92.f_39 = 0;
			}
		}
		else if (!func_124(&(Var0.f_8)))
		{
			NETWORK::NETWORK_SET_KEEP_FOCUSPOINT(0, 2);
		}
		else
		{
			Global_269E92.f_3 = 1;
			MemCopy(&(Global_269E92.f_4), {Var0}, 16);
			Global_269E92.f_14 = { Var0.f_8 };
			StringCopy(&(Global_269E92.f_27[0 /*16*/]), "", 64);
			Global_269E92.f_3A = 4294967294;
			Global_269E92.f_38 = 0;
			Global_269E92.f_39 = 0;
		}
	}
}

int func_124(var uParam0)//Position - 0x32C4
{
	if (Global_11625)
	{
		if (func_48() == 0)
		{
			return 0;
		}
		if (func_128(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(AUDIO::_0x0626A247D2405330()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	if (Global_269E92.f_1)
	{
	}
	if (Global_3961 == 1)
	{
		return 0;
	}
	if (Global_18060E)
	{
		return 0;
	}
	if (Global_269E92.f_24)
	{
		return 0;
	}
	if (func_116())
	{
		return 0;
	}
	if (((Global_8D15 != 6 && Global_8D15 != 8) && Global_8D15 != 12) && Global_8D15 != 15)
	{
		return 0;
	}
	if (func_127() && !func_126(12))
	{
		return 0;
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		return 0;
	}
	if (!func_125(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (Global_11729)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		if (!NETWORK::NETWORK_PLAYER_HAS_HEADSET(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(uParam0) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(uParam0) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(uParam0))
	{
		return 0;
	}
	if (NETWORK::_0x2FC5650B0271CB57())
	{
		if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0xFD8B834A8BA05048())
			{
				return 0;
			}
		}
		else if (MISC::IS_ORBIS_VERSION())
		{
			return 0;
		}
	}
	return 1;
}

int func_125(int iParam0)//Position - 0x3448
{
	int iVar0;
	struct<13> Var1;
	
	if (NETWORK::_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	iVar0 = 4294967295;
	if (iParam0 != CAM::_0xDC9DA9E8789F5246())
	{
		iVar0 = iParam0;
		if (iVar0 == 4294967295)
		{
			return 0;
		}
	}
	if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		if (iParam0 == CAM::_0xDC9DA9E8789F5246())
		{
			if (NETWORK::_0x83F28CE49FBBFFBA(0, 4294967293, 1) || NETWORK::_0xAEEF48CDF5B6CE7C(1, 4294967295))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (NETWORK::_0xAEEF48CDF5B6CE7C(0, 4294967295) || (NETWORK::_0xAEEF48CDF5B6CE7C(1, 4294967295) && NETWORK::NETWORK_IS_FRIEND(&Var1)))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_126(int iParam0)//Position - 0x3521
{
	return Global_8D15 == iParam0;
}

int func_127()//Position - 0x352F
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	return 1;
}

int func_128(int iParam0, bool bParam1, bool bParam2)//Position - 0x3544
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

void func_129()//Position - 0x358E
{
	func_120();
}

void func_130()//Position - 0x359A
{
	Global_269E92.f_1 = 1;
	Global_269E92.f_21 = 4294967295;
	Global_269E92.f_22 = 4294967295;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E) == 1)
	{
		if (Global_38A5)
		{
			func_131(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_3878)
			{
				func_131(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_131(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_131(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x3613
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_132(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_132(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_132(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_132(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_132(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_132(char* sParam0)//Position - 0x36C6
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_133()//Position - 0x36D8
{
	int iVar0;
	
	if (iLocal_96)
	{
		Global_BD30 = 0;
		Global_BD30.f_C = 0;
		Global_BD30.f_18 = 0;
		Global_BD30.f_24 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_BD30.f_1[iVar0] = 0;
			Global_BD30.f_D[iVar0] = 0;
			Global_BD30.f_19[iVar0] = 0;
			Global_BD30.f_25[iVar0] = 0;
			iVar0++;
		}
		iLocal_96 = 0;
	}
}
