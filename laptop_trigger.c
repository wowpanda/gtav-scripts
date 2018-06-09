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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 37;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	vector3 vLocal_164 = { 0f, 0f, 0f };
	vector3 vLocal_165 = { 0f, 0f, 0f };
	char cLocal_166[16] = "";
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	int iLocal_169 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	char* sVar1;
	var uVar2[25];
	bool bVar3;
	vector3 vVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	bool bVar11;
	bool bVar12;
	
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_150 = -1;
	vLocal_164 = { 0f, 0f, 0f };
	iLocal_161 = iScriptParam_169;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_161))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_215();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_214(13) || func_214(14))
	{
		func_215();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_31629)
	{
		func_215();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_68325)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	sVar1 = "tvscreen";
	bVar3 = true;
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iScriptParam_169, 1) - ENTITY::GET_ENTITY_FORWARD_VECTOR(iScriptParam_169) * Vector(0.6f, 0.6f, 0.6f) };
	vVar4.z = (vVar4.z + 0.5f);
	vLocal_165 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iScriptParam_169, vLocal_164) };
	Global_1669401 = 0;
	Global_1669508 = 0;
	while (bVar3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_161))
		{
			if (iLocal_152)
			{
				if (!func_212(PLAYER::PLAYER_ID()))
				{
					if (!func_211(&uLocal_155))
					{
						func_210(&uLocal_155, 1, 0);
					}
				}
			}
			if (Global_1669401 && (func_209(PLAYER::PLAYER_ID()) || func_208(PLAYER::PLAYER_ID())))
			{
				if (!func_211(&uLocal_159))
				{
					func_210(&uLocal_159, 0, 0);
				}
				else if (func_207(&uLocal_159, 10000, 0))
				{
					func_206(&uLocal_159);
					Global_1669401 = 0;
				}
				func_202(0);
			}
			if (Global_1595547)
			{
				if (!bVar0)
				{
					iVar5 = ENTITY::GET_ENTITY_MODEL(iLocal_161);
					if (iVar5 == joaat("prop_laptop_01a"))
					{
						ENTITY::CREATE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS(iScriptParam_169, 1), 1f, joaat("prop_laptop_01a"), 0);
						vVar6 = { ENTITY::GET_ENTITY_ROTATION(iLocal_161, 2) };
						iLocal_161 = OBJECT::CREATE_OBJECT(joaat("prop_laptop_lester2"), ENTITY::GET_ENTITY_COORDS(iLocal_161, 1), false, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_161, vVar6, 2, 1);
						bVar0 = true;
					}
				}
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iLocal_161))
			{
				func_215();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
		if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_161)) && !CUTSCENE::IS_CUTSCENE_PLAYING()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_161))
			{
				bVar7 = false;
				iVar8 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar9], 0))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uVar2[iVar9], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar7 = true;
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uVar2[iVar9], "MP_COMMON_MISS", "HACK_LOOP", 3))
						{
							bVar7 = true;
						}
					}
					iVar9++;
				}
				if (Global_16)
				{
					bVar7 = true;
				}
				vVar10 = { 0.6f, 0.6f, 0.8f };
				if (((func_201() || func_200(PLAYER::PLAYER_ID())) || func_208(PLAYER::PLAYER_ID())) || func_199())
				{
					vVar10 = { 1f, 1f, 0.9f };
				}
				bVar11 = func_198(PLAYER::PLAYER_ID());
				if ((((((((((((((!bVar7 && !Global_25500) && !func_197(0)) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) && !func_196()) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vVar4, vVar10, false, true, 1)) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_161)) && !MISC::IS_BIT_SET(Global_2359302, 15)) && !func_195()) && !(Global_70856 && func_194())) && !(!Global_70856 && func_193())) && !((Global_70856 && MISC::IS_BIT_SET(Global_4456448.f_14, 24)) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())) && !((Global_70856 && func_192()) && func_191())) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !Global_69671)
				{
					if (func_189(PLAYER::PLAYER_ID()))
					{
					}
					if ((!func_188(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_17) && !func_187(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_17, -1)) && !func_189(PLAYER::PLAYER_ID()))
					{
						if (iLocal_153 != bVar11)
						{
							if ((func_209(PLAYER::PLAYER_ID()) || func_186(PLAYER::PLAYER_ID())) || func_208(PLAYER::PLAYER_ID()))
							{
								if (iLocal_150 != -1)
								{
									func_185(&iLocal_150);
								}
								if (func_183())
								{
									HUD::CLEAR_HELP(1);
								}
							}
						}
						iLocal_153 = bVar11;
						if (iLocal_150 == -1)
						{
							if (bVar0)
							{
								func_182(&iLocal_150, 1, "MPLA_BILL", 0, 0, 0, 0);
							}
							else if (func_201())
							{
								func_181(bVar11);
							}
							else if (func_179())
							{
								func_176(bVar11);
							}
							else if (func_199())
							{
								func_164(bVar11);
							}
							else
							{
								func_182(&iLocal_150, 1, "BROWSEINPUTTRIG", 0, 0, 0, 0);
							}
						}
					}
					if (((iLocal_150 != -1 && func_162(iLocal_150, 1)) && !BRAIN::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && func_161())
					{
						if (iLocal_150 != -1)
						{
							func_185(&iLocal_150);
						}
						if (!bVar0)
						{
							if (func_160() || func_159())
							{
								func_152();
							}
							if (func_201())
							{
								func_21(0, bVar11);
								func_20(0, 0, 1);
							}
							else if (func_199())
							{
								func_21(0, bVar11);
								func_20(0, 0, 3);
							}
							else if (func_179())
							{
								func_21(1, bVar11);
								func_20(0, 0, 2);
							}
							else
							{
								func_20(0, 0, 0);
							}
							if (!iLocal_151)
							{
								func_16();
								iLocal_151 = 1;
							}
							bVar12 = true;
							if (func_160() || func_159())
							{
								func_15(&uLocal_157, 0, 0);
								while (!func_207(&uLocal_157, 500, 0))
								{
									func_202(0);
									SYSTEM::WAIT(0);
								}
								func_206(&uLocal_157);
							}
							while (bVar12)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_161) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_161, 1), 1.5f, 1.5f, 4f, false, true, 1))
								{
									Global_68218 = 1;
								}
								if ((func_160() || func_159()) || func_189(PLAYER::PLAYER_ID()))
								{
									if (!func_14() && !Global_69671)
									{
										bVar12 = false;
									}
								}
								else if (func_14() || Global_68218)
								{
									bVar12 = false;
								}
								if (func_160())
								{
									func_202(0);
								}
								SYSTEM::WAIT(0);
							}
							if (func_160() || func_159())
							{
								func_1();
							}
							func_202(0);
							func_206(&uLocal_159);
							iLocal_151 = 0;
						}
					}
				}
				else
				{
					if (iLocal_150 != -1)
					{
						func_185(&iLocal_150);
					}
					if (func_209(PLAYER::PLAYER_ID()) || func_186(PLAYER::PLAYER_ID()))
					{
						if (func_183())
						{
							HUD::CLEAR_HELP(1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_169))
					{
						if (!TASK::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_169))
						{
							bVar3 = false;
						}
					}
				}
			}
			else if (iLocal_150 != -1)
			{
				func_185(&iLocal_150);
			}
		}
		else
		{
			if (iLocal_150 != -1)
			{
				func_185(&iLocal_150);
			}
			bVar3 = false;
		}
		SYSTEM::WAIT(0);
	}
	if (bVar0)
	{
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar1))
		{
			HUD::RELEASE_NAMED_RENDERTARGET(sVar1);
		}
	}
}

