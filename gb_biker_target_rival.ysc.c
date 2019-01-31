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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	func_80();
	while (true)
	{
		func_79();
		if (func_71())
		{
			func_70();
		}
		if (Global_26862F.f_1313.f_2E4 == 0)
		{
			func_70();
		}
		switch (iLocal_35)
		{
			case 0:
				iLocal_35 = 1;
				break;
			
			case 1:
				if (func_11())
				{
					iLocal_35 = 2;
				}
				break;
			
			case 2:
				if (!func_1())
				{
					iLocal_35 = 4;
				}
				break;
			
			case 4:
				func_70();
				break;
		}
	}
}

int func_1()//Position - 0xD3
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_26862F.f_1313.f_2E3;
		if (iVar0 != func_6())
		{
			if (func_4(iVar0))
			{
				func_2(iVar0);
				return 0;
			}
		}
		else
		{
			func_2(iVar0);
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_2(int iParam0)//Position - 0x120
{
	if (iParam0 != func_6())
	{
		func_3(iParam0);
	}
	Global_26862F.f_1313.f_2E3 = func_6();
}

void func_3(int iParam0)//Position - 0x145
{
	int iVar0;
	
	iVar0 = iParam0;
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_181), iVar0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_182), iVar0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_183), iVar0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_185), iVar0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_189), iVar0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_184), iVar0);
}

int func_4(int iParam0)//Position - 0x19F
{
	if (!func_5(iParam0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)//Position - 0x1B8
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

int func_6()//Position - 0x202
{
	return 4294967295;
}

bool func_7(bool bParam0)//Position - 0x20B
{
	return func_8(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

int func_8(int iParam0, bool bParam1)//Position - 0x21D
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, bool bParam1, int iParam2)//Position - 0x22E
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_10(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_6() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0, int iParam1)//Position - 0x28A
{
	if (iParam0 != func_6())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_6())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11()//Position - 0x2D9
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_26862F.f_1313.f_2E3;
		if (iVar0 != func_6())
		{
			if (func_12(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_12(int iParam0)//Position - 0x30C
{
	if (func_5(iParam0, 0, 1))
	{
		func_68(iParam0, 432, 1, 0);
		if (func_67(iParam0))
		{
			func_64(iParam0, func_65(func_66(CAM::_0xDC9DA9E8789F5246())), 1, 0);
		}
		if (func_62(iParam0))
		{
			func_60(iParam0, 1, 1, 0);
		}
		func_55(iParam0, 1, 0);
		func_13(iParam0, 1, 5000);
		return 1;
	}
	return 0;
}

void func_13(int iParam0, bool bParam1, int iParam2)//Position - 0x370
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_252F9E)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_24DCF5[iVar0]))
		{
			MISC::SET_BIT(&(Global_24DCF5.f_16F), iVar0);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_174), iVar0);
			HUD::SET_BLIP_FLASHES(Global_24DCF5[iVar0], 1);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_24DCF5[iVar0], 250);
			func_14(iParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_24DCF5.f_174), iVar0);
			}
			else
			{
				Global_24DCF5.f_C6[iVar0] = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam2);
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_24DCF5.f_16F), iVar0);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_174), iVar0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_24DCF5.f_174), iVar0);
			}
			else
			{
				Global_24DCF5.f_C6[iVar0] = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_16F), iVar0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_174), iVar0);
		if (HUD::DOES_BLIP_EXIST(Global_24DCF5[iVar0]))
		{
			func_14(iParam0);
			HUD::SET_BLIP_FLASHES(Global_24DCF5[iVar0], 0);
		}
	}
}

void func_14(int iParam0)//Position - 0x4A5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_24DCF5[iVar0]))
		{
			Global_24DCF5.f_575[iVar0] = func_15(iParam0);
			HUD::SET_BLIP_PRIORITY(Global_24DCF5[iVar0], Global_24DCF5.f_575[iVar0]);
		}
	}
}

