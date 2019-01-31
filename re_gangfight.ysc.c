#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_60 = 0;
	int iLocal_61[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_62 = 0;
	var uLocal_63 = 16;
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
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	int iLocal_228 = 0;
	struct<2> Local_229 = { 0, 5 } ;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 5;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = 4294967295;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_48 = { ScriptParam_229.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_140();
	}
	if (func_98(vLocal_48, 4294967295, 0, 0, 0))
	{
		func_95(4294967295);
	}
	else
	{
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_94();
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (iLocal_55 > MISC::GET_GAME_TIMER())
			{
				RECORDING::_0xAF66DCEE6609B148();
			}
			if (!func_93())
			{
				if (!func_93())
				{
					if (func_92())
					{
						func_140();
					}
				}
				RECORDING::_0x208784099002BC30("RE_CGF", 0);
				switch (iLocal_44)
				{
					case 0:
						if (func_80())
						{
							func_140();
						}
						if (func_79())
						{
							iLocal_49 = 1;
							iLocal_44 = 1;
						}
						break;
					
					case 1:
						func_78();
						if (!func_77() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
						{
							if ((!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[0])) && !PED::IS_PED_INJURED(iLocal_59[1]))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), 969.2191f, 3608.665f, 41.8758f, 100f, 80f, 20f, false, true, 0))
								{
									iLocal_56 = func_74(iLocal_58, 0, 145);
									HUD::SET_BLIP_PRIORITY(iLocal_56, 9);
									iLocal_57[0] = func_74(iLocal_59[0], 1, 145);
									iLocal_57[1] = func_74(iLocal_59[1], 1, 145);
									HUD::_0x75A16C3DA34F1245(iLocal_56, false);
									HUD::_0x75A16C3DA34F1245(iLocal_57[0], false);
									HUD::_0x75A16C3DA34F1245(iLocal_57[1], false);
									func_64(1);
								}
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < iLocal_59)
							{
								if (!PED::IS_PED_INJURED(iLocal_59[iVar0]))
								{
									BRAIN::TASK_SMART_FLEE_PED(iLocal_59[iVar0], AUDIO::_0x0626A247D2405330(), 150f, 4294967295, 0, 0);
								}
								iVar0++;
							}
							if (!PED::IS_PED_INJURED(iLocal_58))
							{
								BRAIN::TASK_SMART_FLEE_PED(iLocal_58, AUDIO::_0x0626A247D2405330(), 150f, 4294967295, 0, 0);
							}
							func_63();
						}
						break;
				}
			}
			else
			{
				GRAPHICS::_0x54E22EA2C1956A8D(0f);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(CAM::_0xDC9DA9E8789F5246());
				if (!PED::IS_PED_INJURED(iLocal_58))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_58, AUDIO::_0x0626A247D2405330(), 1))
					{
						BRAIN::TASK_SMART_FLEE_PED(iLocal_58, AUDIO::_0x0626A247D2405330(), 150f, 4294967295, 0, 0);
						func_63();
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_58, 150f, 150f, 50f, 0, 1, 0))
					{
						if (iLocal_46 >= 5 && iLocal_45 == 2)
						{
						}
						else
						{
							func_78();
							func_62();
						}
						switch (iLocal_45)
						{
							case 0:
								func_61();
								if (func_77())
								{
									bLocal_51 = true;
									iLocal_46 = 4;
								}
								break;
							
							case 1:
								if (iLocal_46 < 7 && !PED::IS_PED_INJURED(iLocal_58))
								{
									if (PED::IS_PED_FACING_PED(AUDIO::_0x0626A247D2405330(), iLocal_58, 90f))
									{
										if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_58) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_58))
										{
											func_58();
										}
									}
								}
								func_53();
								break;
							
							case 2:
								func_9();
								break;
							
							case 3:
								func_1();
								break;
						}
					}
					else
					{
						func_63();
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						HUD::REMOVE_BLIP(&iLocal_56);
					}
					if (((!PED::IS_PED_INJURED(iLocal_59[0]) && !PED::IS_PED_INJURED(iLocal_59[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[0], 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[1], 0))
					{
						func_63();
					}
					iVar1 = 0;
					iVar2 = 0;
					while (iVar2 < iLocal_59)
					{
						if (!PED::IS_PED_INJURED(iLocal_59[iVar2]))
						{
							BRAIN::TASK_COMBAT_PED(iLocal_59[iVar2], AUDIO::_0x0626A247D2405330(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_59[iVar2], true);
							if (!ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_59[iVar2], 150f, 150f, 50f, 0, 1, 0))
							{
								func_63();
							}
							iVar1 = 1;
						}
						else if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar2]))
						{
							HUD::REMOVE_BLIP(&(iLocal_57[iVar2]));
						}
						iVar2++;
					}
					if (iVar1 == 0)
					{
						func_63();
					}
				}
			}
		}
		else
		{
			func_140();
		}
	}
}

void func_1()//Position - 0x431
{
	int iVar0;
	
	if (iLocal_49 && !iLocal_54)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
		}
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			unk_0xF82197F205B9D8FD(iLocal_58, false);
			ENTITY::SET_ENTITY_HEALTH(iLocal_58, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_57[iVar0]));
			}
			if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (iVar0 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], 0))
					{
						BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_59[iVar0], iLocal_61[iVar0], AUDIO::_0x0626A247D2405330(), 8, 20f, 786469, 150f, 10f, 1);
						PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
					}
					else
					{
						BRAIN::TASK_SMART_FLEE_PED(iLocal_59[iVar0], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					}
				}
				else
				{
					BRAIN::TASK_SMART_FLEE_PED(iLocal_59[iVar0], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_59[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_61[iVar0]));
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		AUDIO::STOP_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		func_3(&uLocal_63, 1);
		func_3(&uLocal_63, 2);
		func_3(&uLocal_63, 3);
		func_3(&uLocal_63, 4);
		iLocal_54 = 1;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_2(CAM::_0xDC9DA9E8789F5246()), vLocal_48, true) > 50f)
	{
		func_140();
	}
}

Vector3 func_2(int iParam0)//Position - 0x600
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_3(var uParam0, int iParam1)//Position - 0x613
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()//Position - 0x630
{
	Global_3960 = 0;
	func_5();
}

void func_5()//Position - 0x640
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
	}
}

