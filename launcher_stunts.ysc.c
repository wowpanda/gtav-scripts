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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<2> Local_85 = { 0, 5 } ;
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
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 5;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
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
	iLocal_17 = 4294967295;
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_60 = 4294967295;
	iLocal_61 = 2050;
	iLocal_62 = 4294967295;
	iLocal_63 = 4294967295;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	fLocal_79 = 0f;
	vLocal_56 = { ScriptParam_85.f_1[0 /*3*/] };
	vLocal_56 = { vLocal_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_111(1);
	}
	iLocal_53 = PLAYER::GET_PLAYER_PED(CAM::_0xDC9DA9E8789F5246());
	iLocal_59 = 0;
	func_109(&Global_19911, 0);
	func_108();
	if (func_107(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_7C8F)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_107(uLocal_58, 8))
	{
		if (!func_105(iLocal_64))
		{
			if (func_104(0, iLocal_63))
			{
				func_111(0);
			}
			else
			{
				func_111(1);
			}
		}
	}
	if (iLocal_63 != 4294967295)
	{
		if (!func_104(0, iLocal_63))
		{
			func_111(1);
		}
	}
	if (func_107(uLocal_58, 8388608))
	{
		func_111(1);
	}
	if (func_107(uLocal_58, 524288) && (func_103() && !func_102()))
	{
		func_111(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_107(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_101(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_100(10);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (func_99() && !Global_19A9D)
		{
			func_98(1);
		}
		else if (Global_19A9D)
		{
		}
	}
	while (true)
	{
		if ((!func_97() && !func_96()) && !func_95())
		{
			func_111(1);
		}
		iLocal_53 = PLAYER::GET_PLAYER_PED(CAM::_0xDC9DA9E8789F5246());
		if (func_107(uLocal_58, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_53, 0))
			{
				func_111(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_53, 0))
		{
			vLocal_55 = { unk_0x8000C77B5F336760(iLocal_53, true) };
			fLocal_57 = SYSTEM::VDIST2(vLocal_55, ScriptParam_85.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_85.f_1[0 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = SYSTEM::VDIST2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_105(iLocal_64) || (func_107(uLocal_58, 16) && !func_107(uLocal_58, 524288)))
					{
						STREAMING::REQUEST_MODEL(iLocal_78);
						iLocal_62 = 4294967295;
						func_94();
						func_100(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_101(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_100(10);
						}
						if ((vLocal_55.z - ScriptParam_85.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_93() && STREAMING::HAS_MODEL_LOADED(iLocal_78))
					{
						iLocal_67 = iLocal_67;
						func_100(3);
					}
					else
					{
						func_94();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_111(1);
						return;
					}
					if (!func_105(iLocal_64))
					{
						if (!func_107(uLocal_58, 8))
						{
							bVar1 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_16C30.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_111(0);
								break;
							}
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54) && (((fLocal_57 > (10f * 10f) && !CAM::IS_SPHERE_VISIBLE(ScriptParam_85.f_1[0 /*3*/], 5f)) || fLocal_57 > (80f * 80f)) || (!ENTITY::DOES_ENTITY_EXIST(iLocal_54) && CAM::IS_SCREEN_FADED_OUT())))
					{
						MISC::CLEAR_AREA_OF_VEHICLES(ScriptParam_85.f_1[0 /*3*/], 8f, 0, 0, 0, 0, false, 0);
						iLocal_54 = VEHICLE::CREATE_VEHICLE(iLocal_78, ScriptParam_85.f_1[0 /*3*/], fLocal_79, true, true, false);
						func_92();
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_54, true);
						bVar2 = false;
						if (func_91() && !bVar2)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 2);
							func_89(&uLocal_58, 32);
						}
					}
					else if (func_107(uLocal_58, 32))
					{
						if (!func_91())
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, 0))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 1);
							}
							func_109(&uLocal_58, 32);
						}
					}
					if (!func_107(uLocal_58, 4))
					{
						func_88();
						func_87(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_16C52)
					{
						if (iLocal_69 != 263)
						{
							if (func_86(6) && !func_85(iLocal_69))
							{
							}
							else
							{
								func_101(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_100(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !func_107(uLocal_58, 64);
						func_109(&uLocal_58, 128);
						if (!func_84(3) && !Global_16C52)
						{
							if (func_107(uLocal_58, 2097152))
							{
								if ((!func_107(uLocal_58, 1) || !ENTITY::DOES_ENTITY_EXIST(func_83())) && !Global_16C52)
								{
									func_100(10);
									break;
								}
							}
						}
						if (func_107(uLocal_58, 524288) && (func_103() && !func_102()))
						{
							func_111(1);
						}
						if (func_82())
						{
							func_111(1);
						}
						if ((!func_74(6) || Global_19A9D) || func_73())
						{
							bVar3 = false;
						}
						if (func_107(uLocal_58, 1))
						{
							if (!func_72())
							{
								func_89(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (func_71(1))
						{
							bVar3 = false;
						}
						if (Global_11625)
						{
							bVar3 = false;
						}
						if (func_70())
						{
							bVar3 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (func_69() || func_68(8, 4294967295))
						{
							bVar3 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(CAM::_0xDC9DA9E8789F5246()))
						{
							bVar3 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
						{
							bVar3 = false;
						}
						if (func_67(0) || func_66())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_54, vLocal_56, fLocal_77, fLocal_77, fLocal_77, false, true, 0))
								{
									func_100(7);
								}
							}
							if (ENTITY::IS_ENTITY_DEAD(iLocal_54, 0))
							{
								func_89(&uLocal_58, 128);
								bVar3 = false;
							}
							else if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330()))
							{
								func_89(&uLocal_58, 128);
								bVar3 = false;
							}
							else
							{
								iVar4 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330());
								if (bVar3)
								{
									if (iLocal_54 == iVar4)
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ScriptParam_85.f_1[0 /*3*/], 4f, 4f, 2f, false, true, 0))
										{
											func_89(&uLocal_58, 128);
											bVar3 = false;
										}
									}
									else
									{
										func_89(&uLocal_58, 128);
										bVar3 = false;
									}
								}
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_65(iLocal_54))
								{
									if (iLocal_60 == 4294967295)
									{
										func_64(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_89(&uLocal_58, 2048);
									}
									else if (!func_107(uLocal_58, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_63(&iLocal_60);
										func_109(&uLocal_58, 2048);
									}
									if (func_61(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_63(&iLocal_60);
										func_109(&uLocal_58, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_52);
										PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 56);
										func_100(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_63(&iLocal_60);
									func_109(&uLocal_58, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_52);
									PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 56);
									func_100(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != 4294967295)
							{
								func_63(&iLocal_60);
								func_109(&uLocal_58, 2048);
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
							}
						}
					}
					func_54();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_52))
					{
						if (iLocal_60 != 4294967295)
						{
							func_63(&iLocal_60);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_107(uLocal_58, 1))
						{
							if (func_86(6) || func_86(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_51(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, 0))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
							}
							if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
							}
							func_50();
							if (Global_9197)
							{
								func_41(AUDIO::_0x0626A247D2405330());
							}
							PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 56);
							iLocal_50 = func_25();
							func_89(&uLocal_58, 2);
							func_100(6);
							func_21(&iLocal_71);
							if (iLocal_63 != 4294967295)
							{
								func_20(iLocal_63);
								func_17(func_19(iLocal_63), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_16();
						}
						else if (iVar5 == 0)
						{
							func_100(10);
						}
					}
					else
					{
						func_16();
					}
					break;
				
				case 6:
					if (!func_107(uLocal_58, 256))
					{
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
						{
							PAD::SET_INPUT_EXCLUSIVE(0, 51);
						}
						else if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_89(&uLocal_58, 256);
						}
					}
					if (func_107(Global_19911, 262144))
					{
						func_109(&Global_19911, 262144);
						func_15();
					}
					if (func_107(uLocal_58, 2097152))
					{
						if (!func_84(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
						{
							func_100(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_11(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_10(&iLocal_71);
						func_109(&uLocal_58, 256);
						func_9();
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, 0))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
								iLocal_54 = 0;
							}
						}
						if (bVar0)
						{
							func_109(&uLocal_58, 2);
						}
						else if (func_107(uLocal_58, 2))
						{
							if (func_107(Global_19911, 0))
							{
								func_8(&iLocal_62);
								iLocal_62 = 4294967295;
								func_109(&uLocal_58, 2);
							}
							else
							{
								func_8(&iLocal_62);
								iLocal_62 = 4294967295;
								func_109(&uLocal_58, 2);
							}
						}
						func_100(0);
						if (iLocal_63 != 4294967295)
						{
							if (func_107(Global_19911, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_63), 0, Global_16C55, 0);
								func_7(func_19(iLocal_63), 0, Global_16C55, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_63), 0, Global_16C55, 0);
								func_7(func_19(iLocal_63), 0, Global_16C55, 0, 0);
							}
						}
						func_4();
						func_109(&Global_19911, 0);
						if (func_107(uLocal_58, 16777216))
						{
							func_111(1);
						}
						if (iLocal_63 != 4294967295)
						{
							if (Global_19E56.f_2361)
							{
								if (!func_104(0, iLocal_63))
								{
									func_111(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_100(0);
					break;
				
				case 10:
					func_111(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_101(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_100(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_101(iLocal_69, 0, 0);
					}
					if (iLocal_60 != 4294967295)
					{
						func_63(&iLocal_60);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						}
					}
					func_100(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_105(iLocal_64) && func_104(0, iLocal_63))
									{
										func_108();
										if (iLocal_69 != 263)
										{
											func_101(iLocal_69, 1, 0);
										}
										func_100(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_101(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_100(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_108();
									if (iLocal_69 != 263)
									{
										func_101(iLocal_69, 1, 0);
									}
									func_100(0);
								}
							}
						}
						else
						{
							func_101(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(char* sParam0)//Position - 0xC00
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()//Position - 0xC13
{
}

void func_3()//Position - 0xC1B
{
}

void func_4()//Position - 0xC23
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1697.183f, 3279.226f, 41.7283f, 1.5897f, 0f, 146.8519f, 50f, 1, 2);
	iVar1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1697.755f, 3280.423f, 41.7708f, -9.1434f, 0f, 168.0244f, 50f, 0, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iVar1, iVar0, 3650, 1, 1);
	CAM::SET_CINEMATIC_MODE_ACTIVE(0);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330()))
		{
			iLocal_54 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 1);
			unk_0x4E87F356DA56EB3F(iLocal_54, true);
			BRAIN::TASK_LEAVE_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0, 0);
		}
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_54, true, 1);
	func_5(&iLocal_80);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_80);
	}
	while (CAM::IS_CAM_INTERPOLATING(iVar0) || CAM::IS_CAM_INTERPOLATING(iVar1))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		SYSTEM::WAIT(0);
	}
	CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
	if (CAM::DOES_CAM_EXIST(iVar0))
	{
		CAM::DESTROY_CAM(iVar0, 0);
	}
	if (CAM::DOES_CAM_EXIST(iVar1))
	{
		CAM::DESTROY_CAM(iVar1, 0);
	}
}