int func_15(int iParam0)//Position - 0x4F3
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_24DCF5[iVar0]))
		{
			iVar1 = HUD::GET_BLIP_SPRITE(Global_24DCF5[iVar0]);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24DCF5.f_17F, iVar0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24DCF5.f_17E, iVar0))
			{
				return 1;
			}
			else if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24DCF5.f_170, iVar0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24DCF5.f_16F, iVar0)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24DCF5.f_181, iVar0))
			{
				return func_52(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_52(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_52(11);
						break;
					
					case 254:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_252F9E))
						{
							return func_52(6);
						}
						else
						{
							return func_52(5);
						}
						break;
					
					case 271:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_252F9E))
						{
							return func_52(6);
						}
						else
						{
							return func_52(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_51(Global_252F9E, iParam0, 4294967294, 0))
						{
							return func_52(6);
						}
						else
						{
							return func_52(5);
						}
						break;
					
					case 303:
					case 418:
						return func_52(10);
						break;
					
					case 364:
						if (func_16(Global_252F9E, iParam0, 1))
						{
							return func_52(10);
						}
						else
						{
							return func_52(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_52(10);
						break;
					
					case 417:
						if (func_16(Global_252F9E, iParam0, 1))
						{
							return func_52(6);
						}
						else
						{
							return func_52(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_16(Global_252F9E, iParam0, 1))
						{
							return func_52(6);
						}
						else
						{
							return func_52(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_16(int iParam0, int iParam1, bool bParam2)//Position - 0x730
{
	if (func_19(iParam0, 4294967294, 0, 0, 0) == func_19(iParam1, 4294967294, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_17(func_19(iParam0, 4294967294, 0, 0, 0)) && func_17(func_19(iParam1, 4294967294, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0)//Position - 0x789
{
	if (iParam0 == func_18(1) || iParam0 == func_18(0))
	{
		return 1;
	}
	return 0;
}

int func_18(bool bParam0)//Position - 0x7AF
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_19(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7C6
{
	int iVar0;
	int iVar1;
	
	if (func_46(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == 4294967294)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > 4294967295 && iVar0 < 4)
		{
			if (Global_440000.f_1EBA3[iVar0] != 4294967295)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_46(CAM::_0xDC9DA9E8789F5246()) || (func_45() && func_44())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 31)) && !bParam4)
	{
		iVar1 = func_43();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != 4294967295)
				{
					if (func_5(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_440000.f_1EBA3[iParam1] != 4294967295)
							{
								return func_41(iParam1, iParam0, 0);
							}
							else
							{
								return func_29(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_29(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_440000.f_1EBA3[iParam1] != 4294967295)
				{
					return func_41(iParam1, iParam0, 0);
				}
				else
				{
					return func_20(0, 4294967295, 0);
				}
			}
			else
			{
				return func_20(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_440000.f_1EBA3[iParam1] != 4294967295)
		{
			return func_41(iParam1, iParam0, 0);
		}
		else
		{
			return func_29(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
		}
	}
	return func_29(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
}

int func_20(bool bParam0, int iParam1, bool bParam2)//Position - 0x9A6
{
	return func_21(CAM::_0xDC9DA9E8789F5246(), bParam0, iParam1, bParam2);
}

int func_21(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x9BC
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_27() && Global_150AAC.f_1)
	{
		if (bParam1)
		{
			return func_26(iParam2, iVar0);
		}
		else
		{
			return func_26(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_25(iVar0, iParam2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_18(1);
				}
				else
				{
					return func_18(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 20))
			{
				return func_22(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_22(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_18(1);
	}
	return func_18(0);
}

int func_22(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xAB0
{
	int iVar0;
	
	iVar0 = func_24(iParam0, iParam1, iParam3);
	if (func_23(Global_440000.f_1FEDE, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_23(int iParam0, bool bParam1)//Position - 0xBC8
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_2559E == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_40001.f_22CA[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_24(int iParam0, int iParam1, int iParam2)//Position - 0xC19
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_25(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_25(int iParam0, int iParam1, int iParam2)//Position - 0xC60
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

int func_26(int iParam0, int iParam1)//Position - 0xE2B
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_24(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_27()//Position - 0xE79
{
	if (func_28() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_28()//Position - 0xE96
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_29(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xEAE
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 4294967294)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > 4294967295)
	{
		if (Global_1841F3[iVar2 /*790*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 4294967295)
		{
			if (func_37(1))
			{
				iVar3 = func_33(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_31(iVar3);
				}
			}
			if ((func_51(iParam1, iParam0, iVar0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)) || ((func_25(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 23)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)))
			{
				return func_18(1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26))
			{
				return func_30(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805F9 || Global_1805F0) || Global_1841F3[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805F9 == 1 && Global_180603 == 0))
			{
				return func_18(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805F4 && Global_1803FE.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_33(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_31(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_30(bool bParam0)//Position - 0x1052
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_31(int iParam0)//Position - 0x1069
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_32(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_32(int iParam0)//Position - 0x112C
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_33(int iParam0)//Position - 0x1143
{
	if (!iParam0 == func_6())
	{
		if (func_35(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_34(iParam0)];
		}
	}
	return 4294967295;
}

int func_34(int iParam0)//Position - 0x1175
{
	if (iParam0 != func_6())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_6();
}

bool func_35(int iParam0, bool bParam1)//Position - 0x1198
{
	if (!bParam1)
	{
		if (func_36(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_6();
}

int func_36(int iParam0)//Position - 0x11C3
{
	if (iParam0 != func_6())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_6())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_37(int iParam0)//Position - 0x11F8
{
	if ((func_40() || func_39()) || (func_38() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_38()//Position - 0x1227
{
	return Global_255C02.f_10;
}

var func_39()//Position - 0x1235
{
	return Global_255C02.f_F;
}

var func_40()//Position - 0x1243
{
	return Global_255C02.f_E;
}

int func_41(int iParam0, int iParam1, bool bParam2)//Position - 0x1251
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC93F.f_D[iParam0];
	if (func_37(1))
	{
		iVar2 = func_33(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_31(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iParam0 /*10693*/].f_159C[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_6())
	{
		if (Global_440000.f_1EBA3[iParam0] != 4294967295 && Global_440000.f_1EBA3[iParam0] <= 4)
		{
			if (Global_440000.f_1EBA3[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 4)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_440000.f_1EBA3[iParam0];
			}
		}
		else
		{
			iVar0 = func_21(iParam1, !bParam2, iParam0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_15, 13))
		{
			iVar0 = func_42(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26) && !func_25(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_30(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_42(int iParam0)//Position - 0x13DF
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_440000.f_255C9;
			break;
		
		case 1:
			iVar0 = Global_440000.f_255CA;
			break;
		
		case 2:
			iVar0 = Global_440000.f_255CB;
			break;
		
		case 3:
			iVar0 = Global_440000.f_255CC;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_43()//Position - 0x14B4
{
	return Global_240006.f_2;
}

bool func_44()//Position - 0x14C2
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 4);
}

bool func_45()//Position - 0x14D3
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

int func_46(int iParam0)//Position - 0x14F0
{
	if (func_48(iParam0, 0))
	{
		return 1;
	}
	if (func_47())
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

bool func_47()//Position - 0x1532
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

bool func_48(int iParam0, int iParam1)//Position - 0x1543
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_49(4294967295, 0) == 8;
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

int func_49(int iParam0, bool bParam1)//Position - 0x158E
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_50();
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

int func_50()//Position - 0x15CF
{
	return Global_1407E0;
}

bool func_51(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x15DB
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

int func_52(int iParam0)//Position - 0x1653
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_54())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_53(iParam0);
}

int func_53(int iParam0)//Position - 0x168D
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_54()//Position - 0x1718
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(Global_252F9E);
	if (iVar0 > 4294967295 && iVar0 < 4)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iVar0 /*10693*/].f_15E5, 4);
	}
	return 0;
}

void func_55(int iParam0, bool bParam1, bool bParam2)//Position - 0x1751
{
	var uVar0;
	
	if (func_57(iParam0))
	{
		return;
	}
	func_56(&(Global_24DCF5.f_2C9[iParam0]), &(Global_24DCF5.f_434[iParam0]), &(Global_24DCF5.f_186), bParam1, iParam0, bParam2, &uVar0);
}

int func_56(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x178F
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam2, iParam4))
			{
				*uParam6 = 1;
				GRAPHICS::_0x35FB78DC42B7BD21(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = 4294967295;
			}
			*uParam0 = 4294967295;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x1854
{
	if (iParam0 == func_6())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_58())
	{
		return 1;
	}
	return 0;
}

int func_58()//Position - 0x187D
{
	switch (func_59())
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

int func_59()//Position - 0x18B1
{
	return Global_6373;
}

void func_60(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x18BC
{
	var uVar0;
	
	if (func_57(iParam0))
	{
		return;
	}
	if (func_56(&(Global_24DCF5.f_32C[iParam0]), &(Global_24DCF5.f_497[iParam0]), &(Global_24DCF5.f_16C), bParam1, iParam0, bParam3, &uVar0))
	{
		func_61(iParam0, bParam2);
	}
}

void func_61(int iParam0, bool bParam1)//Position - 0x1904
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_24DCF5.f_16D), iParam0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_16D), iParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_24DCF5[iParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_24DCF5[iParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_24DCF5[iParam0], true);
		}
	}
}

bool func_62(int iParam0)//Position - 0x195F
{
	return func_63(&(Global_24DCF5.f_32C[iParam0]));
}

int func_63(var uParam0)//Position - 0x1976
{
	if (SCRIPT::IS_THREAD_ACTIVE(*uParam0))
	{
		if (!*uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return 0;
		}
	}
	return 1;
}

void func_64(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1999
{
	var uVar0;
	
	if (func_57(iParam0))
	{
		return;
	}
	if (func_56(&(Global_24DCF5.f_266[iParam0]), &(Global_24DCF5.f_3D1[iParam0]), &(Global_24DCF5.f_182), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_1C1[iParam0] = uParam1;
		}
	}
}

int func_65(int iParam0)//Position - 0x19EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_66(int iParam0)//Position - 0x1C53
{
	int iVar0;
	
	iVar0 = func_33(iParam0);
	if (iVar0 != 4294967295)
	{
		return func_31(iVar0);
	}
	return 1;
}

bool func_67(int iParam0)//Position - 0x1C73
{
	return func_63(&(Global_24DCF5.f_266[iParam0]));
}

void func_68(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1C8A
{
	bool bVar0;
	
	if (func_57(iParam0))
	{
		return;
	}
	if (func_56(&(Global_24DCF5.f_245[iParam0]), &(Global_24DCF5.f_3B0[iParam0]), &(Global_24DCF5.f_181), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_1A0[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_69();
		}
	}
}

void func_69()//Position - 0x1CE5
{
	Global_24DCF5.f_5E4 = 1;
}

void func_70()//Position - 0x1CF5
{
	func_2(Global_26862F.f_1313.f_2E3);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

int func_71()//Position - 0x1D0F
{
	var uVar0;
	
	func_76(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_75())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_74())
	{
		return 1;
	}
	if (func_73(157))
	{
		if (!func_72())
		{
			return 1;
		}
	}
	if (func_73(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_58() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_58()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_72()//Position - 0x1D99
{
	return Global_255C02.f_24B;
}

int func_73(int iParam0)//Position - 0x1DA8
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_74()//Position - 0x1DBF
{
	return Global_25824F;
}

bool func_75()//Position - 0x1DCB
{
	return Global_255C02.f_246;
}

void func_76(var uParam0)//Position - 0x1DDA
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
					func_77(iVar0);
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

void func_77(int iParam0)//Position - 0x1E4D
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_5(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_78(iVar2, &bVar3))
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

int func_78(int iParam0, var uParam1)//Position - 0x1ECE
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

void func_79()//Position - 0x1F2D
{
	SYSTEM::WAIT(0);
}

int func_80()//Position - 0x1F3A
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	return 1;
}