int func_6(char* sParam0)//Position - 0x661
{
	var uVar0;
	
	if (func_8())
	{
		MemCopy(&uVar0, {func_7()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_7()//Position - 0x689
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DCE == 4)
	{
		return Global_3C51;
	}
	return Var0;
}

int func_8()//Position - 0x6AD
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_9()//Position - 0x6CF
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_46)
	{
		case 0:
			if (SYSTEM::TIMERB() > 2000)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], 0))
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_57[iVar0]))
						{
							iLocal_57[iVar0] = func_74(iLocal_59[iVar0], 1, 145);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_59[iVar0], 0))
							{
								if (!bLocal_51)
								{
									BRAIN::TASK_DRIVE_BY(iLocal_59[iVar0], AUDIO::_0x0626A247D2405330(), 0, 0f, 0f, 0f, 150f, 100, 1, 3541198322);
								}
								else
								{
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_62);
									BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
									CUTSCENE::_0x8D9DF6ECA8768583(iLocal_62);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_59[iVar0], iLocal_62);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_62);
									PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
								}
							}
						}
					}
					iVar0++;
				}
				if (!func_8())
				{
					if (func_41(&uLocal_63, "RECGFAU", "RECGF_BIKERS", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iLocal_59)
			{
				if (!PED::IS_PED_INJURED(iLocal_59[iVar1]))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_59[iVar1], 904.3153f, 3631.684f, 31.574f, 7f, 7f, 7f, false, true, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar1], 0))
						{
							AUDIO::_0x18EB48CFC41F2EA0(iLocal_61[iVar1], 0f);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_59[iVar1], 0))
						{
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_62);
							BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
							CUTSCENE::_0x8D9DF6ECA8768583(iLocal_62);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_59[iVar1], iLocal_62);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_62);
							PED::SET_PED_KEEP_TASK(iLocal_59[iVar1], true);
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_59[iVar1], 0))
					{
						BRAIN::TASK_COMBAT_PED(iLocal_59[iVar1], AUDIO::_0x0626A247D2405330(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_59[iVar1], true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar1], 0))
					{
						if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_61[iVar1]))
						{
						}
					}
				}
				if (PED::IS_PED_INJURED(iLocal_59[iVar1]))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar1]))
					{
						HUD::REMOVE_BLIP(&(iLocal_57[iVar1]));
					}
				}
				iVar1++;
			}
			if (((PED::IS_PED_INJURED(iLocal_59[2]) && PED::IS_PED_INJURED(iLocal_59[3])) && PED::IS_PED_INJURED(iLocal_59[4])) && PED::IS_PED_INJURED(iLocal_59[5]))
			{
				AUDIO::STOP_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
				iLocal_46++;
			}
			break;
		
		case 2:
			func_40(1500);
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_58);
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_62);
				BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 4294967295, 2056, 2);
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 4294967295);
				CUTSCENE::_0x8D9DF6ECA8768583(iLocal_62);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_62);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_60);
				if (!ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_58, 5f, 5f, 5f, 0, 1, 0))
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_REWARD", 4, 0, 0, 0);
				}
			}
			iLocal_46++;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_58, 6f, 6f, 6f, 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(iLocal_58, AUDIO::_0x0626A247D2405330(), 60f))
					{
						if (!func_8())
						{
							if (func_41(&uLocal_63, "RECGFAU", "RECGF_END", 4, 0, 0, 0))
							{
								iLocal_46++;
							}
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_58, AUDIO::_0x0626A247D2405330(), 120f, 120f, 120f, 0, 1, 0))
				{
					func_10();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, AUDIO::_0x0626A247D2405330(), 0))
				{
					func_63();
				}
			}
			break;
		
		case 4:
			iLocal_46++;
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_62);
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 1500);
				BRAIN::TASK_ENTER_VEHICLE(0, iLocal_60, 4294967295, 4294967295, 2f, 8, 0);
				BRAIN::TASK_PAUSE(0, 2000);
				BRAIN::TASK_PLAY_ANIM(0, "veh@drivebystd_ds_grenades", "drop_grenade", 2f, -2f, 4294967295, 0, 0, 0, 0, 0);
				BRAIN::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_60, 10f, 786603);
				CUTSCENE::_0x8D9DF6ECA8768583(iLocal_62);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_62);
				PED::SET_PED_KEEP_TASK(iLocal_58, true);
				VEHICLE::_0x25367DE49D64CF16(iLocal_60, 1);
				iLocal_46++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade") > 0.436f && PED::IS_PED_IN_ANY_VEHICLE(iLocal_58, 0))
					{
						OBJECT::CREATE_MONEY_PICKUPS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(iLocal_58, 0), -1f, 0f, 0f), 1000, 1, 0);
						iLocal_46++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_8())
			{
				func_41(&uLocal_63, "RECGFAU", "RECGF_END2", 4, 0, 0, 0);
				func_10();
			}
			break;
	}
}

void func_10()//Position - 0xB8C
{
	while (func_8())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_39())
	{
		SYSTEM::WAIT(0);
	}
	func_14(4294967295, 0);
	func_11();
	iLocal_45 = 3;
}

void func_11()//Position - 0xBC0
{
	func_12();
}