void func_5(var uParam0)//Position - 0xD5D
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_6(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, 0);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, 0);
			unk_0x346478B12F69D4E3(iVar0, false);
		}
	}
}

int func_6(int iParam0)//Position - 0xD94
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
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

void func_7(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xDD7
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1611D))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_1611D, 0, 4294967295) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, iParam3, iParam4, Global_155D0);
	StringCopy(&Global_1611D, "", 64);
}

void func_8(int iParam0)//Position - 0xE1B
{
	if (*iParam0 == 4294967295)
	{
		return;
	}
	if (!*iParam0 == Global_8CEF)
	{
		*iParam0 = 4294967295;
		return;
	}
	*iParam0 = 4294967295;
	Global_8CEE = 0;
	Global_8CF0 = 0;
	Global_8D15 = 15;
	Global_DB72 = 0;
	Global_DB73 = 0;
}

void func_9()//Position - 0xE58
{
	vector3 vVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::_NETWORK_SET_RICH_PRESENCE_2(0, &cVar0);
	}
}

void func_10(int iParam0)//Position - 0xE9A
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_11(int iParam0)//Position - 0xEB0
{
	if (func_14(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)//Position - 0xEEF
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = HUD::_0x13C4B962653A5280();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_13(var uParam0)//Position - 0xF47
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 2);
}