void func_1()
{
	char* sVar0;
	
	if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::DOES_ENTITY_EXIST(iLocal_161))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(PLAYER::PLAYER_PED_ID()))
				{
					PED::_0xF1C03A5352243A30(PLAYER::PLAYER_PED_ID());
					if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
					{
						BRAIN::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				if (func_2(1, &sVar0))
				{
					STREAMING::REMOVE_ANIM_DICT(&sVar0);
				}
				if (func_2(2, &sVar0))
				{
					if (iLocal_162 != 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_163))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_163);
							iLocal_163 = -1;
						}
						iLocal_163 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vLocal_165, ENTITY::GET_ENTITY_ROTATION(iLocal_161, 2), 2, false, false, 1065353216, 0, 1065353216);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_163, &sVar0, "exit", 8f, -4f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_163);
						STREAMING::REMOVE_ANIM_DICT(&sVar0);
					}
				}
			}
		}
	}
	Global_1669400 = 0;
}

int func_2(int iParam0, char* sParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (func_3())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (!func_209(PLAYER::PLAYER_ID()) && !func_208(PLAYER::PLAYER_ID()))
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	StringCopy(sParam1, "anim@amb@warehouse@laptop@", 64);
	return 1;
}

int func_3()
{
	var uVar0;
	
	func_10(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_8())
	{
		return 1;
	}
	if (func_7(157))
	{
		if (!func_6())
		{
			return 1;
		}
	}
	if (func_7(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	switch (func_5())
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

int func_5()
{
	return Global_25233;
}

bool func_6()
{
	return Global_2447174.f_586;
}

int func_7(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return Global_2456830;
}

bool func_9()
{
	return Global_2447174.f_581;
}

void func_10(var uParam0)
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
				case -1155637934:
					func_11(iVar0);
					break;
				
				case 1662227603:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_11(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_13(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_12(iVar2, &bVar3))
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

int func_12(int iParam0, var uParam1)
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

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
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
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_14()
{
	return Global_68215;
}

void func_15(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
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

void func_16()
{
	if (func_19() || func_18())
	{
		func_17();
	}
}

void func_17()
{
	Global_2447174.f_643 = 1;
}

var func_18()
{
	return Global_2447174.f_622;
}

bool func_19()
{
	return MISC::IS_BIT_SET(Global_2447174.f_2, 11);
}

int func_20(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_68328 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_68328)
	{
		case 3:
			Global_68326 = 0;
			break;
		
		case 4:
			Global_68326 = 3;
			break;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1476056117) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(290327540) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_70856 && func_194())
	{
		return 0;
	}
	if (!Global_70856 && func_193())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SCRIPT::REQUEST_SCRIPT("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appImportExport", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
		return 1;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SCRIPT::REQUEST_SCRIPT("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT("appInternet", 4592);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	return 1;
}

void func_21(int iParam0, bool bParam1)
{
	if ((((!bParam1 && !func_151(PLAYER::PLAYER_ID(), 1)) && func_150() < func_149()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_145(PLAYER::PLAYER_ID()))
	{
		func_22(1, iParam0);
	}
}

void func_22(bool bParam0, int iParam1)
{
	struct<14> Var0;
	
	func_98(1, 1, iParam1);
	if (bParam0)
	{
		if (func_97(91) || func_97(98))
		{
			func_96();
		}
		func_80();
		func_79(17);
		Var0.f_2 = 1128645158;
		Var0.f_3 = iParam1;
		if (func_78(PLAYER::PLAYER_ID()) && iParam1 == 0)
		{
			Var0.f_3 = 100;
		}
		func_76(Var0, func_77(0, 1));
		func_41();
		if (!func_78(PLAYER::PLAYER_ID()) && iParam1 != 1)
		{
			func_23(82, "GB_TXTMSG_INIT", 2, 0, 0, 0, 0, 1, 0, 1);
		}
	}
}

int func_23(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2323, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_24(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3030 = iParam6;
			Global_2933[3 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			MISC::SET_BIT(&Global_2323, 1);
			MISC::SET_BIT(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_24(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_35();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_104555.f_14021[Global_14453 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_34() == 0)
	{
		func_32();
		return 0;
	}
	func_31(Global_16823);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/]), sParam1, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_24 = iParam2;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_25 = iParam7;
	Global_104555.f_14111[Global_16823 /*104*/].f_26 = uParam8;
	Global_104555.f_14111[Global_16823 /*104*/].f_29 = uParam9;
	Global_104555.f_14111[Global_16823 /*104*/].f_30 = uParam12;
	Global_104555.f_14111[Global_16823 /*104*/].f_31 = uParam11;
	Global_104555.f_14111[Global_16823 /*104*/].f_28 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_33), sParam4, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_50), sParam5, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2323, 10))
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
		Global_3029 = 4;
		func_30(0);
		func_30(2);
		func_30(1);
	}
	else
	{
		func_35();
		switch (iParam16)
		{
			case 3:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[Global_14453] = 1;
				break;
			
			case 0:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14453)
			{
				case 0:
					func_30(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_30(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_30(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_30(3);
					Global_3029 = 3;
					break;
				
				default:
					Global_3029 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2323, 10))
		{
			Global_104555.f_14021[0 /*20*/].f_17 = 1;
			Global_104555.f_14021[1 /*20*/].f_17 = 1;
			Global_104555.f_14021[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104555.f_14021[Global_14453 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104555.f_14021[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104555.f_14021[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104555.f_14021[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16825[Global_16823] = 0;
	if (bParam10)
	{
		func_35();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_29())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14442, true);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_28(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_25(1);
			func_28(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_214(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2330[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_27(&(Global_2330[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_26(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104555.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104555.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104555.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_26(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70856)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_26(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36998;
											break;
										
										case 1:
											iVar6 = Global_36999;
											break;
										
										case 2:
											iVar6 = Global_37000;
											break;
										
										default:
											break;
									}
									func_26(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_26(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2330[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_27(&(Global_2330[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2329);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2330[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_27(&(Global_2330[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2330[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_27(&(Global_2330[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2330[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_27(&(Global_2330[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_2324, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2330[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_27(&(Global_2330[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_26(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_26(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_26(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_27(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_27(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_27(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_27(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_27(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_27(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_28(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

bool func_29()
{
	return Global_1312854;
}

void func_30(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104555.f_14021[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_104555.f_14111[iParam0 /*104*/].f_18 = iVar0;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_32()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_33(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_24 = 1;
}

int func_33(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_34()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0)
		{
			Global_16823 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0 || Global_104555.f_14111[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_33(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
			{
				Global_16823 = iVar2;
			}
		}
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16823 == 34)
	{
		return 0;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 0;
	return 1;
}

void func_35()
{
	if (func_214(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_36();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_36()
{
	func_37();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_37()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_40(Global_104555.f_2353.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_39(PLAYER::PLAYER_PED_ID());
			if (func_38(iVar0) && (!func_214(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_38(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41()
{
	if ((!func_73() && func_57()) && func_54(PLAYER::PLAYER_ID()))
	{
		if (func_50())
		{
			func_42("GB_INFO_MC_L", 1);
		}
		else
		{
			func_42("GB_INFO_LFG", 1);
		}
	}
}

int func_42(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_43(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_43(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_49() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_46(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_44(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_45(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_46(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_47(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
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

int func_47(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_48();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_48()
{
	return Global_1312736;
}

bool func_49()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

bool func_50()
{
	return func_51(PLAYER::PLAYER_ID());
}

bool func_51(int iParam0)
{
	return func_52(iParam0, 1);
}

int func_52(int iParam0, int iParam1)
{
	if (iParam0 != func_53())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_53())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_53()
{
	return -1;
}

int func_54(int iParam0)
{
	if (iParam0 == func_53())
	{
		return 0;
	}
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_46(iParam0, 0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_142, 2) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_142, 5))
	{
		return 0;
	}
	if (func_55(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_56(iParam0, 9);
	}
	return 0;
}

bool func_56(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

int func_57()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_58(iVar1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (func_13(iParam0, 0, 1))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			iVar0 = 0;
			if (func_72(1))
			{
				if (func_71(iParam0, 18))
				{
					iVar0 = 1;
				}
			}
			else if (func_56(iParam0, 15))
			{
				iVar0 = 1;
			}
			if (iVar0 && func_59(iParam0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_59(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == func_53())
	{
		return 0;
	}
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_46(iParam0, 0))
	{
		return 0;
	}
	if (func_69(iParam0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_142, 2) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_142, 5))
	{
		return 0;
	}
	if (func_68(iParam0))
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_66(iParam0, iParam1, 1))
		{
			return 0;
		}
		if (func_65(iParam0))
		{
			return 0;
		}
		if (func_63(iParam0, 1))
		{
			return 0;
		}
	}
	else if (func_151(iParam0, 1))
	{
		return 0;
	}
	if (func_62(iParam0))
	{
		return 0;
	}
	if (func_55(iParam0))
	{
		return 0;
	}
	if (func_145(iParam0))
	{
		return 0;
	}
	if (func_60(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_60(int iParam0)
{
	if (func_46(iParam0, 0))
	{
		return 1;
	}
	if (func_61())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2422736[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

bool func_63(int iParam0, bool bParam1)
{
	return func_64(iParam0, bParam1, 1);
}

int func_64(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_53())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_52(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_53() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_65(int iParam0)
{
	return func_56(iParam0, 20);
}

int func_66(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_53())
	{
		if (!bParam2)
		{
			if (func_67(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_53())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	if (iParam1 != func_53())
	{
		if (iParam0 != func_53())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_53())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_68(int iParam0)
{
	return func_56(iParam0, 30);
}

int func_69(int iParam0)
{
	if (!func_56(iParam0, 2))
	{
		return 1;
	}
	if (func_56(iParam0, 1))
	{
		return 1;
	}
	if (func_70(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_11.f_23;
}

bool func_71(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

bool func_72(bool bParam0)
{
	return func_63(PLAYER::PLAYER_ID(), bParam0);
}

int func_73()
{
	int iVar0;
	var uVar1;
	struct<16> Var2;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_11[iVar0] == func_53())
		{
			StringCopy(&Var2, "", 64);
			Var2 = { func_74(func_75(iVar0)) };
			if (MISC::ARE_STRINGS_EQUAL(&Var2, &uVar1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

struct<16> func_74(int iParam0)
{
	return Global_2447954.f_3066.f_18[iParam0 /*16*/];
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		default:
	}
	return 0;
}

void func_76(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -1942454564;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &Param0, 14, iParam13);
	}
}

int func_77(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_46(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_78(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_15, 26);
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

void func_80()
{
	struct<8> Var0;
	int iVar1;
	
	Var0 = { func_95(59, 61, -1) };
	iVar1 = 0;
	if (func_72(1))
	{
		Var0 = { func_95(47, 48, -1) };
		iVar1 = 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		StringCopy(&Var0, func_93(PLAYER::PLAYER_ID(), 0), 64);
	}
	func_84(&Var0, iVar1, 0);
	if ((!MISC::IS_DURANGO_VERSION() && NETWORK::_0x595F028698072DD9(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_81(int iParam0)
{
	MISC::SET_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_4), iParam0);
}

void func_82(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_4), iParam0);
}

int func_83()
{
	if (NETWORK::_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	if (MISC::IS_PS3_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(1, -1))
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
		if (NETWORK::_0x595F028698072DD9(0, -3, 1))
		{
			return 1;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84(char* sParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_72(1) || iParam1 == 1)
		{
			func_90(47, 48, sParam0, -1, 1);
			if (func_50() && iParam1 == 1)
			{
				func_89(sParam0, bParam2);
			}
		}
		else
		{
			func_90(59, 61, sParam0, -1, 1);
			if (func_191() && iParam1 == 0)
			{
				func_85(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_99), sParam0, 64);
	Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_115 = LOCALE::_0x497420E022796B3F();
	if ((!MISC::IS_DURANGO_VERSION() && NETWORK::_0x595F028698072DD9(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_85(char* sParam0, bool bParam1)
{
	struct<16> Var0;
	bool bVar1;
	
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_90(45, 46, sParam0, -1, 1);
			Var0 = { func_95(59, 61, -1) };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_90(59, 61, sParam0, -1, 1);
			}
		}
	}
	if ((!MISC::IS_DURANGO_VERSION() && NETWORK::_0x595F028698072DD9(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		bVar1 = true;
		if ((func_56(PLAYER::PLAYER_ID(), 28) || func_88(PLAYER::PLAYER_ID())) && !func_86(PLAYER::PLAYER_ID()))
		{
			bVar1 = false;
		}
		if (bVar1)
		{
			StringCopy(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_326), sParam0, 64);
		}
	}
}

int func_86(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_87(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(0))
		{
			if (NETWORK::_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_87(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_88(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_53())
	{
		Var0 = { func_87(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				if (NETWORK::_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_89(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_90(49, 50, sParam0, -1, 1);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_342), sParam0, 64);
	}
	if ((!MISC::IS_DURANGO_VERSION() && NETWORK::_0x595F028698072DD9(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_90(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar3[32];
	int iVar4;
	int iVar5;
	
	if (func_92())
	{
		iVar0 = Global_2548410[iParam0 /*3*/][func_91(iParam3)];
		iVar1 = Global_2548410[iParam1 /*3*/][func_91(iParam3)];
		if (iVar0 != 0 && iVar1 != 0)
		{
			StringCopy(&cVar2, "", 32);
			StringCopy(&cVar3, "", 32);
			iVar4 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
			if (iVar4 > 0)
			{
				iVar5 = 10;
				if (iVar4 < 10)
				{
					iVar5 = iVar4;
				}
				StringCopy(&cVar2, HUD::_GET_TEXT_SUBSTRING_SAFE(sParam2, 0, iVar5, 31), 32);
				if (iVar4 > 10)
				{
					StringCopy(&cVar3, HUD::_GET_TEXT_SUBSTRING_SAFE(sParam2, 10, iVar4, 31), 32);
				}
			}
			STATS::STAT_SET_STRING(iVar0, &cVar2, iParam4);
			STATS::STAT_SET_STRING(iVar1, &cVar3, iParam4);
		}
	}
}

int func_91(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_48();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

int func_92()
{
	return 1;
	return 0;
}

char* func_93(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_63(iParam0, 1))
		{
			return func_94();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_94()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

struct<16> func_95(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	struct<16> Var2;
	char cVar3[32];
	
	uVar0 = Global_2548410[iParam0 /*3*/][func_91(iParam2)];
	uVar1 = Global_2548410[iParam1 /*3*/][func_91(iParam2)];
	StringCopy(&Var2, STATS::STAT_GET_STRING(uVar0, -1), 64);
	StringCopy(&cVar3, STATS::STAT_GET_STRING(uVar1, -1), 32);
	StringConCat(&Var2, &cVar3, 64);
	return Var2;
}

void func_96()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			MISC::SET_BIT(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

bool func_97(int iParam0)
{
	return Global_2436181.f_2592[0 /*79*/].f_1 == iParam0;
}

void func_98(bool bParam0, bool bParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	char* sVar5;
	struct<16> Var6;
	bool bVar7;
	int iVar8;
	
	if (!func_142())
	{
		return;
	}
	iVar2 = 1;
	if (func_78(PLAYER::PLAYER_ID()))
	{
		iVar2 = 2;
	}
	if (iParam2 == 1)
	{
		iVar2 = 3;
	}
	if (Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11 != PLAYER::PLAYER_ID())
	{
		if (bParam1)
		{
			STATS::_0x3EBEAC6C3F81F6BD(iVar2);
			func_139(0);
			func_137(0);
			func_82(21);
			func_82(22);
			Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_447 = iVar2;
		}
		Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11 = PLAYER::PLAYER_ID();
		Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_409 = iParam2;
		Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_446 = iParam2;
		STATS::_0x6BC0ACD0673ACEBE(func_48(), &uVar3, &uVar4);
		func_136(uVar3, uVar4);
		sVar5 = NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar0);
		StringCopy(&Var6, sVar5, 64);
		func_135(Var6);
		func_134();
		if (func_133(7053, -1, 0) <= 0)
		{
			iVar1 = NETWORK::_GET_POSIX_TIME();
		}
		else
		{
			iVar1 = (func_133(7053, -1, 0) - 43200);
		}
		func_130(iVar1);
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", 3))
		{
			DECORATOR::DECOR_SET_INT(PLAYER::PLAYER_PED_ID(), "Player_Boss", PLAYER::PLAYER_ID());
		}
		Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_24 = -1;
		Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_25 = -1;
		Global_2512808.f_4856.f_41 = -1;
		func_124();
		func_116(0);
		if (bParam0)
		{
			func_79(0);
		}
		if (Global_2512808.f_4856.f_77 != func_53())
		{
			Global_2512808.f_4856.f_77 = func_53();
		}
		if (MISC::IS_BIT_SET(Global_2512808.f_1711, 15))
		{
			MISC::CLEAR_BIT(&(Global_2512808.f_1711), 15);
		}
		if (func_115(15))
		{
			func_114(15);
		}
		if (!func_113() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_112();
			func_111(2);
		}
		func_110(7093, 2, -1, 1, 0);
		func_82(31);
		func_80();
		func_109();
		func_108();
		func_107();
		if (iParam2 != 1)
		{
			if (!func_106(82, 3))
			{
				bVar7 = false;
				iVar8 = func_133(7050, -1, 0);
				if (!MISC::IS_BIT_SET(iVar8, 11))
				{
					MISC::SET_BIT(&iVar8, 11);
					func_110(7050, iVar8, -1, 1, 0);
					bVar7 = true;
				}
				func_104(82, 3, bVar7);
			}
		}
		if (iParam2 == 1)
		{
			STATS::_0x0B565B0AAE56A0E8(func_102(func_103()), func_101(func_103()), func_100(), func_99(), Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_410, 4, Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_448);
		}
	}
}

int func_99()
{
	if (Global_1667867.f_3 != 0)
	{
		return Global_1667867.f_3;
	}
	return -1;
}

int func_100()
{
	if (Global_1667867.f_2 != 0)
	{
		return Global_1667867.f_2;
	}
	return -1;
}

int func_101(int iParam0)
{
	if (iParam0 == func_53())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[1];
}

int func_102(int iParam0)
{
	if (iParam0 == func_53())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[0];
}

int func_103()
{
	return Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11;
}

void func_104(int iParam0, int iParam1, bool bParam2)
{
	Global_3009 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_35();
		if (iParam1 == 4)
		{
			Global_104555.f_28020[iParam0 /*29*/].f_12[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[2] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1 && Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_70856)
			{
				if (iParam1 != 4)
				{
					if (Global_14453 != iParam1)
					{
						Global_2982[iParam1 /*4*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2999[iParam1] = 1;
						Global_3004[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14453)
					{
					}
					else
					{
						Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2933[1 /*6*/].f_5 = iParam1;
						func_105();
					}
				}
				else
				{
					Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
					Global_2933[1 /*6*/].f_5 = iParam1;
					func_105();
				}
			}
			else
			{
				Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
				Global_2933[1 /*6*/].f_5 = iParam1;
				func_105();
			}
		}
	}
}

void func_105()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_104555.f_28020[Global_3009 /*29*/].f_7)), 64);
	if (Global_3028 == 0)
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_2933[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2933[1 /*6*/]));
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_2323, 0);
}

int func_106(int iParam0, int iParam1)
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	if (!Global_2512808.f_4856.f_156)
	{
		Global_2512808.f_4856.f_156 = 1;
	}
}

void func_108()
{
	struct<16> Var0;
	
	Var0 = { func_95(49, 50, -1) };
	func_89(&Var0, 0);
	if ((!MISC::IS_DURANGO_VERSION() && NETWORK::_0x595F028698072DD9(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_109()
{
	struct<16> Var0;
	
	Var0 = { func_95(45, 46, -1) };
	func_85(&Var0, 0);
	if ((!MISC::IS_DURANGO_VERSION() && NETWORK::_0x595F028698072DD9(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_111(int iParam0)
{
	MISC::SET_BIT(&(Global_2391020.f_2), iParam0);
	if (Global_2391020)
	{
		return;
	}
	Global_2391020 = 1;
	Global_2391020.f_1 = 0;
}

void func_112()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_2390946.f_28[iVar0 /*2*/] != -1 && Global_2390946.f_28[iVar0 /*2*/].f_1 != 0)
		{
			if (HUD::DOES_BLIP_EXIST(Global_2390946.f_28[iVar0 /*2*/].f_1))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Global_2390946.f_28[iVar0 /*2*/].f_1, true);
			}
		}
		iVar0++;
	}
}

bool func_113()
{
	return Global_2447174.f_627;
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

bool func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2512808.f_4856.f_7[iVar0], iVar1);
}

void func_116(int iParam0)
{
	if (func_123())
	{
		if (iParam0 == 1)
		{
			if (Global_2512808.f_4363 == -1)
			{
				Global_2512808.f_4363 = 60000;
			}
			func_15(&(Global_2512808.f_4361), 0, 0);
			if (Global_2512808.f_4366 == -1)
			{
				Global_2512808.f_4366 = 10000;
			}
			func_15(&(Global_2512808.f_4364), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_8 = 0;
			func_122(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_121()) && !func_117(PLAYER::PLAYER_ID()))
		{
			Global_979885 = 0;
		}
	}
}

int func_117(int iParam0)
{
	if (func_118(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_118(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_119(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_119(int iParam0)
{
	return func_120(iParam0);
}

bool func_120(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

bool func_121()
{
	return Global_2447174.f_727;
}

void func_122(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_123())
		{
			if (func_13(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::_0x1B857666604B1A74(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_13(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			NETWORK::_0x1B857666604B1A74(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_123()
{
	return Global_1312416;
}

void func_124()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			func_126(1, iVar1);
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				func_125(iVar1);
			}
		}
		iVar0++;
	}
}

void func_125(int iParam0)
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_95, iParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(iVar0, PLAYER::PLAYER_ID(), 1);
		PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iParam0, true);
		PLAYER::_0x55FCC0C390620314(iParam0, PLAYER::PLAYER_ID(), true);
		func_126(1, iParam0);
		MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_95), iParam0);
	}
}

void func_126(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_13(iParam1, 0, 1))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					VEHICLE::_0x7D6F9A3EF26136A0(iVar0, bParam0, 1);
					if (func_66(iParam1, func_103(), 1))
					{
						if (func_103() == iParam1)
						{
							if (Global_2512808.f_4856.f_78[3] != iVar0)
							{
								Global_2512808.f_4856.f_78[3] = iVar0;
							}
						}
						else
						{
							iVar2 = func_127(func_103(), iParam1);
							if (iVar2 != -1)
							{
								if (Global_2512808.f_4856.f_78[iVar2] != iVar0)
								{
									Global_2512808.f_4856.f_78[iVar2] = iVar0;
								}
							}
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (func_66(iParam1, func_103(), 1))
				{
					if (func_103() == iParam1)
					{
						iVar0 = Global_2512808.f_4856.f_78[3];
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
						{
							VEHICLE::_0x7D6F9A3EF26136A0(iVar0, true, 1);
							Global_2512808.f_4856.f_78[3] = 0;
						}
					}
					else
					{
						iVar3 = func_127(func_103(), iParam1);
						if (iVar3 != -1)
						{
							iVar0 = Global_2512808.f_4856.f_78[iVar3];
							if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
							{
								VEHICLE::_0x7D6F9A3EF26136A0(iVar0, true, 1);
								Global_2512808.f_4856.f_78[iVar3] = 0;
							}
						}
					}
				}
			}
		}
	}
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_198(iParam0))
	{
		if (func_66(iParam1, iParam0, 0) || func_129(iParam1, iParam0))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_128(iParam0, iVar0) == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_128(int iParam0, int iParam1)
{
	if (func_198(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1627537[iParam0 /*532*/].f_11.f_11[iParam1];
		}
	}
	return func_53();
}

int func_129(int iParam0, int iParam1)
{
	if (iParam1 != func_53())
	{
		if (Global_1627537[iParam0 /*532*/].f_11.f_26 != func_53())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11.f_26;
		}
	}
	return 0;
}

void func_130(int iParam0)
{
	if (!func_142())
	{
		return;
	}
	Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_1 = iParam0;
	if (func_133(7053, -1, 0) != func_131(PLAYER::PLAYER_ID()))
	{
		func_110(7053, func_131(PLAYER::PLAYER_ID()), -1, 1, 0);
	}
}

int func_131(int iParam0)
{
	if (func_132(iParam0) == -1)
	{
		return -1;
	}
	return (func_132(iParam0) + 43200);
}

int func_132(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_11.f_1;
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_91(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_134()
{
	if (MISC::IS_PC_VERSION())
	{
		NETWORK::_0x265559DA40B3F327(1);
		if (func_72(1))
		{
			HUD::_0x6A1738B4323FE2D9(1253452001);
		}
		else
		{
			HUD::_0x6A1738B4323FE2D9(-1755491431);
		}
	}
}

void func_135(char[64] cParam0)
{
	Global_2447954.f_3066.f_2 = { cParam0 };
}

void func_136(var uParam0, var uParam1)
{
	Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_8[0] = uParam0;
	Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_8[1] = uParam1;
}

void func_137(bool bParam0)
{
	func_138(204, bParam0, -1, 1);
}

void func_138(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_92())
	{
		iVar0 = Global_2547365[iParam0 /*3*/][func_91(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, iParam3);
		}
	}
}

void func_139(bool bParam0)
{
	if (bParam0)
	{
		if (func_141(4))
		{
			func_81(21);
			func_81(22);
		}
		func_81(31);
		func_140(bParam0);
	}
	else
	{
		if (func_56(PLAYER::PLAYER_ID(), 21))
		{
			func_82(21);
			if (!func_141(3) && func_141(4))
			{
				func_81(22);
			}
		}
		func_82(31);
		func_140(bParam0);
	}
}

void func_140(bool bParam0)
{
	func_138(306, bParam0, -1, 1);
}

bool func_141(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2512808.f_4856.f_34, iParam0);
}

int func_142()
{
	if (func_144() && func_143(0))
	{
		return 1;
	}
	return 0;
}

var func_143(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_144()
{
	return func_143(func_48() + 1);
}

bool func_145(int iParam0)
{
	return func_146(iParam0) > 0;
}

int func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_13(iParam0, 0, 1))
	{
		if (Global_1627537[iParam0 /*532*/].f_11.f_175 != -1)
		{
			iVar0 = Global_1627537[iParam0 /*532*/].f_11.f_175;
		}
		else
		{
			iVar0 = func_148(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = ((iVar0 + func_147()) - NETWORK::_GET_POSIX_TIME());
		return iVar1;
	}
	return -1;
}

int func_147()
{
	return Global_262145.f_14277;
}

int func_148(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_149()
{
	return Global_262145.f_11706;
}

int func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_198(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_151(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_198(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_53();
}

void func_152()
{
	char* sVar0;
	vector3 vVar1;
	bool bVar2;
	
	Global_1669400 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_161, 0.0328f, -0.8f, 0.3f) };
		bVar2 = false;
		func_206(&uLocal_157);
		if (func_2(0, &sVar0))
		{
			while (!bVar2)
			{
				func_202(0);
				if (!func_211(&uLocal_157))
				{
					func_210(&uLocal_157, 0, 0);
				}
				else if (func_207(&uLocal_157, 4000, 0))
				{
					bVar2 = true;
				}
				if (!func_158(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vVar1, 0.05f, 0) && !func_157(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(iLocal_161), 5f))
				{
					if (!func_154(PLAYER::PLAYER_PED_ID(), 2106541073))
					{
						BRAIN::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), vVar1, 1f, 5000, ENTITY::GET_ENTITY_HEADING(iLocal_161), 0.25f);
					}
				}
				else
				{
					bVar2 = true;
				}
				SYSTEM::WAIT(0);
			}
			func_206(&uLocal_157);
			iLocal_162 = 0;
		}
	}
	while (iLocal_162 != 3)
	{
		func_153(iLocal_161);
		func_202(0);
		SYSTEM::WAIT(0);
	}
}

void func_153(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!func_209(PLAYER::PLAYER_ID()) && !func_208(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	func_2(0, &sVar0);
	func_2(1, &sVar1);
	func_2(2, &sVar2);
	STREAMING::REQUEST_ANIM_DICT(&sVar2);
	STREAMING::REQUEST_ANIM_DICT(&sVar0);
	sVar3 = "idle_a";
	iVar4 = 1;
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_f_freemode_01"))
	{
		iVar4 = 1;
	}
	switch (iLocal_162)
	{
		case 0:
			iLocal_154 = 0;
			GRAPHICS::DRAW_DEBUG_TEXT("walk", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 64, 256, 64, 64);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 7 && STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_163))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_163);
						iLocal_163 = -1;
					}
					iLocal_163 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vLocal_165, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, false, false, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_163, &sVar0, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_163);
					STREAMING::REMOVE_ANIM_DICT(&sVar0);
					iLocal_162 = 1;
				}
			}
			break;
		
		case 1:
			GRAPHICS::DRAW_DEBUG_TEXT("enter", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 64, 256, 64, 64);
			STREAMING::REQUEST_ANIM_DICT(&sVar1);
			iVar5 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(iLocal_163);
			if (!iLocal_154)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >= 0.93f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", true);
					iLocal_154 = 1;
				}
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar1) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >= 0.96f))
			{
				iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
				if ((((MISC::ARE_STRINGS_EQUAL(&cLocal_166, "idle_a") && iVar6 == 0) || (MISC::ARE_STRINGS_EQUAL(&cLocal_166, "idle_b") && iVar6 == 1)) || (MISC::ARE_STRINGS_EQUAL(&cLocal_166, "idle_c") && iVar6 == 2)) || (MISC::ARE_STRINGS_EQUAL(&cLocal_166, "idle_d") && iVar6 == 3))
				{
					iVar6++;
					if (iVar6 >= iVar4)
					{
						iVar6 = 0;
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_163))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_163);
					iLocal_163 = -1;
				}
				iLocal_163 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vLocal_165, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				switch (iVar6)
				{
					case 0:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_163, &sVar1, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_163);
						StringCopy(&cLocal_166, "idle_a", 16);
						iLocal_162 = 3;
						break;
					
					case 1:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_163, &sVar1, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_163);
						StringCopy(&cLocal_166, "idle_b", 16);
						iLocal_162 = 3;
						break;
					
					case 2:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_163, &sVar1, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_163);
						StringCopy(&cLocal_166, "idle_c", 16);
						iLocal_162 = 3;
						break;
					
					case 3:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_163, &sVar1, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_163);
						StringCopy(&cLocal_166, "idle_d", 16);
						iLocal_162 = 3;
						break;
					
					default:
						StringCopy(&cLocal_166, "idle_XXX", 16);
						break;
					}
			}
			break;
		
		case 3:
			iLocal_154 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar1, "idle_a", 2))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_a", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar1, "idle_b", 2))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_b", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar1, "idle_c", 2))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_c", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar1, "idle_d", 2))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_d", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			else
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_XXX", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			iVar5 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(iLocal_163);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_163) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_163))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_163);
					iLocal_163 = -1;
				}
				iLocal_163 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vLocal_165, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				iVar5 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(iLocal_163);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar5, 0f);
				}
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_163, &sVar1, sVar3, 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_163);
				iLocal_162 = 3;
				return;
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar1) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >= 0.99f))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_163))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_163);
					iLocal_163 = -1;
				}
				iLocal_163 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vLocal_165, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_163, &sVar1, sVar3, 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_163);
				iLocal_162 = 3;
				return;
			}
			break;
	}
}

int func_154(int iParam0, int iParam1)
{
	if (func_155(iParam0))
	{
		if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	if (func_156(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_157(float fParam0, float fParam1, float fParam2)
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

int func_158(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (MISC::ABSF((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (MISC::ABSF((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (MISC::ABSF((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (MISC::ABSF((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

int func_159()
{
	if (func_208(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(Global_1669535.f_16, 0) || MISC::IS_BIT_SET(Global_1669535.f_16, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_160()
{
	if (func_209(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(Global_1669535.f_16, 0) || MISC::IS_BIT_SET(Global_1669535.f_16, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_161()
{
	if (func_145(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_198(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	else if (func_150() < func_149())
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_163(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_197(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/] == 1 && Global_36565[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36565[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36565[iVar0 /*32*/].f_5 = 1;
			Global_36565[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36565[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36565[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_163(int iParam0)
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
		if (Global_36565[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_164(bool bParam0)
{
	if ((((func_189(PLAYER::PLAYER_ID()) && func_174(PLAYER::PLAYER_ID()) == func_173(PLAYER::PLAYER_ID())) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_172()) && !Global_1669401)
	{
		if (func_170())
		{
			func_169("WHPRIVSESLAP");
		}
		else if (!bParam0)
		{
			if (func_150() >= func_149())
			{
				func_182(&iLocal_150, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_145(PLAYER::PLAYER_ID()))
			{
				func_182(&iLocal_150, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_169("WHSECUROBLCK");
			}
			else
			{
				func_182(&iLocal_150, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_51(PLAYER::PLAYER_ID()))
		{
			func_169("WHBIKERBLCK");
		}
		else if ((func_211(&uLocal_155) && func_207(&uLocal_155, 10000, 1)) || !iLocal_152)
		{
			if (func_165(PLAYER::PLAYER_ID()) || Global_1669401 == 1)
			{
				iLocal_152 = 1;
				if (!Global_1669401)
				{
					func_169("WHSECUROBLCK");
				}
			}
			else
			{
				if (func_183())
				{
					HUD::CLEAR_HELP(1);
				}
				iLocal_152 = 0;
				func_206(&uLocal_155);
				func_182(&iLocal_150, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_152)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_169("WHSECUROBLCK");
			}
			if (!func_165(PLAYER::PLAYER_ID()))
			{
				HUD::CLEAR_HELP(1);
				iLocal_152 = 0;
			}
		}
	}
}

bool func_165(int iParam0)
{
	return func_166(func_167(iParam0));
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_167(int iParam0)
{
	if (func_168(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_168(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_169(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

int func_170()
{
	if (func_171())
	{
		return 1;
	}
	return Global_2447174.f_631;
}

bool func_171()
{
	return Global_1312814 == 10;
}

bool func_172()
{
	return Global_1669535.f_28;
}

int func_173(int iParam0)
{
	if (iParam0 == func_53())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_111;
}

int func_174(int iParam0)
{
	if (func_189(iParam0))
	{
		return func_175(Global_2422736[iParam0 /*420*/].f_324.f_1);
	}
	return 0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 60:
			return 1;
		
		case 61:
			return 2;
		
		case 62:
			return 3;
		
		case 63:
			return 4;
		
		case 64:
			return 5;
		
		case 65:
			return 6;
		
		case 66:
			return 7;
		
		case 67:
			return 8;
		
		case 68:
			return 9;
		
		case 69:
			return 10;
		
		default:
	}
	return 0;
}

void func_176(bool bParam0)
{
	if (((((func_186(PLAYER::PLAYER_ID()) || func_159()) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_172()) && !Global_1669401) && func_157(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(iLocal_161), 90f))
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_169("WHSECUROBLCK");
		}
		else if (func_170())
		{
			if (func_186(PLAYER::PLAYER_ID()))
			{
				func_169("BIKERWHBLCKC");
			}
			else
			{
				func_169("BIKERWHBLCKD");
			}
		}
		else if (func_51(PLAYER::PLAYER_ID()))
		{
			if ((func_211(&uLocal_155) && func_207(&uLocal_155, 10000, 1)) || !iLocal_152)
			{
				if (func_177(PLAYER::PLAYER_ID()) || Global_1669401 == 1)
				{
					iLocal_152 = 1;
					if (!Global_1669401)
					{
						func_169("WHSECUROBLCK");
					}
				}
				else
				{
					if (func_183())
					{
						HUD::CLEAR_HELP(1);
					}
					iLocal_152 = 0;
					func_206(&uLocal_155);
					func_182(&iLocal_150, 1, "BIKERWHINPUT", 0, 0, 0, 0);
				}
			}
			else if (iLocal_152)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_169("WHSECUROBLCK");
				}
				if (!func_177(PLAYER::PLAYER_ID()))
				{
					iLocal_152 = 0;
					HUD::CLEAR_HELP(1);
				}
			}
		}
		else if (!bParam0 && func_150() < func_149())
		{
			func_182(&iLocal_150, 1, "BIKERWHBLCKA", 0, 0, 0, 0);
		}
		else
		{
			func_169("BIKERWHBLCKB");
		}
	}
}

bool func_177(int iParam0)
{
	return func_178(func_167(iParam0));
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_179()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_161))
	{
		if (func_208(PLAYER::PLAYER_ID()) || func_180(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	if (func_187(Global_1595693[iParam0 /*680*/].f_266.f_17, -1))
	{
		return 1;
	}
	return 0;
}

void func_181(bool bParam0)
{
	if (((func_160() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_172()) && !Global_1669401)
	{
		if (func_170())
		{
			func_169("WHPRIVSESLAP");
		}
		else if (!bParam0)
		{
			if (func_150() >= func_149())
			{
				func_182(&iLocal_150, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_145(PLAYER::PLAYER_ID()))
			{
				func_182(&iLocal_150, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_169("WHSECUROBLCK");
			}
			else
			{
				func_182(&iLocal_150, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_51(PLAYER::PLAYER_ID()))
		{
			func_169("WHBIKERBLCK");
		}
		else if ((func_211(&uLocal_155) && func_207(&uLocal_155, 10000, 1)) || !iLocal_152)
		{
			if (func_212(PLAYER::PLAYER_ID()) || Global_1669401 == 1)
			{
				iLocal_152 = 1;
				if (!Global_1669401)
				{
					func_169("WHSECUROBLCK");
				}
			}
			else
			{
				if (func_183())
				{
					HUD::CLEAR_HELP(1);
				}
				iLocal_152 = 0;
				func_206(&uLocal_155);
				func_182(&iLocal_150, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_152)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_169("WHSECUROBLCK");
			}
			if (!func_212(PLAYER::PLAYER_ID()))
			{
				HUD::CLEAR_HELP(1);
				iLocal_152 = 0;
			}
		}
	}
}

void func_182(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_185(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/] = 1;
			Global_36565[iVar0 /*32*/].f_1 = Global_36766;
			Global_36766++;
			Global_36565[iVar0 /*32*/].f_4 = 0;
			Global_36565[iVar0 /*32*/].f_29 = 0;
			Global_36565[iVar0 /*32*/].f_5 = 0;
			Global_36565[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36565[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36565[iVar0 /*32*/].f_6 = iParam3;
			Global_36565[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_36565[iVar0 /*32*/].f_7 = 0;
			Global_36565[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_36565[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36565[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36565[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36565[iVar0 /*32*/].f_12 = 0;
				Global_36565[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36565[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_183()
{
	if (((((((((func_184("MP_OFF_LAP_1") || func_184("WHPRIVSESLAP")) || func_184("WHSECUROBLCK")) || func_184("SECINPUTTREGLAP")) || func_184("BIKERWHINPUT")) || func_184("BIKERWHBLCKA")) || func_184("BIKERWHBLCKB")) || func_184("WHBIKERBLCK")) || func_184("BIKERWHBLCKC")) || func_184("BIKERWHBLCKD"))
	{
		return 1;
	}
	return 0;
}

int func_184(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_185(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_163(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_186(int iParam0)
{
	if (func_187(Global_1595693[iParam0 /*680*/].f_266.f_17, -1) && !MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_15, 1))
	{
		return 1;
	}
	return 0;
}

int func_187(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_189(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_190(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_190(int iParam0)
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
	}
	return -1;
}

int func_191()
{
	return func_198(PLAYER::PLAYER_ID());
}

bool func_192()
{
	return Global_1595693[PLAYER::PLAYER_ID() /*680*/] == 148;
}

var func_193()
{
	return Global_68216;
}

var func_194()
{
	return Global_1656139;
}

int func_195()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1, 0) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_196()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2323, 14))
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
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_53())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_199()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_161) && func_189(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	if (func_187(Global_1595693[iParam0 /*680*/].f_266.f_17, -1))
	{
		return 1;
	}
	return 0;
}

int func_201()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_161))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_161) == joaat("ex_prop_monitor_01_ex") || func_209(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_202(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_197(0))
		{
			func_203(iParam0);
		}
		MISC::SET_BIT(&Global_2324, 2);
	}
}

void func_203(int iParam0)
{
	if (Global_14615)
	{
		func_205(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2324, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2323, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2323, 30);
	}
	if (!func_204())
	{
		Global_14453.f_1 = 3;
	}
}

int func_204()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_205(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_197(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14390);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14381);
		}
	}
}

void func_206(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_207(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_210(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_190(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_209(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_190(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_210(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
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

bool func_211(var uParam0)
{
	return uParam0->f_1;
}

bool func_212(int iParam0)
{
	return func_213(func_167(iParam0));
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

bool func_214(int iParam0)
{
	return Global_35861 == iParam0;
}

void func_215()
{
	if (iLocal_150 != -1)
	{
		func_185(&iLocal_150);
	}
	if (((((((((func_184("MP_OFF_LAP_1") || func_184("WHPRIVSESLAP")) || func_184("WHSECUROBLCK")) || func_184("SECINPUTTREGLAP")) || func_184("BIKERWHINPUT")) || func_184("BIKERWHBLCKA")) || func_184("BIKERWHBLCKB")) || func_184("WHBIKERBLCK")) || func_184("BIKERWHBLCKC")) || func_184("BIKERWHBLCKD"))
	{
		HUD::CLEAR_HELP(1);
	}
	Global_1669401 = 0;
	Global_1669400 = 0;
}