int func_12()//Position - 0xBCD
{
	if (func_13(0))
	{
		return 0;
	}
	if (Global_16C57.f_8)
	{
		if (Global_16C57.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_16C57.f_A > 1)
	{
		return 0;
	}
	Global_16C57.f_A++;
	return 1;
}

bool func_13(bool bParam0)//Position - 0xC18
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_14(int iParam0, int iParam1)//Position - 0xC43
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_37();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 <= func_36(iParam0))
	{
		func_35(iParam0, iParam1);
		if (!func_34(51))
		{
			func_25("RE_REWARD", 1, 0, 4000, 10000, func_28(), 0, 138, 0);
			func_24(51);
		}
		if (func_23(iParam0))
		{
			Global_19E56.f_6187.f_2 = 3;
		}
		if (func_22(iParam0, iParam1) != 322)
		{
			func_16(func_22(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_19E4A = iParam1;
		if (Global_19E48 == 0)
		{
			if (((Global_19E4B == 1 || Global_19E4B == 5) || Global_19E4B == 11) || Global_19E4B == 25)
			{
				func_15(2);
			}
			else if ((Global_19E4B == 26 || Global_19E4B == 8) || Global_19E4B == 17)
			{
				func_15(7);
			}
			else
			{
				func_15(1);
			}
		}
	}
}

void func_15(int iParam0)//Position - 0xD46
{
	Global_19E48 = iParam0;
}

void func_16(int iParam0, var uParam1, var uParam2)//Position - 0xD54
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_20((891 + iParam0), 1, 4294967295, 1);
	}
	bVar0 = true;
	if (Global_19E56.f_27B6[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_19E56.f_27B6[iParam0 /*12*/].f_6 == 11 || Global_19E56.f_27B6[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_19E56.f_27B6[iParam0 /*12*/].f_5 = 1;
		Global_19E56.f_27B6[iParam0 /*12*/].f_A = uParam1;
		Global_19E56.f_27B6[iParam0 /*12*/].f_B = uParam2;
		if (iParam0 == 287)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_17();
	}
}

void func_17()//Position - 0xE3C
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_19D4E = 0;
	Global_19D4F = 0;
	Global_19D50 = 0;
	Global_19D51 = 0;
	Global_19D52 = 0;
	Global_19D53 = 0;
	Global_19D54 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_19E56.f_27B6.f_F0D;
	Global_19E56.f_27B6.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_19E56.f_27B6[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_19E56.f_27B6[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_19D4E++;
					fVar1 = (fVar1 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_19D4F++;
					fVar2 = (fVar2 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_19D50++;
					fVar3 = (fVar3 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_19D51++;
					fVar4 = (fVar4 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_19D52++;
					fVar5 = (fVar5 + (Global_19E56.f_27B6[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_19D53++;
					fVar6 = (fVar6 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_19D54++;
					fVar7 = (fVar7 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_19D3D > 0)
	{
		if (Global_19D4E == Global_19D3D)
		{
			fVar1 = 55f;
		}
	}
	if (Global_19D3E > 0)
	{
		if (Global_19D4F == Global_19D3E)
		{
			fVar2 = 10f;
		}
	}
	if (Global_19D3F > 0)
	{
		if (Global_19D50 == Global_19D3F)
		{
			fVar3 = 0f;
		}
	}
	if (Global_19D40 > 0)
	{
		if (Global_19D51 == Global_19D40)
		{
			fVar4 = 10f;
		}
	}
	if (Global_19D41 > 0)
	{
		if (((Global_19D52 == Global_19D41 || (Global_19D41 * 10 / Global_19D52) < 41) || Global_19D52 > Global_19D44) || Global_19D52 == Global_19D44)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_27B6.f_F10, 14))
			{
				if (Global_19D52 == Global_19D41)
				{
					STATS::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_19D41, 0);
					MISC::SET_BIT(&(Global_19E56.f_27B6.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_19D42 > 0)
	{
		if (Global_19D53 == Global_19D42)
		{
			fVar6 = 15f;
		}
	}
	if (Global_19D43 > 0)
	{
		if (Global_19D54 == Global_19D43)
		{
			fVar7 = 5f;
		}
	}
	Global_19E56.f_27B6.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_19D52 > Global_19D44 || Global_19D52 == Global_19D44)
	{
		iVar9 = Global_19D44;
	}
	else
	{
		iVar9 = Global_19D52;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_19D4E, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_19D3D, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_19D4F, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_19D3E, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_19D50, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_19D3F, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_19D51, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_19D40, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_19D44, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_19D54 + Global_19D53), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_19D43 + Global_19D42), 1);
	Global_19D55 = (Global_19D4E * 100 / Global_19D3D);
	Global_19D57 = ((Global_19D50 + Global_19D4F) * 100 / (Global_19D3F + Global_19D3E));
	Global_19D56 = ((Global_19D51 + iVar9) * 100 / (Global_19D40 + Global_19D44));
	Global_19D58 = ((Global_19D53 + Global_19D54) * 100 / (Global_19D42 + Global_19D43));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_19E56.f_27B6.f_F0D, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_19D55, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_19D56, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_19D57, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D))
	{
		func_19(13, SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_11625)
		{
			if (func_18() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_19D4C = 0;
				}
				if (!Global_DB75)
				{
					func_12();
				}
			}
		}
	}
}

int func_18()//Position - 0x12FD
{
	return Global_6373;
}

int func_19(int iParam0, int iParam1)//Position - 0x1308
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESSION(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESSION(iParam0, iParam1);
	}
	return 0;
}

int func_20(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1359
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_21()//Position - 0x18B9
{
	return Global_1407E0;
}

int func_22(int iParam0, int iParam1)//Position - 0x18C5
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_23(int iParam0)//Position - 0x1C39
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_24(int iParam0)//Position - 0x1C68
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_19E56.f_4F9E.f_96[iVar1]), iVar0);
	}
}

void func_25(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1CAA
{
	func_26(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_26(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1CCC
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != 4294967295)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != 4294967295)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_4F9E[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_19E56.f_4F9E.f_91 < 9)
	{
		StringCopy(&(Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_4), sParam1, 16);
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_9 = iParam5;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_B = iParam6;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_C = uParam2;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_D = iParam7;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_E = iParam8;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 4294967295)
		{
			Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_A = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_A = 4294967295;
		}
		Global_19E56.f_4F9E.f_91++;
		func_27();
	}
}

void func_27()//Position - 0x1EA0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_19E56.f_4F9E.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 0))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[0])
			{
				Global_19E56.f_4F9E.f_92[0] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 1))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[1])
			{
				Global_19E56.f_4F9E.f_92[1] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 2))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[2])
			{
				Global_19E56.f_4F9E.f_92[2] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

int func_28()//Position - 0x1FC0
{
	func_29();
	switch (Global_19E56.f_933.f_21B.f_10CD)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_29()//Position - 0x2006
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_33(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_32(AUDIO::_0x0626A247D2405330());
			if (func_31(iVar0) && (!func_30(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_31(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_30(int iParam0)//Position - 0x2103
{
	return Global_8D15 == iParam0;
}

bool func_31(int iParam0)//Position - 0x2111
{
	return iParam0 < 3;
}

int func_32(int iParam0)//Position - 0x211D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)//Position - 0x215A
{
	if (func_31(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x2184
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E.f_96[iVar1], iVar0);
	}
	return 0;
}

void func_35(int iParam0, int iParam1)//Position - 0x21C7
{
	MISC::SET_BIT(&(Global_19E56.f_6187.f_8[iParam0]), iParam1);
}

int func_36(int iParam0)//Position - 0x21E2
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_37()//Position - 0x2293
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_38(Var0);
	return uVar1;
}

int func_38(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x22B0
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return 4294967295;
}

int func_39()//Position - 0x248A
{
	return 1;
}

void func_40(int iParam0)//Position - 0x2493
{
	int iVar0;
	
	iVar0 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() <= iVar0)
	{
		SYSTEM::WAIT(0);
		if (iLocal_55 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_0xAF66DCEE6609B148();
		}
	}
}

bool func_41(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x24C2
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_42(sParam2, iParam3, 0);
}

int func_42(char* sParam0, int iParam1, bool bParam2)//Position - 0x2510
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
					func_51();
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
		if (func_50(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_49();
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
				func_47();
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
				if (func_46())
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
			if (func_45())
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
			func_44();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_43();
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
		func_51();
	}
	return 0;
}

void func_43()//Position - 0x27DC
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

void func_44()//Position - 0x280E
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

int func_45()//Position - 0x28A3
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()//Position - 0x28CA
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

void func_47()//Position - 0x2963
{
	if (func_30(14))
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
		Global_38B1 = func_48();
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

int func_48()//Position - 0x2A05
{
	func_29();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_49()//Position - 0x2A1E
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

bool func_50(int iParam0, int iParam1)//Position - 0x2A76
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

void func_51()//Position - 0x2AB1
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

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2B08
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

void func_53()//Position - 0x2B5E
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				iLocal_46++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_58, 20f, 20f, 20f, 0, 1, 0))
				{
					BRAIN::TASK_LOOK_AT_ENTITY(iLocal_58, AUDIO::_0x0626A247D2405330(), 4294967295, 2060, 2);
					func_41(&uLocal_63, "RECGFAU", "RECGF_THX", 4, 0, 0, 0);
					iLocal_46++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_62);
				BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 916.5764f, 3602.146f, 31.9262f, 1f, 40000, 1048576000, 0, 1193033728);
				CUTSCENE::_0x8D9DF6ECA8768583(iLocal_62);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_62);
				iLocal_46++;
			}
			break;
		
		case 3:
			if (!func_8())
			{
				if (func_48() == 0)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_JABM", 4, 0, 0, 0);
				}
				else if (func_48() == 1)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_JABF", 4, 0, 0, 0);
				}
				else if (func_48() == 2)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_JABBER", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_58, 916.5764f, 3602.146f, 31.9262f, 3.3f, 3.3f, 3.3f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_58, 8f, 8f, 8f, 0, 1, 0))
					{
						if (!func_8())
						{
							if (func_41(&uLocal_63, "RECGFAU", "RECGF_STASH", 4, 0, 0, 0))
							{
								BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_58, AUDIO::_0x0626A247D2405330(), 4294967295);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
								{
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_60);
								}
								iLocal_46++;
							}
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_60);
						}
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 5:
			if (!func_8())
			{
				if (func_48() == 0)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_STASHM", 4, 0, 0, 0);
				}
				else if (func_48() == 1)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_STASHF", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_58, 8f, 8f, 8f, 0, 1, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()))
					{
						if (func_56())
						{
							func_40(1000);
							if ((!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[2])) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
							{
								BRAIN::OPEN_SEQUENCE_TASK(&iLocal_62);
								BRAIN::TASK_OPEN_VEHICLE_DOOR(0, iLocal_60, 4294967295, 4294967295, 1f);
								BRAIN::TASK_LOOK_AT_ENTITY(0, iLocal_59[2], 2000, 0, 2);
								BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_59[2], 0);
								CUTSCENE::_0x8D9DF6ECA8768583(iLocal_62);
								BRAIN::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
								BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_62);
								func_40(2000);
								func_4();
								func_40(0);
								func_41(&uLocal_63, "RECGFAU", "RECGF_HIDE", 4, 0, 0, 0);
								if ((!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, 0)) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_58, 0))
								{
									iLocal_46++;
								}
								else
								{
									if (!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[2]))
									{
										BRAIN::OPEN_SEQUENCE_TASK(&iLocal_62);
										BRAIN::TASK_COWER(0, 4294967295);
										CUTSCENE::_0x8D9DF6ECA8768583(iLocal_62);
										BRAIN::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
										BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_62);
									}
									bLocal_51 = false;
									SYSTEM::SETTIMERB(0);
									iLocal_46++;
								}
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, AUDIO::_0x0626A247D2405330(), 0))
				{
					func_63();
				}
			}
			break;
		
		case 7:
			if ((((!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, 0)) && !PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_60, 0)) && !PED::IS_PED_IN_COVER(iLocal_58, 0)) && !PED::IS_PED_GOING_INTO_COVER(iLocal_58))
			{
			}
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], 0))
				{
					if (((((PED::IS_PED_SHOOTING_IN_AREA(AUDIO::_0x0626A247D2405330(), (916.3351f - 100f), (3602.048f - 100f), (31.9209f - 100f), (916.3351f + 100f), (3602.048f + 100f), (31.9209f + 100f), 0, 1) || ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_59[iVar0], 5f, 5f, 5f, 0, 1, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[iVar0], AUDIO::_0x0626A247D2405330(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61[iVar0], AUDIO::_0x0626A247D2405330(), 1)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_59[iVar0])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_61[iVar0]))
					{
						bLocal_51 = true;
						SYSTEM::SETTIMERB(2000);
						iLocal_46 = 0;
						iLocal_45 = 2;
					}
				}
				iVar0++;
			}
			if (((PED::IS_PED_INJURED(iLocal_59[2]) && PED::IS_PED_INJURED(iLocal_59[3])) && PED::IS_PED_INJURED(iLocal_59[4])) && PED::IS_PED_INJURED(iLocal_59[5]))
			{
				iLocal_46 = 2;
				iLocal_45 = 2;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_59[2], 970.3641f, 3629.886f, 31.3694f, 5f, 5f, 5f, false, true, 0) || SYSTEM::TIMERB() > 13000)
			{
				func_40(2000);
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!PED::IS_PED_INJURED(iLocal_59[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_59[iVar0], iLocal_61[iVar0], 0))
							{
								BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_59[iVar0], iLocal_61[iVar0], AUDIO::_0x0626A247D2405330(), (iVar0 - 2) + 10, 60f, 786475, 5f, 10f, 1);
							}
						}
					}
					iVar0++;
				}
				if (!PED::IS_PED_INJURED(iLocal_58))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
					{
						func_54();
						func_40(0);
						func_41(&uLocal_63, "RECGFAU", "RECGF_GANG", 4, 0, 0, 0);
					}
				}
				SYSTEM::SETTIMERB(0);
				iLocal_46 = 0;
				iLocal_45 = 2;
			}
			break;
	}
}