bool func_14(var uParam0)//Position - 0xF57
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 1);
}

int func_15()//Position - 0xF67
{
	return 1;
}

void func_16()//Position - 0xF70
{
}

void func_17(char* sParam0, int iParam1, int iParam2)//Position - 0xF78
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1611D))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_1611D, 0, 0, 0, 1, 0);
		StringCopy(&Global_1611D, "", 64);
	}
	StringCopy(&Global_1611D, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_18(0));
}

bool func_18(bool bParam0)//Position - 0xFB9
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

char* func_19(int iParam0)//Position - 0xFE4
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_20(int iParam0)//Position - 0x1122
{
	var uVar0;
	vector3 vVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::_NETWORK_SET_RICH_PRESENCE_2(8, &cVar1);
	}
}

void func_21(int iParam0)//Position - 0x1179
{
	if (!func_14(iParam0))
	{
		func_24(iParam0);
	}
	else
	{
		func_22(iParam0);
	}
}

void func_22(int iParam0)//Position - 0x119A
{
	func_23(iParam0, 0f);
}

void func_23(int iParam0, float fParam1)//Position - 0x11A9
{
	iParam0->f_1 = (func_12(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_24(int iParam0)//Position - 0x11D7
{
	if (!func_14(iParam0))
	{
		func_22(iParam0);
	}
}

int func_25()//Position - 0x11EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_1(sLocal_65))
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	}
	if (STREAMING::IS_IPL_ACTIVE("airfield"))
	{
		STREAMING::REMOVE_IPL("airfield");
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((((ENTITY::DOES_ENTITY_EXIST(iVar0) && iVar0 != iLocal_54) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("STUNT")) && VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, 4294967295, 0)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("CARGOBOB"))
	{
		iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(1694.736f, 3276.483f, 41.2979f, 5f, joaat("STUNT"), 16384);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, 0);
		}
		func_27(1689.662f, 3274.546f, 40.00918f, 1696.669f, 3271.265f, 42.80674f, 7.25f, 1673.428f, 3267.02f, 40.0898f, 108.5236f, 1, 1, 1, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
		}
		if (func_26(&iLocal_80))
		{
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
	}
	iVar2 = SYSTEM::START_NEW_SCRIPT(&Local_51, iLocal_61);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
	return iVar2;
}

int func_26(int iParam0)//Position - 0x133E
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_6(iVar0))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, AUDIO::_0x0626A247D2405330(), vLocal_45, 0, 1, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, false, 0);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false, 0);
				unk_0x346478B12F69D4E3(iVar0, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 1);
				*iParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

