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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	float fLocal_46 = 0f;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	float fLocal_48 = 0f;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	var uLocal_53 = 16;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
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
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
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
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	fLocal_41 = 50f;
	fLocal_42 = 2500f;
	vLocal_43 = { 409.1539f, -1626.677f, 28.2928f };
	vLocal_45 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_46 = 202.6928f;
	vLocal_47 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_48 = 85.7173f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_27();
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_tonyacall2")) > 1)
	{
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	while (true)
	{
		PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246());
		if (func_26(0, 14))
		{
			func_27();
		}
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			vLocal_44 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
		}
		if (SYSTEM::VDIST2(vLocal_44, vLocal_43) > fLocal_42)
		{
			func_27();
		}
		switch (iLocal_37)
		{
			case 0:
				if (func_22())
				{
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@enter");
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@base");
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@exit");
				STREAMING::REQUEST_MODEL(joaat("prop_phone_ing"));
				if (((STREAMING::HAS_MODEL_LOADED(joaat("prop_phone_ing")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@enter")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@exit"))
				{
					iLocal_37 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_37 = 3;
				}
				break;
			
			case 3:
				func_27();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x1BA
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_38, 0))
	{
		vVar1 = { unk_0x8000C77B5F336760(iLocal_38, 1) };
	}
	else
	{
		vVar1 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((SYSTEM::VDIST2(vVar0, vVar1) > 10000f || ENTITY::IS_ENTITY_DEAD(iLocal_38, 0)) || func_21())
	{
		return 1;
	}
	switch (iLocal_40)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && !ENTITY::IS_ENTITY_DEAD(iLocal_38, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_38, vLocal_49, 1f, 1f, 1f, 0, 1, 0))
				{
					BRAIN::CLEAR_SEQUENCE_TASK(&uVar3);
					BRAIN::OPEN_SEQUENCE_TASK(&uVar3);
					BRAIN::TASK_ACHIEVE_HEADING(0, fLocal_50, 0);
					BRAIN::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, 4294967295, 0, 0, 0, 0, 0);
					BRAIN::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, 4294967295, 1, 0, 0, 0, 0);
					CUTSCENE::_0x8D9DF6ECA8768583(uVar3);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_38, uVar3);
					BRAIN::CLEAR_SEQUENCE_TASK(&uVar3);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && !ENTITY::IS_ENTITY_DEAD(iLocal_38, 0))
			{
				if (BRAIN::GET_SEQUENCE_PROGRESS(iLocal_38) == 1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_39))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar4 >= 0.157f)
							{
								iLocal_39 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_39, iLocal_38, PED::GET_PED_BONE_INDEX(iLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (BRAIN::GET_SEQUENCE_PROGRESS(iLocal_38) == 2)
				{
					iVar2 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
					if (iVar2 == 0)
					{
						if (func_4(&uLocal_53, "TOWAUD", "TONYA_CALL3", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_4(&uLocal_53, "TOWAUD", "TONYA_CALL4", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_38, 0))
			{
				if (!func_3())
				{
					BRAIN::CLEAR_SEQUENCE_TASK(&uVar3);
					BRAIN::OPEN_SEQUENCE_TASK(&uVar3);
					BRAIN::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, 4294967295, 0, 0, 0, 0, 0);
					BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 4294967295, 1);
					CUTSCENE::_0x8D9DF6ECA8768583(uVar3);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_38, uVar3);
					BRAIN::CLEAR_SEQUENCE_TASK(&uVar3);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (SYSTEM::VDIST2(vVar0, vVar1) < 25f)
			{
				if (CAM::_0xEE778F8C7E1142E2(0) != 4)
				{
					if (func_4(&uLocal_53, "TOWAUD", "TOW_MESS2", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_40 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (SYSTEM::TIMERA() > 10000)
			{
				iLocal_40 = 3;
			}
			break;
	}
	return 0;
}

void func_2()//Position - 0x464
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && !ENTITY::IS_ENTITY_DEAD(iLocal_38, 0))
	{
		if (BRAIN::GET_SEQUENCE_PROGRESS(iLocal_38) == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
			{
				OBJECT::DELETE_OBJECT(&iLocal_39);
				BRAIN::TASK_LOOK_AT_ENTITY(iLocal_38, AUDIO::_0x0626A247D2405330(), 4294967295, 0, 2);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && !ENTITY::IS_ENTITY_DEAD(iLocal_38, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
		{
			if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_38, 993674639) == 1)
			{
				OBJECT::DELETE_OBJECT(&iLocal_39);
			}
		}
	}
}

int func_3()//Position - 0x4DC
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4FE
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3DD5 = 0;
	Global_3DD7 = 0;
	Global_3DDC = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_280001 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)//Position - 0x54C
{
	Global_3DCF = 0;
	if (Global_3DCE == 0 || Global_3DD0 == 2)
	{
		if (Global_3DCE != 0)
		{
			if (iParam1 > Global_3DD0)
			{
				if (Global_3DD5 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_38B1.f_1 = 3;
					Global_3DCE = 0;
					Global_3DCF = 1;
					Global_3E03 = 0;
					Global_3DCA = 0;
					Global_3DCB = 0;
					Global_3DD9 = 0;
					Global_3DD8 = 0;
					Global_38B0 = 0;
				}
				else
				{
					func_19();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_18(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_17();
		Global_3B07 = { Global_3BAC };
		Global_3DD4 = Global_3DD5;
		Global_3DDB = Global_3DDC;
		Global_280002 = Global_280001;
		Global_3DDD = { Global_3DED };
		Global_3DD6 = Global_3DD7;
		Global_41AC = Global_41AD;
		Global_41B4 = { Global_41BA };
		Global_41AE = Global_41AF;
		Global_41B0 = Global_41B1;
		Global_41B2 = Global_41B3;
		Global_3C51.f_172 = Global_41AB;
		Global_3C51.f_170 = Global_41A9;
		Global_3C51.f_171 = Global_41AA;
		Global_3DCA = Global_3DCB;
		if (Global_3DD4)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 20);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 17);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 0);
			if (bParam2)
			{
				func_10();
				if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_38B1.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_388F == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_11625)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(AUDIO::_0x0626A247D2405330()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(CAM::_0xDC9DA9E8789F5246()))
					{
						return 0;
					}
				}
			}
			if (func_8())
			{
				return 0;
			}
			else
			{
				switch (Global_38B1.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 9))
				{
					return 0;
				}
			}
			func_7();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_6();
		return 1;
	}
	if (Global_3DCE == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3DD0 || iParam1 == Global_3DD0)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_19();
	}
	return 0;
}

void func_6()//Position - 0x818
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_3962[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_3DCE = 1;
}

void func_7()//Position - 0x849
{
	Global_3E03 = Global_3E02;
	Global_3DFD = Global_3DFE;
	Global_3E2C = { Global_3E20 };
	Global_3E32 = { Global_3E26 };
	Global_3E05 = Global_3E04;
	Global_3E4A = { Global_3E38 };
	Global_3E50 = { Global_3E3E };
	Global_3E56 = { Global_3E44 };
	Global_3E5C = { Global_3E62 };
	Global_6A2 = Global_6A3;
	Global_6A4 = Global_6A5;
	Global_3DD9 = Global_3DDA;
	Global_3DDB = Global_3DDC;
	Global_3DDD = { Global_3DED };
	Global_3DD2 = Global_3DD3;
	Global_41C6 = 0;
	Global_3DFF = 0;
	Global_3E00 = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 16);
}