void func_54()//Position - 0x3193
{
	Global_3960 = 0;
	func_55();
}

void func_55()//Position - 0x31A3
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_41C1 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_3DCE = 6;
		return;
	}
}

int func_56()//Position - 0x31C7
{
	int iVar0;
	
	if (((((((!ENTITY::DOES_ENTITY_EXIST(iLocal_61[2]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[3])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[4])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[5])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[2])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[3])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[4])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[5]))
	{
		STREAMING::REQUEST_MODEL(joaat("HEXER"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_02"));
		AUDIO::START_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		if (STREAMING::HAS_MODEL_LOADED(joaat("HEXER")))
		{
			iLocal_61[2] = VEHICLE::CREATE_VEHICLE(joaat("HEXER"), 863.4697f, 3633.5f, 31.9874f, 290.5797f, true, true, false);
			iLocal_61[3] = VEHICLE::CREATE_VEHICLE(joaat("HEXER"), 866.4073f, 3636.039f, 31.9514f, 270.3649f, true, true, false);
			iLocal_61[4] = VEHICLE::CREATE_VEHICLE(joaat("HEXER"), 866.3153f, 3631.587f, 31.9545f, 276.6327f, true, true, false);
			iLocal_61[5] = VEHICLE::CREATE_VEHICLE(joaat("HEXER"), 868.5937f, 3633.523f, 31.9622f, 267.0991f, true, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("HEXER"));
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_61[2], 3);
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_61[4], 3);
			iLocal_55 = MISC::GET_GAME_TIMER() + 1500;
		}
		if ((STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_01")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_02"))) && AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
		{
			iLocal_59[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_61[2], 22, joaat("g_m_y_lost_01"), 4294967295, 1, true);
			iLocal_59[3] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_61[3], 22, joaat("g_m_y_lost_02"), 4294967295, 1, true);
			iLocal_59[4] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_61[4], 22, joaat("g_m_y_lost_01"), 4294967295, 1, true);
			iLocal_59[5] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_61[5], 22, joaat("g_m_y_lost_02"), 4294967295, 1, true);
			func_57(&uLocal_63, 4, iLocal_59[4], "RECGFLost3", 0, 1);
			iLocal_55 = MISC::GET_GAME_TIMER() + 1500;
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], 0))
				{
					AUDIO::_DYNAMIC_MIXER_RELATED_FN(iLocal_61[iVar0], "RE_COUNTRYSIDE_GANG_BIKES", 0f);
					PED::SET_PED_CONFIG_FLAG(iLocal_59[iVar0], 137, true);
					PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_59[iVar0], 0);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_59[iVar0], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_59[iVar0], 50, true);
					PED::SET_PED_COMBAT_ABILITY(iLocal_59[iVar0], 2);
					PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_59[iVar0], 50f, 20);
					PED::SET_PED_COMBAT_RANGE(iLocal_59[iVar0], 1);
					PED::SET_PED_ACCURACY(iLocal_59[iVar0], 13);
					PED::SET_PED_HEARING_RANGE(iLocal_59[iVar0], 100f);
					PED::SET_PED_SEEING_RANGE(iLocal_59[iVar0], 100f);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_59[iVar0], iLocal_228);
					ENTITY::SET_ENTITY_HEALTH(iLocal_59[iVar0], true);
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_59[iVar0], 3);
					PED::SET_PED_HELMET(iLocal_59[iVar0], 0);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_59[iVar0], true);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_59[iVar0], 1, 1000f);
					if (iVar0 > 1 && iVar0 < 5)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_59[iVar0], joaat("weapon_pistol"), 4294967295, true, true);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_59[iVar0], joaat("weapon_sawnoffshotgun"), 4294967295, true, true);
					}
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_62);
					BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_61[2], 966.7098f, 3633.926f, 31.3974f, 10f, 0, joaat("HEXER"), 786725, 4f, 100f);
					BRAIN::TASK_LOOK_AT_COORD(0, vLocal_48, 5000, 0, 2);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_62);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_59[2], iLocal_62);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_62);
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_62);
					BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_61[3], 970.6208f, 3636.743f, 31.3666f, 10f, 0, joaat("HEXER"), 786725, 4f, 100f);
					BRAIN::TASK_LOOK_AT_COORD(0, vLocal_48, 5000, 0, 2);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_62);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_59[3], iLocal_62);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_62);
					PED::SET_PED_KEEP_TASK(iLocal_59[3], true);
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_62);
					BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_61[4], 971.023f, 3631.225f, 31.3807f, 10f, 0, joaat("HEXER"), 786725, 4f, 100f);
					BRAIN::TASK_LOOK_AT_COORD(0, vLocal_48, 5000, 0, 2);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_62);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_59[4], iLocal_62);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_62);
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_62);
					BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_61[5], 974.8073f, 3633.771f, 31.3818f, 10f, 0, joaat("HEXER"), 786725, 4f, 100f);
					BRAIN::TASK_LOOK_AT_COORD(0, vLocal_48, 5000, 0, 2);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_62);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_59[5], iLocal_62);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_62);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("HEXER"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_02"));
			return 1;
		}
	}
	return 0;
}

void func_57(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x369E
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

void func_58()//Position - 0x3739
{
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		BRAIN::TASK_SMART_FLEE_PED(iLocal_58, AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_58, true);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_59[0], 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_59[1], 0))
		{
			unk_0x65E471E4A2D56226(iLocal_58, 101, 0);
			unk_0xF82197F205B9D8FD(iLocal_58, false);
			BRAIN::TASK_SHOOT_AT_ENTITY(iLocal_59[0], iLocal_58, 1000, 0);
			BRAIN::TASK_SHOOT_AT_ENTITY(iLocal_59[1], iLocal_58, 1000, 0);
		}
		else
		{
			func_4();
			func_40(0);
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				func_59(iLocal_58, "GENERIC_FRIGHTENED_HIGH", 24);
			}
		}
		func_40(1000);
		func_63();
	}
}

void func_59(int iParam0, char* sParam1, int iParam2)//Position - 0x37DD
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_60(iParam2), 1);
}

int func_60(int iParam0)//Position - 0x37F4
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_61()//Position - 0x39E9
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_58, 45f, 45f, 20f, 0, 1, 0))
			{
				if (!func_8())
				{
					if (func_48() == 0)
					{
						func_41(&uLocal_63, "RECGFAU", "RECGF_COMM", 4, 0, 0, 0);
					}
					else if (func_48() == 1)
					{
						func_41(&uLocal_63, "RECGFAU", "RECGF_COMF", 4, 0, 0, 0);
					}
					else if (func_48() == 2)
					{
						func_41(&uLocal_63, "RECGFAU", "RECGF_COMT", 4, 0, 0, 0);
					}
					iLocal_46++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_58, 40f, 40f, 20f, 0, 1, 0))
				{
					if (func_41(&uLocal_63, "RECGFAU", "RECGF_HELP", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		
		case 2:
			if (!func_8())
			{
				func_41(&uLocal_63, "RECGFAU", "RECGF_SHUTUP", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_46++;
			}
			break;
		
		case 3:
			if ((!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[0])) && !PED::IS_PED_INJURED(iLocal_59[1]))
			{
				if ((SYSTEM::TIMERA() > 5000 && !iLocal_52) && !func_8())
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_PAYUP", 4, 0, 0, 0);
					iLocal_52 = 1;
				}
				if (SYSTEM::TIMERA() < 28000)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_58, 12f, 12f, 2.5f, 0, 1, 0))
					{
						if (((PED::_CAN_PED_SEE_PED(iLocal_59[0], AUDIO::_0x0626A247D2405330()) || PED::_CAN_PED_SEE_PED(iLocal_59[1], AUDIO::_0x0626A247D2405330())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_59[0], AUDIO::_0x0626A247D2405330())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_59[1], AUDIO::_0x0626A247D2405330()))
						{
							BRAIN::TASK_LOOK_AT_ENTITY(iLocal_59[0], AUDIO::_0x0626A247D2405330(), 4000, 2056, 4);
							BRAIN::TASK_LOOK_AT_ENTITY(iLocal_59[1], AUDIO::_0x0626A247D2405330(), 4000, 2056, 4);
							if (!iLocal_53)
							{
								func_4();
								func_40(0);
								if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
								{
									func_41(&uLocal_63, "RECGFAU", "RECGF_GETLOS", 4, 0, 0, 0);
								}
								else
								{
									func_41(&uLocal_63, "RECGFAU", "RECGF_BEGONE", 4, 0, 0, 0);
								}
								iLocal_53 = 1;
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 3))
					{
						if (!PED::IS_PED_FACING_PED(iLocal_59[0], iLocal_58, 10f))
						{
							BRAIN::TASK_AIM_GUN_AT_ENTITY(iLocal_59[0], iLocal_58, 4294967295, 0);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[0], 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[1], 0))
				{
					func_4();
					func_40(0);
					func_41(&uLocal_63, "RECGFAU", "RECGF_SHOOT", 4, 0, 0, 0);
					func_40(2000);
					func_58();
				}
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!PED::IS_PED_INJURED(iLocal_59[iVar0]))
				{
					PED::SET_PED_RESET_FLAG(iLocal_59[iVar0], 156, true);
					BRAIN::TASK_COMBAT_PED(iLocal_59[iVar0], AUDIO::_0x0626A247D2405330(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
				}
				iVar0++;
			}
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				BRAIN::TASK_COWER(iLocal_58, 4294967295);
			}
			iLocal_46++;
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (PED::IS_PED_INJURED(iLocal_59[iVar0]))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_57[iVar0]));
						func_3(&uLocal_63, 2);
						func_3(&uLocal_63, 3);
					}
				}
				iVar0++;
			}
			if (PED::IS_PED_INJURED(iLocal_59[0]) && PED::IS_PED_INJURED(iLocal_59[1]))
			{
				iLocal_46 = 0;
				iLocal_45 = 1;
			}
			break;
	}
}