void func_27(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x13B0
{
	func_28(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_28(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x13D9
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 0);
			iVar3 = 1;
		}
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
		{
			if (bParam10)
			{
				func_40(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, vParam0, vParam1, fParam2, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { unk_0x8000C77B5F336760(iVar0, true) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_37(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("TAXI")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) != AUDIO::_0x0626A247D2405330() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0x8000C77B5F336760(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_30(iVar0, func_32(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_29(vParam5))
				{
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::_0xDF7E3EEB29642C38(iVar0, &vVar4, &vVar5);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("ZENTORNO") || iVar7 == joaat("BTYPE")) || iVar7 == joaat("DUBSTA3")) || iVar7 == joaat("MONSTER"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("T20") || iVar7 == joaat("VIRGO"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(vParam3, 5f, 0, 0, 0, 0, false, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam4);
						ENTITY::SET_ENTITY_COORDS(iVar0, vParam3, 1, false, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
						if (bParam9)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, 0);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 1);
						}
						if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iVar0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), unk_0x8000C77B5F336760(iVar0, true), 1, false, 0, 1);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 0);
			}
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
			{
				ENTITY::SET_ENTITY_COORDS(iVar8, unk_0x8000C77B5F336760(iVar8, true), 1, false, 0, 1);
			}
			iVar9 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, unk_0x8000C77B5F336760(iVar8, true), 1, false, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, unk_0x8000C77B5F336760(iVar8, true), 1, false, 0, 1);
				}
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, unk_0x8000C77B5F336760(iVar8, true), 1, false, 0, 1);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_29(vector3 vParam0)//Position - 0x17CD
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0, int iParam1, bool bParam2)//Position - 0x17F7
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_31(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x1868
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_32()//Position - 0x1939
{
	func_33();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_33()//Position - 0x1952
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_36(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_35(AUDIO::_0x0626A247D2405330());
			if (func_34(iVar0) && (!func_86(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_34(Global_19E56.f_933.f_21B.f_10CD))
				{
					Global_19E56.f_933.f_21B.f_10CE = Global_19E56.f_933.f_21B.f_10CD;
				}
				Global_19E56.f_933.f_21B.f_10CF = iVar0;
				Global_19E56.f_933.f_21B.f_10CD = iVar0;
				return;
			}
		}
		else
		{
			if (Global_19E56.f_933.f_21B.f_10CD != 145)
			{
				Global_19E56.f_933.f_21B.f_10CF = Global_19E56.f_933.f_21B.f_10CD;
			}
			return;
		}
	}
	Global_19E56.f_933.f_21B.f_10CD = 145;
}

bool func_34(int iParam0)//Position - 0x1A4F
{
	return iParam0 < 3;
}

int func_35(int iParam0)//Position - 0x1A5B
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
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

int func_36(int iParam0)//Position - 0x1A98
{
	if (func_34(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_37(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x1AC2
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_39(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_38(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_38(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_38(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_38(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_38(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_38(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_38(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_38(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_38(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_38(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_38(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_38(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_38(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_38(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_38(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_38(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_38(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0x1DB8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_39(vector3 vParam0)//Position - 0x1E6C
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

void func_40(int iParam0)//Position - 0x1EAB
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

void func_41(int iParam0)//Position - 0x1F10
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_49(iParam0);
	if (!iVar0 == 4294967295)
	{
		iVar1 = Global_90C2[iVar0 /*5*/];
		func_44(1, iVar1, 1);
		return;
	}
	iVar2 = func_43(iParam0);
	if (iVar2 == 4294967295)
	{
		return;
	}
	func_42(iVar2);
}

void func_42(int iParam0)//Position - 0x1F69
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

int func_43(int iParam0)//Position - 0x1FEC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_90A8[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_44(int iParam0, int iParam1, int iParam2)//Position - 0x201D
{
	func_45(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_45(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2032
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 == 4294967295)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_47(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_46();
	if (iVar0 == 4294967295)
	{
		return;
	}
	Global_9113[iVar0 /*6*/] = iParam0;
	Global_9113[iVar0 /*6*/].f_1 = iParam1;
	Global_9113[iVar0 /*6*/].f_2 = iParam2;
	Global_9113[iVar0 /*6*/].f_3 = iParam3;
	Global_9113[iVar0 /*6*/].f_4 = iParam4;
	Global_9113[iVar0 /*6*/].f_5 = iParam5;
}

int func_46()//Position - 0x20B4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_9113[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x20E5
{
	if (func_48(iParam0, iParam1, iParam2) == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0, int iParam1, int iParam2)//Position - 0x2100
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_9113[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_9113[iVar0 /*6*/])
			{
				if (iParam1 == Global_9113[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_49(int iParam0)//Position - 0x214C
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

void func_50()//Position - 0x2195
{
	if (Global_C74[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C74[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C74[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C74[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C74[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C74[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 25);
	MISC::SET_BIT(&Global_950, 11);
}

int func_51(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x2212
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_162B5.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_53(0))
		{
			return 0;
		}
		Global_8CF1++;
		*iParam0 = Global_8CF1;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_434C.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8D15 = iParam2;
		Global_8CEF = *iParam0;
		Global_8CF0 = iParam4;
		Global_8CEE = 0;
		return 1;
	}
	if (*iParam0 != 4294967295)
	{
		if (Global_8CEE > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8CEE)
			{
				if (Global_8CF4[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8CEF == *iParam0)
		{
			return 1;
		}
		*iParam0 = 4294967295;
	}
	if (*iParam0 == 4294967295)
	{
		if (!func_105(iParam2))
		{
			return 0;
		}
		if (Global_8CEE == 8)
		{
			return 0;
		}
		Global_8CF1++;
		*iParam0 = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/] = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/].f_1 = iParam1;
		Global_8CF4[Global_8CEE /*4*/].f_2 = iParam2;
		Global_8CF4[Global_8CEE /*4*/].f_3 = 0;
		Global_8CEE++;
		if (iParam4 != 0)
		{
			func_52(iParam0, iParam4);
		}
	}
	return 2;
}

void func_52(var uParam0, int iParam1)//Position - 0x2349
{
	int iVar0;
	
	if (Global_8CEE == 0)
	{
		return;
	}
	if (*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_8CEE)
	{
		if (Global_8CF4[iVar0 /*4*/] == *uParam0)
		{
			Global_8CF4[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = 4294967295;
}

int func_53(int iParam0)//Position - 0x2398
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_105(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_54()//Position - 0x23BA
{
	if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_54) || ENTITY::IS_ENTITY_DEAD(iLocal_54, 0)) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_54, 1)) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_54, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 2);
		}
		func_98(0);
		if (func_1(sLocal_65))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		return;
	}
	if (fLocal_57 < (fLocal_77 * fLocal_77))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 1);
		func_60(sLocal_65);
		func_55(0);
	}
	else if (func_1(sLocal_65))
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	}
}

void func_55(int iParam0)//Position - 0x2456
{
	if (func_59())
	{
		return;
	}
	if (!Global_38B1.f_1 == 1)
	{
		if (func_67(0))
		{
			func_56(iParam0);
		}
		MISC::SET_BIT(&Global_950, 2);
	}
}

void func_56(int iParam0)//Position - 0x2489
{
	if (func_59())
	{
		return;
	}
	if (Global_3959)
	{
		func_58(0, 0);
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
	if (!func_57())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_57()//Position - 0x2503
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1)//Position - 0x252A
{
	if (bParam0)
	{
		if (func_67(0))
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

bool func_59()//Position - 0x259E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_60(char* sParam0)//Position - 0x25B0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

int func_61(int iParam0, bool bParam1)//Position - 0x25C6
{
	int iVar0;
	
	iVar0 = func_62(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_67(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/] == 1 && Global_8FDB[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_8FDB[iVar0 /*32*/].f_1D)
				{
					return 0;
				}
			}
			Global_8FDB[iVar0 /*32*/].f_5 = 1;
			Global_8FDB[iVar0 /*32*/].f_1D = 1;
			return 1;
		}
		else
		{
			if (Global_8FDB[iVar0 /*32*/] == 0)
			{
			}
			if (Global_8FDB[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x267E
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

void func_63(int iParam0)//Position - 0x26B9
{
	int iVar0;
	
	if (*iParam0 == 4294967295)
	{
		return;
	}
	iVar0 = func_62(*iParam0);
	if (iVar0 == 4294967295)
	{
		*iParam0 = 4294967295;
		return;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/])
		{
			Global_8FDB[iVar0 /*32*/].f_7 = 1;
			*iParam0 = 4294967295;
			return;
		}
	}
	*iParam0 = 4294967295;
}

void func_64(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x2710
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == 4294967295)
		{
			func_63(iParam0);
		}
		return;
	}
	if (!*iParam0 == 4294967295)
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
			*iParam0 = Global_8FDB[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_65(int iParam0)//Position - 0x283B
{
	return 0;
	return 1;
}

var func_66()//Position - 0x2848
{
	return Global_10B8E;
}

int func_67(int iParam0)//Position - 0x2854
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

bool func_68(int iParam0, int iParam1)//Position - 0x28AE
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				return Global_14E0B5.f_CB[iParam1];
			}
			break;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_418, iParam0);
}

bool func_69()//Position - 0x28E9
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_70()//Position - 0x28FE
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_71(bool bParam0)//Position - 0x2918
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

int func_72()//Position - 0x2941
{
	return 1;
}

bool func_73()//Position - 0x294A
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(CAM::_0xDC9DA9E8789F5246()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::_0xDCCA191DF9980FD7(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(CAM::_0xDC9DA9E8789F5246()));
}

int func_74(int iParam0)//Position - 0x2A54
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				iVar0 = func_32();
				if (!func_34(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_81()) || Global_19A9D) || Global_6375) || func_80()) || func_68(8, 4294967295)) || func_79()) || func_78()) || func_77()) || func_70()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1) || func_81()) || Global_6375) || func_80()) || func_68(8, 4294967295)) || func_77()) || func_79()) || func_78()) || func_70()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_81()) || Global_19A9D) || Global_6375) || func_80()) || func_68(8, 4294967295)) || func_77()) || func_79()) || func_78()) || func_70()) || Global_19E56.f_1DEC.f_397[iVar0] == 5) || Global_8F38 != 4294967295)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_81()) || Global_19A9D) || Global_6375) || func_80()) || func_68(8, 4294967295)) || func_79()) || func_78()) || func_70()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_81() || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || func_68(8, 4294967295)) || func_70()) || func_76()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_68(8, 4294967295) || func_79()) || func_78()) || func_76()) || func_75())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_81()) || Global_6375) || func_80()) || func_68(8, 4294967295)) || func_78()) || func_77()) || func_70()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || func_81()) || func_78()) || Global_19A9D) || Global_6375) || func_80()) || Global_9197) || func_68(8, 4294967295)) || func_77()) || func_76()) || func_70()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1)) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_SWIMMING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_81()) || Global_19A9D) || Global_6375) || func_80()) || func_68(8, 4294967295)) || func_77()) || func_76()) || func_79()) || func_78()) || func_70())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_75()//Position - 0x3171
{
	return Global_16C57.f_1;
}