int func_8()//Position - 0x8DE
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()//Position - 0x905
{
	int iVar0;
	int iVar1;
	
	if (Global_11625)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (PED::GET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_10()//Position - 0x99E
{
	if (func_16(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[0 /*29*/])
			{
				Global_38B1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[1 /*29*/])
			{
				Global_38B1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[2 /*29*/])
			{
				Global_38B1 = 2;
			}
			else
			{
				Global_38B1 = 0;
			}
		}
	}
	else
	{
		Global_38B1 = func_11();
		if (Global_38B1 == 145)
		{
			Global_38B1 = 3;
		}
		if (Global_11625)
		{
			Global_38B1 = 3;
		}
		if (Global_38B1 > 3)
		{
			Global_38B1 = 3;
		}
	}
}

var func_11()//Position - 0xA40
{
	func_12();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_12()//Position - 0xA59
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_15(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_14(AUDIO::_0x0626A247D2405330());
			if (func_13(iVar0) && (!func_16(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_13(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_13(int iParam0)//Position - 0xB56
{
	return iParam0 < 3;
}

int func_14(int iParam0)//Position - 0xB62
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)//Position - 0xB9F
{
	if (func_13(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)//Position - 0xBC9
{
	return Global_8D15 == iParam0;
}

void func_17()//Position - 0xBD7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3B07[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3B07[iVar0 /*10*/].f_1), "", 24);
		Global_3B07[iVar0 /*10*/].f_7 = 0;
		Global_3B07[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3B07.f_A1 = 4294967197;
	Global_3B07.f_A2 = { 0f, 0f, 0f };
}

bool func_18(int iParam0, int iParam1)//Position - 0xC2E
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

void func_19()//Position - 0xC69
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_38B1.f_1 == 9) || Global_38B0 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
		Global_38B1.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_3DCE = 6;
		return;
	}
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xCC0
{
	Global_3BAC = { *uParam0 };
	Global_6A3 = iParam1;
	StringCopy(&Global_3E14, sParam2, 24);
	Global_41AB = uParam5;
	if (iParam3 == 0)
	{
		Global_41A9 = 1;
		Global_41A7 = 0;
	}
	else
	{
		Global_41A9 = 0;
		Global_41A7 = 1;
	}
	if (iParam4 == 0)
	{
		Global_41AA = 1;
		Global_41A8 = 0;
	}
	else
	{
		Global_41AA = 0;
		Global_41A8 = 1;
	}
}

int func_21()//Position - 0xD16
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_38, 0))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_38) || PED::IS_PED_SHOOTING(AUDIO::_0x0626A247D2405330()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
			{
				ENTITY::DETACH_ENTITY(iLocal_39, 1, 1);
			}
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_38, 1805844857) != 1)
			{
				PED::SET_PED_KEEP_TASK(iLocal_38, 1);
				BRAIN::TASK_SMART_FLEE_PED(iLocal_38, AUDIO::_0x0626A247D2405330(), 1000f, 4294967295, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_22()//Position - 0xD97
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
	}
	PED::GET_CLOSEST_PED(vVar0, fLocal_41, 1, 1, &iVar1, 0, 1, 4294967295);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (iVar2 == joaat("ig_tonya"))
		{
			iLocal_38 = iVar1;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_38, 1, 0);
			PED::SET_PED_MONEY(iLocal_38, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_38, false);
			PED::SET_PED_NAME_DEBUG(iLocal_38, "TONYA");
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_38, 1862763509);
			func_25(&uLocal_53, 3, iLocal_38, "TONYA", 1, 1);
			func_24();
			if (!func_23(vLocal_49))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_38, 713668775) != 1)
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_38, vLocal_49, 1f, 4294967295, 0.25f, 0, fLocal_50);
					PED::SET_PED_KEEP_TASK(iLocal_38, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_23(vector3 vParam0)//Position - 0xE6E
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_24()//Position - 0xE98
{
	vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && !ENTITY::IS_ENTITY_DEAD(iLocal_38, 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(iLocal_38, 1) };
		if (func_23(vLocal_49))
		{
			fLocal_51 = SYSTEM::VDIST(vVar0, vLocal_45);
			fLocal_52 = SYSTEM::VDIST(vVar0, vLocal_47);
			if (fLocal_51 < fLocal_52)
			{
				vLocal_49 = { vLocal_45 };
				fLocal_50 = fLocal_46;
			}
			else
			{
				vLocal_49 = { vLocal_47 };
				fLocal_50 = fLocal_48;
			}
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
				{
					vLocal_49 = { vLocal_47 };
					fLocal_50 = fLocal_48;
				}
			}
		}
	}
}

void func_25(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xF51
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_11625)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

bool func_26(int iParam0, int iParam1)//Position - 0xFEC
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

void func_27()//Position - 0x1039
{
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@enter");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@exit");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_38))
		{
			PED::DELETE_PED(&iLocal_38);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_38);
		}
	}
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