void func_62()//Position - 0x3D96
{
	if (!CAM::IS_SPHERE_VISIBLE(916.4631f, 3601.261f, 31.9327f, 3f))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 916.4631f, 3601.261f, 31.9327f, 2f, 2f, 2f, false, true, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 915.6531f, 3595.061f, 32.0774f, 1, false, 0, 1);
			}
		}
	}
}

void func_63()//Position - 0x3DFE
{
	iLocal_45 = 3;
}

int func_64(int iParam0)//Position - 0x3E09
{
	if (func_68())
	{
		Global_19E4C = 1;
		Global_19E49 = MISC::GET_GAME_TIMER();
		if (func_23(Global_19E4B))
		{
			func_65(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_23(Global_19E4B))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_65(int iParam0)//Position - 0x3E5C
{
	switch (iParam0)
	{
		case 0:
			if (Global_19E56.f_6187.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_66(func_67(iParam0), 4294967295);
					Global_19E56.f_6187.f_2++;
					MISC::SET_BIT(&Global_19E52, 0);
				}
			}
			break;
		
		case 1:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E52, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_66(func_67(iParam0), 4294967295);
					Global_19E56.f_6187.f_3++;
					MISC::SET_BIT(&Global_19E52, 1);
				}
			}
			break;
		
		case 2:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E52, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_66(func_67(iParam0), 4294967295);
					Global_19E56.f_6187.f_4++;
					MISC::SET_BIT(&Global_19E52, 2);
				}
			}
			break;
	}
}

void func_66(char* sParam0, int iParam1)//Position - 0x3F3D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