int func_76()//Position - 0x317F
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 13);
	}
	return 0;
}

int func_77()//Position - 0x31A5
{
	if (Global_11729)
	{
		return 1;
	}
	else if (Global_DB6F && !Global_DB75)
	{
		return 1;
	}
	return 0;
}

bool func_78()//Position - 0x31CF
{
	return Global_16C64.f_148 > 0;
}

bool func_79()//Position - 0x31E0
{
	return Global_16C64.f_147 > 0;
}

var func_80()//Position - 0x31F1
{
	return Global_140859;
}

int func_81()//Position - 0x31FD
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

int func_82()//Position - 0x3219
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_83()//Position - 0x3233
{
	return Global_15C47;
}

int func_84(int iParam0)//Position - 0x323F
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_86(6) || func_86(7))
			{
				return 1;
			}
			else
			{
				return func_84(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_105(5))
			{
				if (func_74(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_85(int iParam0)//Position - 0x32B1
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_64EA[iVar0 /*23*/].f_13);
}

bool func_86(int iParam0)//Position - 0x32ED
{
	return Global_8D15 == iParam0;
}

void func_87(var uParam0, int iParam1)//Position - 0x32FB
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_88()//Position - 0x330C
{
}

void func_89(var uParam0, int iParam1)//Position - 0x3314
{
	func_90(uParam0, iParam1);
}

void func_90(var uParam0, var uParam1)//Position - 0x3324
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_91()//Position - 0x3335
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	return 1;
}

void func_92()//Position - 0x334A
{
	iLocal_46++;
}

int func_93()//Position - 0x3358
{
	return 1;
}

void func_94()//Position - 0x3361
{
}

int func_95()//Position - 0x3369
{
	return 0;
}

int func_96()//Position - 0x3372
{
	return 1;
}

int func_97()//Position - 0x337B
{
	return 1;
}

void func_98(int iParam0)//Position - 0x3384
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_99()//Position - 0x33A5
{
	vector3 vVar0;
	float fVar1;
	
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
	fVar1 = SYSTEM::VDIST2(vVar0, vLocal_56);
	if (fVar1 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar1 < (80f * 80f))
	{
		if (CAM::IS_SPHERE_VISIBLE(vLocal_56, 5f))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_100(int iParam0)//Position - 0x3418
{
	iLocal_59 = iParam0;
}

void func_101(int iParam0, bool bParam1, bool bParam2)//Position - 0x3424
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 0))
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
		if (Global_64E7 == 1)
		{
			Global_64E8 = 1;
		}
		Global_64E7 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 0);
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 15);
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 15);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_64EA[iVar0 /*23*/].f_13))
		{
			unk_0xB5AD2E78802711D6(1);
			HUD::REMOVE_BLIP(&(Global_64EA[iVar0 /*23*/].f_13));
			unk_0xB5AD2E78802711D6(0);
		}
	}
}