char* func_67(int iParam0)//Position - 0x3F54
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_68()//Position - 0x3F98
{
	switch (func_69(&Global_63AE, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_69(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x3FCE
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
		if (func_73(0))
		{
			return 0;
		}
		Global_8CF1++;
		*uParam0 = Global_8CF1;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_434C.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8D15 = iParam2;
		Global_8CEF = *uParam0;
		Global_8CF0 = iParam4;
		Global_8CEE = 0;
		return 1;
	}
	if (*uParam0 != 4294967295)
	{
		if (Global_8CEE > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8CEE)
			{
				if (Global_8CF4[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8CEF == *uParam0)
		{
			return 1;
		}
		*uParam0 = 4294967295;
	}
	if (*uParam0 == 4294967295)
	{
		if (!func_71(iParam2))
		{
			return 0;
		}
		if (Global_8CEE == 8)
		{
			return 0;
		}
		Global_8CF1++;
		*uParam0 = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/] = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/].f_1 = iParam1;
		Global_8CF4[Global_8CEE /*4*/].f_2 = iParam2;
		Global_8CF4[Global_8CEE /*4*/].f_3 = 0;
		Global_8CEE++;
		if (iParam4 != 0)
		{
			func_70(uParam0, iParam4);
		}
	}
	return 2;
}

void func_70(var uParam0, int iParam1)//Position - 0x4106
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

bool func_71(int iParam0)//Position - 0x4155
{
	return func_72(iParam0, Global_8D15);
}

int func_72(int iParam0, int iParam1)//Position - 0x4166
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

int func_73(int iParam0)//Position - 0x4347
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_71(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0, bool bParam1, int iParam2)//Position - 0x4369
{
	int iVar0;
	
	iVar0 = func_75(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_19E56.f_6D76[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_19E56.f_6D76[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)//Position - 0x43BB
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_76(bool bParam0, float fParam1, float fParam2)//Position - 0x445F
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_77()//Position - 0x4476
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!bLocal_51)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_228, 1862763509);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_59[0], 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_59[1], 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[0], AUDIO::_0x0626A247D2405330(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[1], AUDIO::_0x0626A247D2405330(), 1))
			{
				func_4();
				return 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
				{
					func_4();
					return 1;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[0], 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[1], 0))
		{
			if (((PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_61[0], 0) || PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_61[1], 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61[0], AUDIO::_0x0626A247D2405330(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61[1], AUDIO::_0x0626A247D2405330(), 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_59[0]) && !PED::IS_PED_INJURED(iLocal_59[1]))
				{
					if (func_93())
					{
						func_4();
						func_40(0);
						func_41(&uLocal_63, "RECGFAU", "RECGF_BIKES", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_59[0]) || PED::IS_PED_INJURED(iLocal_59[1]))
		{
			func_4();
			return 1;
		}
		vVar0 = { 15f, 15f, 15f };
		vVar1 = { -15f, -15f, -15f };
		if (!PED::IS_PED_INJURED(iLocal_59[0]))
		{
			if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_59[0], 31086, 0f, 0f, 0f), 5f, 1))
			{
				func_4();
				return 1;
			}
			vVar0 = { vVar0 + PED::GET_PED_BONE_COORDS(iLocal_59[0], 31086, 0f, 0f, 0f) };
			vVar1 = { vVar1 + PED::GET_PED_BONE_COORDS(iLocal_59[0], 31086, 0f, 0f, 0f) };
			if (((MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar0, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar0, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar0, joaat("weapon_grenadelauncher"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar0, joaat("weapon_stickybomb"), 1))
			{
				func_4();
				return 1;
			}
			if (GRAPHICS::_0x2F09F7976C512404(PED::GET_PED_BONE_COORDS(iLocal_59[0], 31086, 0f, 0f, 0f), 3f))
			{
				func_4();
				return 1;
			}
		}
		if (PED::IS_PED_SHOOTING_IN_AREA(AUDIO::_0x0626A247D2405330(), (973.053f - 30f), (3616.738f - 30f), (32.6181f - 30f), (973.053f + 30f), (3616.738f + 30f), (32.6181f + 30f), 0, 1))
		{
			func_4();
			return 1;
		}
		if ((!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[0])) && !PED::IS_PED_INJURED(iLocal_59[1]))
		{
			if (iLocal_47 != 4294967295)
			{
				if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_59[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_59[1])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_59[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_59[1]))
				{
					func_4();
					return 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_58, 12f, 12f, 2.5f, 0, 1, 0))
			{
				if (((PED::_CAN_PED_SEE_PED(iLocal_59[0], AUDIO::_0x0626A247D2405330()) || PED::_CAN_PED_SEE_PED(iLocal_59[1], AUDIO::_0x0626A247D2405330())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_59[0], AUDIO::_0x0626A247D2405330())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_59[1], AUDIO::_0x0626A247D2405330()))
				{
					if (!iLocal_50)
					{
						BRAIN::TASK_AIM_GUN_AT_ENTITY(iLocal_59[0], AUDIO::_0x0626A247D2405330(), 4294967295, 0);
						iLocal_50 = 1;
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						HUD::_0x75A16C3DA34F1245(iLocal_56, true);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_57[0]))
					{
						HUD::_0x75A16C3DA34F1245(iLocal_57[0], true);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_57[1]))
					{
						HUD::_0x75A16C3DA34F1245(iLocal_57[1], true);
					}
					if ((!func_8() || func_6("RECGF_SHUTUP")) || func_6("RECGF_PAYUP"))
					{
						if (iLocal_47 == 4294967295)
						{
							iLocal_47 = MISC::GET_GAME_TIMER();
							if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
							{
								func_4();
								func_40(0);
								func_41(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
							else
							{
								func_4();
								func_40(0);
								func_41(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			else
			{
				iLocal_50 = 0;
				iLocal_47 = 4294967295;
			}
			if (iLocal_47 != 4294967295 && MISC::GET_GAME_TIMER() > iLocal_47 + 10000)
			{
				func_4();
				func_40(0);
				func_41(&uLocal_63, "RECGFAU", "RECGF_WARNED", 4, 0, 0, 0);
				return 1;
			}
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[0], AUDIO::_0x0626A247D2405330(), 1) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[1], AUDIO::_0x0626A247D2405330(), 1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_58, AUDIO::_0x0626A247D2405330(), 1))
				{
					if (func_93())
					{
						func_4();
						func_40(0);
						func_41(&uLocal_63, "RECGFAU", "RECGF_DEALER", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_78()//Position - 0x498D
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_60, 0))
	{
		if ((!ENTITY::IS_ENTITY_AT_COORD(iLocal_60, 915.7905f, 3603.449f, 31.9111f, 5f, 5f, 5f, false, true, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_60, 0)) || PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_60, 1))
		{
			func_58();
		}
	}
	else
	{
		func_58();
	}
}

int func_79()//Position - 0x49E9
{
	int iVar0;
	
	if (((((!ENTITY::DOES_ENTITY_EXIST(iLocal_58) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[0])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[1])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_60)) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[0])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[1]))
	{
		STREAMING::REQUEST_MODEL(joaat("a_m_m_skidrow_01"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_02"));
		STREAMING::REQUEST_MODEL(joaat("PICADOR"));
		STREAMING::REQUEST_MODEL(joaat("HEXER"));
		STREAMING::REQUEST_ANIM_DICT("random@countryside_gang_fight");
		STREAMING::REQUEST_ANIM_DICT("veh@drivebystd_ds_grenades");
		STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_i");
		if (((((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_skidrow_01")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("PICADOR"))) && STREAMING::HAS_MODEL_LOADED(joaat("HEXER"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@countryside_gang_fight")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@drivebystd_ds_grenades")) && STREAMING::HAS_ANIM_SET_LOADED("move_m@gangster@var_i"))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("PICADOR"), true);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("HEXER"), true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 0, false, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_48 - Vector(20f, 50f, 80f), vLocal_48 + Vector(20f, 50f, 70f), 0, 1, 1, 1);
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			PED::ADD_RELATIONSHIP_GROUP("rghLost", &iLocal_228);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_228, 1862763509);
			iLocal_58 = PED::CREATE_PED(26, joaat("a_m_m_skidrow_01"), 973.053f, 3616.738f, 31.6181f, 110.2753f, 1, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 4, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_skidrow_01"));
			ENTITY::SET_ENTITY_HEALTH(iLocal_58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_58, 17, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_58, false);
			unk_0xF82197F205B9D8FD(iLocal_58, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_58, 185, true);
			PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(iLocal_58, 16);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_58, "A_M_M_TRAMP_01_BLACK_MINI_01");
			func_57(&uLocal_63, 1, iLocal_58, "RECGFDealer", 0, 1);
			AUDIO::STOP_PED_SPEAKING(iLocal_58, true);
			BRAIN::TASK_PLAY_ANIM(iLocal_58, "random@countryside_gang_fight", "gangmember_stickup_loop", 1000f, -2f, 4294967295, 1, 0, 0, 0, 0);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_58, "move_m@gangster@var_i", 1048576000);
			iLocal_60 = VEHICLE::CREATE_VEHICLE(joaat("PICADOR"), 915.7905f, 3603.449f, 31.9111f, 111.9593f, true, true, false);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_60, 37, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_60, 4, 0);
			VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_60, 1);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_60, "WDU 696");
			iLocal_59[0] = PED::CREATE_PED(22, joaat("g_m_y_lost_01"), 970.2217f, 3614.821f, 31.6909f, 297.4345f, 1, true);
			func_57(&uLocal_63, 3, iLocal_59[0], "RECGFLost2", 0, 1);
			iLocal_59[1] = PED::CREATE_PED(22, joaat("g_m_y_lost_02"), 971.504f, 3618.054f, 31.5565f, 216.9967f, 1, true);
			func_57(&uLocal_63, 2, iLocal_59[1], "RECGFLost1", 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_02"));
			iLocal_61[0] = VEHICLE::CREATE_VEHICLE(joaat("HEXER"), 968.2626f, 3611.717f, 31.7874f, 296.8978f, true, true, false);
			iLocal_61[1] = VEHICLE::CREATE_VEHICLE(joaat("HEXER"), 970.8362f, 3625.563f, 31.3415f, 212.3456f, true, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("HEXER"));
			BRAIN::TASK_PLAY_ANIM(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 1000f, -2f, 4294967295, 1, 0, 0, 0, 0);
			BRAIN::TASK_PLAY_ANIM(iLocal_59[1], "random@countryside_gang_fight", "biker_01_stickup_loop", 1000f, -2f, 4294967295, 1, 0, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (iVar0 < 2)
				{
					PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_59[iVar0], 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_59[iVar0], iLocal_228);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_59[iVar0], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_59[iVar0], 50, true);
					PED::SET_PED_COMBAT_RANGE(iLocal_59[iVar0], 0);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_59[0], joaat("weapon_pistol"), 4294967295, true, true);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_59[1], joaat("weapon_sawnoffshotgun"), 4294967295, true, true);
					PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
					ENTITY::SET_ENTITY_HEALTH(iLocal_59[iVar0], true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_59[iVar0], true, 1);
				}
				iVar0++;
			}
			iLocal_55 = MISC::GET_GAME_TIMER() + 1500;
			if (func_48() == 0)
			{
				func_57(&uLocal_63, 0, AUDIO::_0x0626A247D2405330(), "MICHAEL", 0, 1);
			}
			else if (func_48() == 1)
			{
				func_57(&uLocal_63, 0, AUDIO::_0x0626A247D2405330(), "FRANKLIN", 0, 1);
			}
			else if (func_48() == 2)
			{
				func_57(&uLocal_63, 0, AUDIO::_0x0626A247D2405330(), "TREVOR", 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_80()//Position - 0x4EA4
{
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_91())
		{
			return 0;
		}
	}
	if (func_87())
	{
		return 1;
	}
	if (func_81(100f, 1) != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_81(float fParam0, bool bParam1)//Position - 0x4F2A
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = 4294967295;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_31(func_48()))
		{
			iVar5 = func_28();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[iVar1 /*6*/], 2) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[iVar1 /*6*/], 3))
				{
					func_82(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_82(int iParam0, var uParam1)//Position - 0x4FE1
{
	switch (iParam0)
	{
		case 0:
			func_83(uParam1, "Abigail1", func_85(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 1:
			func_83(uParam1, "Abigail2", func_85(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, 4294967295, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 2:
			func_83(uParam1, "Barry1", func_85(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 3:
			func_83(uParam1, "Barry2", func_85(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 4:
			func_83(uParam1, "Barry3", func_85(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", 4294967295, 0, "", 164, 1, 4294967295, 0, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 5:
			func_83(uParam1, "Barry3A", func_85(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 6:
			func_83(uParam1, "Barry3C", func_85(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 7:
			func_83(uParam1, "Barry4", func_85(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, 4294967295, 4, 2, 800, 2000, func_84(iParam0), 0, 0);
			break;
		
		case 8:
			func_83(uParam1, "Dreyfuss1", func_85(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 9:
			func_83(uParam1, "Epsilon1", func_85(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 10:
			func_83(uParam1, "Epsilon2", func_85(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 11:
			func_83(uParam1, "Epsilon3", func_85(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 12:
			func_83(uParam1, "Epsilon4", func_85(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 13:
			func_83(uParam1, "Epsilon5", func_85(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 14:
			func_83(uParam1, "Epsilon6", func_85(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 15:
			func_83(uParam1, "Epsilon7", func_85(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", 4294967295, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 16:
			func_83(uParam1, "Epsilon8", func_85(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, 4294967295, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 17:
			func_83(uParam1, "Extreme1", func_85(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", 4294967295, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 18:
			func_83(uParam1, "Extreme2", func_85(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 19:
			func_83(uParam1, "Extreme3", func_85(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 20:
			func_83(uParam1, "Extreme4", func_85(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 21:
			func_83(uParam1, "Fanatic1", func_85(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 700, 2000, func_84(iParam0), 1, 0);
			break;
		
		case 22:
			func_83(uParam1, "Fanatic2", func_85(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 700, 2000, func_84(iParam0), 1, 0);
			break;
		
		case 23:
			func_83(uParam1, "Fanatic3", func_85(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 2, 700, 2000, func_84(iParam0), 0, 1);
			break;
		
		case 24:
			func_83(uParam1, "Hao1", func_85(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", 4294967295, 0, "controller_Races", 13, 1, 4294967295, 4, 2, 2000, 500, func_84(iParam0), 0, 1);
			break;
		
		case 25:
			func_83(uParam1, "Hunting1", func_85(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", 4294967295, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 26:
			func_83(uParam1, "Hunting2", func_85(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, 4294967295, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 27:
			func_83(uParam1, "Josh1", func_85(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", 4294967295, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 28:
			func_83(uParam1, "Josh2", func_85(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 29:
			func_83(uParam1, "Josh3", func_85(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 4294967295, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 30:
			func_83(uParam1, "Josh4", func_85(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", 4294967295, 36, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 31:
			func_83(uParam1, "Maude1", func_85(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", 4294967295, 0, "BailBond_Launcher", 0, 1, 4294967295, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 32:
			func_83(uParam1, "Minute1", func_85(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", 4294967295, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 33:
			func_83(uParam1, "Minute2", func_85(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", 4294967295, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 34:
			func_83(uParam1, "Minute3", func_85(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", 4294967295, 10, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 35:
			func_83(uParam1, "MrsPhilips1", func_85(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", 4294967295, 0, "ambient_MrsPhilips", 0, 1, 4294967295, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 36:
			func_83(uParam1, "MrsPhilips2", func_85(iParam0), 0, 11, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 37:
			func_83(uParam1, "Nigel1", func_85(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", 4294967295, 0, "", 177, 1, 4294967295, 1, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 38:
			func_83(uParam1, "Nigel1A", func_85(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 39:
			func_83(uParam1, "Nigel1B", func_85(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_84(iParam0), 1, 1);
			break;
		
		case 40:
			func_83(uParam1, "Nigel1C", func_85(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_84(iParam0), 1, 1);
			break;
		
		case 41:
			func_83(uParam1, "Nigel1D", func_85(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_84(iParam0), 1, 1);
			break;
		
		case 42:
			func_83(uParam1, "Nigel2", func_85(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", 4294967295, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 43:
			func_83(uParam1, "Nigel3", func_85(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", 4294967295, 16, "postRC_Nigel3", 0, 0, 4294967295, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 44:
			func_83(uParam1, "Omega1", func_85(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", 4294967295, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 45:
			func_83(uParam1, "Omega2", func_85(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 46:
			func_83(uParam1, "Paparazzo1", func_85(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", 4294967295, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 47:
			func_83(uParam1, "Paparazzo2", func_85(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", 4294967295, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 48:
			func_83(uParam1, "Paparazzo3", func_85(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", 4294967295, 8, "", 183, 1, 4294967295, 2, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 49:
			func_83(uParam1, "Paparazzo3A", func_85(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 50:
			func_83(uParam1, "Paparazzo3B", func_85(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 51:
			func_83(uParam1, "Paparazzo4", func_85(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", 4294967295, 8, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 52:
			func_83(uParam1, "Rampage1", func_85(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", 4294967295, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 54:
			func_83(uParam1, "Rampage3", func_85(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", 4294967295, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 55:
			func_83(uParam1, "Rampage4", func_85(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", 4294967295, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 56:
			func_83(uParam1, "Rampage5", func_85(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", 4294967295, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 53:
			func_83(uParam1, "Rampage2", func_85(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", 4294967295, 0, "rampage_controller", 0, 0, 4294967295, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 57:
			func_83(uParam1, "TheLastOne", func_85(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 58:
			func_83(uParam1, "Tonya1", func_85(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", 4294967295, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 59:
			func_83(uParam1, "Tonya2", func_85(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 60:
			func_83(uParam1, "Tonya3", func_85(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 61:
			func_83(uParam1, "Tonya4", func_85(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 62:
			func_83(uParam1, "Tonya5", func_85(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_83(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x6228
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_84(int iParam0)//Position - 0x62B9
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_85(int iParam0)//Position - 0x65FF
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_86(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_86(int iParam0)//Position - 0x6637
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_87()//Position - 0x6A84
{
	if (func_90() && !func_91())
	{
		return 1;
	}
	if (func_89() && func_88())
	{
		return 1;
	}
	return 0;
}

bool func_88()//Position - 0x6AB6
{
	return Global_19D3C > 0;
}

int func_89()//Position - 0x6AC4
{
	if (Global_16089 != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_90()//Position - 0x6AD9
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 20);
	}
	return 0;
}

int func_91()//Position - 0x6AFF
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

int func_92()//Position - 0x6B1C
{
	if (!func_71(5))
	{
		return 1;
	}
	if (func_87())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_91())
		{
			return 0;
		}
	}
	if (func_81(100f, 1) != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_93()//Position - 0x6B7E
{
	if ((Global_19E4B == func_37() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_19E4C)
	{
		return 1;
	}
	return 0;
}

void func_94()//Position - 0x6BA9
{
}

void func_95(int iParam0)//Position - 0x6BB1
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_37();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	func_97(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_19E48 = 0;
	func_96();
}

void func_96()//Position - 0x6BE7
{
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)), true);
		}
		PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 32, false);
	}
}

void func_97(int iParam0)//Position - 0x6C24
{
	Global_19E4B = iParam0;
}

int func_98(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6C32
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_2347E)
	{
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = func_37();
	}
	if (iParam1 == 4294967295)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_139())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_91())
			{
				return 0;
			}
		}
		if (!Global_19E56.f_2361)
		{
			return 0;
		}
		if (func_13(0))
		{
			return 0;
		}
		if (func_87())
		{
			return 0;
		}
		if (func_138())
		{
			return 0;
		}
		if (Global_19E4B != 4294967295)
		{
			return 0;
		}
		if (func_31(func_48()))
		{
			if (func_81(100f, 1) != 4294967295)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_137(iParam1))
		{
			return 0;
		}
		if (func_31(func_48()))
		{
			if (func_136(func_48()) == 4 || func_136(func_48()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_48()))
		{
			if (!func_135(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_134(Global_19E56.f_6187.f_2B[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_19E4D) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_133())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_124(4))
		{
			return 0;
		}
		if (!func_71(5))
		{
			return 0;
		}
		if (func_123(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_123(0, 0))
		{
			return 0;
		}
		if (Global_6405)
		{
			return 0;
		}
		if (func_137(30) && !func_123(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_31(func_48()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19E56.f_933.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19E56.f_933.f_21B.f_8E4[iVar2];
				if (func_122(iVar4))
				{
					if (func_100(iVar2))
					{
						if (!func_99(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vVar3) < (210f * 210f))
							{
								if (func_48() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_99(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x6FCC
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_100(int iParam0)//Position - 0x7013
{
	int iVar0;
	
	iVar0 = Global_19E56.f_933.f_21B.f_8E4[iParam0];
	return func_101(iVar0);
}

int func_101(int iParam0)//Position - 0x7034
{
	return func_102(iParam0, 1);
}

int func_102(int iParam0, int iParam1)//Position - 0x7043
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_122(iParam0))
	{
		return 0;
	}
	func_103(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_103(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7096
{
	func_104(func_115(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_104(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x70B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_114(iParam0, iParam1))
	{
		iVar0 = func_113(iParam1);
		iVar1 = func_111(iParam0);
		iVar2 = (func_111(iParam0) - func_111(iParam1));
		iVar3 = (func_113(iParam0) - func_113(iParam1));
		iVar4 = (func_110(iParam0) - func_110(iParam1));
		iVar5 = (func_109(iParam0) - func_109(iParam1));
		iVar6 = (func_108(iParam0) - func_108(iParam1));
		iVar7 = (func_107(iParam0) - func_107(iParam1));
	}
	else
	{
		iVar0 = func_113(iParam0);
		iVar1 = func_111(iParam1);
		iVar2 = (func_111(iParam1) - func_111(iParam0));
		iVar3 = (func_113(iParam1) - func_113(iParam0));
		iVar4 = (func_110(iParam1) - func_110(iParam0));
		iVar5 = (func_109(iParam1) - func_109(iParam0));
		iVar6 = (func_108(iParam1) - func_108(iParam0));
		iVar7 = (func_107(iParam1) - func_107(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_106(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_105(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_105(float fParam0, float fParam1, float fParam2)//Position - 0x72B5
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_106(int iParam0, int iParam1)//Position - 0x72F7
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_107(int iParam0)//Position - 0x7399
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_108(int iParam0)//Position - 0x73AC
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_109(int iParam0)//Position - 0x73BF
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_110(int iParam0)//Position - 0x73D2
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_111(int iParam0)//Position - 0x73E4
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_112(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_112(bool bParam0, int iParam1, int iParam2)//Position - 0x7409
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_113(int iParam0)//Position - 0x7420
{
	return iParam0 & 15;
}

int func_114(int iParam0, int iParam1)//Position - 0x742D
{
	int iVar0;
	int iVar1;
	
	if (!func_122(iParam1) || !func_122(iParam0))
	{
		return 1;
	}
	iVar0 = func_111(iParam0);
	iVar1 = func_111(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	iVar1 = func_113(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_109(iParam0);
	iVar1 = func_109(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_115()//Position - 0x7539
{
	var uVar0;
	
	func_121(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_120(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_119(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_118(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_117(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_116(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_116(var uParam0, int iParam1)//Position - 0x757F
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 = (*uParam0 || 2147483648);
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - (*uParam0 && 2147483648));
	}
}

void func_117(var uParam0, int iParam1)//Position - 0x7605
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_118(var uParam0, int iParam1)//Position - 0x7638
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_113(*uParam0);
	iVar1 = func_111(*uParam0);
	if (iParam1 < 1 || iParam1 > func_106(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_119(var uParam0, int iParam1)//Position - 0x7689
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_120(var uParam0, int iParam1)//Position - 0x76C3
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_121(var uParam0, int iParam1)//Position - 0x76FE
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_122(int iParam0)//Position - 0x773A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == 4294967281)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_108(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_109(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_111(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_113(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_110(iParam0);
	if (iVar5 < 1 || iVar5 > func_106(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_123(int iParam0, int iParam1)//Position - 0x7816
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0)//Position - 0x7839
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				iVar0 = func_48();
				if (!func_31(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_132()) || Global_19A9D) || Global_6375) || func_131()) || func_50(8, 4294967295)) || func_130()) || func_129()) || func_128()) || func_127()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1) || func_132()) || Global_6375) || func_131()) || func_50(8, 4294967295)) || func_128()) || func_130()) || func_129()) || func_127()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_132()) || Global_19A9D) || Global_6375) || func_131()) || func_50(8, 4294967295)) || func_128()) || func_130()) || func_129()) || func_127()) || Global_19E56.f_1DEC.f_397[iVar0] == 5) || Global_8F38 != 4294967295)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_132()) || Global_19A9D) || Global_6375) || func_131()) || func_50(8, 4294967295)) || func_130()) || func_129()) || func_127()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_132() || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || func_50(8, 4294967295)) || func_127()) || func_126()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_50(8, 4294967295) || func_130()) || func_129()) || func_126()) || func_125())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_132()) || Global_6375) || func_131()) || func_50(8, 4294967295)) || func_129()) || func_128()) || func_127()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || func_132()) || func_129()) || Global_19A9D) || Global_6375) || func_131()) || Global_9197) || func_50(8, 4294967295)) || func_128()) || func_126()) || func_127()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1)) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_SWIMMING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_132()) || Global_19A9D) || Global_6375) || func_131()) || func_50(8, 4294967295)) || func_128()) || func_126()) || func_130()) || func_129()) || func_127())
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

var func_125()//Position - 0x7F56
{
	return Global_16C57.f_1;
}

int func_126()//Position - 0x7F64
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 13);
	}
	return 0;
}

int func_127()//Position - 0x7F8A
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_128()//Position - 0x7FA4
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

bool func_129()//Position - 0x7FCE
{
	return Global_16C64.f_148 > 0;
}

bool func_130()//Position - 0x7FDF
{
	return Global_16C64.f_147 > 0;
}

var func_131()//Position - 0x7FF0
{
	return Global_140859;
}

int func_132()//Position - 0x7FFC
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

int func_133()//Position - 0x801C
{
	func_47();
	if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_134(int iParam0)//Position - 0x8044
{
	return func_114(func_115(), iParam0);
}

int func_135(int iParam0, int iParam1, int iParam2)//Position - 0x8056
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_48();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_136(int iParam0)//Position - 0x813A
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_19E56.f_1DEC.f_397[iParam0];
}

bool func_137(int iParam0)//Position - 0x815E
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_139())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187.f_1, iVar0);
	}
	return bVar1;
}

int func_138()//Position - 0x81BC
{
	int iVar0;
	
	if (Global_6409)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_139()//Position - 0x8200
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_19, 2);
				MISC::SET_BIT(&Global_19, 4);
				MISC::SET_BIT(&Global_19, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_2357D == 2)
	{
		return 1;
	}
	else if (Global_2357D == 3)
	{
		return 0;
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_140()//Position - 0x82BB
{
	int iVar0;
	
	if (iLocal_49 && !iLocal_54)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
		}
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_58, 317, true);
			unk_0xF82197F205B9D8FD(iLocal_58, false);
			ENTITY::SET_ENTITY_HEALTH(iLocal_58, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_57[iVar0]));
			}
			if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (iVar0 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], 0))
					{
						BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_59[iVar0], iLocal_61[iVar0], AUDIO::_0x0626A247D2405330(), 8, 20f, 786469, 150f, 10f, 1);
						PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
					}
					else
					{
						BRAIN::TASK_SMART_FLEE_PED(iLocal_59[iVar0], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					}
				}
				else
				{
					BRAIN::TASK_SMART_FLEE_PED(iLocal_59[iVar0], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_59[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_61[iVar0]));
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		AUDIO::STOP_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		func_3(&uLocal_63, 1);
		func_3(&uLocal_63, 2);
		func_3(&uLocal_63, 3);
		func_3(&uLocal_63, 4);
	}
	func_141(4294967295);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_141(int iParam0)//Position - 0x847C
{
	char cVar0[64];
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_37();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_93())
	{
		func_145(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_19E4D = MISC::GET_GAME_TIMER();
		func_144(30000);
		StringCopy(&cVar0, func_143(Global_19E4B, 1), 64);
		if (func_36(Global_19E4B) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_19E4A, 64);
		}
		STATS::_0x71862B1D855F32E1(&cVar0, Global_19E48, (MISC::GET_GAME_TIMER() - Global_19E49), 0);
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E52, 0) && Global_19E56.f_6187.f_2 < 3)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_19E52, 0);
	}
	func_142(&Global_63AE);
	Global_19E4C = 0;
	func_97(4294967295);
}

void func_142(var uParam0)//Position - 0x8531
{
	if (*uParam0 == 4294967295)
	{
		return;
	}
	if (!*uParam0 == Global_8CEF)
	{
		*uParam0 = 4294967295;
		return;
	}
	*uParam0 = 4294967295;
	Global_8CEE = 0;
	Global_8CF0 = 0;
	Global_8D15 = 15;
	Global_DB72 = 0;
	Global_DB73 = 0;
}

char* func_143(int iParam0, bool bParam1)//Position - 0x856E
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case 4294967295:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_144(int iParam0)//Position - 0x87B7
{
	Global_8F3C = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_145(int iParam0)//Position - 0x87C9
{
	func_146(iParam0, 0, func_151(iParam0));
}

void func_146(int iParam0, int iParam1, int iParam2)//Position - 0x87DE
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_115();
	func_149(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_148(iParam0, &uVar0);
	Var1 = { func_147(&uVar0) };
}

struct<16> func_147(var uParam0)//Position - 0x880D
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_109(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_108(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_107(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_110(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_113(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_111(*uParam0), 64);
	return Var0;
}

void func_148(int iParam0, var uParam1)//Position - 0x88DE
{
	Global_19E56.f_6187.f_2B[iParam0] = *uParam1;
}

void func_149(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x88F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_111(*uParam0);
	iVar1 = func_113(*uParam0);
	iVar2 = func_110(*uParam0);
	iVar3 = func_109(*uParam0);
	iVar4 = func_108(*uParam0);
	iVar5 = func_107(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_106(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_106(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_150(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_150(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8A78
{
	func_121(uParam0, iParam1);
	func_120(uParam0, iParam2);
	func_119(uParam0, iParam3);
	func_117(uParam0, iParam5);
	func_118(uParam0, iParam4);
	func_116(uParam0, iParam6);
}

int func_151(int iParam0)//Position - 0x8AB0
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