int func_102()//Position - 0x352D
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_103()//Position - 0x354A
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 20);
	}
	return 0;
}

bool func_104(int iParam0, int iParam1)//Position - 0x3570
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == 4294967295)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

bool func_105(int iParam0)//Position - 0x35BD
{
	return func_106(iParam0, Global_8D15);
}

int func_106(int iParam0, int iParam1)//Position - 0x35CE
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_107(var uParam0, int iParam1)//Position - 0x37AF
{
	return (uParam0 && iParam1) != 0;
}

void func_108()//Position - 0x37BE
{
	StringCopy(&Local_51, "stunt_plane_races", 64);
	iLocal_78 = joaat("STUNT");
	fLocal_79 = 154.8464f;
	fLocal_66 = 209f;
	iLocal_69 = 95;
	MISC::CLEAR_AREA_OF_VEHICLES(vLocal_76, 10f, 0, 0, 0, 0, false, 0);
	iLocal_63 = 10;
	sLocal_65 = "PLAY_STUNT";
	fLocal_77 = 6f;
	iLocal_61 = 25000;
}

void func_109(var uParam0, int iParam1)//Position - 0x380C
{
	func_110(uParam0, iParam1);
}

void func_110(var uParam0, var uParam1)//Position - 0x381C
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_111(bool bParam0)//Position - 0x3831
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_101(iLocal_69, 0, 0);
		}
	}
	func_63(&iLocal_60);
	if (func_107(uLocal_58, 2))
	{
		func_4();
		func_109(&uLocal_58, 2);
		func_8(&iLocal_62);
	}
	iLocal_62 = 4294967295;
	func_112();
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_112()//Position - 0x387A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_54, true, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
			VEHICLE::DELETE_VEHICLE(&iLocal_54);
		}
	}
	func_109(&uLocal_58, 4);
	func_113();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_52))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_52) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_52);
		}
	}
}

void func_113()//Position - 0x38DF
{
}

